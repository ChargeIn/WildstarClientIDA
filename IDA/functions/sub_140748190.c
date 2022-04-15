#include "../winhttp.h"

//----- (0000000140748190) ----------------------------------------------------
__int64 __fastcall sub_140748190(__int64 a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rbx
	unsigned int v8; // eax
	_DWORD* v9; // rdx
	unsigned int v10; // r14d
	__int64 v11; // rax
	unsigned __int64 v12; // rcx
	int v13; // eax
	BOOL v14; // eax
	BOOL v15; // ebp
	unsigned int v16; // r15d
	__int64 v17; // rax
	__int64 v18; // rbx
	_DWORD* v19; // rcx
	BOOL v21; // eax
	__int64 v22; // r11
	_DWORD* v23; // rax
	_DWORD* v24; // rax
	unsigned int v25; // [rsp+48h] [rbp+10h] BYREF
	BOOL v26; // [rsp+4Ch] [rbp+14h]

	if (!*(_QWORD*)(qword_140C65898 + 120) || (v2 = *(_QWORD*)(qword_140C65898 + 25744)) != 0 && *(_DWORD*)(v2 + 684))
	{
		v24 = *(_DWORD**)(a1 + 16);
		*v24 = 0;
		v24[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_8;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_8:
		v7 = 0i64;
	}
	v8 = sub_1400F26A0(v7 + 384, 1);
	v9 = dword_140A12138;
	v10 = v8;
	v11 = *(_QWORD*)(v7 + 400);
	v12 = *(_QWORD*)(v11 + 24) + 16i64;
	if (v12 < *(_QWORD*)(v11 + 16))
		v9 = (_DWORD*)(*(_QWORD*)(v11 + 24) + 16i64);
	v13 = v9[2];
	v14 = v13 && (v13 != 1 || *v9);
	v15 = v14;
	v16 = sub_1407A1440(v12, v10, 1u);
	v17 = sub_1403ACD90(qword_140C65B70, v16, *(_QWORD*)(qword_140C65898 + 120));
	v18 = v17;
	if (v17)
	{
		if ((unsigned int)sub_1404823C0(v17))
		{
			v21 = sub_1403BB170(qword_140C65898, v10);
			if (v15)
			{
				if (v21)
					goto LABEL_26;
				if (!(unsigned int)sub_1403BB040(v22, v16))
					goto LABEL_26;
				v22 = qword_140C65898;
				if ((unsigned __int64)*(unsigned int*)(*(_QWORD*)(v18 + 112) + 400i64) > *(_QWORD*)(qword_140C65898 + 5624))
					goto LABEL_26;
			LABEL_28:
				v25 = v10;
				v26 = v15;
				sub_1403F4900(v22, 0x17Au, (__int64)&v25);
				return 0i64;
			}
			if (v21)
				goto LABEL_28;
		}
	LABEL_26:
		v23 = *(_DWORD**)(a1 + 16);
		*v23 = 0;
		v23[2] = 1;
		goto LABEL_19;
	}
	v19 = *(_DWORD**)(a1 + 16);
	*v19 = 0;
	v19[2] = 1;
LABEL_19:
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140748303: variable 'v22' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

