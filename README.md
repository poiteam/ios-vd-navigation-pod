![Poilabs](https://www.poilabs.com/public/img/poi-labs-logo.png)
# PoilabsVdNavigation
[![Version](https://img.shields.io/cocoapods/v/PoilabsNavigation.svg?style=flat)](https://cocoapods.org/pods/PoilabsVdNavigation)
[![Platform](https://img.shields.io/cocoapods/p/PoilabsNavigation.svg?style=flat)](https://cocoapods.org/pods/PoilabsVdNavigation)

Poilabs görme engelli navigasyon sdk

## Yükleme

### CocoaPods ile

``` curl
pod 'PoilabsVdNavigation'
```

###  Framework ile

Proje Dosyalarında düzenlenmesi gereken değerler aşağıda gösterilmiştir:

	.framework dosyalarını General Sayfasında Embedded Binaries Başlığı altına ekleyiniz.

	.bundle dosyasını da Build Phases Sayfasında Copy bundle Resources Başlığı altına ekleyiniz.
## Öngereklilikler

### info.plist

Sdk'in çalışabilmesi için kullanıcıdan gerekli izinlerin alınması gerekmektedir. Bu izinler için info.plist'e aşağıdaki parametreler eklenmelidir.

+Privacy - Location Usage Description: ‘Sizin açıklamanız’

+Privacy - Location When In Use Usage Description: ‘Sizin açıklamanız’

+Privacy - Location Always Usage Description: ‘Sizin açıklamanız’

+Privacy - Location Always and When In Use Usage Description: ‘Sizin açıklamanız’

+Privacy - Bluetooth Peripheral Usage Description: ‘Sizin açıklamanız’

+Privacy - Bluetooth Always Usage Description: ‘Sizin açıklamanız’

## Kullanım

PoilabsVdNavigationUI import edilmeli

``` Swift
import PoilabsVdNavigationUI
```

PoilabsVdNavigationUI init handler'ında viewcontroller dönmektedir. Bu viewcontroller'ı başlatarak sdk'i ayağa kaldırabilirsiniz.

``` Swift
let lang = Locale.current.languageCode ?? "tr"
let appId = "yourApplicationId"
let secret = "yourApplicationSecret"
let uniqueIdentifier = "uniqueIdentifier"

PoilabsVdNavigationUI(withApplicationID: appId, 
					withApplicationSecret: secret, 
					withUniqueIdentifier: uniqueIdentifier, 
					lang: lang) { (controller) in
            //show controller
        }
```

Eğer config sorgusunu farklı bir url üzerinden soracaksanız, sdk'i init ederken url'i verebilirsiniz.



``` Swift
let configUrl = "yoururl"
let lang = Locale.current.languageCode ?? "tr"
let appId = "yourApplicationId"
let secret = "yourApplicationSecret"
let uniqueIdentifier = "uniqueIdentifier"

PoilabsVdNavigationUI(configUrl: configUrl, 
					withApplicationID: appId, 
					withApplicationSecret: secret, 
					withUniqueIdentifier: uniqueIdentifier, 
					lang: lang) { (controller) in
            //show controller
        }
```


