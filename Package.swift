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
        .package(name: "PoilabsPositioning", url: "https://github.com/poiteam/ios-positioning-pod.git", .exact("1.2.0")),
        .package(name: "PoilabsSdkAnalytics", url: "https://github.com/poiteam/ios-sdk-analytics-pod.git", .exact("1.0.15")),
        .package(name: "PoilabsCore", url: "https://github.com/poiteam/PoilabsCorePod.git", .exact("1.0.15"))
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
            path: "Sources/PoilabsVdNavigationResources",
            resources: [.copy("PoilabsVdNavigationBundle.bundle")]
        )
    ]
)
