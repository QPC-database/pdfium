// Copyright 2017 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#include "fpdfsdk/javascript/cjs_timerobj.h"

#include "fpdfsdk/javascript/global_timer.h"

int CJS_TimerObj::ObjDefnID = -1;

// static
int CJS_TimerObj::GetObjDefnID() {
  return ObjDefnID;
}

// static
void CJS_TimerObj::DefineJSObjects(CFXJS_Engine* pEngine) {
  ObjDefnID = pEngine->DefineObj("TimerObj", FXJSOBJTYPE_DYNAMIC,
                                 JSConstructor<CJS_TimerObj, TimerObj>,
                                 JSDestructor<CJS_TimerObj>);
}

TimerObj::TimerObj(CJS_Object* pJSObject)
    : CJS_EmbedObj(pJSObject), m_nTimerID(0) {}

TimerObj::~TimerObj() {}

void TimerObj::SetTimer(GlobalTimer* pTimer) {
  m_nTimerID = pTimer->GetTimerID();
}
