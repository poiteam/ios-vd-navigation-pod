# PoilabsVdNavigation
![Version](https://img.shields.io/cocoapods/v/PoilabsVdNavigation.svg?style=flat)
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

To integrate PoilabsNavigation into your Xcode project using CocoaPods, specify it in your `Podfile`:

``` curl
pod 'PoilabsVdNavigation'
```


## PRE-REQUIREMENTS

To Integrate this framework you should add some features to your project info.plist file.

+Privacy - Location Usage Description

+Privacy - Location When In Use Usage Description

## USAGE

You should import **PoilabsVdNavigationUI**

``` Swift
import PoilabsVdNavigationUI
```

PoilabsVdNanigationUI initializer has UIViewController handler. When process is completed, it returns a viewcontroller. You should show it to start framework.


``` Swift
let lang = Locale.current.languageCode ?? "tr"
let appId = APPLICATION_ID
let secret = APPLICATION_SECRET_KEY
let uniqueIdentifier = UNIQUE_ID

PoilabsVdNavigationUI(withApplicationID: appId, 
					withApplicationSecret: secret, 
					withUniqueIdentifier: uniqueIdentifier) { (controller) in
            //show controller
        }
```


### PoilabsVdNavigationDelegate

**didUserLocationChange** callback is triggered when location change.

```swift
    func poilabsVdNavigation(didUpdate userLocation: CLLocationCoordinate2D) {
    
    }
```


