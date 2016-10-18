#
# Be sure to run `pod lib lint PurchEaseKit.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'PurchEaseKit'
  s.version          = '0.1.1'
  s.summary          = 'PurchEaseKit framework as a Pod'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = 'Le PurchEaseKit est un framework donnant la possibilité aux développeurs d\'accéder facilement à un workflow de traitement de tickets, visant à confirmer la présence d\'un ou plusieurs produits sur le reçu.'
  s.homepage         = 'https://github.com/ImHatman/PurchEaseKit'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Cyril' => 'cyril@purchease.com' }
  s.ios.deployment_target = '7.0'
#  s.source_files = 'PurchEaseKit/Classes/**/*'
  s.source = { :git => 'https://github.com/ImHatman/PurchEaseKit.git', :tag => s.version.to_s }

  s.frameworks = 'CoreMotion', 'AssetsLibrary'
  s.libraries = 'stdc++'
  s.vendored_frameworks = 'PurchEaseKit.framework', 'opencv2.framework'
#  s.resource = 'PurchEaseKit.framework', 'opencv2.framework'
  s.resource_bundles = {
    'PurchEaseKit' => 'PurchEaseKit/Assets/PurchEaseKit.bundle/*.png'
  }
  s.pod_target_xcconfig = { 'OTHER_LDFLAGS' => '-ObjC -all_load', 'FRAMEWORK_SEARCH_PATHS' => '.'}
  s.xcconfig = { 'LD_RUNPATH_SEARCH_PATHS' => '@loader_path/../Frameworks' }


  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.dependency 'AFNetworking', '~> 2.3'
end