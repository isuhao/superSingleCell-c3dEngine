//
//  c3dALPlatformDepend.h
//  HelloOpenGL
//
//  Created by wantnon (yang chao) on 14-3-6.
//
//

#ifndef __HelloOpenGL__c3dALPlatformDepend__
#define __HelloOpenGL__c3dALPlatformDepend__

#include <iostream>
#include <string>
using namespace std;
extern "C" {
#include "MyOpenALSupport.h"
};
void initBuffer_plat(const string&fileNameFull,void*&data,ALuint&buffer);
#endif /* defined(__HelloOpenGL__c3dALPlatformDepend__) */
