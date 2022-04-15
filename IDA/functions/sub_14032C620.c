#include "../winhttp.h"

//----- (000000014032C620) ----------------------------------------------------
__int64 __fastcall sub_14032C620(__int64 a1, int a2, int a3, _QWORD* a4, int a5, __int64 a6)
{
	_QWORD* v6; // r15
	__int64 v9; // r8
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // r8
	__int64* v14; // r14
	__int64 v15; // r13
	unsigned __int16* v16; // rax
	int v17; // edx
	unsigned __int64 v18; // rbp
	int v19; // edx
	__int64 v20; // rsi
	__m256* v21; // r8
	__m128* v23; // rbx
	__m128* v24; // [rsp+60h] [rbp-E8h]
	__m128 v25[4]; // [rsp+70h] [rbp-D8h] BYREF
	__m128* v26[10]; // [rsp+B0h] [rbp-98h] BYREF

	v6 = (_QWORD*)*a4;
	if (!a6)
	{
		sub_140312840(*(_QWORD*)(a1 + 16), a2);
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			5i64,
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 1400i64),
			0i64,
			0i64);
		v9 = *(_QWORD*)(a1 + 16);
		if ((*(_DWORD*)(v9 + 1392) & 0x224) != 0)
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				6i64,
				*(_QWORD*)(*(_QWORD*)(v9 + 16) + 2192i64));
			v13 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) + 2192i64);
		}
		else
		{
			v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 192i64))(qword_140C65688);
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				6i64,
				*(_QWORD*)(v10 + 56),
				0i64,
				0i64);
			v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 200i64))(qword_140C65688);
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				7i64,
				*(_QWORD*)(v11 + 24),
				0i64,
				0i64);
			v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 200i64))(qword_140C65688);
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				9i64,
				*(_QWORD*)(v12 + 32),
				0i64,
				0i64);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 216i64))(qword_140C65688);
			v13 = *(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 192i64))(qword_140C65688) + 72);
		}
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			11i64,
			v13);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 392i64))(qword_140C65670, 0i64);
	}
	v14 = (__int64*)v6[8];
	v15 = v6[6];
	v16 = (unsigned __int16*)(*(__int64(__fastcall**)(__int64*))(*v14 + 32))(v14);
	v17 = *((_DWORD*)v16 + 2);
	v18 = *(_QWORD*)(v15 + 824) + ((unsigned __int64)*v16 << 6);
	if (!v17)
	{
		v23 = *(__m128**)(a1 + 16);
		v26[0] = (__m128*)(*(_QWORD*)(v15 + 824) + ((unsigned __int64)*v16 << 6));
		v24 = v26[0];
		v26[1] = v23 + 19;
		sub_1401AFB10(v26, v25);
		(*(void(__fastcall**)(__int64*, unsigned __int64, __m128*, __m128*, unsigned __int64, __m128*, __m128*, __m128*, __m128*, __int32, _QWORD, int, __m128*, __m128*))(*v14 + 56))(
			v14,
			v18,
			v25,
			v23 + 15,
			v18,
			v23 + 89,
			v23 + 27,
			v23 + 35,
			v23 + 22,
			v23[87].m128_i32[0],
			v6[7],
			a3,
			v24,
			v23 + 19);
		return 0i64;
	}
	v19 = v17 - 1;
	if (!v19)
	{
		v20 = *v14;
		v21 = (__m256*)(v15 + 80);
		goto LABEL_10;
	}
	if (v19 == 1)
	{
		v20 = *v14;
		v21 = &ymmword_140C78390;
	LABEL_10:
		(*(void(__fastcall**)(__int64*, unsigned __int64, __m256*))(v20 + 56))(v14, v18, v21);
	}
	return 0i64;
}
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 14032C620: using guessed type __m128 var_D8[4];

