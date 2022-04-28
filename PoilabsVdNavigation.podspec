
#
#  Be sure to run `pod spec lint PoilabsNavigation.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

# 1
s.platform = :ios
s.ios.deployment_target = '12.0'
s.name = "PoilabsVdNavigation"
s.summary = "Poilabs Indoor Navigation Framework"
#s.requires_arc = true

#2
s.version = "4.0.2"

# 3
s.license = { :type => "MIT", :file => "LICENSE" }

# 4 - Replace with your name and e-mail address
s.author = { "Emre Kuru" => "emre@poilabs.com" }

# 5 - Replace this URL with your own GitHub page's URL (from the address bar)
s.homepage = "https://bitbucket.org/poiteam/ios-vd-navigation-pod"

# 6 - Replace this URL with your own Git URL from "Quick Setup"
s.source = { :git => "https://emre-kuru@bitbucket.org/poiteam/ios-vd-navigation-pod.git",
             :tag => "#{s.version}" }

s.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }


s.ios.vendored_frameworks = 'PoilabsVdNavigationUI.xcframework', 'PoilabsVdNavigationCore.xcframework'
s.resources = 'PoilabsVdNavigationBundle.bundle'
s.dependency 'Alamofire', '~> 4.9.1'
s.dependency 'PoilabsPositioning', '~> 0.0.7'
s.dependency 'StepSlider', '~> 1.8.0'
end
