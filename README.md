# PoilabsVdNavigation
[![Version](https://img.shields.io/cocoapods/v/PoilabsVdNavigation.svg?style=flat)](https://cocoapods.org/pods/PoilabsVdNavigation)
[![Platform](https://img.shields.io/cocoapods/p/PoilabsVdNavigation.svg?style=flat)](https://cocoapods.org/pods/PoilabsVdNavigation)

## INSTALLATION

### CocoaPods

To integrate PoilabsNavigation into your Xcode project using CocoaPods, specify it in your `Podfile`:

``` curl
pod 'PoilabsVdNavigation'
```


## PRE-REQUIREMENTS

To Integrate this framework you should add some features to your project info.plist file.

+Privacy - Location Usage Description

+Privacy - Location When In Use Usage Description

+Privacy - Location Always Usage Description

+Privacy - Location Always and When In Use Usage Description

+Privacy - Bluetooth Peripheral Usage Description

+Privacy - Bluetooth Always Usage Description

## USAGE

You shuold import **PoilabsVdNavigationUI**

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
					withUniqueIdentifier: uniqueIdentifier, 
					lang: lang) { (controller) in
            //show controller
        }
```


### PoilabsVdNavigationDelegate

**didUserLocationChange** callback is triggered when location change.

```swift
    func poilabsVdNavigation(didUpdate userLocation: CLLocationCoordinate2D) {
    
    }
```

If you want to do requests on another url, you can specify it on init.



``` Swift
let configUrl = "yoururl"
let lang = Locale.current.languageCode ?? "tr"
let appId = APPLICATION_ID
let secret = APPLICATION_SECRET_KEY
let uniqueIdentifier = UNIQUE_IDENTIFIER

PoilabsVdNavigationUI(configUrl: configUrl, 
					withApplicationID: appId, 
					withApplicationSecret: secret, 
					withUniqueIdentifier: uniqueIdentifier, 
					lang: lang) { (controller) in
            //show controller
        }
```



