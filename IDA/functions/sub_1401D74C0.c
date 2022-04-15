#include "../winhttp.h"

//----- (00000001401D74C0) ----------------------------------------------------
_QWORD* __fastcall sub_1401D74C0(_QWORD* a1, __int64 a2, __int64 a3)
{
	_QWORD* v4; // r9
	_QWORD* v5; // rcx
	_QWORD* v6; // rdx
	bool v7; // zf
	__int64 v8; // rax
	__int64 v9; // r14
	unsigned int v10; // esi
	__int64* i; // rbx

	v4 = (_QWORD*)(a3 + 80);
	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[4] = 0i64;
	a1[5] = 0i64;
	*a1 = a2;
	if (!a1[1])
	{
		a1[1] = v4;
		v5 = a1 + 2;
		*v5 = *v4;
		*v4 = a1;
		if (*v5)
			*(_QWORD*)(*v5 + 8i64) = v5;
	}
	v6 = (_QWORD*)(a2 + 88);
	v7 = a1[4] == 0i64;
	a1[3] = a3;
	if (v7)
	{
		a1[4] = v6;
		a1[5] = *v6;
		*v6 = a1;
		v8 = a1[5];
		if (v8)
			*(_QWORD*)(v8 + 32) = a1 + 5;
	}
	(**(void(__fastcall***)(_QWORD, _QWORD*, __int64, _QWORD*)) * a1)(*a1, v6, a3, v4);
	v9 = *a1;
	v10 = *(_DWORD*)(a1[3] + 44i64);
	if (*(_DWORD*)(*a1 + 44i64) < (signed int)v10)
	{
		for (i = *(__int64**)(v9 + 80); i; i = (__int64*)i[2])
			sub_1401C6050(*i, v10);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v9 + 152i64))(v9, v10);
		*(_DWORD*)(v9 + 44) = v10;
	}
	return a1;
}

