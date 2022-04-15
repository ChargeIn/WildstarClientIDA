//----- (00000001405ADA30) ----------------------------------------------------
void __fastcall sub_1405ADA30(__int64 a1, __int64 a2)
{
	_QWORD* v4; // r14
	unsigned int v5; // eax
	int v6; // ebx
	__int64 v7; // rax
	unsigned __int64 v8; // kr00_8
	bool v9; // cf
	__int64 v10; // rax
	int* v11; // rax
	int v12; // ecx
	unsigned int v13; // ebx
	int* v14; // rdx
	int* v15; // rax
	bool v16; // zf
	int* v17; // rax
	__int64 v18; // rdx
	__int64 v19; // rdi
	int* v20; // rdx
	unsigned int v21; // esi
	__int64 v22; // rax
	__int64 v23; // rsi
	__int64 v24; // r15
	int* v25; // [rsp+50h] [rbp+8h] BYREF
	FILETIME v26; // [rsp+60h] [rbp+18h] BYREF

	if (!*(_QWORD*)(a1 + 232))
	{
		v4 = (_QWORD*)(a1 + 240);
		if (((*(_QWORD*)(a1 + 256) - *(_QWORD*)(a1 + 248)) & 0xFFFFFFFFFFFFFFF8ui64) == 0)
		{
			v5 = *(_DWORD*)a2;
			*(_DWORD*)(a1 + 272) = *(_DWORD*)a2;
			v6 = v5;
			v8 = v5;
			v7 = 192i64 * v5;
			if (!is_mul_ok(v8, 0xC0ui64))
				v7 = -1i64;
			v9 = __CFADD__(v7, 8i64);
			v10 = v7 + 8;
			if (v9)
				v10 = -1i64;
			v11 = sub_14018B280(v10, 0);
			if (v11)
			{
				v12 = v6 - 1;
				*v11 = v6;
				v13 = 0;
				v14 = v11 + 2;
				if (v12 >= 0)
				{
					v15 = v11 + 42;
					do
					{
						--v12;
						*((_QWORD*)v15 - 12) = 0i64;
						*((_QWORD*)v15 - 11) = 0i64;
						*((_QWORD*)v15 - 10) = 0i64;
						*((_QWORD*)v15 - 9) = 0i64;
						*((_QWORD*)v15 - 8) = 0i64;
						*((_QWORD*)v15 - 7) = 0i64;
						*((_QWORD*)v15 - 4) = 0i64;
						*((_QWORD*)v15 - 3) = 0i64;
						*((_QWORD*)v15 - 1) = 0i64;
						*(_QWORD*)v15 = 0i64;
						*(v15 - 12) = 1414420037;
						*(_QWORD*)(v15 + 5) = 0i64;
						v15[7] = 0;
						v15 += 48;
					} while (v12 >= 0);
				}
			}
			else
			{
				v13 = 0;
				v14 = 0i64;
			}
			v16 = *(_DWORD*)(a1 + 272) == 0;
			*(_QWORD*)(a1 + 232) = v14;
			if (!v16)
			{
				while (1)
				{
					v17 = sub_14018B280(80i64, 0);
					v18 = *(_QWORD*)(a2 + 8);
					v19 = (__int64)v17;
					v25 = v17;
					*v17 = *(_DWORD*)(v18 + 80i64 * v13);
					v17[1] = *(_DWORD*)(v18 + 80i64 * v13 + 4);
					v17[2] = *(_DWORD*)(v18 + 80i64 * v13 + 8);
					v17[3] = *(_DWORD*)(v18 + 80i64 * v13 + 12);
					v17[4] = *(_DWORD*)(v18 + 80i64 * v13 + 16);
					v17[5] = *(_DWORD*)(v18 + 80i64 * v13 + 20);
					v17[6] = *(_DWORD*)(v18 + 80i64 * v13 + 24);
					v17[7] = *(_DWORD*)(v18 + 80i64 * v13 + 28);
					v17[8] = *(_DWORD*)(v18 + 80i64 * v13 + 32);
					v17[9] = *(_DWORD*)(v18 + 80i64 * v13 + 36);
					v17[10] = *(_DWORD*)(v18 + 80i64 * v13 + 40);
					v17[11] = *(_DWORD*)(v18 + 80i64 * v13 + 44);
					v17[12] = *(_DWORD*)(v18 + 80i64 * v13 + 48);
					v17[13] = *(_DWORD*)(v18 + 80i64 * v13 + 52);
					v17[14] = *(_DWORD*)(v18 + 80i64 * v13 + 56);
					v17[15] = *(_DWORD*)(v18 + 80i64 * v13 + 60);
					v17[16] = *(_DWORD*)(v18 + 80i64 * v13 + 64);
					v17[17] = *(_DWORD*)(v18 + 80i64 * v13 + 68);
					v17[18] = *(_DWORD*)(v18 + 80i64 * v13 + 72);
					v17[19] = *(_DWORD*)(v18 + 80i64 * v13 + 76);
					v20 = (int*)v4[2];
					if (v20 == (int*)v4[3])
					{
						sub_14010A1C0(v4, v20, &v25);
						v19 = (__int64)v25;
					}
					else
					{
						if (v20)
							*(_QWORD*)v20 = v17;
						v4[2] += 8i64;
					}
					v21 = *(_DWORD*)(v19 + 12);
					if (qword_140C63840)
						break;
					if (!dword_140C65340 && (int)sub_140205D40() >= 0)
					{
						v22 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C30 + 24i64))(
							qword_140C63C30,
							v21);
					LABEL_24:
						if (v22)
						{
							v23 = 192i64 * v13;
							*(_DWORD*)(v23 + *(_QWORD*)(a1 + 232)) = v13;
							*(_DWORD*)(v23 + *(_QWORD*)(a1 + 232) + 8) = *(_DWORD*)(v19 + 12);
							*(_DWORD*)(v23 + *(_QWORD*)(a1 + 232) + 4) = *(_DWORD*)(v22 + 4);
							v24 = v23 + *(_QWORD*)(a1 + 232) + 16i64;
							if (v24 && (int)sub_1401E82F0((__int64*)&v26, *(float*)(v19 + 60)) >= 0)
								sub_1401E8230(v24, v26);
							sub_1405A9D10(v23 + *(_QWORD*)(a1 + 232), *(float*)(v19 + 76), *(float*)(v19 + 72));
							if (*(_DWORD*)(v19 + 4))
								sub_1405A9920((_DWORD*)(v23 + *(_QWORD*)(a1 + 232)));
							*(_DWORD*)(v23 + *(_QWORD*)(a1 + 232) + 12) = *(_DWORD*)(v19 + 4);
						}
					}
					if (++v13 >= *(_DWORD*)(a1 + 272))
						return;
				}
				v22 = qword_140C63840(off_140A6A8D8, v21, qword_140C63858);
				goto LABEL_24;
			}
		}
	}
}
// 140A6A8D8: using guessed type wchar_t *off_140A6A8D8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C30: using guessed type __int64 qword_140C63C30;
// 140C65340: using guessed type int dword_140C65340;

