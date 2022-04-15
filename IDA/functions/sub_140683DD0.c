//----- (0000000140683DD0) ----------------------------------------------------
__int64 __fastcall sub_140683DD0(__int64 a1)
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
	_DWORD* v10; // r8
	__int64 v11; // rbx
	__int64 v12; // rbp
	__int64 v13; // rax
	__int64 v14; // rcx
	unsigned int v15; // esi
	__int64 v16; // rax
	__int64 v17; // rax
	__int64 i; // rax
	__int64 j; // rax
	_QWORD* v20; // rax
	__int64 v21; // rdx
	_QWORD* v22; // rax
	__int64 v23; // r8
	__int64(__fastcall * *v25)(); // [rsp+20h] [rbp-28h] BYREF
	int v26; // [rsp+28h] [rbp-20h]
	_QWORD* v27; // [rsp+30h] [rbp-18h]
	int v28; // [rsp+38h] [rbp-10h]

	v1 = (_QWORD*)a1;
	v27 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v25 = off_140B569F0;
	v28 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v26 = v5;
	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v6 = sub_140056AB0(v1, 1u)) != 0
		&& (v7 = *(_QWORD*)(v6 + 8)) != 0
		&& (v8 = *(unsigned int**)(v7 + 8)) != 0i64
		&& (v9 = sub_140617410((__int64)v8, *v8)) != 0)
	{
		v10 = *(_DWORD**)(v9 + 152);
		v11 = *(_QWORD*)(qword_140C65958 + 8);
		v12 = v11;
		v13 = *(_QWORD*)(v11 + 8);
		v14 = v13;
		if (v13)
		{
			do
			{
				if (*v10 >= *(_DWORD*)(v14 + 32))
				{
					v14 = *(_QWORD*)(v14 + 24);
				}
				else
				{
					v12 = v14;
					v14 = *(_QWORD*)(v14 + 16);
				}
			} while (v14);
			do
			{
				if (*(_DWORD*)(v13 + 32) < *v10)
				{
					v13 = *(_QWORD*)(v13 + 24);
				}
				else
				{
					v11 = v13;
					v13 = *(_QWORD*)(v13 + 16);
				}
			} while (v13);
		}
		if (v11 != v12)
		{
			while (1)
			{
				v15 = *(_DWORD*)(v11 + 36);
				if (qword_140C63840)
					break;
				if (!dword_140C64284 && (int)sub_140224660() >= 0)
				{
					v16 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B28 + 24i64))(qword_140C63B28, v15);
					goto LABEL_24;
				}
			LABEL_27:
				v17 = *(_QWORD*)(v11 + 24);
				if (v17)
				{
					v11 = *(_QWORD*)(v11 + 24);
					for (i = *(_QWORD*)(v17 + 16); i; i = *(_QWORD*)(i + 16))
						v11 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v11 + 8); v11 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v11 = j;
					if (*(_QWORD*)(v11 + 24) != j)
						v11 = j;
				}
				if (v11 == v12)
				{
					v5 = v26;
					goto LABEL_37;
				}
			}
			v16 = qword_140C63840(off_140A6C200, v15, qword_140C63858);
		LABEL_24:
			if (v16 && (unsigned int)sub_140684BF0(v1, v16))
			{
				sub_1400FB470((__int64)&v25);
				v1 = v27;
				v27[2] -= 16i64;
			}
			goto LABEL_27;
		}
	LABEL_37:
		v20 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v21 = v1[2];
		*(_QWORD*)v21 = *v20;
		*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
	}
	else
	{
		v22 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v23 = v1[2];
		*(_QWORD*)v23 = *v22;
		v21 = *((unsigned int*)v22 + 2);
		*(_DWORD*)(v23 + 8) = v21;
	}
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v21, v5);
	return 1i64;
}
// 140683EEA: conditional instruction was optimized away because rax.8!=0
// 140A6C200: using guessed type wchar_t *off_140A6C200[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B28: using guessed type __int64 qword_140C63B28;
// 140C64284: using guessed type int dword_140C64284;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65958: using guessed type __int64 qword_140C65958;
// 140C65970: using guessed type __int64 qword_140C65970;

