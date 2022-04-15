#include "../winhttp.h"

//----- (00000001403980A0) ----------------------------------------------------
void __fastcall sub_1403980A0(__int64 a1)
{
	__int64 v1; // rax
	int v3; // edx
	__int64 v4; // rcx
	int v5; // eax
	int v6; // eax
	unsigned int v7; // eax
	__int64 v8; // rax
	__int64 v9; // rdi
	int v10; // eax
	int v11; // [rsp+50h] [rbp+8h] BYREF

	v1 = *(_QWORD*)(a1 + 120);
	if (!v1)
		return;
	v3 = 0;
	if (*(_DWORD*)(v1 + 684)
		|| (v4 = *(_QWORD*)(qword_140C65898 + 29272)) != 0 && ((v5 = *(_DWORD*)(v4 + 20), v5 == 3) || v5 == 8))
	{
		v3 = 1;
	}
	else
	{
		v6 = dword_140C45DE0;
		if (*(_DWORD*)qword_140C63750 < dword_140C45DE0)
			v6 = *(_DWORD*)qword_140C63750;
		if (dword_140C45DF0[v6] != 1)
			return;
	}
	v7 = sub_1403982A0(a1, v3);
	v8 = sub_1403ACD90(qword_140C65B70, v7, *(_QWORD*)(a1 + 120));
	v9 = v8;
	if (!v8)
		return;
	v10 = sub_1403986F0(
		*(_QWORD*)(v8 + 112),
		**(_DWORD**)(v8 + 112),
		*(_QWORD*)(a1 + 120),
		*(_QWORD*)(a1 + 120),
		0i64,
		0i64,
		0i64,
		1);
	if (v10)
	{
		if (v10 != 317)
			return;
	}
	else
	{
		sub_14046AFC0(*(_QWORD*)(a1 + 120), v9, 0i64);
	}
	v11 = 1;
	sub_1403F4900(a1, 0x17Eu, (__int64)&v11);
	*(_DWORD*)(a1 + 26656) = 1;
}
// 140C45DE0: using guessed type int dword_140C45DE0;
// 140C45DF0: using guessed type int dword_140C45DF0[];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

