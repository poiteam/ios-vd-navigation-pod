# PoilabsVdNavigation
[![Version](https://img.shields.io/cocoapods/v/PoilabsVdNavigation.svg?style=flat)](https://cocoapods.org/pods/PoilabsVdNavigation)
[![Platform](https://img.shields.io/cocoapods/p/PoilabsVdNavigation.svg?style=flat)](https://cocoapods.org/pods/PoilabsVdNavigation)

## INSTALLATION

### Swift Package Manager

To integrate PoilabsVdNavigation into your Xcode project using Swift Package Manager:

1. In Xcode, select "File" > "Swift Packages" > "Add Package Dependency..."
2. Enter the repository URL: `https://github.com/poiteam/ios-vd-navigation-pod.git`
3. Specify the version or branch you want to use
4. Click "Next" and then "Finish"

All required dependencies (PoilabsPositioning, PoilabsSdkAnalytics, PoilabsCore) are defined in the package and will be automatically installed.

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


