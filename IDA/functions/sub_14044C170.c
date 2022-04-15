//----- (000000014044C170) ----------------------------------------------------
__int64 __fastcall sub_14044C170(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r13
	__int64 v4; // r12
	int* v5; // rax
	int* v6; // rsi
	__int64 v7; // r14
	int* v8; // rbp
	__int64 v9; // rbx
	int* v10; // rax
	int* v11; // rdi
	unsigned __int64 v12; // rbx
	__int64 v13; // r14
	int* v14; // rbp
	__int64 v15; // rbx
	int* v16; // rax
	int* v17; // rdi
	unsigned __int64 v18; // rbx
	unsigned __int64 v19; // rbx
	unsigned __int64 v20; // rbp
	unsigned __int64 v21; // rdx
	unsigned int v22; // r9d
	unsigned __int64 v23; // rcx
	unsigned int v24; // r8d
	unsigned __int64 v25; // rbp
	int* v26; // rdi
	int* v27; // rdx
	__int64 v28; // rcx
	unsigned __int64 v29; // r12
	__int64* v30; // rbx
	__int64 v31; // r14
	__int64 v32; // rsi
	__int64 v33; // r13
	int* v34; // rbp
	__int64 v35; // rbx
	int* v36; // rax
	int* v37; // rdi
	unsigned __int64 v38; // rbx
	unsigned __int64 v40; // [rsp+50h] [rbp+8h]
	__int64* v41; // [rsp+50h] [rbp+8h]

	v2 = qword_140C65908;
	sub_14044DCC0((_QWORD*)qword_140C65908);
	*(_DWORD*)(v2 + 8) = 1;
	v40 = 0i64;
	if (*a2)
	{
		v4 = 0i64;
		do
		{
			v5 = sub_14018B280(64i64, 0);
			v6 = v5;
			if (v5)
			{
				*((_QWORD*)v5 + 2) = 0i64;
				*((_QWORD*)v5 + 3) = 0i64;
				*((_QWORD*)v5 + 5) = 0i64;
				*((_QWORD*)v5 + 4) = 0i64;
				*((_QWORD*)v5 + 7) = 0i64;
				*((_QWORD*)v5 + 6) = 0i64;
			}
			else
			{
				v6 = 0i64;
			}
			*v6 = *(_DWORD*)(*((_QWORD*)a2 + 1) + v4 + 16);
			v6[1] = *(_DWORD*)(*((_QWORD*)a2 + 1) + v4 + 20);
			v7 = *((_QWORD*)v6 + 2);
			v8 = *(int**)(v4 + *((_QWORD*)a2 + 1));
			if (v8)
			{
				v9 = 0i64;
				if (*(_WORD*)v8)
				{
					do
						++v9;
					while (*((_WORD*)v8 + v9));
				}
				v10 = sub_14018B280(2 * v9 + 18, 0);
				if (v10)
				{
					*((_QWORD*)v10 + 1) = v9;
					*(_QWORD*)v10 = off_140B55060;
				}
				else
				{
					v10 = 0i64;
				}
				v11 = v10 + 4;
				v12 = 2 * v9;
				sub_1407DB590(v10 + 4, v8, v12);
				*(_WORD*)((char*)v11 + v12) = 0;
				*((_QWORD*)v6 + 2) = v11;
			}
			else
			{
				*((_QWORD*)v6 + 2) = 0i64;
			}
			if (v7)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
			v13 = *((_QWORD*)v6 + 3);
			v14 = *(int**)(*((_QWORD*)a2 + 1) + v4 + 8);
			if (v14)
			{
				v15 = 0i64;
				if (*(_WORD*)v14)
				{
					do
						++v15;
					while (*((_WORD*)v14 + v15));
				}
				v16 = sub_14018B280(2 * v15 + 18, 0);
				if (v16)
				{
					*((_QWORD*)v16 + 1) = v15;
					*(_QWORD*)v16 = off_140B55060;
				}
				else
				{
					v16 = 0i64;
				}
				v17 = v16 + 4;
				v18 = 2 * v15;
				sub_1407DB590(v16 + 4, v14, v18);
				*(_WORD*)((char*)v17 + v18) = 0;
				*((_QWORD*)v6 + 3) = v17;
			}
			else
			{
				*((_QWORD*)v6 + 3) = 0i64;
			}
			if (v13)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
			v19 = 0i64;
			v6[2] = *(_DWORD*)(*((_QWORD*)a2 + 1) + v4 + 24);
			v6[3] = *(_DWORD*)(*((_QWORD*)a2 + 1) + v4 + 28);
			v20 = *(_QWORD*)(v2 + 80);
			v21 = v20;
			if (v20)
			{
				v22 = *v6;
				do
				{
					v23 = v19 + ((v21 - v19) >> 1);
					v24 = **(_DWORD**)(*(_QWORD*)(v2 + 72) + 8 * v23);
					if (v22 < v24)
					{
						v21 = v19 + ((v21 - v19) >> 1);
					}
					else
					{
						if (v22 <= v24)
							goto LABEL_38;
						v19 = v23 + 1;
					}
				} while (v19 < v21);
			}
			v25 = v20 + 1;
			v26 = sub_14018DB00(*(_QWORD*)(v2 + 72), v25, 8i64);
			sub_1407DB590(&v26[2 * v19 + 2], (int*)(8 * v19 + *(_QWORD*)(v2 + 72)), 8 * (*(_QWORD*)(v2 + 80) - v19));
			*(_QWORD*)&v26[2 * v19] = v6;
			v27 = *(int**)(v2 + 72);
			if (v27 != v26)
			{
				sub_1407DB590(v26, v27, 8 * v19);
				v28 = *(_QWORD*)(v2 + 72);
				if (v28)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v28 - 16) + 8i64))(v28 - 16);
				*(_QWORD*)(v2 + 72) = v26;
			}
			*(_QWORD*)(v2 + 80) = v25;
		LABEL_38:
			v4 += 32i64;
			++v40;
		} while (v40 < *a2);
	}
	v29 = 0i64;
	*(_DWORD*)(v2 + 48) = a2[4];
	if (a2[5])
	{
		v30 = (__int64*)(v2 + 56);
		v31 = 0i64;
		v41 = (__int64*)(v2 + 56);
		do
		{
			v32 = *v30 + 32 * sub_1404516A0(v30);
			*(_DWORD*)v32 = *(_DWORD*)(v31 + *((_QWORD*)a2 + 3));
			v33 = *(_QWORD*)(v32 + 16);
			v34 = *(int**)(*((_QWORD*)a2 + 3) + v31 + 8);
			if (v34)
			{
				v35 = 0i64;
				if (*(_WORD*)v34)
				{
					do
						++v35;
					while (*((_WORD*)v34 + v35));
				}
				v36 = sub_14018B280(2 * v35 + 18, 0);
				if (v36)
				{
					*((_QWORD*)v36 + 1) = v35;
					*(_QWORD*)v36 = off_140B55060;
				}
				else
				{
					v36 = 0i64;
				}
				v37 = v36 + 4;
				v38 = 2 * v35;
				sub_1407DB590(v36 + 4, v34, v38);
				*(_WORD*)((char*)v37 + v38) = 0;
				v30 = v41;
				*(_QWORD*)(v32 + 16) = v37;
			}
			else
			{
				*(_QWORD*)(v32 + 16) = 0i64;
			}
			if (v33)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v33 - 16) + 8i64))(v33 - 16);
			++v29;
			v31 += 32i64;
			*(_DWORD*)(v32 + 4) = *(_DWORD*)(*((_QWORD*)a2 + 3) + v31 - 16);
			*(_DWORD*)(v32 + 24) = *(_DWORD*)(*((_QWORD*)a2 + 3) + v31 - 12);
			*(_DWORD*)(v32 + 8) = *(_DWORD*)(*((_QWORD*)a2 + 3) + v31 - 8);
		} while (v29 < a2[5]);
	}
	return 0i64;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65908: using guessed type __int64 qword_140C65908;

