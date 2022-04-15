#include "../winhttp.h"

//----- (000000014026A800) ----------------------------------------------------
__int64 __fastcall sub_14026A800(__int64 a1, __int64 a2, unsigned int* a3)
{
	_QWORD* v3; // rdi
	__int64 v5; // rcx
	__int64 v8; // rcx
	__int64 result; // rax
	int v10; // eax

	v3 = (_QWORD*)(a1 + 7656);
	v5 = *(_QWORD*)(a1 + 7656);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 16i64))(v5);
		*v3 = 0i64;
	}
	v8 = *(_QWORD*)(a1 + 7720);
	if (v8)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
		*(_QWORD*)(a1 + 7720) = 0i64;
	}
	result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD*))(**(_QWORD**)(a1 + 6608) + 144i64))(
		*(_QWORD*)(a1 + 6608),
		0i64,
		0i64,
		0i64,
		v3);
	if ((int)result >= 0)
	{
		if (*(int*)(a2 + 12) >= 27
			|| (result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int, unsigned int, _DWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 232i64))(
				*(_QWORD*)(a1 + 6608),
				*a3,
				a3[1],
				(unsigned int)dword_140AE7B30[*(int*)(a2 + 12)],
				a3[4],
				a3[5],
				0,
				a1 + 7720,
				0i64),
				(int)result >= 0))
		{
			v10 = *(_DWORD*)(a1 + 240) - 1;
			*(_DWORD*)(a1 + 7664) = v10;
			*(_DWORD*)(a1 + 7728) = v10;
			return 0i64;
		}
	}
	return result;
}
// 140AE7B30: using guessed type int dword_140AE7B30[28];

