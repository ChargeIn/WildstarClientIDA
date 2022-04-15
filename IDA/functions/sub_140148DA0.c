#include "../winhttp.h"

//----- (0000000140148DA0) ----------------------------------------------------
__int64 __fastcall sub_140148DA0(_QWORD* a1)
{
	unsigned __int64* v1; // rsi
	__int64 v3; // rcx
	__int64 v4; // rdi
	__int64 v5; // rax
	unsigned int* v6; // r9
	__int64* v7; // rdi
	__int64 v8; // r14
	__int64 v9; // rax
	__int64 v10; // r8
	_QWORD* v11; // rax
	__int64 v12; // rcx
	__int64* v13; // rax
	unsigned __int64 v14; // r8
	__int64* v15; // r14
	__int64 v16; // rax
	unsigned int* v17; // r9
	__int64 v19; // [rsp+20h] [rbp-E0h] BYREF
	int v20; // [rsp+28h] [rbp-D8h]
	__int64 v21[56]; // [rsp+30h] [rbp-D0h] BYREF

	v1 = (unsigned __int64*)"Area";
	v21[1] = (__int64)sub_1401493D0;
	v21[0] = (__int64)"Area";
	v21[2] = (__int64)"Width";
	v21[3] = (__int64)sub_140149430;
	v21[4] = (__int64)"Height";
	v21[5] = (__int64)sub_140149480;
	v21[6] = (__int64)"Size";
	v21[7] = (__int64)sub_1401494D0;
	v21[8] = (__int64)"Center";
	v21[9] = (__int64)sub_140149570;
	v21[10] = (__int64)"ClosestPoint";
	v21[11] = (__int64)sub_140149620;
	v21[12] = (__int64)"FarthestPoint";
	v21[13] = (__int64)sub_1401496E0;
	v21[14] = (__int64)"IsEmpty";
	v21[15] = (__int64)sub_1401497E0;
	v21[16] = (__int64)"IsAbnormal";
	v21[17] = (__int64)sub_140149840;
	v21[18] = (__int64)"ContainsPoint";
	v21[19] = (__int64)sub_1401498A0;
	v21[20] = (__int64)"ContainsRect";
	v21[21] = (__int64)sub_140149930;
	v21[22] = (__int64)"ContainsSegment";
	v21[23] = (__int64)sub_1401499C0;
	v21[24] = (__int64)"IntersectsRect";
	v21[25] = (__int64)sub_140149AA0;
	v21[26] = (__int64)"IntersectsRay";
	v21[27] = (__int64)sub_140149BC0;
	v21[28] = (__int64)"IntersectsLine";
	v21[29] = (__int64)sub_140149C90;
	v21[30] = (__int64)"IntersectsSegment";
	v21[31] = (__int64)sub_140149D60;
	v21[32] = (__int64)"IntersectsTriangle";
	v21[33] = (__int64)sub_140149E30;
	v21[34] = (__int64)"SubtractRect";
	v21[35] = (__int64)sub_140149EF0;
	v21[36] = (__int64)"__tostring";
	v21[37] = (__int64)sub_14014A030;
	v21[38] = (__int64)"__index";
	v21[39] = (__int64)sub_14014A0A0;
	v21[40] = (__int64)"__newindex";
	v21[41] = (__int64)sub_14014A230;
	v21[42] = (__int64)"__add";
	v21[43] = (__int64)sub_14014A340;
	v21[44] = (__int64)"__sub";
	v21[45] = (__int64)sub_14014A410;
	v21[46] = (__int64)"__mul";
	v21[47] = (__int64)sub_14014A4E0;
	v21[48] = (__int64)"__div";
	v21[49] = (__int64)sub_14014A5C0;
	v21[50] = (__int64)"__eq";
	v21[51] = (__int64)sub_14014A6A0;
	v21[52] = (__int64)"__unm";
	v21[53] = (__int64)sub_14014A750;
	v21[54] = 0i64;
	v21[55] = 0i64;
	sub_1400569B0((__int64)a1, (unsigned __int64*)"AaRect");
	v3 = a1[2];
	*(_QWORD*)v3 = *(_QWORD*)(v3 - 16);
	*(_DWORD*)(v3 + 8) = *(_DWORD*)(v3 - 8);
	a1[2] += 16i64;
	v4 = a1[2];
	v5 = sub_140062650((__int64)a1, (unsigned __int64*)"__index", 7ui64);
	v6 = (unsigned int*)(a1[2] - 16i64);
	v19 = v5;
	v20 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v4 - 32), (int*)&v19, v6);
	a1[2] -= 16i64;
	v7 = v21;
	do
	{
		v8 = v7[1];
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v9 = a1[5];
		if (v9 == a1[10])
			v10 = a1[15];
		else
			v10 = *(_QWORD*)(**(_QWORD**)(v9 + 8) + 24i64);
		v11 = sub_140060AB0((__int64)a1, 0, v10);
		v11[4] = v8;
		v12 = a1[2];
		*(_QWORD*)v12 = v11;
		*(_DWORD*)(v12 + 8) = 6;
		a1[2] += 16i64;
		v13 = (__int64*)sub_1400580E0((__int64)a1, -2);
		v14 = -1i64;
		v15 = v13;
		do
			++v14;
		while (*((_BYTE*)v1 + v14));
		v16 = sub_140062650((__int64)a1, v1, v14);
		v17 = (unsigned int*)(a1[2] - 16i64);
		v19 = v16;
		v20 = 4;
		sub_14005EA50((__int64)a1, v15, (int*)&v19, v17);
		v1 = (unsigned __int64*)v7[2];
		a1[2] -= 16i64;
		v7 += 2;
	} while (v1);
	a1[2] -= 16i64;
	sub_140057020(a1, "AaRect", &off_140B5C420);
	a1[2] -= 16i64;
	return 0i64;
}
// 140B5C420: using guessed type char *off_140B5C420;

