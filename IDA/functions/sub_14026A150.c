#include "../winhttp.h"

//----- (000000014026A150) ----------------------------------------------------
__int64 __fastcall sub_14026A150(__int64 a1, __int64 a2, _DWORD* a3, __int64 a4)
{
	DWORD CurrentProcessId; // eax
	int v9; // ecx
	BOOL v10; // r8d
	int v11; // eax
	int v12; // edx
	bool v13; // zf
	int v14; // r8d
	int v15; // eax
	int v16; // ecx
	int v17; // ecx
	__int64 v18; // rax
	int v19; // ecx
	int v20; // eax
	unsigned int v21; // eax
	DWORD dwProcessId; // [rsp+30h] [rbp+8h] BYREF

	GetWindowThreadProcessId(*(HWND*)(a2 + 24), &dwProcessId);
	CurrentProcessId = GetCurrentProcessId();
	v9 = *(_DWORD*)(a2 + 32);
	v10 = dwProcessId != CurrentProcessId;
	if ((v9 & 2) == 0 || (v11 = 1, v10))
		v11 = 0;
	if (!*(_DWORD*)(a1 + 6632) || v10 || (v12 = 1, *(_DWORD*)(a1 + 228)))
		v12 = 0;
	if ((v9 & 4) == 0 || (v13 = !v10, v14 = 1, !v13))
		v14 = 0;
	*(_QWORD*)a4 = 0i64;
	*(_QWORD*)(a4 + 8) = 0i64;
	*(_QWORD*)(a4 + 16) = 0i64;
	*(_QWORD*)(a4 + 24) = 0i64;
	*(_QWORD*)(a4 + 32) = 0i64;
	*(_QWORD*)(a4 + 40) = 0i64;
	*(_QWORD*)(a4 + 48) = 0i64;
	*(_QWORD*)(a4 + 56) = 0i64;
	if (v11)
	{
		*(_DWORD*)a4 = a3[1];
		*(_DWORD*)(a4 + 4) = a3[2];
		v15 = a3[4];
		*(_DWORD*)(a4 + 12) = 1;
		*(_DWORD*)(a4 + 24) = 1;
		*(_DWORD*)(a4 + 40) = 0;
		*(_DWORD*)(a4 + 8) = v15;
		*(_DWORD*)(a4 + 56) = a3[3];
	}
	else
	{
		v16 = 1;
		if (*(_DWORD*)a2)
			v16 = *(_DWORD*)a2;
		*(_DWORD*)a4 = v16;
		v17 = 1;
		if (*(_DWORD*)(a2 + 4))
			v17 = *(_DWORD*)(a2 + 4);
		*(_DWORD*)(a4 + 4) = v17;
		v18 = *(int*)(a2 + 8);
		if ((int)v18 >= 27)
			v19 = a3[4];
		else
			v19 = dword_140AE7B30[v18];
		*(_DWORD*)(a4 + 8) = v19;
		*(_DWORD*)(a4 + 40) = 1;
		*(_DWORD*)(a4 + 56) = 0;
		*(_DWORD*)(a4 + 12) = (v12 != 0) + 1;
		v20 = 1;
		if (v12)
			v20 = 5;
		*(_DWORD*)(a4 + 24) = v20;
	}
	*(_QWORD*)(a4 + 16) = 0i64;
	*(_QWORD*)(a4 + 32) = *(_QWORD*)(a2 + 24);
	v21 = 0x80000000;
	*(_QWORD*)(a4 + 44) = 0i64;
	*(_DWORD*)(a4 + 52) = 0;
	if (v14)
		v21 = 0;
	*(_DWORD*)(a4 + 60) = v21;
	return 0i64;
}
// 140AE7B30: using guessed type int dword_140AE7B30[28];

