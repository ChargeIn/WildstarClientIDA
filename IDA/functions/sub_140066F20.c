#include "../winhttp.h"

//----- (0000000140066F20) ----------------------------------------------------
__int64 __fastcall sub_140066F20(__int64 a1)
{
	__int64* v1; // r14
	int v2; // edi
	__int64 v4; // rbp
	__int64 v5; // rax
	bool v6; // zf
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // r15
	__int64 v10; // rsi
	_QWORD* v11; // rax
	__int64 v12; // rdx
	__int64 v13; // r8
	int v14; // edx
	__int64 result; // rax
	int v16; // ecx
	__int64 v17; // [rsp+20h] [rbp-28h] BYREF
	int v18; // [rsp+28h] [rbp-20h]

	v1 = *(__int64**)(a1 + 48);
	v2 = 0;
	v4 = *v1;
	*(_BYTE*)(*v1 + 114) = 0;
	if (*(_DWORD*)(a1 + 16) != 41)
	{
		while (*(_DWORD*)(a1 + 16) != 279)
		{
			if (*(_DWORD*)(a1 + 16) != 285)
				sub_140062CF0(a1, aNameOrExpected, *(_DWORD*)(a1 + 16));
			v5 = sub_140065780(a1);
			sub_140065950(a1, v5, v2++);
			if (*(_BYTE*)(v4 + 114) || *(_DWORD*)(a1 + 16) != 44)
				goto LABEL_22;
			v6 = *(_DWORD*)(a1 + 32) == 287;
			*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
			if (v6)
			{
				*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
			}
			else
			{
				*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
				v7 = *(_QWORD*)(a1 + 40);
				*(_DWORD*)(a1 + 32) = 287;
				*(_QWORD*)(a1 + 24) = v7;
			}
		}
		v6 = *(_DWORD*)(a1 + 32) == 287;
		*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
		if (v6)
		{
			*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
		}
		else
		{
			*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
			v8 = *(_QWORD*)(a1 + 40);
			*(_DWORD*)(a1 + 32) = 287;
			*(_QWORD*)(a1 + 24) = v8;
		}
		v9 = *(_QWORD*)(a1 + 56);
		v10 = sub_140062650(v9, (unsigned __int64*)aArg, 3ui64);
		v11 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 8i64) + 32i64)
			+ 40
			* (*(int*)(v10 + 12) & (unsigned __int64)(int)((1i64 << *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 48)
				+ 8i64)
				+ 11i64))
				- 1)));
		while (*((_DWORD*)v11 + 6) != 4 || v11[2] != v10)
		{
			v11 = (_QWORD*)v11[4];
			if (!v11)
				goto LABEL_18;
		}
		if (v11 != (_QWORD*)dword_140A12138)
			goto LABEL_19;
	LABEL_18:
		v12 = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8i64);
		v17 = v10;
		v18 = 4;
		v11 = sub_14005C260(v9, v12, (int*)&v17);
	LABEL_19:
		if (!*((_DWORD*)v11 + 2))
		{
			*(_DWORD*)v11 = 1;
			*((_DWORD*)v11 + 2) = 1;
		}
		sub_140065950(a1, v10, v2++);
		*(_BYTE*)(v4 + 114) = 7;
	}
LABEL_22:
	v13 = *(_QWORD*)(a1 + 48);
	for (*(_BYTE*)(v13 + 74) += v2; v2; --v2)
		*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v13 + 48i64)
			+ 16i64 * *(unsigned __int16*)(v13 + 2 * (*(unsigned __int8*)(v13 + 74) - (__int64)v2) + 196)
			+ 8) = *(_DWORD*)(v13 + 48);
	*(_BYTE*)(v4 + 113) = *((_BYTE*)v1 + 74) - (*(_BYTE*)(v4 + 114) & 1);
	v14 = *((unsigned __int8*)v1 + 74);
	result = *(unsigned __int8*)(*v1 + 115);
	v16 = v14 + *((_DWORD*)v1 + 15);
	if (v16 > (int)result)
	{
		if (v16 >= 250)
			sub_140062CF0(v1[3], aFunctionOrExpr, *(_DWORD*)(v1[3] + 16));
		*(_BYTE*)(*v1 + 115) = v16;
	}
	*((_DWORD*)v1 + 15) += v14;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

