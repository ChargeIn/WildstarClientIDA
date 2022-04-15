//----- (0000000140546060) ----------------------------------------------------
char __fastcall sub_140546060(__int64 a1, int a2)
{
	__int64 v3; // rcx
	unsigned int v5; // r8d
	__int64 v6; // rax
	unsigned __int64 v7; // r15
	unsigned int v8; // edi
	__int64 v9; // rbp
	unsigned int v10; // eax
	unsigned int v11; // ecx
	int* v12; // rax
	_QWORD* v13; // r14
	int v14; // edx
	__int64 v15; // rdi
	int* v16; // rax
	int* v17; // rsi
	int* v18; // rdx
	__int64 v19; // rcx
	int* v20; // rsi
	int v21; // edx
	__int64 v22; // rdi
	int* v23; // rax
	int* v24; // r14
	int* v25; // rdx
	__int64 v26; // rcx
	int v28; // [rsp+20h] [rbp-48h] BYREF
	__int64 v29; // [rsp+28h] [rbp-40h]
	void* v30; // [rsp+30h] [rbp-38h]
	_QWORD* v31; // [rsp+38h] [rbp-30h]

	v3 = *(_QWORD*)(a1 + 312);
	if (!*(_QWORD*)(v3 + 80) && *(_DWORD*)(*(_QWORD*)(v3 + 112) + 24i64) != 3
		|| (v5 = *(_DWORD*)(a1 + 416), v5 <= 1)
		|| (v6 = *(_QWORD*)(v3 + 112), (*(_BYTE*)(v6 + 268) & 0x20) != 0)
		|| *(_DWORD*)(a1 + 400) < v5)
	{
		v7 = 84i64;
		while (1)
		{
			LOBYTE(v6) = (_BYTE)qword_140C63840;
			v8 = *(_DWORD*)(v7 + *(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64));
			if (qword_140C63840)
				break;
			if (!dword_140C64F14)
			{
				LODWORD(v6) = sub_140237420();
				if ((int)v6 >= 0)
				{
					v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A28 + 24i64))(qword_140C64A28, v8);
					goto LABEL_12;
				}
			}
		LABEL_34:
			v7 += 4i64;
			if (v7 >= 0x6C)
				return v6;
		}
		v6 = qword_140C63840(off_140A6D188, v8, qword_140C63858);
	LABEL_12:
		v9 = v6;
		if (v6 && *(_DWORD*)(v6 + 8) == a2)
		{
			if (*(_DWORD*)(v6 + 4) != 1)
			{
				v10 = *(_DWORD*)(v6 + 88);
				if (v10)
				{
					v11 = *(_DWORD*)(v9 + 84);
					if (v11)
					{
						if (v10 < v11)
						{
							v12 = sub_14018B280(80i64, 0);
							v13 = v12;
							if (v12)
							{
								*((_QWORD*)v12 + 3) = 0i64;
								*((_QWORD*)v12 + 4) = 0i64;
								*((_QWORD*)v12 + 6) = 0i64;
								*((_QWORD*)v12 + 7) = 0i64;
								v12[2] = 1414420037;
								v12[19] = 0;
							}
							else
							{
								v13 = 0i64;
							}
							*v13 = v9;
							v14 = *(_DWORD*)(v9 + 88);
							v28 = 1;
							v29 = a1;
							v30 = sub_140545FF0;
							v31 = v13;
							sub_140195960((__int64)(v13 + 1), v14, (__int64)&v28, 4);
							v15 = *(_QWORD*)(a1 + 472);
							v16 = sub_14018DB00(*(_QWORD*)(a1 + 464), v15 + 1, 8i64);
							v17 = v16;
							*(_QWORD*)&v16[2 * v15] = v13;
							v18 = *(int**)(a1 + 464);
							if (v18 != v16)
							{
								sub_1407DB590(v16, v18, 8i64 * *(_QWORD*)(a1 + 472));
								v19 = *(_QWORD*)(a1 + 464);
								if (v19)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
								*(_QWORD*)(a1 + 464) = v17;
							}
							*(_QWORD*)(a1 + 472) = v15 + 1;
							v20 = sub_14018B280(72i64, 0);
							if (v20)
							{
								*((_QWORD*)v20 + 2) = 0i64;
								*((_QWORD*)v20 + 3) = 0i64;
								*((_QWORD*)v20 + 5) = 0i64;
								*((_QWORD*)v20 + 6) = 0i64;
								*v20 = 1414420037;
								v20[17] = 0;
							}
							else
							{
								v20 = 0i64;
							}
							v21 = *(_DWORD*)(v9 + 84);
							v30 = sub_140546050;
							v28 = 1;
							v29 = a1;
							v31 = v13;
							sub_140195960((__int64)v20, v21, (__int64)&v28, 4);
							v22 = *(_QWORD*)(a1 + 488);
							v23 = sub_14018DB00(*(_QWORD*)(a1 + 480), v22 + 1, 8i64);
							v24 = v23;
							*(_QWORD*)&v23[2 * v22] = v20;
							v25 = *(int**)(a1 + 480);
							if (v25 != v23)
							{
								sub_1407DB590(v23, v25, 8i64 * *(_QWORD*)(a1 + 488));
								v26 = *(_QWORD*)(a1 + 480);
								if (v26)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(v26 - 16) + 8i64))(v26 - 16);
								*(_QWORD*)(a1 + 480) = v24;
							}
							*(_QWORD*)(a1 + 488) = v22 + 1;
						}
					}
				}
			}
			LOBYTE(v6) = sub_1405458E0(a1, v9);
		}
		goto LABEL_34;
	}
	return v6;
}
// 140A6D188: using guessed type wchar_t *off_140A6D188[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A28: using guessed type __int64 qword_140C64A28;
// 140C64F14: using guessed type int dword_140C64F14;

