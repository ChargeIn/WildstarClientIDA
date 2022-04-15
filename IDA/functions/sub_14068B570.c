#include "../winhttp.h"

//----- (000000014068B570) ----------------------------------------------------
__int64 __fastcall sub_14068B570(_QWORD* a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // rax
	__int64 v6; // rsi
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // r10d
	__int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rax
	__int64 i; // rax
	__int64 j; // rax
	_QWORD* v17; // rax
	__int64 v18; // r8
	__int64 v19; // rdx
	int v20; // r10d
	__int64(__fastcall * *v22)(); // [rsp+20h] [rbp-28h] BYREF
	int v23; // [rsp+28h] [rbp-20h]
	_QWORD* v24; // [rsp+30h] [rbp-18h]
	int v25; // [rsp+38h] [rbp-10h]

	v1 = a1;
	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 8) + 32i64))(*(_QWORD*)(v3 + 8)),
			v5 = sub_140498A40(qword_140C65980, v4, 0),
			(v6 = v5) != 0)
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 104i64))(v5))
	{
		v7 = v1[4];
		v22 = off_140B569F0;
		v8 = *(_QWORD*)(v7 + 112);
		v24 = v1;
		v25 = 1;
		if (*(_QWORD*)(v7 + 120) >= v8)
			sub_14005E2C0((__int64)v1);
		v9 = v1[2];
		v10 = sub_14005C1B0((__int64)v1, 0, 0);
		*(_DWORD*)(v9 + 8) = 5;
		*(_QWORD*)v9 = v10;
		v1[2] += 16i64;
		v11 = sub_1400578C0((__int64)v1);
		v23 = v11;
		v12 = *(_QWORD*)(v6 + 208);
		v13 = *(_QWORD*)(v12 + 16);
		if (v13 != v12)
		{
			do
			{
				if ((unsigned int)sub_140649870(v1, *(_DWORD*)(v13 + 32)))
				{
					sub_1400FB470((__int64)&v22);
					v1 = v24;
					v24[2] -= 16i64;
				}
				v14 = *(_QWORD*)(v13 + 24);
				if (v14)
				{
					v13 = *(_QWORD*)(v13 + 24);
					for (i = *(_QWORD*)(v14 + 16); i; i = *(_QWORD*)(i + 16))
						v13 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v13 + 8); v13 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v13 = j;
					if (*(_QWORD*)(v13 + 24) != j)
						v13 = j;
				}
			} while (v13 != *(_QWORD*)(v6 + 208));
			v11 = v23;
		}
		v17 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v11);
		v18 = v1[2];
		*(_QWORD*)v18 = *v17;
		v19 = *((unsigned int*)v17 + 2);
		*(_DWORD*)(v18 + 8) = v19;
		v1[2] += 16i64;
		sub_1400579E0((__int64)v1, v19, v20);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(v1[2] + 8i64) = 0;
		v1[2] += 16i64;
		return 1i64;
	}
}
// 14068B712: variable 'v20' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

