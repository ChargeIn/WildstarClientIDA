#include "../winhttp.h"

//----- (0000000140372AF0) ----------------------------------------------------
__int64 __fastcall sub_140372AF0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64* v4; // r14
	__int64 v5; // rdx
	__int64 v6; // rcx
	__int64 v7; // rsi
	int v8; // xmm0_4
	__int64 v9; // rcx
	unsigned int* v10; // rdx
	__int64 v11; // r10
	__int64 v12; // r9
	__m128* v13; // r9
	__int128 v14[4]; // [rsp+50h] [rbp-C8h] BYREF
	int v15[4]; // [rsp+90h] [rbp-88h] BYREF
	__int64 v16[10]; // [rsp+A0h] [rbp-78h] BYREF

	v2 = *(_QWORD*)(a1 + 40);
	v15[0] = 0;
	if (v2 && !(*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v2 + 16i64))(v2, v15))
		return sub_1402C8730(a1 + 64, *(_QWORD*)(a1 + 16) + 3504i64);
	v4 = (__int64*)(a1 + 848);
	if (!*(_QWORD*)(a1 + 848))
	{
		v5 = *(unsigned int*)(*(_QWORD*)(a1 + 16) + 168i64);
		if ((*(int(__fastcall**)(__int64, __int64, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			v5,
			(unsigned int)v5,
			1i64,
			0,
			5,
			1,
			0,
			0,
			a1 + 848) < 0)
			return sub_1402C8730(a1 + 64, *(_QWORD*)(a1 + 16) + 3504i64);
		*(_DWORD*)(a1 + 56) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 848i64) - 1;
	}
	v6 = *(_QWORD*)(a1 + 16);
	result = *(unsigned int*)(v6 + 848);
	if (*(_DWORD*)(a1 + 56) != (_DWORD)result)
	{
		*(_DWORD*)(a1 + 56) = result;
		v7 = *(_QWORD*)(v6 + 296);
		if (*(_QWORD*)(a1 + 24) == v7)
		{
			v8 = sub_1403726D0(v6 + 2688, 2u);
			v9 = *(_QWORD*)(a1 + 40);
			if (v9)
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v9 + 112i64))(v9, 1i64);
			v10 = *(unsigned int**)(a1 + 16);
			v11 = *(_QWORD*)v7;
			v15[2] = v8;
			v15[0] = 0;
			v15[1] = 1065353216;
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, int*, int*, unsigned int, unsigned int*, unsigned int*, _DWORD))(v11 + 56))(
				v7,
				v10[220],
				v10[224],
				v15,
				v15,
				v10[402],
				v10 + 477,
				v10 + 228,
				0);
		}
		sub_140367B30(*(_QWORD*)(a1 + 16), v7, a1 + 64, 0i64);
		v12 = *(_QWORD*)(a1 + 16) + 960i64;
		*(_DWORD*)(a1 + 756) = 1065353216;
		v16[0] = v12;
		sub_1401AFC20(v16, (double*)v14);
		sub_140262C40(a1 + 64, v13, v14);
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v7 + 80i64))(
			v7,
			*(_QWORD*)(a1 + 16) + 1280i64,
			*(_QWORD*)(a1 + 16) + 960i64,
			*v4);
		result = *v4;
		*(_QWORD*)(a1 + 832) = *v4;
	}
	return result;
}
// 140372D03: variable 'v13' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;
// 140372AF0: using guessed type __int128 var_C8[4];
// 140372AF0: using guessed type __int64 var_78[10];

