#include "../winhttp.h"

//----- (00000001406DD5A0) ----------------------------------------------------
__int64 __fastcall sub_1406DD5A0(__int64 a1)
{
	int v1; // eax
	int v3; // eax
	_QWORD* v4; // rcx
	__int64 v5; // rcx
	int v6; // edi
	__int64 v7; // r14
	__m128i* v8; // rax
	_DWORD* v9; // rax
	_QWORD* v10; // rcx
	__int64 result; // rax
	int v12; // xmm0_4
	__int128 v13; // [rsp+30h] [rbp-40h] BYREF
	__int128 v14; // [rsp+40h] [rbp-30h] BYREF
	int v15[4]; // [rsp+50h] [rbp-20h] BYREF

	v1 = *(_DWORD*)(a1 + 716);
	v14 = xmmword_140B7B240;
	LODWORD(v13) = v1;
	*(_QWORD*)((char*)&v13 + 4) = *(_QWORD*)(a1 + 720);
	v3 = *(_DWORD*)(a1 + 728);
	v4 = *(_QWORD**)(a1 + 2584);
	HIDWORD(v13) = v3;
	if (v4)
		sub_140103CF0(
			v4,
			(unsigned int*)&v13,
			(__m128*) & v14,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2592)) * *(float*)(a1 + 2596)));
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	if (qword_140C4DF28)
	{
		v6 = *(unsigned __int16*)(qword_140C4DF28 + 100);
		*(_DWORD*)(a1 + 1032) = *(_DWORD*)(a1 + 2740) + 17 * v6;
	}
	else
	{
		v6 = -1;
	}
	v7 = *(_QWORD*)(a1 + 32);
	v8 = (__m128i*)sub_1403976A0(v5, a1 + 1028);
	if (v7)
		sub_140109710((__int64*)(a1 + 1080), v7 + 240, v8, 0);
	v14 = v13;
	v9 = sub_140109900(a1 + 2584, v15, (int*)&v14, 0xFFFFFFFF);
	*(_QWORD*)&v13 = *(_QWORD*)v9;
	DWORD2(v13) = v9[2];
	v10 = *(_QWORD**)(a1 + 1080);
	result = (unsigned int)v9[3];
	HIDWORD(v13) = result;
	if (!v10 || v6 == -1)
	{
		v10 = *(_QWORD**)(a1 + 2632);
		v14 = xmmword_140B7B240;
		if (!v10)
			return result;
		*(float*)&v12 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2640)) * *(float*)(a1 + 2644);
	}
	else
	{
		v14 = xmmword_140B7B240;
		*(float*)&v12 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1088)) * *(float*)(a1 + 1092);
	}
	return sub_140103CF0(v10, (unsigned int*)&v13, (__m128*) & v14, 0, v12);
}
// 1406DD657: conditional instruction was optimized away because edi.4<10000u
// 1406DD67A: variable 'v5' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C4DF28: using guessed type __int64 qword_140C4DF28;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;
// 1406DD5A0: using guessed type int var_20[4];

