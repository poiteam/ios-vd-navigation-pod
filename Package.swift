// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "PoilabsVdNavigation",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "PoilabsVdNavigation",
            targets: ["PoilabsVdNavigationUI", "PoilabsVdNavigationCore", "PoilabsVdNavigationResources"]
        )
    ],
    dependencies: [
        .package(name: "PoilabsPositioning", url: "https://github.com/poiteam/ios-positioning-pod.git", .exact("1.0.20")),
        .package(name: "PoilabsSdkAnalytics", url: "https://github.com/poiteam/ios-sdk-analytics-pod.git", .exact("1.0.14")),
        .package(name: "PoilabsCore", url: "https://github.com/poiteam/PoilabsCorePod.git", .exact("1.0.12"))
    ],
    targets: [
        .binaryTarget(
            name: "PoilabsVdNavigationUI",
            path: "PoilabsVdNavigationUI.xcframework"
        ),
        .binaryTarget(
            name: "PoilabsVdNavigationCore",
            path: "PoilabsVdNavigationCore.xcframework"
        ),
        .target(
            name: "PoilabsVdNavigationResources",
            dependencies: [
                "PoilabsPositioning",
                "PoilabsSdkAnalytics",
                "PoilabsCore"
            ],
            path: ".",
            resources: [.copy("PoilabsVdNavigationBundle.bundle")]
        )
    ]
) 