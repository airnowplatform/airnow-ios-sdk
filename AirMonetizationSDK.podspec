Pod::Spec.new do |spec|
  spec.name         = 'AirMonetizationSDK'
  spec.version      = '11.4.1'
  spec.license      = {
    :type => 'Apache',
    :file => 'LICENSE',
    :text => 'Apache License 2.0'
  }
  spec.homepage     = 'https://airnow.com'
  spec.authors      = 'Airnow PLC', { 'Sergey Gusakovsky' => 'sergey.gusakovsky@airnow.com' }
  spec.summary      = 'The Airnowmedia SDK is the most powerful app monetization solution in the industry.'
  spec.description  = <<-DESC
    The Airnowmedia SDK is the most powerful app monetization solution in the industry, providing developers with stunning performance and weekly payouts. Airnowmedia developers consistently earn many times more revenue than with any other ad network because our advanced new ad units outperform everything else available in the industry. This document covers installation instructions, available ad units and their features, optimization and best practices. It is written for developers with the assumption they are familiar with iOS development.
  DESC
  spec.source       = { :git => 'https://github.com/airnowplatform/airnow-ios-sdk.git', :tag => spec.version }
  spec.vendored_frameworks = 'Sources/AirMonetizationSDK.xcframework'
  spec.platform = :ios, '11.0'
  spec.swift_version = '5.0'

end
