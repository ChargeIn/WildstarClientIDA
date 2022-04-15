//----- (0000000140279030) ----------------------------------------------------
void __fastcall sub_140279030(__int64 a1)
{
	unsigned __int64 v2; // r15
	_QWORD* v3; // rbx
	__int64 v4; // rdx
	BOOL v5; // eax
	__int64* v6; // rbx
	__int64 v7; // rcx
	bool v8; // zf
	_QWORD* v9; // rsi
	unsigned __int64 v10; // r15
	_QWORD* v11; // rbx
	unsigned __int64 v12; // r12
	int** v13; // r15
	int* v14; // rax
	int* v15; // rbx
	int* v16; // rcx
	__int64* v17; // rbx
	__int64 v18; // rcx
	__int64 v19; // rdx
	__int128* v20; // rbx
	_QWORD* v21; // r14
	unsigned __int64 v22; // r15
	_QWORD* v23; // rsi
	unsigned __int64 v24; // r15
	int** v25; // r12
	int* v26; // rax
	int* v27; // rsi
	int* v28; // rcx
	_QWORD* v29; // r9
	__int64 v30; // rax
	__int128 v31; // xmm0
	__int64* v32; // rsi
	__int64 v33; // rcx
	__int64 v34; // rdx
	__int64 v35; // [rsp+50h] [rbp+30h] BYREF

	if ((*(_BYTE*)(a1 + 7176) & 1) != 0)
	{
		v35 = 0i64;
		v2 = (*(__int64(__fastcall**)(__int64))(a1 + 7248))(a1 + 7180);
		v3 = *(_QWORD**)(*(_QWORD*)(a1 + 7240) + 8 * (v2 % *(_QWORD*)(a1 + 7232)));
		if (!v3)
			goto LABEL_6;
		while (v2 != *v3 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 7256))(a1 + 7180, v3 + 2))
		{
			v3 = (_QWORD*)v3[1];
			if (!v3)
				goto LABEL_6;
		}
		v6 = v3 + 7;
		if (v6)
		{
			v7 = *v6;
			v4 = v35;
			if (v35 != *v6)
			{
				if (v7)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
					v4 = v35;
				}
				if (v4)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
				v4 = *v6;
				v35 = *v6;
			}
		}
		else
		{
		LABEL_6:
			if ((*(int(__fastcall**)(_QWORD, __int64, __int64*))(**(_QWORD**)(a1 + 6336) + 176i64))(
				*(_QWORD*)(a1 + 6336),
				a1 + 7180,
				&v35) >= 0)
				sub_140282490(a1 + 7224, (int*)(a1 + 7180), &v35);
			v4 = v35;
		}
		if (v4)
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6352) + 344i64))(*(_QWORD*)(a1 + 6352));
			if (v35)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 16i64))(v35);
		}
	}
	if ((*(_BYTE*)(a1 + 7176) & 2) != 0)
	{
		v5 = *(_DWORD*)(a1 + 7280) || *(_DWORD*)(a1 + 7284) != 8;
		v8 = *(_DWORD*)(a1 + 7288) == 1;
		*(_DWORD*)(a1 + 7276) = v5;
		if (v8)
		{
			*(_DWORD*)(a1 + 7312) = *(_DWORD*)(a1 + 7296);
			*(_DWORD*)(a1 + 7316) = *(_DWORD*)(a1 + 7300);
			*(_DWORD*)(a1 + 7320) = *(_DWORD*)(a1 + 7304);
			*(_DWORD*)(a1 + 7324) = *(_DWORD*)(a1 + 7308);
		}
		v9 = (_QWORD*)(a1 + 7328);
		v35 = 0i64;
		v10 = (*(__int64(__fastcall**)(__int64))(a1 + 7352))(a1 + 7276);
		v11 = *(_QWORD**)(*(_QWORD*)(a1 + 7344) + 8 * (v10 % *(_QWORD*)(a1 + 7336)));
		if (!v11)
			goto LABEL_30;
		while (v10 != *v11 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 7360))(a1 + 7276, v11 + 2))
		{
			v11 = (_QWORD*)v11[1];
			if (!v11)
				goto LABEL_30;
		}
		v17 = v11 + 9;
		if (v17)
		{
			v18 = *v17;
			v19 = v35;
			if (v35 != *v17)
			{
				if (v18)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
					v19 = v35;
				}
				if (v19)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 16i64))(v19);
				v19 = *v17;
				v35 = *v17;
			}
		}
		else
		{
		LABEL_30:
			if ((*(int(__fastcall**)(_QWORD, __int64, __int64*))(**(_QWORD**)(a1 + 6336) + 168i64))(
				*(_QWORD*)(a1 + 6336),
				a1 + 7276,
				&v35) >= 0)
			{
				if (*v9 == *(_QWORD*)(a1 + 7336))
					sub_1400290D0(a1 + 7328);
				v12 = (*(__int64(__fastcall**)(__int64))(a1 + 7352))(a1 + 7276);
				v13 = (int**)(*(_QWORD*)(a1 + 7344) + 8 * (v12 % *(_QWORD*)(a1 + 7336)));
				v14 = sub_14018B280(80i64, 0);
				v15 = v14;
				if (v14)
				{
					v16 = *v13;
					*(_QWORD*)v14 = v12;
					*((_QWORD*)v14 + 1) = v16;
					v14[4] = *(_DWORD*)(a1 + 7276);
					v14[5] = *(_DWORD*)(a1 + 7280);
					v14[6] = *(_DWORD*)(a1 + 7284);
					v14[7] = *(_DWORD*)(a1 + 7288);
					v14[8] = *(_DWORD*)(a1 + 7292);
					v14[9] = *(_DWORD*)(a1 + 7296);
					v14[10] = *(_DWORD*)(a1 + 7300);
					v14[11] = *(_DWORD*)(a1 + 7304);
					v14[12] = *(_DWORD*)(a1 + 7308);
					v14[13] = *(_DWORD*)(a1 + 7312);
					v14[14] = *(_DWORD*)(a1 + 7316);
					v14[15] = *(_DWORD*)(a1 + 7320);
					v14[16] = *(_DWORD*)(a1 + 7324);
					*((_QWORD*)v14 + 9) = v35;
					if (v35)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 8i64))(v35);
				}
				else
				{
					v15 = 0i64;
				}
				*v13 = v15;
				++* v9;
			}
			v19 = v35;
		}
		if (v19)
		{
			(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6352) + 288i64))(
				*(_QWORD*)(a1 + 6352),
				v19,
				*(unsigned int*)(a1 + 7272));
			if (v35)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 16i64))(v35);
		}
	}
	if ((*(_BYTE*)(a1 + 7176) & 4) != 0)
	{
		v20 = (__int128*)(a1 + 7400);
		v21 = (_QWORD*)(a1 + 7664);
		v35 = 0i64;
		v22 = (*(__int64(__fastcall**)(__int64))(a1 + 7688))(a1 + 7400);
		v23 = *(_QWORD**)(*(_QWORD*)(a1 + 7680) + 8 * (v22 % *(_QWORD*)(a1 + 7672)));
		if (!v23)
			goto LABEL_54;
		while (v22 != *v23 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 7696))(a1 + 7400, v23 + 2))
		{
			v23 = (_QWORD*)v23[1];
			if (!v23)
				goto LABEL_54;
		}
		v32 = v23 + 35;
		if (v32)
		{
			v33 = *v32;
			v34 = v35;
			if (v35 != *v32)
			{
				if (v33)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v33 + 8i64))(v33);
					v34 = v35;
				}
				if (v34)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v34 + 16i64))(v34);
				v34 = *v32;
				v35 = *v32;
			}
		}
		else
		{
		LABEL_54:
			if ((*(int(__fastcall**)(_QWORD, __int64, __int64*))(**(_QWORD**)(a1 + 6336) + 160i64))(
				*(_QWORD*)(a1 + 6336),
				a1 + 7400,
				&v35) >= 0)
			{
				if (*v21 == *(_QWORD*)(a1 + 7672))
					sub_1400290D0(a1 + 7664);
				v24 = (*(__int64(__fastcall**)(__int64))(a1 + 7688))(a1 + 7400);
				v25 = (int**)(*(_QWORD*)(a1 + 7680) + 8 * (v24 % *(_QWORD*)(a1 + 7672)));
				v26 = sub_14018B280(288i64, 0);
				v27 = v26;
				if (v26)
				{
					v28 = *v25;
					v29 = v26 + 4;
					*(_QWORD*)v26 = v24;
					*((_QWORD*)v26 + 1) = v28;
					if ((((unsigned __int8)((_BYTE)v26 + 16) | (unsigned __int8)(a1 - 24)) & 0xF) != 0)
					{
						sub_1407DB590(v26 + 4, (int*)(a1 + 7400), 0x108ui64);
					}
					else
					{
						v30 = (((unsigned __int8)((_BYTE)v26 + 16) | (unsigned __int8)(a1 - 24)) & 0xFu) + 2;
						do
						{
							v31 = *v20;
							v29 += 16;
							v20 += 8;
							*((_OWORD*)v29 - 8) = v31;
							*((_OWORD*)v29 - 7) = *(v20 - 7);
							*((_OWORD*)v29 - 6) = *(v20 - 6);
							*((_OWORD*)v29 - 5) = *(v20 - 5);
							*((_OWORD*)v29 - 4) = *(v20 - 4);
							*((_OWORD*)v29 - 3) = *(v20 - 3);
							*((_OWORD*)v29 - 2) = *(v20 - 2);
							*((_OWORD*)v29 - 1) = *(v20 - 1);
							--v30;
						} while (v30);
						*v29 = *(_QWORD*)v20;
					}
					*((_QWORD*)v27 + 35) = v35;
					if (v35)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 8i64))(v35);
				}
				else
				{
					v27 = 0i64;
				}
				*v25 = v27;
				++* v21;
			}
			v34 = v35;
		}
		if (v34)
		{
			(*(void(__fastcall**)(_QWORD, __int64, void*, __int64))(**(_QWORD**)(a1 + 6352) + 280i64))(
				*(_QWORD*)(a1 + 6352),
				v34,
				&unk_140B611D0,
				0xFFFFFFFFi64);
			if (v35)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 16i64))(v35);
		}
	}
	*(_DWORD*)(a1 + 7176) &= 0xFFFFFFF8;
}

