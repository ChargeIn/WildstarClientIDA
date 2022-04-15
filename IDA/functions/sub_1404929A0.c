//----- (00000001404929A0) ----------------------------------------------------
void __fastcall sub_1404929A0(_QWORD* a1, unsigned int** a2)
{
	__int64 v4; // rsi
	__int64 v5; // rdi
	__int64 v6; // r13
	unsigned int v7; // ebx
	unsigned int* v8; // rax
	unsigned int* v9; // rbx
	int* v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rdx
	int v13; // ebp
	int v14; // edi
	__int64 v15; // rax
	__int64 v16; // rsi
	int v17; // ecx
	int v18; // eax
	int* v19; // rcx
	__int64 v20; // rax
	__int64 v21; // rax
	__int64 v22; // rcx
	unsigned int v23; // esi
	int v24; // ebp
	__int64 v25; // rax
	int v26; // r14d
	__int64 v27; // rdi
	int* v28; // rcx
	__int64 v29; // rax
	__int64 v30; // rax
	__int64 v31; // rax
	__int64 i; // rax
	__int64 j; // rax
	__m128 v34; // [rsp+20h] [rbp-68h] BYREF
	char v35[8]; // [rsp+30h] [rbp-58h] BYREF
	int* v36; // [rsp+38h] [rbp-50h]
	__int64 v37; // [rsp+40h] [rbp-48h]
	__int64 v38; // [rsp+98h] [rbp+10h]
	__int64 v39; // [rsp+A0h] [rbp+18h]

	v4 = sub_140491BD0((__int64)a1, (*a2)[8]);
	v39 = v4;
	if (v4)
	{
		v5 = 4i64;
		v6 = 9i64;
		v38 = 4i64;
		while (1)
		{
			v7 = (*a2)[v6];
			if (qword_140C63840)
				break;
			if (!dword_140C63E98 && (int)sub_14024B720() >= 0)
			{
				v8 = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65388 + 24i64))(
					qword_140C65388,
					v7);
				goto LABEL_8;
			}
		LABEL_60:
			++v6;
			v38 = --v5;
			if (!v5)
				return;
		}
		v8 = (unsigned int*)qword_140C63840(off_140A6E228, v7, qword_140C63858);
	LABEL_8:
		v9 = v8;
		if (v8 && v8[10] == *(_DWORD*)(*(_QWORD*)v4 + 12i64))
		{
			v34 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v8[3], (__m128)v8[5]), _mm_unpacklo_ps((__m128)v8[4], (__m128)0i64));
			v10 = sub_14018B280(40i64, 0);
			v37 = 0i64;
			v36 = v10;
			*(_BYTE*)v10 = 0;
			*((_QWORD*)v36 + 1) = 0i64;
			*((_QWORD*)v36 + 2) = v36;
			*((_QWORD*)v36 + 3) = v36;
			sub_140449B10(&v34, COERCE_DOUBLE((unsigned __int64)v9[1]), (__int64)v35);
			v11 = *((_QWORD*)v36 + 2);
			if ((int*)v11 != v36)
			{
				do
				{
					v12 = a1[18];
					v13 = *(_DWORD*)(v11 + 32);
					v14 = *(_DWORD*)(v11 + 36);
					v15 = *(_QWORD*)(v12 + 8);
					v16 = v12;
					while (v15)
					{
						v17 = *(_DWORD*)(v15 + 36);
						v16 = v15;
						if (v14 < v17 || v14 == v17 && v13 < *(_DWORD*)(v15 + 32))
							v15 = *(_QWORD*)(v15 + 16);
						else
							v15 = *(_QWORD*)(v15 + 24);
					}
					if (v16 == v12 || (v18 = *(_DWORD*)(v16 + 36), v14 < v18) || v14 == v18 && v13 < *(_DWORD*)(v16 + 32))
					{
						v19 = sub_14018B280(48i64, 0);
						if (v19 != (int*)-32i64)
						{
							v19[8] = v13;
							v19[9] = v14;
							*((_QWORD*)v19 + 5) = a2;
						}
						*(_QWORD*)(v16 + 16) = v19;
						v21 = a1[18];
						if (v16 == v21)
						{
							*(_QWORD*)(v21 + 8) = v19;
							*(_QWORD*)(a1[18] + 24i64) = v19;
						}
						else if (v16 == *(_QWORD*)(v21 + 16))
						{
							*(_QWORD*)(v21 + 16) = v19;
						}
					}
					else
					{
						v19 = sub_14018B280(48i64, 0);
						if (v19 != (int*)-32i64)
						{
							v19[8] = v13;
							v19[9] = v14;
							*((_QWORD*)v19 + 5) = a2;
						}
						*(_QWORD*)(v16 + 24) = v19;
						v20 = a1[18];
						if (v16 == *(_QWORD*)(v20 + 24))
							*(_QWORD*)(v20 + 24) = v19;
					}
					*((_QWORD*)v19 + 1) = v16;
					*((_QWORD*)v19 + 2) = 0i64;
					*((_QWORD*)v19 + 3) = 0i64;
					sub_1400081C0((__int64)v19, (_QWORD*)(a1[18] + 8i64));
					++a1[19];
					v22 = a1[22];
					v23 = **a2;
					v24 = *(_DWORD*)(v11 + 32);
					v25 = *(_QWORD*)(v22 + 8);
					v26 = *(_DWORD*)(v11 + 36);
					v27 = v22;
					while (v25)
					{
						v27 = v25;
						if (v23 >= *(_DWORD*)(v25 + 32))
							v25 = *(_QWORD*)(v25 + 24);
						else
							v25 = *(_QWORD*)(v25 + 16);
					}
					if (v27 == v22 || v23 < *(_DWORD*)(v27 + 32))
					{
						v28 = sub_14018B280(48i64, 0);
						if (v28 != (int*)-32i64)
						{
							v28[8] = v23;
							v28[9] = v24;
							v28[10] = v26;
						}
						*(_QWORD*)(v27 + 16) = v28;
						v30 = a1[22];
						if (v27 == v30)
						{
							*(_QWORD*)(v30 + 8) = v28;
							*(_QWORD*)(a1[22] + 24i64) = v28;
						}
						else if (v27 == *(_QWORD*)(v30 + 16))
						{
							*(_QWORD*)(v30 + 16) = v28;
						}
					}
					else
					{
						v28 = sub_14018B280(48i64, 0);
						if (v28 != (int*)-32i64)
						{
							v28[8] = v23;
							v28[9] = v24;
							v28[10] = v26;
						}
						*(_QWORD*)(v27 + 24) = v28;
						v29 = a1[22];
						if (v27 == *(_QWORD*)(v29 + 24))
							*(_QWORD*)(v29 + 24) = v28;
					}
					*((_QWORD*)v28 + 1) = v27;
					*((_QWORD*)v28 + 2) = 0i64;
					*((_QWORD*)v28 + 3) = 0i64;
					sub_1400081C0((__int64)v28, (_QWORD*)(a1[22] + 8i64));
					++a1[23];
					v31 = *(_QWORD*)(v11 + 24);
					if (v31)
					{
						v11 = *(_QWORD*)(v11 + 24);
						for (i = *(_QWORD*)(v31 + 16); i; i = *(_QWORD*)(i + 16))
							v11 = i;
					}
					else
					{
						for (j = *(_QWORD*)(v11 + 8); v11 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
							v11 = j;
						if (*(_QWORD*)(v11 + 24) != j)
							v11 = j;
					}
				} while ((int*)v11 != v36);
				v5 = v38;
				v4 = v39;
			}
			sub_140008410((__int64)v35);
			sub_14018B900((__int64)v36, 0);
		}
		goto LABEL_60;
	}
}
// 140492B48: conditional instruction was optimized away because rax.8==0
// 140492C34: conditional instruction was optimized away because rax.8==0
// 140A6E228: using guessed type wchar_t *off_140A6E228[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E98: using guessed type int dword_140C63E98;
// 140C65388: using guessed type __int64 qword_140C65388;
// 1404929A0: using guessed type char var_58[8];

