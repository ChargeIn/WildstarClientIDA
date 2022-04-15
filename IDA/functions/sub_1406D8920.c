#include "../winhttp.h"

//----- (00000001406D8920) ----------------------------------------------------
__int64 __fastcall sub_1406D8920(__int64 a1)
{
	int v2; // eax
	int v3; // eax
	_QWORD* v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rcx
	int v7; // edi
	__m128i* v8; // r8
	__int64 v9; // rcx
	int* v10; // rax
	int* v11; // rdx
	__int64 v12; // rdx
	_DWORD* v13; // rax
	int v14; // ecx
	_QWORD* v15; // rcx
	_QWORD* v16; // rcx
	int v17; // xmm0_4
	_QWORD* v18; // rcx
	__int64 result; // rax
	_QWORD* v20; // rcx
	int v21; // xmm0_4
	__int128 v22; // [rsp+30h] [rbp-40h] BYREF
	__int128 v23; // [rsp+40h] [rbp-30h] BYREF
	int v24[4]; // [rsp+50h] [rbp-20h] BYREF

	LODWORD(v22) = *(_DWORD*)(a1 + 716);
	v2 = *(_DWORD*)(a1 + 720);
	v23 = xmmword_140B7B240;
	DWORD1(v22) = v2;
	DWORD2(v22) = *(_DWORD*)(a1 + 724);
	v3 = *(_DWORD*)(a1 + 728);
	v4 = *(_QWORD**)(a1 + 2584);
	HIDWORD(v22) = v3;
	if (v4)
		sub_140103CF0(
			v4,
			(unsigned int*)&v22,
			(__m128*) & v23,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2592)) * *(float*)(a1 + 2596)));
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	v5 = sub_1403AC780(qword_140C65898 + 160, (int*)(a1 + 1028));
	v7 = 8;
	if (v5)
	{
		v9 = *(_QWORD*)(v5 + 64);
		v10 = *(int**)(v5 + 72);
		v8 = *(__m128i**)(v9 + 488);
		v7 = *(_DWORD*)(v9 + 344);
		v11 = v10;
		if (!v10)
			v11 = (int*)(v9 + 8);
		if (v11)
		{
			if (!v10)
				v10 = (int*)(v9 + 8);
			v7 = *v10;
		}
	}
	else
	{
		v8 = (__m128i*)sub_1403976A0(v6, a1 + 1028);
	}
	v12 = *(_QWORD*)(a1 + 32);
	if (v12)
		sub_140109710((__int64*)(a1 + 1080), v12 + 240, v8, 0);
	v23 = v22;
	v13 = sub_140109900(a1 + 2584, v24, (int*)&v23, 0xFFFFFFFF);
	v14 = *v13;
	v23 = xmmword_140B7B240;
	LODWORD(v22) = v14;
	*(_QWORD*)((char*)&v22 + 4) = *(_QWORD*)(v13 + 1);
	v15 = *(_QWORD**)(a1 + 1080);
	HIDWORD(v22) = v13[3];
	if (!v15)
	{
		v16 = *(_QWORD**)(a1 + 2632);
		if (!v16)
			goto LABEL_23;
		*(float*)&v17 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2640)) * *(float*)(a1 + 2644);
		goto LABEL_22;
	}
	sub_140103CF0(
		v15,
		(unsigned int*)&v22,
		(__m128*) & v23,
		0,
		COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1088)) * *(float*)(a1 + 1092)));
	if ((unsigned int)(v7 - 1) <= 6)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v23 = xmmword_140B7B240;
		v18 = *(_QWORD**)(a1 + 48i64 * v7 + 1808);
		if (v18)
			sub_140103CF0(
				v18,
				(unsigned int*)&v22,
				(__m128*) & v23,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 48i64 * v7 + 1816)) * *(float*)(a1 + 48i64 * v7 + 1820)));
	}
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 3384i64) == a1)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v16 = *(_QWORD**)(a1 + 1760);
		v23 = xmmword_140B7B240;
		if (v16)
		{
			*(float*)&v17 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1768)) * *(float*)(a1 + 1772);
		LABEL_22:
			sub_140103CF0(v16, (unsigned int*)&v22, (__m128*) & v23, 0, v17);
		}
	}
LABEL_23:
	result = *(_QWORD*)(a1 + 32);
	if (*(_QWORD*)(result + 3392) != a1)
		return result;
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	result = (*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)a1 + 352i64))(a1, &qword_140C77760);
	v23 = xmmword_140B7B240;
	if ((_DWORD)result == 2)
	{
		v20 = *(_QWORD**)(a1 + 1664);
		if (!v20)
			return result;
		*(float*)&v21 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1672)) * *(float*)(a1 + 1676);
	}
	else
	{
		v20 = *(_QWORD**)(a1 + 1712);
		if (!v20)
			return result;
		*(float*)&v21 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1720)) * *(float*)(a1 + 1724);
	}
	return sub_140103CF0(v20, (unsigned int*)&v22, (__m128*) & v23, 0, v21);
}
// 1406D89ED: variable 'v6' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C77760: using guessed type __int64 qword_140C77760;
// 1406D8920: using guessed type int var_20[4];

