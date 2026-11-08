import AppKit
import Foundation

let root = URL(fileURLWithPath: CommandLine.arguments[1])
let manifest = root.appendingPathComponent("selection-manifest.json")
let data = try Data(contentsOf: manifest)
guard let items = try JSONSerialization.jsonObject(with: data) as? [[String: Any]] else {
    fatalError("Invalid manifest")
}
let font = NSFont.monospacedSystemFont(ofSize: 14, weight: .regular)
let bold = NSFont.monospacedSystemFont(ofSize: 17, weight: .bold)
let titleColor = NSColor(calibratedRed: 0.93, green: 0.87, blue: 0.69, alpha: 1)
let sourceColor = NSColor(calibratedRed: 0.62, green: 0.73, blue: 0.77, alpha: 1)
let codeColor = NSColor(calibratedRed: 0.90, green: 0.91, blue: 0.88, alpha: 1)
let background = NSColor(calibratedRed: 0.075, green: 0.09, blue: 0.11, alpha: 1)
let divider = NSColor(calibratedRed: 0.24, green: 0.29, blue: 0.33, alpha: 1)
let fm = FileManager.default
for item in items {
    guard let path = item["image"] as? String,
          let source = item["source_relative"] as? String,
          let caption = item["caption"] as? String,
          let sha = item["source_sha256"] as? String,
          let lines = item["lines"] as? [String] else { continue }
    let width = 1800
    let height = 134 + 22 * lines.count
    guard let bitmap = NSBitmapImageRep(bitmapDataPlanes: nil, pixelsWide: width, pixelsHigh: height,
                                       bitsPerSample: 8, samplesPerPixel: 4, hasAlpha: true,
                                       isPlanar: false, colorSpaceName: .deviceRGB,
                                       bytesPerRow: 0, bitsPerPixel: 0),
          let context = NSGraphicsContext(bitmapImageRep: bitmap) else { continue }
    NSGraphicsContext.saveGraphicsState()
    NSGraphicsContext.current = context
    background.setFill()
    NSRect(x: 0, y: 0, width: width, height: height).fill()
    (caption as NSString).draw(at: NSPoint(x: 30, y: height - 42), withAttributes: [.font: bold, .foregroundColor: titleColor])
    (source as NSString).draw(at: NSPoint(x: 30, y: height - 67), withAttributes: [.font: font, .foregroundColor: sourceColor])
    let provenance = "Rendered source excerpt · SHA-256 " + String(sha.prefix(16)) + "…"
    (provenance as NSString).draw(at: NSPoint(x: 30, y: height - 88),
                                  withAttributes: [.font: font, .foregroundColor: sourceColor])
    divider.setFill()
    NSRect(x: 30, y: height - 103, width: width - 60, height: 1).fill()
    for (i, line) in lines.enumerated() {
        (line as NSString).draw(at: NSPoint(x: 30, y: height - 128 - 22 * i),
                                withAttributes: [.font: font, .foregroundColor: codeColor])
    }
    NSGraphicsContext.restoreGraphicsState()
    let url = root.deletingLastPathComponent().appendingPathComponent(path)
    try fm.createDirectory(at: url.deletingLastPathComponent(), withIntermediateDirectories: true)
    guard let png = bitmap.representation(using: .png, properties: [:]) else { continue }
    try png.write(to: url)
}
print("Rendered \(items.count) PNG source excerpts")
