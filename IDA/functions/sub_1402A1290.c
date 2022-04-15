#include "../winhttp.h"

//----- (00000001402A1290) ----------------------------------------------------
__int64 __fastcall sub_1402A1290(__int64 a1, unsigned int a2, int a3)
{
	__int64 v3; // rbp
	__int64 v4; // rdi
	__int64 v7; // rsi
	__int64 v8; // rdx
	int v9; // eax
	int v10; // ecx
	int v11[10]; // [rsp+20h] [rbp-28h] BYREF

	v3 = a3;
	v4 = a2;
	if (!*(_QWORD*)(a1 + 112))
		return 0i64;
	if (*(_QWORD*)(a1 + 152) <= (unsigned __int64)a2)
		sub_1402A3210((__int64*)(a1 + 144), a2 + 1);
	v7 = 8 * (v3 + 2 * v4);
	if (!*(_QWORD*)(v7 + *(_QWORD*)(a1 + 144)))
	{
		v8 = *(_QWORD*)(a1 + 112);
		v9 = dword_140AE7F90[*(int*)(a1 + 48)];
		v10 = 0;
		v11[1] = 3;
		v11[0] = v9;
		v11[3] = v4;
		if (!(_DWORD)v3)
			v10 = 1;
		v11[2] = v10;
		(*(void(__fastcall**)(_QWORD, __int64, int*))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6336i64) + 80i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6336i64),
			v8,
			v11);
	}
	return *(_QWORD*)(v7 + *(_QWORD*)(a1 + 144));
}
// 140AE7F90: using guessed type _DWORD dword_140AE7F90[28];

