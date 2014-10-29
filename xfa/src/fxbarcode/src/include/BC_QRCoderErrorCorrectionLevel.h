// Copyright 2014 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef _BC_QRCODERERRORCORRECTIONLEVEL_H_
#define _BC_QRCODERERRORCORRECTIONLEVEL_H_
class CBC_QRCoderErrorCorrectionLevel;
class CBC_QRCoderErrorCorrectionLevel  : public CFX_Object
{
private:
    FX_INT32 m_ordinal;
    FX_INT32 m_bits;
    CFX_ByteString m_name;
    CBC_QRCoderErrorCorrectionLevel(FX_INT32 ordinal, FX_INT32 bits, FX_CHAR* name);
    CBC_QRCoderErrorCorrectionLevel();
public:
    static CBC_QRCoderErrorCorrectionLevel* L;
    static CBC_QRCoderErrorCorrectionLevel* M;
    static CBC_QRCoderErrorCorrectionLevel* Q;
    static CBC_QRCoderErrorCorrectionLevel* H;
    virtual ~CBC_QRCoderErrorCorrectionLevel();
    static void Initialize();
    static void Finalize();
    FX_INT32 Ordinal();
    FX_INT32 GetBits();
    CFX_ByteString GetName();
    static void Destroy();
    static CBC_QRCoderErrorCorrectionLevel* ForBits(FX_INT32 bits);
};
#endif
