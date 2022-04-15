#include "../winhttp.h"

//----- (00000001400197A0) ----------------------------------------------------
__int64 __fastcall sub_1400197A0(__int64 a1, int a2)
{
	int* v3; // r10
	unsigned __int64 v4; // rcx
	int* v5; // r8
	unsigned int v6; // r9d
	int v7; // eax
	int v8; // edx
	_DWORD* v9; // r8
	void(__fastcall * v10)(_QWORD); // r8
	int v12; // [rsp+38h] [rbp+10h] BYREF

	v12 = a2;
	if (*(_DWORD*)(a1 + 72))
	{
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 48i64))(a1, &v12);
		a2 = v12;
	}
	v3 = (int*)qword_140C63750;
	v4 = 0i64;
	v5 = (int*)(a1 + 32);
	v6 = *(_DWORD*)(a1 + 4i64 * *(int*)qword_140C63750 + 32);
	*(_DWORD*)(a1 + 60) = a2;
	v7 = 1;
	do
	{
		if ((v7 & *(_DWORD*)(a1 + 24)) != 0)
			break;
		v7 = __ROL4__(v7, 1);
		++v4;
		*v5++ = a2;
	} while (v4 < 5);
	v8 = *(_DWORD*)(a1 + 4i64 * *v3 + 32);
	if (v6 != v8)
	{
		v9 = *(_DWORD**)(a1 + 64);
		if (v9)
			*v9 = v8;
		v10 = *(void(__fastcall**)(_QWORD))(a1 + 80);
		if (v10)
			v10(v6);
	}
	return 1i64;
}
// 140C63750: using guessed type __int64 qword_140C63750;

