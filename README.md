# PoilabsVdNavigation
![Version](https://img.shields.io/github/v/tag/poiteam/ios-vd-navigation-pod?label=version)
![Platform](https://img.shields.io/badge/platform-iOS%2012%2B-lightgrey)

## INSTALLATION

PoilabsVdNavigation is distributed with Swift Package Manager. CocoaPods is no longer supported; new versions are not published there.

### Swift Package Manager

1. In Xcode, select **File > Add Package Dependencies...**
2. Enter the repository URL: `https://github.com/poiteam/ios-vd-navigation-pod.git`
3. Choose **Exact Version** `7.3.0` and add the **PoilabsVdNavigation** product to your app target.

All required dependencies (PoilabsPositioning, PoilabsSdkAnalytics, PoilabsCore) are defined in the package and installed automatically. You do not need to add anything else.

**Using with PoilabsNavigation:** PoilabsVdNavigation 7.3.0 and PoilabsNavigation 7.3.2 use the same dependency versions. Add both packages to the same app with SPM; nothing else is needed.

> SPM installation is supported from 7.2.1. Earlier versions crash on launch when installed with SPM.

### Migrating from CocoaPods

1. Remove `pod 'PoilabsVdNavigation'` from your `Podfile`, together with any `PoilabsCore`, `PoilabsPositioning` or `PoilabsSdkAnalytics` lines.
2. Run `pod install` (or `pod deintegrate` if no other pods remain).
3. Add the package with Swift Package Manager as described above.

Do not keep the SDK in your `Podfile` while it is added with SPM; the same frameworks would be embedded twice.

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

### Opening a specific venue (placeId)

Normally the SDK opens with the venue list of your application. If you want to open one venue directly, pass its **placeId** to the initializer. The SDK then skips the venue list and opens that venue's store list as the first screen.

- The `placeId` must be one of the venues of your application: a venue in its venue list, or a venue listed under one of them. Ask PoiLabs for the `placeId` values of your venues.
- If you pass nothing, `nil`, an empty string or a `placeId` that is not one of your venues, the SDK opens as before (the venue list). For an unknown `placeId` it prints a warning to the console.
- `placeId` is available from **7.3.0**. It is the last parameter before `completionHandler` and defaults to `nil`, so existing code compiles without changes.

``` Swift
poilabsVdNavigation = PoilabsVdNavigationUI(withApplicationID: "APPLICATION_ID",
                                            withApplicationSecret: "APPLICATION_SECRET_KEY",
                                            withUniqueIdentifier: "UNIQUE_ID",
                                            placeId: "PLACE_ID") { controller in
    // present controller as above
}
```

To open another venue, dismiss the SDK screen, create a new `PoilabsVdNavigationUI` with the other `placeId` and present the controller it returns.

### PoilabsVdNavigationDelegate

`poilabsVdNavigation(didUpdate:)` is called when the user location changes.

``` Swift
extension ViewController: PoilabsVdNavigationDelegate {
    func poilabsVdNavigation(didUpdate userLocation: CLLocationCoordinate2D) {

    }
}
```
