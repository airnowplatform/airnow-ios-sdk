// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "AirMonetizationSDK",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        .library(
            name: "AirMonetizationSDK",
            targets: ["AirMonetizationSDK"]),
    ],
    dependencies: [],
    targets: [
        .binaryTarget(name: "AirMonetizationSDK",
                      path: "./Sources/AirMonetizationSDK.xcframework")
    ]
)
