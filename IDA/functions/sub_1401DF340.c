#include "../winhttp.h"

//----- (00000001401DF340) ----------------------------------------------------
__int64 __fastcall sub_1401DF340(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	_QWORD* v4; // rax
	__int64 v5; // rdx
	_QWORD* v6; // rax
	__int64 v7; // rdx
	_QWORD* v8; // rax
	__int64 v9; // rax
	_QWORD* v10; // r8
	__int64 v11; // rax
	__int64 v12; // rcx
	int v13; // xmm0_4
	_DWORD* v14; // rax
	__int64 result; // rax

	v2 = a1 + 24;
	*(_QWORD*)(v2 - 24) = off_140B60160;
	sub_1401DAA90(v2);
	*(_QWORD*)(a1 + 280) = 0i64;
	*(_QWORD*)(a1 + 288) = 0i64;
	v3 = 9i64;
	*(_QWORD*)(a1 + 296) = 0i64;
	v4 = (_QWORD*)(a1 + 328);
	*(_QWORD*)(a1 + 304) = 0i64;
	v5 = 9i64;
	do
	{
		*v4 = 0i64;
		v4[1] = 0i64;
		v4[2] = 0i64;
		v4 += 8;
		*(v4 - 5) = 0i64;
		*(v4 - 4) = 0i64;
		*(v4 - 3) = 0i64;
		*(v4 - 2) = 0i64;
		*(v4 - 1) = 0i64;
		--v5;
	} while (v5);
	v6 = (_QWORD*)(a1 + 904);
	v7 = 9i64;
	do
	{
		*v6 = 0i64;
		v6[1] = 0i64;
		v6[2] = 0i64;
		v6 += 8;
		*(v6 - 5) = 0i64;
		*(v6 - 4) = 0i64;
		*(v6 - 3) = 0i64;
		*(v6 - 2) = 0i64;
		*(v6 - 1) = 0i64;
		--v7;
	} while (v7);
	v8 = (_QWORD*)(a1 + 1480);
	do
	{
		*v8 = 0i64;
		v8[1] = 0i64;
		v8[2] = 0i64;
		v8 += 8;
		*(v8 - 5) = 0i64;
		*(v8 - 4) = 0i64;
		*(v8 - 3) = 0i64;
		*(v8 - 2) = 0i64;
		*(v8 - 1) = 0i64;
		--v3;
	} while (v3);
	v9 = qword_140C63798;
	*(_QWORD*)(a1 + 2872) = 0i64;
	*(_QWORD*)(a1 + 2880) = 0i64;
	*(_QWORD*)(a1 + 2888) = 0i64;
	*(_QWORD*)(a1 + 2896) = 0i64;
	*(_QWORD*)(a1 + 2936) = 0i64;
	*(_QWORD*)(a1 + 2944) = 0i64;
	*(_QWORD*)(a1 + 2952) = 0i64;
	*(_QWORD*)(a1 + 2960) = 0i64;
	*(_QWORD*)(a1 + 2968) = 0i64;
	*(_QWORD*)(a1 + 2976) = 0i64;
	*(_QWORD*)(a1 + 2984) = 0i64;
	*(_QWORD*)(a1 + 2992) = 0i64;
	*(_QWORD*)(a1 + 3000) = 0i64;
	*(_QWORD*)(a1 + 3008) = 0i64;
	*(_QWORD*)(a1 + 3016) = 0i64;
	*(_QWORD*)(a1 + 3024) = 0i64;
	*(_QWORD*)(a1 + 3032) = 0i64;
	*(_QWORD*)(a1 + 3040) = 0i64;
	*(_QWORD*)(a1 + 3048) = 0i64;
	*(_QWORD*)(a1 + 3056) = 0i64;
	*(_QWORD*)(a1 + 3080) = 0i64;
	*(_QWORD*)(a1 + 3088) = 0i64;
	*(_QWORD*)(a1 + 3096) = 0i64;
	*(_QWORD*)(a1 + 3104) = 0i64;
	*(_QWORD*)(a1 + 3112) = 0i64;
	*(_DWORD*)(a1 + 3120) = 0;
	*(_QWORD*)(a1 + 3184) = 0i64;
	*(_QWORD*)(a1 + 3192) = 0i64;
	v10 = (_QWORD*)(v9 + 240);
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = v9;
	if (!*(_QWORD*)(a1 + 3184))
	{
		*(_QWORD*)(a1 + 3184) = v10;
		*(_QWORD*)(a1 + 3192) = *v10;
		*v10 = a1;
		v11 = *(_QWORD*)(a1 + 3192);
		if (v11)
			*(_QWORD*)(v11 + 3184) = a1 + 3192;
	}
	sub_1407E4830((int*)(a1 + 24), 0i64, 0xF0ui64);
	v12 = 4i64;
	v13 = dword_140C3F4F8;
	*(_QWORD*)(a1 + 312) = 0i64;
	*(_DWORD*)(a1 + 320) = 0;
	v14 = (_DWORD*)(a1 + 2920);
	do
	{
		v14[36] = v13;
		*(v14 - 4) = 7;
		*v14++ = 0;
		--v12;
	} while (v12);
	*(_DWORD*)(a1 + 3124) = 0;
	*(_QWORD*)(a1 + 3140) = 0i64;
	*(_QWORD*)(a1 + 3148) = 0i64;
	*(_DWORD*)(a1 + 3112) = 6;
	*(_DWORD*)(a1 + 3116) = 0;
	*(_DWORD*)(a1 + 3120) = 0;
	*(_QWORD*)(a1 + 3156) = 0i64;
	*(_DWORD*)(a1 + 3164) = 0;
	*(_DWORD*)(a1 + 3128) = dword_140C636A8;
	*(_DWORD*)(a1 + 264) = 0;
	result = a1;
	*(_QWORD*)(a1 + 3168) = 127i64;
	return result;
}
// 140B60160: using guessed type __int64 (__fastcall *off_140B60160[6])();
// 140C3F4F8: using guessed type int dword_140C3F4F8;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63798: using guessed type __int64 qword_140C63798;

