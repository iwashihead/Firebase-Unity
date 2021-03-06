/*
Copyright 2015 Google Inc. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
//
//  JniChildEventStub.h
//  XCodePlugin
//
//  Created by benwu on 8/26/15.
//
//

#ifndef __XCodePlugin__JniChildEventStub__
#define __XCodePlugin__JniChildEventStub__

#include <stdio.h>
#include "JniFirebase.h"
#include "jni.h"


class JniChildEventStub {
public:
    JniChildEventStub(JniFirebase* firebase, jlong cookie);
    ~JniChildEventStub();
    
private:
    jobject m_stub;
    
    static jclass s_stubClass;
    static const char* s_stubClassName;
    
    static jmethodID s_stubCtor;
    static const char* s_stubCtorName;
    static const char* s_stubCtorSig;
    
    static jmethodID s_stubRelease;
    static const char* s_stubReleaseName;
    static const char* s_stubReleaseSig;
};


#endif /* defined(__XCodePlugin__JniChildEventStub__) */
