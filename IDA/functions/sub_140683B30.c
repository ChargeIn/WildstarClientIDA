//----- (0000000140683B30) ----------------------------------------------------
__int64 __fastcall sub_140683B30(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // esi
	__int64 v6; // rax
	__int64 v7; // rax
	unsigned int* v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rbp
	__int64 v11; // rcx
	__int64 v12; // rbx
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 i; // rax
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
	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v6 = sub_140056AB0(v1, 1u)) != 0
		&& (v7 = *(_QWORD*)(v6 + 8)) != 0
		&& (v8 = *(unsigned int**)(v7 + 8)) != 0i64
		&& (v9 = sub_140617410((__int64)v8, *v8), (v10 = v9) != 0))
	{
		v11 = *(_QWORD*)(v9 + 48);
		v12 = *(_QWORD*)(v11 + 16);
		if (v12 != v11)
		{
			do
			{
				if (*(_DWORD*)(v12 + 36) == 1)
				{
					v13 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v12 + 32));
					if (v13)
					{
						if ((unsigned int)sub_140649930(v1, v13))
						{
							sub_1400FB470((__int64)&v22);
							v1 = v24;
							v24[2] -= 16i64;
						}
					}
				}
				v14 = *(_QWORD*)(v12 + 24);
				if (v14)
				{
					v12 = *(_QWORD*)(v12 + 24);
					for (i = *(_QWORD*)(v14 + 16); i; i = *(_QWORD*)(i + 16))
						v12 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v12 + 8); v12 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v12 = j;
					if (*(_QWORD*)(v12 + 24) != j)
						v12 = j;
				}
			} while (v12 != *(_QWORD*)(v10 + 48));
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
// 140C65970: using guessed type __int64 qword_140C65970;

