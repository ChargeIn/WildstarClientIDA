#include "../winhttp.h"

//----- (0000000140689A50) ----------------------------------------------------
__int64 __fastcall sub_140689A50(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // esi
	__int64 v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // eax
	__int64 v9; // rax
	__int64 v10; // r14
	_QWORD* v11; // rbx
	__int64 v12; // rsi
	__int64 v13; // rax
	__int64 v14; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* v17; // rax
	__int64 v18; // rdx
	_QWORD* v19; // rax
	__int64 v20; // r8
	__int64(__fastcall * *v22)(); // [rsp+20h] [rbp-28h] BYREF
	int v23; // [rsp+28h] [rbp-20h]
	_QWORD* v24; // [rsp+30h] [rbp-18h]
	int v25; // [rsp+38h] [rbp-10h]

	v1 = (_QWORD*)a1;
	v24 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v22 = off_140B569F0;
	v25 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v23 = v5;
	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v6 = sub_140056AB0(v1, 1u)) != 0
		&& (v7 = *(_QWORD*)(v6 + 8)) != 0
		&& (v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v7 + 8) + 32i64))(*(_QWORD*)(v7 + 8)),
			v9 = sub_140498A40(qword_140C65980, v8, 0),
			(v10 = v9) != 0))
	{
		v11 = *(_QWORD**)(*(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 72i64))(v9) + 8) + 16i64);
		if (v11 != *(_QWORD**)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 72i64))(v10) + 8))
		{
			do
			{
				v12 = v11[5];
				if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v12 + 488i64))(v12))
				{
					v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 320i64))(v12);
					if ((unsigned int)sub_140432D60(v1, v13))
					{
						sub_1400FB470((__int64)&v22);
						v1 = v24;
						v24[2] -= 16i64;
					}
				}
				v14 = v11[3];
				if (v14)
				{
					v11 = (_QWORD*)v11[3];
					for (i = *(_QWORD**)(v14 + 16); i; i = (_QWORD*)i[2])
						v11 = i;
				}
				else
				{
					for (j = v11[1]; v11 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v11 = (_QWORD*)j;
					if (v11[3] != j)
						v11 = (_QWORD*)j;
				}
			} while (v11 != *(_QWORD**)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 72i64))(v10) + 8));
			v5 = v23;
		}
		v17 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v18 = v1[2];
		*(_QWORD*)v18 = *v17;
		*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
	}
	else
	{
		v19 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v20 = v1[2];
		*(_QWORD*)v20 = *v19;
		v18 = *((unsigned int*)v19 + 2);
		*(_DWORD*)(v20 + 8) = v18;
	}
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v18, v5);
	return 1i64;
}
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

