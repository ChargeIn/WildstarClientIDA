//----- (00000001406F35E0) ----------------------------------------------------
__int64 __fastcall sub_1406F35E0(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned int v5; // eax
	__int64 v6; // rdx
	__int64 v7; // r8
	__int64 v8; // r9
	__int64 i; // rcx
	__int64 v10; // rbx
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // r10
	_DWORD* v16; // rcx
	__int64 v17; // r8
	__int64 v18; // rdx
	__int64(__fastcall * *v20)(); // [rsp+20h] [rbp-28h] BYREF
	unsigned int v21; // [rsp+28h] [rbp-20h]
	_QWORD* v22; // [rsp+30h] [rbp-18h]
	int v23; // [rsp+38h] [rbp-10h]
	__int64 v24; // [rsp+50h] [rbp+8h]
	double v25; // [rsp+50h] [rbp+8h]

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
	v8 = v5;
	v21 = v5;
	if (!qword_140C65980)
		goto LABEL_12;
	v7 = *(_QWORD*)(qword_140C65980 + 16);
	v6 = v7;
	for (i = *(_QWORD*)(v7 + 8); i; i = *(_QWORD*)(i + 16))
		v6 = i;
	if (v6 == v7 || (v24 = v6, *(_DWORD*)(v6 + 32)))
		v24 = *(_QWORD*)(qword_140C65980 + 16);
	if (v24 != v7 && (v10 = *(_QWORD*)(v24 + 40)) != 0)
		v11 = *(_QWORD*)(v10 + 32);
	else
		LABEL_12:
	v11 = 0i64;
	if (v11)
	{
		do
		{
			if ((*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, __int64(__fastcall**)()))(*(_QWORD*)v11 + 104i64))(
				v11,
				v6,
				v7,
				v8,
				v20))
			{
				if (!*(_DWORD*)(v11 + 468) && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v11 + 40i64))(v11) == 16)
				{
					v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 32i64))(v11);
					v13 = sub_14020FD40(*(_DWORD*)(v12 + 36));
					if (!v13 || (*(_BYTE*)(v13 + 12) & 8) == 0)
					{
						v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 24i64))(v11);
						if ((unsigned int)sub_140432C80(v1, v14))
						{
							sub_1400FB470((__int64)&v20);
							v1 = v22;
							v22[2] -= 16i64;
						}
					}
				}
			}
			v11 = *(_QWORD*)(v11 + 16);
		} while (v11);
		LODWORD(v8) = v21;
	}
	v15 = *(_QWORD*)(v1[4] + 160i64);
	if ((unsigned int)(v8 - 1) >= *(_DWORD*)(v15 + 56))
	{
		if ((double)(int)v8 == 0.0)
		{
			v16 = *(_DWORD**)(v15 + 32);
		}
		else
		{
			v25 = (double)(int)v8;
			v16 = (_DWORD*)(*(_QWORD*)(v15 + 32)
				+ 40 * ((unsigned int)(LODWORD(v25) + HIDWORD(v25)) % (((1i64 << *(_BYTE*)(v15 + 11)) - 1) | 1)));
		}
		while (v16[6] != 3 || (double)(int)v8 != *((double*)v16 + 2))
		{
			v16 = (_DWORD*)*((_QWORD*)v16 + 4);
			if (!v16)
			{
				v16 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v16 = (_DWORD*)(*(_QWORD*)(v15 + 24) + 16i64 * ((int)v8 - 1));
	}
	v17 = v1[2];
	*(_QWORD*)v17 = *(_QWORD*)v16;
	v18 = (unsigned int)v16[2];
	*(_DWORD*)(v17 + 8) = v18;
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v18, v8);
	return 1i64;
}
// 1406F36BA: variable 'v6' is possibly undefined
// 1406F36BA: variable 'v7' is possibly undefined
// 1406F36BA: variable 'v8' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65980: using guessed type __int64 qword_140C65980;

