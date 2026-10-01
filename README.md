# PoilabsVdNavigation
![Version](https://img.shields.io/github/v/tag/poiteam/ios-vd-navigation-pod?label=version)
![Platform](https://img.shields.io/cocoapods/p/PoilabsVdNavigation.svg?style=flat)

## INSTALLATION

### Swift Package Manager

To integrate PoilabsVdNavigation into your Xcode project using Swift Package Manager:

1. In Xcode, select **File > Add Package Dependencies...**
2. Enter the repository URL: `https://github.com/poiteam/ios-vd-navigation-pod.git`
3. Choose **Exact Version** `7.2.1` and add the **PoilabsVdNavigation** product to your app target.

All required dependencies (PoilabsPositioning, PoilabsSdkAnalytics, PoilabsCore) are defined in the package and will be automatically installed. Use either SPM or CocoaPods for this SDK, not both in the same app.

> SPM installation is supported from 7.2.1. Earlier versions crash on launch when installed with SPM.

### CocoaPods

To integrate PoilabsVdNavigation into your Xcode project using CocoaPods, specify it in your `Podfile`:

``` curl
pod 'PoilabsVdNavigation'
```

PoilabsVdNavigation is no longer updated on CocoaPods trunk (the latest version there is 7.1.0). Swift Package Manager is the recommended installation method. To use a newer version with CocoaPods, install it from the git tag:

``` curl
pod 'PoilabsVdNavigation', :git => 'https://github.com/poiteam/ios-vd-navigation-pod.git', :tag => '7.2.1'
```


## REQUIREMENTS

iOS 12.0 or later.

## PRE-REQUIREMENTS

To Integrate this framework you should add some features to your project info.plist file.

+Privacy - Location Usage Description

+Privacy - Location When In Use Usage Description

## USAGE

Import **PoilabsVdNavigationUI** (and **CoreLocation** if you use the delegate).

The initializer returns the SDK's view controller in its completion handler; present it to start the SDK. Keep a reference to the `PoilabsVdNavigationUI` instance while the SDK screen is open.

``` Swift
import UIKit
import CoreLocation
import PoilabsVdNavigationUI

class ViewController: UIViewController {

    private var poilabsVdNavigation: PoilabsVdNavigationUI?

    func startVdNavigation() {
        poilabsVdNavigation = PoilabsVdNavigationUI(withApplicationID: "APPLICATION_ID",
                                                    withApplicationSecret: "APPLICATION_SECRET_KEY",
                                                    withUniqueIdentifier: "UNIQUE_ID") { [weak self] controller in
            DispatchQueue.main.async {
                controller.modalPresentationStyle = .fullScreen
                self?.present(controller, animated: true)
            }
        }
        poilabsVdNavigation?.delegate = self
    }
}
```

Replace `APPLICATION_ID` and `APPLICATION_SECRET_KEY` with the values provided by Poilabs. `UNIQUE_ID` must be unique for every app user.

If you want to send requests to another URL, pass it with `configUrl`:

``` Swift
poilabsVdNavigation = PoilabsVdNavigationUI(configUrl: "yoururl",
                                            withApplicationID: "APPLICATION_ID",
                                            withApplicationSecret: "APPLICATION_SECRET_KEY",
                                            withUniqueIdentifier: "UNIQUE_ID") { controller in
    // present controller as above
}
```

### PoilabsVdNavigationDelegate

`poilabsVdNavigation(didUpdate:)` is called when the user location changes.

``` Swift
extension ViewController: PoilabsVdNavigationDelegate {
    func poilabsVdNavigation(didUpdate userLocation: CLLocationCoordinate2D) {

    }
}
```
