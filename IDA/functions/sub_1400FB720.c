#include "../winhttp.h"

//----- (00000001400FB720) ----------------------------------------------------
__int64 __fastcall sub_1400FB720(__int64 a1, unsigned __int16* a2, int a3)
{
	_QWORD* v6; // rax
	__int64 v7; // r10
	__int64 v8; // rdx
	__int64 v9; // rdi
	_QWORD* v10; // rax
	int v11; // esi
	unsigned __int64* v12; // rdx
	unsigned __int64 v13; // r8
	__int64 v14; // rcx
	_DWORD* v15; // rax
	__int64 v17; // [rsp+20h] [rbp-28h] BYREF
	__int64 v18; // [rsp+28h] [rbp-20h]

	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1))
		return 2147500037i64;
	v6 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v8 = *(_QWORD*)(v7 + 16);
	*(_QWORD*)v8 = *v6;
	*(_DWORD*)(v8 + 8) = *((_DWORD*)v6 + 2);
	*(_QWORD*)(v7 + 16) += 16i64;
	v9 = *(_QWORD*)(a1 + 16);
	v10 = sub_14018F0E0(&v17, a2);
	v11 = -1;
	v12 = (unsigned __int64*)v10[1];
	if (v12)
	{
		v13 = -1i64;
		do
			++v13;
		while (*((_BYTE*)v12 + v13));
		sub_140058710(v9, v12, v13);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v9 + 16) + 8i64) = 0;
		*(_QWORD*)(v9 + 16) += 16i64;
	}
	if (v18)
		sub_14018B900(v18, 0);
	sub_14005E8E0(
		*(_QWORD*)(a1 + 16),
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) - 32i64,
		(int*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) - 16i64),
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) - 16i64);
	if (a3 != -1)
	{
		v14 = *(_QWORD*)(a1 + 16);
		v15 = (_DWORD*)(*(_QWORD*)(v14 + 16) - 16i64);
		if (v15 != dword_140A12138)
			v11 = v15[2];
		if (v11 != a3)
		{
			*(_QWORD*)(v14 + 16) -= 32i64;
			return 2147500037i64;
		}
	}
	return 0i64;
}
// 1400FB762: variable 'v7' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

