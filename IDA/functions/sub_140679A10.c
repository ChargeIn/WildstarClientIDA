#include "../winhttp.h"

//----- (0000000140679A10) ----------------------------------------------------
__int64 __fastcall sub_140679A10(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // esi
	__int64 v6; // rax
	__int64 v7; // rbp
	__int64 v8; // rbp
	_QWORD* v9; // rax
	_QWORD* v10; // rbx
	__int64 v11; // rsi
	__int64 v12; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* v15; // rax
	__int64 v16; // rdx
	_QWORD* v17; // rax
	__int64 v18; // r8
	__int64(__fastcall * *v20)(); // [rsp+20h] [rbp-28h] BYREF
	int v21; // [rsp+28h] [rbp-20h]
	_QWORD* v22; // [rsp+30h] [rbp-18h]
	int v23; // [rsp+38h] [rbp-10h]

	v1 = (_QWORD*)a1;
	v22 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v20 = off_140B569F0;
	v23 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v21 = v5;
	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v6 = sub_140056AB0(v1, 1u)) != 0
		&& (v7 = *(_QWORD*)(v6 + 8)) != 0
		&& (v8 = *(_QWORD*)(v7 + 8)) != 0)
	{
		v9 = *(_QWORD**)(v8 + 16);
		v10 = (_QWORD*)v9[2];
		if (v10 != v9)
		{
			do
			{
				v11 = v10[5];
				if ((unsigned int)sub_1403D7C30(v11, *(_QWORD*)(qword_140C65898 + 120), 1)
					&& (unsigned int)sub_140432AC0(v1, v11))
				{
					sub_1400FB470((__int64)&v20);
					v1 = v22;
					v22[2] -= 16i64;
				}
				v12 = v10[3];
				if (v12)
				{
					v10 = (_QWORD*)v10[3];
					for (i = *(_QWORD**)(v12 + 16); i; i = (_QWORD*)i[2])
						v10 = i;
				}
				else
				{
					for (j = v10[1]; v10 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v10 = (_QWORD*)j;
					if (v10[3] != j)
						v10 = (_QWORD*)j;
				}
			} while (v10 != *(_QWORD**)(v8 + 16));
			v5 = v21;
		}
		v15 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v16 = v1[2];
		*(_QWORD*)v16 = *v15;
		*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
	}
	else
	{
		v17 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v18 = v1[2];
		*(_QWORD*)v18 = *v17;
		v16 = *((unsigned int*)v17 + 2);
		*(_DWORD*)(v18 + 8) = v16;
	}
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v16, v5);
	return 1i64;
}
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

