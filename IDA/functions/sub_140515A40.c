#include "../winhttp.h"

//----- (0000000140515A40) ----------------------------------------------------
__int64 __fastcall sub_140515A40(__int64 a1, _QWORD* a2)
{
	int* v2; // r15
	unsigned int v3; // ebx
	int v5; // esi
	__int64 v6; // rdi
	int v7; // r14d
	_DWORD* v8; // rax
	int v9; // eax
	unsigned int v10; // ecx
	BOOL v11; // eax
	bool v12; // sf
	int v13; // eax
	_DWORD* v14; // rcx
	__int64 result; // rax
	char v16[16]; // [rsp+20h] [rbp-48h] BYREF
	int v17; // [rsp+30h] [rbp-38h]
	__int64 v18; // [rsp+78h] [rbp+10h]

	v2 = (int*)(a1 + 16);
	v3 = 3;
	v5 = 0;
	v6 = a1 + 16;
	v7 = 1;
	do
	{
		v8 = sub_1400580E0((__int64)a2, v3);
		if (v8 == dword_140A12138)
			goto LABEL_14;
		if ((int)v8[2] <= 0)
			goto LABEL_14;
		v9 = sub_140056D60(a2, v3);
		if (v9 < 0)
			goto LABEL_14;
		LODWORD(v18) = BYTE1(v9);
		HIDWORD(v18) = (unsigned __int8)v9;
		*(_QWORD*)v6 = v18;
		v10 = *(_DWORD*)(v6 + 4);
		if (v10 == -1)
		{
			v11 = 0;
		}
		else if (BYTE1(v9))
		{
			v11 = 1;
		}
		else
		{
			v11 = v10 < 0x1F;
		}
		++v3;
		v7 &= v11;
		v6 += 8i64;
	} while (v3 - 3 < 4);
	if (!v7 || (v12 = (int)sub_1403D3800(v2, 4u, qword_140C65898 + 160, (__int64)v16) < 0, v13 = v17, v12))
		LABEL_14:
	v13 = 0;
	v14 = (_DWORD*)a2[2];
	LOBYTE(v5) = v13 != 0;
	v14[2] = 1;
	result = 1i64;
	*v14 = v5;
	a2[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140515A40: using guessed type char var_48[16];

