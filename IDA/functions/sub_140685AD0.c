#include "../winhttp.h"

//----- (0000000140685AD0) ----------------------------------------------------
__int64 __fastcall sub_140685AD0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int* v4; // r8
	unsigned int v5; // edx
	__int64 v6; // r9
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rdx
	_DWORD* v10; // rcx
	__int64 result; // rax
	BOOL v12; // ecx
	BOOL* v13; // rax
	__int64 v14; // [rsp+38h] [rbp+10h]

	if (!*(_QWORD*)(qword_140C65898 + 120))
		goto LABEL_19;
	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		goto LABEL_19;
	v3 = *(_QWORD*)(v2 + 8);
	if (!v3)
		goto LABEL_19;
	v4 = *(unsigned int**)(v3 + 8);
	if (!v4)
		goto LABEL_19;
	v5 = *v4;
	v6 = *(_QWORD*)(qword_140C65948 + 48);
	v7 = v6;
	v8 = *(_QWORD*)(v6 + 8);
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < v5)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v7 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v7 == v6 || (v14 = v7, v5 < *(_DWORD*)(v7 + 32)))
		v14 = *(_QWORD*)(qword_140C65948 + 48);
	if (v14 != v6 && (v9 = *(_QWORD*)(v14 + 40)) != 0)
	{
		if ((v4[3] & 0x10) != 0 && !*(_DWORD*)(v9 + 72))
		{
			v10 = (_DWORD*)a1[2];
			result = 1i64;
			*v10 = 1;
			v10[2] = 1;
			a1[2] += 16i64;
			return result;
		}
		v12 = *(_DWORD*)(v9 + 52) != 0;
	}
	else
	{
	LABEL_19:
		v12 = 0;
	}
	v13 = (BOOL*)a1[2];
	v13[2] = 1;
	*v13 = v12;
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65948: using guessed type __int64 qword_140C65948;

