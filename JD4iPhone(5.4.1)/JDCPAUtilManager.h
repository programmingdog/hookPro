//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JDCPAUtilManager : NSObject
{
}

+ (id)sharedManager;
- (long long)getInt64SysInfo:(unsigned int)arg1;
- (long long)getInt64SysInfoByName:(char *)arg1;
- (long long)getInt32SysInfoByName:(char *)arg1;
- (id)getStringSysInfoByName:(char *)arg1;
- (_Bool)headphoneAttached;
- (_Bool)touchIDAvailable;
- (_Bool)makePhoneAvailable;
- (_Bool)headingAvailable;
- (_Bool)deviceMotionAvailable;
- (_Bool)magnetometerAvailable;
- (_Bool)accelerometerAvailable;
- (_Bool)gyroAvailable;
- (_Bool)frontCameraFlashAvailable;
- (_Bool)rearCameraFlashAvailable;
- (_Bool)frontCameraAvailable;
- (_Bool)rearCameraAvailable;
- (_Bool)microphoneAvailable;
- (id)wifiMac;
- (_Bool)allowsVOIP;
- (id)isoCountryCode;
- (id)mobileNetworkCode;
- (id)mobileCountryCode;
- (id)carrierName;
- (id)localIP;
- (id)getIPv4NetworkType;
- (id)getIPv6NetworkType;
- (id)networkType;
- (_Bool)proximitySensorAvailable;
- (_Bool)multiTouch;
- (id)currentTime;
- (id)appsPackageName;
- (_Bool)canSendMail;
- (id)processInfo;
- (id)batteryStatus;
- (id)remainingBatteryLevel;
- (id)getDiskSpaceOfType:(id)arg1;
- (id)freeDiskSpace;
- (id)totalDiskSpace;
- (long long)pageSize;
- (id)memSize;
- (id)minBusFrequency;
- (id)maxBusFrequency;
- (id)busFrequency;
- (id)minCpuFrequency;
- (id)maxCpuFrequency;
- (id)cpuFrequency;
- (long long)physicalCpu;
- (id)cpuName;
- (id)cpuType;
- (id)model;
- (id)platform;
- (id)d_model;
- (id)d_brand;
- (id)deviceName;
- (id)imei;
- (_Bool)retina;
- (id)screen;
- (id)openUDID;
- (id)adid;
- (id)osVersion;
- (id)sdkVersion;
- (id)buildInfo;
- (id)bundleIdentifier;
- (id)appName;
- (id)build;
- (id)clientVersion;
- (id)client;

@end

