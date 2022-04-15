#include "../winhttp.h"

//----- (00000001404EF570) ----------------------------------------------------
__int64 __fastcall sub_1404EF570(_QWORD* a1)
{
	unsigned int v1; // edi
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // rax
	_DWORD* v6; // rax
	__int64* v7; // rax
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rcx
	unsigned int v12; // edx
	__int64 v13; // rax
	__int64 v14; // r8
	_DWORD* v15; // rcx
	__int64 v16; // rax

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v5) + 400i64) == a1)
				break;
			v5 = ++v4;
		} while (v4 < v3);
	}
	v6 = (_DWORD*)a1[3];
	if ((unsigned __int64)v6 < a1[2] && v6 != dword_140A12138 && !v6[2]
		|| (v7 = (__int64*)sub_140056AB0(a1, 1u)) == 0i64)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	LABEL_25:
		a1[2] += 16i64;
		return 1i64;
	}
	v8 = *v7;
	if (!v8
		|| !*(_DWORD*)(v8 + 1184)
		|| (v9 = *(_QWORD*)(v8 + 8)) == 0
		|| !*(_DWORD*)(v9 + 444)
		|| !*(_DWORD*)(v8 + 1176)
		|| v8 == -32
		|| (v10 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v8 + 308), *(_QWORD*)(qword_140C65898 + 120)), (v11 = v10) == 0))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		goto LABEL_25;
	}
	v12 = *(_DWORD*)(v10 + 40);
	v13 = 0i64;
	if (v12)
	{
		v14 = *(_QWORD*)(v11 + 48);
		v15 = (_DWORD*)(v14 + 16);
		while (*v15 != 123)
		{
			v13 = (unsigned int)(v13 + 1);
			v15 += 42;
			if ((unsigned int)v13 >= v12)
				goto LABEL_23;
		}
		v1 = *(_DWORD*)(168 * v13 + v14 + 64);
	}
LABEL_23:
	v16 = sub_140224D00(v1);
	sub_140434100(a1, v16);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

