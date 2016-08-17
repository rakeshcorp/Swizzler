# Swizzler for iOS

Swizzler was built as a tool to help analyze MDM/EMS iOS applications, it has grown to incorporate other features to assist and ease the job of penetration testers and security researchers in the security analysis of any iOS application.

This tool was release along side the BlackHat presentation entitled [**Bad for Enterprise: Attacking BYOD Enterprise Mobile Security Solutions**](https://www.blackhat.com/us-16/briefings.html#bad-for-enterprise-attacking-byod-enterprise-mobile-security-solutions). 

Full Presentation, White Paper and Video Recording can be found at https://www.blackhat.com/us-16/briefings.html#bad-for-enterprise-attacking-byod-enterprise-mobile-security-solutions

Everything here is in a beta stage and stuff maybe unstable.


## License
GNU GPLv3


## Installation

### Binary Installation
1. Download the latest binary release from https://github.com/vtky/Swizzler/releases
2. Upload to iOS device and run the following command: `dpkg -i me.vtky.swizzler_0.1.0-1_iphoneos-arm.deb`

### Self Compilation

#### Requirements
* X Code
* Theos Framework (https://github.com/rpetrich/theos)

1. Symlink theos to the swizzler directory
2. Port forward iOS device SSH to local port
	* ./tcprelay.py -t 22:2222
3. `source setup.sh`
4. make package install


## Usage
Please refer to the [Usage document](https://github.com/vtky/Swizzler/blob/master/USAGE.md)


## Contact
Create an issue here or tweet me [@vincent_tky](https://twitter.com/vincent_tky)