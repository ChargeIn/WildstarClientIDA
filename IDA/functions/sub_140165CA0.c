//----- (0000000140165CA0) ----------------------------------------------------
__int64 __fastcall sub_140165CA0(_QWORD* a1)
{
	_DWORD* v2; // rax
	_DWORD* v3; // rcx
	__int64 v4; // r14
	int v5; // edx
	int v6; // r12d
	int v7; // r13d
	int v8; // r15d
	int v9; // ebp
	int v10; // esi
	int v11; // ebx
	__int64 v12; // rax
	__int64 v13; // rdx
	int v14; // ecx
	__int64 v15; // r9
	_DWORD* v16; // rdx
	__int64 v17; // rcx
	int v18; // eax
	_DWORD* v19; // rdx
	unsigned __int64 v20; // rcx
	_DWORD* v21; // r8
	BOOL v22; // eax
	int v23; // ecx
	int v24; // eax
	int v25; // ecx
	int v26; // eax
	bool v27; // zf
	__int64 v29; // [rsp+20h] [rbp-78h]
	__int64 v30; // [rsp+28h] [rbp-70h]
	__int64 v31; // [rsp+30h] [rbp-68h]
	double v32; // [rsp+A8h] [rbp+10h] BYREF
	BOOL v33; // [rsp+B0h] [rbp+18h]

	v2 = (_DWORD*)sub_1401657E0(a1);
	v3 = dword_140A12138;
	v4 = (__int64)v2;
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v3 = (_DWORD*)(a1[3] + 32i64);
	v5 = v3[2];
	v33 = v5 && (v5 != 1 || *v3);
	v6 = v2[258];
	v7 = v2[259];
	(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v2 + 432i64))(v2);
	v8 = *(_DWORD*)(v4 + 1160);
	v9 = 0;
	if (v8 > 0)
	{
		while (1)
		{
			v10 = *(_DWORD*)(v4 + 1144);
			v11 = 0;
			if (v10 > 0)
				break;
		LABEL_37:
			if (++v9 >= v8)
				return 0i64;
		}
		while (1)
		{
			if (v11 >= 0 && v11 < *(_DWORD*)(v4 + 1144) && v9 >= 0 && v9 < *(_DWORD*)(v4 + 1160))
			{
				v12 = *(_QWORD*)(*(_QWORD*)(v4 + 1152) + 8i64 * v9);
				v13 = v11 >= *(_DWORD*)(v12 + 24) ? 0i64 : *(_QWORD*)(*(_QWORD*)(v12 + 16) + 8i64 * v11);
				if (v13)
				{
					v14 = *(_DWORD*)(v13 + 176);
					v15 = *(_QWORD*)(a1[4] + 160i64);
					if ((unsigned int)(v14 - 1) >= *(_DWORD*)(v15 + 56))
					{
						v32 = (double)v14;
						v16 = (double)v14 == 0.0
							? *(_DWORD**)(v15 + 32)
							: (_DWORD*)(*(_QWORD*)(v15 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v32) + HIDWORD(v32)) % (((1i64 << *(_BYTE*)(v15 + 11)) - 1) | 1)));
						while (v16[6] != 3 || (double)v14 != *((double*)v16 + 2))
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
						v16 = (_DWORD*)(*(_QWORD*)(v15 + 24) + 16i64 * (v14 - 1));
					}
					v17 = a1[2];
					*(_QWORD*)v17 = *(_QWORD*)v16;
					v18 = v16[2];
					v19 = dword_140A12138;
					*(_DWORD*)(v17 + 8) = v18;
					a1[2] += 16i64;
					v20 = a1[2];
					v21 = (_DWORD*)(v20 - 16);
					if (a1[3] + 16i64 < v20)
						v19 = (_DWORD*)(a1[3] + 16i64);
					v22 = v19 != dword_140A12138
						&& v21 != dword_140A12138
						&& v19[2] == v21[2]
						&& (unsigned int)sub_14005F0D0((__int64)a1, v19, v21);
					a1[2] -= 16i64;
					if (v22)
						break;
				}
			}
			if (++v11 >= v10)
				goto LABEL_37;
		}
		LODWORD(v32) = 1;
		sub_1400D4070(v4, 0x2Cu, (char*)v4, "iiiii>b", v9 + 1, v11 + 1, v6 + 1, v7 + 1, -1, &v32);
		if (LODWORD(v32))
		{
			v23 = *(_DWORD*)(v4 + 1160) - 1;
			if (v9 < v23)
				v23 = v9;
			v24 = -1;
			if (v23 > -1)
				v24 = v23;
			v25 = *(_DWORD*)(v4 + 1144) - 1;
			*(_DWORD*)(v4 + 1032) = v24;
			*(_DWORD*)(v4 + 1040) = v24;
			if (v11 < v25)
				v25 = v11;
			v26 = -1;
			if (v25 > -1)
				v26 = v25;
			v27 = !v33;
			*(_DWORD*)(v4 + 1036) = v26;
			*(_DWORD*)(v4 + 1044) = v26;
			if (!v27 && v6 != v9 && v7 != v11)
			{
				LODWORD(v31) = -1;
				LODWORD(v30) = v11 + 1;
				LODWORD(v29) = v9 + 1;
				sub_1400D4070(v4, 0x2Du, (char*)v4, byte_1409DCA2C, v29, v30, v31);
			}
		}
	}
	return 0i64;
}
// 140165FA5: variable 'v29' is possibly undefined
// 140165FA5: variable 'v30' is possibly undefined
// 140165FA5: variable 'v31' is possibly undefined
// 1409DCA2C: using guessed type _BYTE byte_1409DCA2C[112];
// 140A12138: using guessed type _DWORD dword_140A12138[4];

