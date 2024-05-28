

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 03:14:07 2038
 */
/* Compiler settings for OdSmX.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_BricscadSm,0x1DBAE739,0xD953,0x4868,0x80,0x41,0xAE,0x99,0xA7,0x93,0xEB,0x06);


MIDL_DEFINE_GUID(IID, IID_IAcSmPersist,0xab9e4650,0xc3a8,0x4747,0x8d,0x89,0x80,0x73,0x1a,0x46,0x44,0xa1);


MIDL_DEFINE_GUID(IID, IID_IAcSmObjectId,0x42634426,0xcdfb,0x4e32,0xad,0x46,0x99,0x2c,0xeb,0x3b,0x15,0x96);


MIDL_DEFINE_GUID(IID, IID_IAcSmComponent,0x0e463002,0x12a4,0x4828,0xb4,0xcf,0x28,0xd8,0xcb,0xf8,0xc7,0x68);


MIDL_DEFINE_GUID(IID, IID_IAcSmSubset,0x8cceb838,0xacf5,0x4048,0xb9,0xf0,0x09,0xa8,0x43,0xca,0x2a,0xc4);


MIDL_DEFINE_GUID(IID, IID_IAcSmSheetSet,0x537476a6,0xe9e9,0x4e25,0xb6,0xea,0xfb,0x5b,0x8b,0x08,0x61,0x53);


MIDL_DEFINE_GUID(IID, IID_IAcSmSheet,0x59bc91bb,0xfad8,0x44f9,0x86,0xf9,0x5c,0x99,0xfa,0x6b,0x4e,0xdd);


MIDL_DEFINE_GUID(IID, IID_IAcSmViewCategories,0xb28b23eb,0xff5e,0x4910,0x8c,0xa6,0xad,0x54,0x93,0x10,0x13,0xf3);


MIDL_DEFINE_GUID(IID, IID_IAcSmSheetViews,0x5d2d1da2,0x97ca,0x48d9,0x93,0xfd,0xbb,0xc5,0xb5,0x85,0x29,0x62);


MIDL_DEFINE_GUID(IID, IID_IAcSmEnumSheetView,0x07bb6db5,0x2198,0x4ea2,0x87,0x52,0xe5,0xa5,0x20,0xd0,0x1a,0x47);


MIDL_DEFINE_GUID(IID, IID_IAcSmSheetView,0xf69ceaf1,0x819f,0x4b7a,0xb5,0xe6,0xd3,0x93,0x95,0x41,0x5f,0x55);


MIDL_DEFINE_GUID(IID, IID_IAcSmFiler,0x8e974876,0xff7f,0x48d3,0x84,0x35,0xa6,0x32,0x8c,0xcc,0x49,0x6f);


MIDL_DEFINE_GUID(IID, IID_IAcSmAcDbDatabase,0x0070c60f,0x987a,0x4349,0x9e,0x0a,0x3a,0xcb,0xa0,0xcc,0x9c,0x5b);


MIDL_DEFINE_GUID(IID, IID_IAcSmDatabase,0x5585723a,0x4859,0x4dd9,0x99,0x13,0x99,0x64,0x84,0xd6,0x06,0x0d);


MIDL_DEFINE_GUID(IID, IID_IAcSmDatabase_Internal,0xce030fd3,0x3646,0x4924,0xa4,0x45,0xa1,0x49,0x82,0xa9,0x64,0x08);


MIDL_DEFINE_GUID(IID, IID_IAcSmCustomPropertyValue,0xda800d3b,0x975c,0x4381,0x95,0x31,0x35,0x83,0x28,0x79,0x26,0x50);


MIDL_DEFINE_GUID(IID, IID_IAcSmEnumProperty,0x476cbb88,0x8878,0x419d,0xa8,0xc5,0xa9,0xce,0xd8,0x9d,0x5a,0x37);


MIDL_DEFINE_GUID(IID, IID_IAcSmCustomPropertyBag,0xfa893fe9,0x247c,0x44ec,0xb4,0x37,0x54,0x1c,0x0f,0x09,0xf5,0xfc);


MIDL_DEFINE_GUID(IID, IID_IAcSmFileReference,0xb86d90c3,0x7d13,0x4180,0x8f,0x97,0x61,0xc0,0x9f,0xa1,0x59,0x02);


MIDL_DEFINE_GUID(IID, IID_IAcSmAcDbObjectReference,0x25b22534,0xb1f7,0x402c,0x82,0xd6,0xd3,0x6f,0xac,0x62,0x0d,0x69);


MIDL_DEFINE_GUID(IID, IID_IAcSmNamedAcDbObjectReference,0xc5e0c361,0x9e43,0x4574,0xa0,0xab,0xde,0xfa,0x48,0x35,0x11,0xe4);


MIDL_DEFINE_GUID(IID, IID_IAcSmAcDbLayoutReference,0xc91d5f15,0x0faa,0x4787,0x8f,0x12,0x89,0xe2,0xf5,0x14,0x92,0x4e);


MIDL_DEFINE_GUID(IID, IID_IAcSmEnumComponent,0x330cd4d2,0x73fe,0x43dc,0x85,0xcc,0x48,0x26,0x38,0x63,0xcf,0xba);


MIDL_DEFINE_GUID(IID, IID_IAcSmAcDbViewReference,0x978f1c91,0xbb5f,0x46e8,0xbd,0x7a,0xac,0x20,0xd0,0x05,0x26,0x06);


MIDL_DEFINE_GUID(IID, IID_IAcSmAcDbBlockRecordReference,0xe44501c6,0xa13f,0x487c,0x96,0xa7,0x63,0xda,0x20,0x85,0xf4,0xea);


MIDL_DEFINE_GUID(IID, IID_IAcSmEnumAcDbBlockRecordReference,0x19c204ed,0x39d8,0x4060,0x82,0x56,0xb5,0xa2,0xc8,0x1d,0x6f,0x25);


MIDL_DEFINE_GUID(IID, IID_IAcSmCalloutBlocks,0xcfbf491d,0x19c4,0x4893,0x9c,0x4b,0xbc,0x3d,0xfb,0x6d,0x5e,0x64);


MIDL_DEFINE_GUID(IID, IID_IAcSmSheetSelSet,0x1bea479e,0xec3a,0x49b8,0x94,0xe5,0xcf,0xce,0xe9,0x2c,0x4a,0xfe);


MIDL_DEFINE_GUID(IID, IID_IAcSmEnumSheetSelSet,0xe8c8d548,0x3b80,0x4810,0xb8,0x66,0x61,0x7a,0x7b,0x91,0x6f,0xe8);


MIDL_DEFINE_GUID(IID, IID_IAcSmSheetSelSets,0x20786806,0xb251,0x4277,0xb1,0x19,0x94,0x20,0x9c,0x2e,0xa7,0xf9);


MIDL_DEFINE_GUID(IID, IID_IAcSmEnumFileReference,0x73fcecfa,0x6343,0x4630,0x88,0x9b,0xd0,0x3c,0xbf,0xbc,0x24,0x31);


MIDL_DEFINE_GUID(IID, IID_IAcSmResources,0xb448171b,0xd56c,0x4834,0xbf,0x45,0x3d,0x2e,0xd0,0xa6,0x62,0x29);


MIDL_DEFINE_GUID(IID, IID_IAcSmPublishOptions,0x147981d1,0xaf77,0x42a1,0x8b,0x91,0x49,0x94,0xa1,0x6a,0x59,0xfd);


MIDL_DEFINE_GUID(IID, IID_IAcSmEvents,0x56832073,0xa227,0x43f5,0xb5,0xe9,0xbb,0x4f,0x0e,0x4c,0x7a,0xd4);


MIDL_DEFINE_GUID(IID, IID_IAcSmEnumPersist,0x746e7d4f,0x0024,0x44ae,0x87,0x53,0xf1,0xcc,0xae,0x44,0x07,0x2c);


MIDL_DEFINE_GUID(IID, IID_IAcSmPersistProxy,0xd5bb3e7e,0x2af7,0x4d10,0x94,0xb3,0x21,0x3f,0xfd,0xaf,0x16,0xc8);


MIDL_DEFINE_GUID(IID, IID_IAcSmObjectReference,0xadf37497,0xa661,0x4306,0xb0,0x48,0xa7,0x03,0xe8,0x42,0xd2,0xfa);


MIDL_DEFINE_GUID(IID, IID_IAcSmProjectPointLocation,0x0b79150e,0xc037,0x48ad,0xa9,0x3f,0x2f,0xf6,0xd3,0x10,0x4d,0x11);


MIDL_DEFINE_GUID(IID, IID_IAcSmEnumProjectPointLocation,0xaf02d3b1,0xa2e4,0x44c7,0x85,0xae,0x01,0x03,0x83,0x65,0xde,0xc2);


MIDL_DEFINE_GUID(IID, IID_IAcSmProjectPointLocations,0x2760e2a6,0xc735,0x4a97,0x82,0x60,0xf1,0xaf,0x21,0x2c,0x8a,0x4d);


MIDL_DEFINE_GUID(IID, IID_IAcSmEnumDatabase,0x02aacc99,0x5c5a,0x4528,0xa0,0x0a,0x73,0xf7,0x1c,0x51,0x43,0x9b);


MIDL_DEFINE_GUID(IID, IID_IAcSmSheetSetMgr,0x4cc6fc8f,0xf1c6,0x486d,0xb5,0x50,0x83,0x8b,0x02,0x34,0xe0,0x3c);


MIDL_DEFINE_GUID(IID, IID_IAcSmViewCategory,0xa5b52086,0xa849,0x4a06,0x9b,0x77,0x41,0xd8,0x60,0xe5,0xa1,0x1b);


MIDL_DEFINE_GUID(IID, IID_IAcSmEnumViewCategory,0x460b347f,0xc804,0x42f0,0x91,0xd5,0x7d,0xdd,0x92,0x5e,0x50,0x58);


MIDL_DEFINE_GUID(IID, IID_IOdSmInternal,0x66512850,0x2BEB,0x4a6b,0xB4,0x71,0x2D,0xEC,0xF7,0x6C,0x87,0x6E);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmPersist,0xCC660D71,0x1F88,0x49FB,0x88,0x89,0x39,0x38,0x76,0x6E,0xAD,0x42);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmComponent,0x64BE94D9,0x5A81,0x479A,0x89,0x69,0x30,0xE0,0x70,0xA1,0xFD,0x21);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmObjectId,0x33E851AF,0x6884,0x4640,0xA7,0x96,0xE3,0xB3,0x3B,0x12,0x9B,0x37);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmEnumComponent,0x6B7638DA,0xE3C2,0x4922,0xA8,0x8C,0x16,0xAC,0xE1,0x67,0xAC,0x46);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmSubset,0x63B0EC8A,0x0556,0x43C3,0x98,0x7A,0x06,0x7C,0x93,0xB5,0x59,0x3E);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmAcDbBlockRecordReference,0x50F5133C,0x0E7F,0x4031,0x90,0x46,0x82,0x8E,0x8F,0xDD,0xAF,0xAB);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmAcDbDatabase,0x4F6BDB66,0x82DC,0x4718,0xB4,0x5E,0x65,0x32,0xE0,0x42,0xB1,0xAD);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmAcDbLayoutReference,0xF925E1F0,0xFD87,0x4DE1,0xBD,0x28,0xF6,0x9B,0x38,0x27,0xE4,0xC1);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmAcDbObjectReference,0x36FC77EE,0x71F1,0x47ED,0xBF,0x44,0xC9,0xF8,0xCB,0xD9,0x15,0x12);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmAcDbViewReference,0x262FD0C6,0x6CAE,0x4E77,0x9C,0xFE,0x39,0x98,0xE1,0xF6,0xED,0xED);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmCalloutBlocks,0x0A428210,0xC10A,0x4B1D,0x90,0x08,0xC4,0x5F,0x30,0x6E,0x40,0x2C);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmCustomPropertyBag,0x8DDE26CC,0x15B1,0x4A62,0x94,0x2B,0x13,0xB3,0x1B,0x45,0xFF,0x7F);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmCustomPropertyValue,0x9E045555,0x2535,0x437F,0x8E,0x87,0xDF,0x8B,0x57,0x8F,0x3C,0x3A);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmDatabase,0xA2192D05,0x19BD,0x4254,0xA4,0xFC,0x51,0x31,0x83,0xD2,0x39,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmSheetSet,0x7B5B4A5F,0xDCBD,0x43AF,0x81,0xD7,0xBB,0xF7,0x65,0xD4,0xE2,0x61);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmEnumAcDbBlockRecordReference,0x05AB30DA,0xCA2E,0x421A,0x9E,0x85,0xFC,0x81,0xE8,0xEC,0xD8,0xE7);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmEnumDatabase,0x3122E6F1,0x279F,0x471B,0xA2,0x55,0xB6,0x13,0xFA,0x3D,0x16,0xB2);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmEnumFileReference,0x4DB24DA6,0xDAD8,0x4059,0xA7,0xD5,0x4C,0xC1,0x22,0xEE,0xBE,0x9B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmNamedAcDbObjectReference,0xF1F84526,0xFC63,0x4A49,0x82,0x84,0xA1,0xDA,0x82,0x5F,0x33,0x81);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmProjectPointLocation,0x95DBE88A,0x3750,0x4957,0x8A,0x66,0x44,0xD9,0x1A,0xBB,0xF8,0xDB);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmProjectPointLocations,0x812F49BD,0xE772,0x4738,0xBF,0x99,0x76,0x38,0x22,0xD0,0xB0,0x4E);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmPublishOptions,0xB68F503C,0x6D55,0x4EAB,0xBB,0x03,0xB1,0xEA,0x0E,0x61,0x93,0x89);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmResources,0x9C04F7BB,0xD571,0x4D01,0x9C,0x45,0x97,0x06,0xC2,0xC5,0x91,0x44);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmSheet,0x8B46D589,0x6BA8,0x4105,0xAC,0x84,0xED,0xD4,0x57,0xD5,0x61,0xCA);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmSheetSelSet,0x57380F0E,0xAFFE,0x4AFD,0xB5,0x63,0x4C,0x86,0xBE,0xBA,0xC2,0x84);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmSheetSelSets,0x07AD9BC7,0xC1E7,0x476F,0xA8,0xAB,0x65,0xB8,0xD8,0xA6,0xF5,0xBF);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmSheetSetMgr,0x30D81252,0xF482,0x42FE,0xA8,0xA3,0x93,0xB4,0x42,0x07,0x12,0x2E);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmSheetView,0x4077FFD4,0xA180,0x413A,0xA5,0xD9,0x2E,0x3C,0x75,0x81,0xFB,0x72);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmSheetViews,0x8E2FDD7D,0xDAB4,0x4D1D,0x80,0xB5,0xBD,0xAF,0x6A,0x69,0xE9,0x66);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmViewCategories,0x1654FBA0,0x24F9,0x4721,0x8B,0x55,0x05,0xB4,0x62,0x18,0xF7,0xED);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmViewCategory,0xE731681A,0x4CE8,0x4F42,0xBF,0x7B,0x93,0xF8,0xBD,0x3C,0xBD,0xEA);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmEnumPersist,0xAFD43F43,0x9253,0x4E9C,0x9D,0xFD,0x01,0xD5,0x4D,0x79,0x7F,0xB9);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmCalloutBlockReferences,0x30F9B106,0x74FC,0x476E,0xBF,0x57,0xC6,0x9A,0x4E,0xA0,0xE5,0x2A);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmEnumProperty,0xEBEB0352,0x2705,0x4A8A,0xAB,0xAF,0xAB,0xA1,0x04,0xCF,0x85,0xB9);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmEnumViewCategory,0x2ECB5723,0xA36A,0x450C,0xA6,0xDF,0x8C,0xB2,0x80,0x8F,0x0C,0xD8);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmEnumSheetView,0x51AF4670,0xB052,0x4093,0xB3,0x51,0xCB,0x76,0x0E,0x35,0xBA,0x95);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmEnumProjectPointLocation,0x42204AF2,0x496C,0x490B,0xA5,0x51,0x26,0x9A,0xC2,0x58,0x42,0x4E);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmFileReference,0xF9CBE303,0x4104,0x4C91,0xA4,0xF9,0xD0,0x29,0xDB,0xD0,0x50,0x2E);


MIDL_DEFINE_GUID(CLSID, CLSID_AcSmEnumSheetSelSet,0x6B2047C7,0xDDA1,0x42A9,0x85,0x7E,0x0F,0x05,0x09,0x49,0x84,0x5A);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



