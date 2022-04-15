//----- (000000014045A950) ----------------------------------------------------
__int64 __fastcall sub_14045A950(__int64 a1, int a2)
{
	__int64 v3; // r14
	__int64 v4; // rbp
	int v6; // eax
	__int64 v7; // rdi
	__int64 v8; // rax
	int v9; // ecx
	int v10; // eax
	__int64 v11; // rax
	int v12; // ecx
	__int64 v13; // rcx
	__int64 v14; // rbx
	unsigned int v15; // r12d
	__int64 v16; // r8
	__int64 v17; // r15
	int v18; // edx
	__int64 v19; // rax
	__int64 v20; // r9
	unsigned int v21; // edx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // rcx
	__int64 v26; // [rsp+60h] [rbp+18h]

	v3 = sub_1403D90D0(qword_140C65898, a2);
	v4 = v3;
	if (!v3)
		return 1i64;
	v6 = *(_DWORD*)(a1 + 128);
	v7 = a1;
	if (v6 == 20 || v6 == 23)
	{
		v8 = a1;
	}
	else
	{
		v8 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 688));
		if (!v8)
			goto LABEL_12;
		v9 = *(_DWORD*)(v8 + 128);
		if (v9 != 20 && v9 != 23)
			goto LABEL_12;
	}
	if (v8)
		v7 = v8;
LABEL_12:
	v10 = *(_DWORD*)(v3 + 128);
	if (v10 == 20 || v10 == 23)
	{
		v11 = v3;
	}
	else
	{
		v11 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v3 + 688));
		if (!v11)
			goto LABEL_20;
		v12 = *(_DWORD*)(v11 + 128);
		if (v12 != 20 && v12 != 23)
			goto LABEL_20;
	}
	v4 = v11;
LABEL_20:
	v13 = *(_QWORD*)(v4 + 280);
	v14 = 0i64;
	if (v13)
		v15 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 24i64))(v13);
	else
		v15 = 0;
	v16 = qword_140C65898;
	v17 = *(_QWORD*)(qword_140C65898 + 120);
	if ((v17 == v4 || v17 == v7) && *(_DWORD*)(qword_140C65898 + 28388) == 3)
	{
		v18 = *(_DWORD*)(qword_140C65898 + 28384);
		if (v18)
		{
			v19 = sub_1403D90D0(qword_140C65898, v18);
			v16 = qword_140C65898;
			v14 = v19;
		}
		if (v14 == v4 || v14 == v7)
			return 0i64;
	}
	v20 = *(_QWORD*)(v3 + 336);
	v21 = *(_DWORD*)(a1 + 8);
	v22 = *(_QWORD*)(v20 + 8);
	v23 = v20;
	while (v22)
	{
		if (*(_DWORD*)(v22 + 32) < v21)
		{
			v22 = *(_QWORD*)(v22 + 24);
		}
		else
		{
			v23 = v22;
			v22 = *(_QWORD*)(v22 + 16);
		}
	}
	if (v23 == v20 || (v26 = v23, v21 < *(_DWORD*)(v23 + 32)))
		v26 = *(_QWORD*)(v3 + 336);
	if (v26 != v20 && *(_DWORD*)(v26 + 36))
		return 0i64;
	v24 = *(_QWORD*)(v16 + 120);
	if (!v24 || !sub_1403B48B0(v24) || v17 != v7 || (v25 = *(_QWORD*)(v7 + 280)) == 0)
	{
		if (!*(_QWORD*)(a1 + 280))
			return 1i64;
		if (v17 == a1
			&& qword_140C65B70
			&& (*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65B70 + 72i64))(
				qword_140C65B70,
				*(unsigned int*)(v17 + 8),
				*(unsigned int*)(v4 + 8)))
		{
			return 2i64;
		}
		v25 = *(_QWORD*)(a1 + 280);
	}
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v25 + 48i64))(v25, v15);
}
// 14045AA15: conditional instruction was optimized away because rax.8!=0
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

