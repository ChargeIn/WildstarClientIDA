//----- (0000000140688C50) ----------------------------------------------------
__int64 __fastcall sub_140688C50(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	unsigned int v6; // eax
	__int64 v7; // rdx
	__int64 v8; // r8
	__int64 v9; // r9
	__int64 i; // rcx
	__int64 v11; // rbx
	__int64 v12; // rbx
	unsigned int v13; // esi
	__int64 v14; // rax
	__int64 v15; // rax
	__int64 v16; // r10
	_DWORD* v17; // rcx
	__int64 v18; // r8
	__int64 v19; // rdx
	__int64(__fastcall * *v21)(); // [rsp+20h] [rbp-28h] BYREF
	unsigned int v22; // [rsp+28h] [rbp-20h]
	_QWORD* v23; // [rsp+30h] [rbp-18h]
	int v24; // [rsp+38h] [rbp-10h]
	__int64 v25; // [rsp+50h] [rbp+8h]
	double v26; // [rsp+50h] [rbp+8h]

	v1 = (_QWORD*)a1;
	v23 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v21 = off_140B569F0;
	v3 = *(_QWORD*)(v2 + 112);
	v24 = 1;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0((__int64)v1);
	v4 = v1[2];
	v5 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	v1[2] += 16i64;
	v6 = sub_1400578C0((__int64)v1);
	v9 = v6;
	v22 = v6;
	if (!qword_140C65980)
		goto LABEL_12;
	v8 = *(_QWORD*)(qword_140C65980 + 16);
	v7 = v8;
	for (i = *(_QWORD*)(v8 + 8); i; i = *(_QWORD*)(i + 16))
		v7 = i;
	if (v7 == v8 || (v25 = v7, *(_DWORD*)(v7 + 32)))
		v25 = *(_QWORD*)(qword_140C65980 + 16);
	if (v25 != v8 && (v11 = *(_QWORD*)(v25 + 40)) != 0)
		v12 = *(_QWORD*)(v11 + 32);
	else
		LABEL_12:
	v12 = 0i64;
	if (v12)
	{
		while (1)
		{
			if ((*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, __int64(__fastcall**)()))(*(_QWORD*)v12 + 104i64))(
				v12,
				v7,
				v8,
				v9,
				v21)
				&& !*(_DWORD*)(v12 + 468))
			{
				v13 = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 32i64))(v12) + 36);
				if (qword_140C63840)
				{
					v14 = qword_140C63840(off_140A6B0F0, v13, qword_140C63858);
				}
				else
				{
					if (dword_140C64FBC || (int)sub_14020FAE0() < 0)
					{
					LABEL_23:
						v15 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 24i64))(v12);
						if ((unsigned int)sub_140432C80(v1, v15))
						{
							sub_1400FB470((__int64)&v21);
							v1 = v23;
							v23[2] -= 16i64;
						}
						goto LABEL_25;
					}
					v14 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C10 + 24i64))(qword_140C63C10, v13);
				}
				if (!v14 || (*(_BYTE*)(v14 + 12) & 8) == 0)
					goto LABEL_23;
			}
		LABEL_25:
			v12 = *(_QWORD*)(v12 + 16);
			if (!v12)
			{
				LODWORD(v9) = v22;
				break;
			}
		}
	}
	v16 = *(_QWORD*)(v1[4] + 160i64);
	if ((unsigned int)(v9 - 1) >= *(_DWORD*)(v16 + 56))
	{
		if ((double)(int)v9 == 0.0)
		{
			v17 = *(_DWORD**)(v16 + 32);
		}
		else
		{
			v26 = (double)(int)v9;
			v17 = (_DWORD*)(*(_QWORD*)(v16 + 32)
				+ 40 * ((unsigned int)(LODWORD(v26) + HIDWORD(v26)) % (((1i64 << *(_BYTE*)(v16 + 11)) - 1) | 1)));
		}
		while (v17[6] != 3 || (double)(int)v9 != *((double*)v17 + 2))
		{
			v17 = (_DWORD*)*((_QWORD*)v17 + 4);
			if (!v17)
			{
				v17 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v17 = (_DWORD*)(*(_QWORD*)(v16 + 24) + 16i64 * ((int)v9 - 1));
	}
	v18 = v1[2];
	*(_QWORD*)v18 = *(_QWORD*)v17;
	v19 = (unsigned int)v17[2];
	*(_DWORD*)(v18 + 8) = v19;
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v19, v9);
	return 1i64;
}
// 140688D36: variable 'v7' is possibly undefined
// 140688D36: variable 'v8' is possibly undefined
// 140688D36: variable 'v9' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6B0F0: using guessed type wchar_t *off_140A6B0F0[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C10: using guessed type __int64 qword_140C63C10;
// 140C64FBC: using guessed type int dword_140C64FBC;
// 140C65980: using guessed type __int64 qword_140C65980;

