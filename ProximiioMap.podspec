#
# Be sure to run `pod lib lint ProximiioMap.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ProximiioMap'
  s.version          = '0.2.9'
  s.summary          = 'Proximi.io Integrated Map'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
  Proximi.io Integrated Map Solution for IOS Platform
                       DESC

  s.homepage         = 'https://github.com/proximiio/proximiio-map-pod'
  s.license          = "Commercial"
  s.author           = { 'Proximi.io' => 'support@proximi.io' }
  s.source           = { :git => 'https://github.com/proximiio/proximiio-map-pod.git', :tag => s.version }
  
  s.ios.deployment_target = '8.0'

  #s.source_files = 'ProximiioMap/Classes/**/*'
  s.vendored_frameworks = 'Pod/ProximiioMap.framework'
  s.frameworks = 'CoreLocation', 'QuartzCore', 'Proximiio'
  s.dependency 'Proximiio'
  
  # s.resource_bundles = {
  #   'ProximiioMap' => ['ProximiioMap/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
