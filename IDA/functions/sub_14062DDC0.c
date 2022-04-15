//----- (000000014062DDC0) ----------------------------------------------------
void __fastcall sub_14062DDC0(__int64* a1, __m128* a2)
{
	__int64* v3; // rsi
	__int64* v4; // r14
	unsigned __int64 v5; // r12
	unsigned __int64 v6; // rdx
	__int64 v7; // r8
	__int64 v8; // rcx
	__int64 v9; // rbx
	int* v10; // rax
	__int64 v11; // rcx
	int* v12; // rdi
	__m128** v13; // rdx
	__int64* v14; // r15
	__int64 v15; // rcx
	__int64 v16; // rbx
	__int64 v17; // rdi
	int* v18; // rax
	int* v19; // rbp
	unsigned __int64 v20; // rdi
	__int64* v21; // rsi
	unsigned int** v22; // rbp
	__int64 v23; // rbx
	int* v24; // rax
	int* v25; // r15
	__int64 v26; // rdi
	int* v27; // rax
	__int64 v28; // rbx
	unsigned __int64 v29; // rbp
	unsigned __int64 v30; // r14
	__int64 v31; // r12
	_DWORD* v32; // rcx
	_DWORD** v33; // rdi
	unsigned int v34; // r13d
	unsigned __int64 v35; // rax
	__int64 v36; // rdx
	void(__fastcall * **v37)(_QWORD); // rcx
	void(__fastcall * **v38)(_QWORD); // rcx
	__int64 v39; // rax
	__int64 v40; // rbx
	__int64 v41; // rcx
	__int64 v42; // r15
	_QWORD* v43; // rax
	_DWORD* v44; // rbp
	__int64 v45; // rdi
	int* v46; // rax
	int* v47; // rdx
	int* v48; // r14
	__int64 v49; // rcx
	__int64 v50; // rax
	__int64* v51; // rcx
	__int64 v52; // rax
	_QWORD* v53; // rbx
	__int64 v54; // rcx
	_DWORD** v55; // [rsp+20h] [rbp-58h]
	__int64 v56; // [rsp+28h] [rbp-50h]
	__int64 v58; // [rsp+80h] [rbp+8h]
	__int64* v60; // [rsp+90h] [rbp+18h]
	unsigned __int64 v61; // [rsp+90h] [rbp+18h]
	__int64 v62; // [rsp+98h] [rbp+20h]

	v3 = a1;
	v62 = a1[9];
	if (!v62)
	{
		sub_14062E3E0(a1, 0i64);
		return;
	}
	v4 = a1 + 2;
	sub_14004EED0(a1 + 2, a1[1]);
	v5 = v3[3];
	v6 = 0i64;
	if (v5)
	{
		v7 = 0i64;
		do
		{
			++v6;
			v8 = v7 + *v3;
			v7 += 48i64;
			*(_QWORD*)(*v4 + 8 * v6 - 8) = v8;
		} while (v6 < v5);
	}
	v9 = v4[1];
	v10 = sub_14018DB00(*v4, v9 + 1, 8i64);
	v12 = v10;
	*(_QWORD*)&v10[2 * v9] = 0i64;
	if ((int*)*v4 != v10)
	{
		sub_1407DB590(v10, (int*)*v4, 8 * v4[1]);
		v11 = *v4;
		if (*v4)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
		*v4 = (__int64)v12;
	}
	v13 = (__m128**) * v4;
	v4[1] = v9 + 1;
	sub_14062E490(v11, v13, v5, a2);
	v14 = v3 + 4;
	v60 = v3 + 4;
	sub_1400523E0(v3 + 4);
	if (v5)
	{
		v16 = v3[5];
		v17 = *v4;
		v18 = sub_14018DB00(*v14, v16 + 1, 8i64);
		v19 = v18;
		*(_QWORD*)&v18[2 * v16] = v17;
		if ((int*)*v14 != v18)
		{
			sub_1407DB590(v18, (int*)*v14, 8 * v3[5]);
			v15 = *v14;
			if (*v14)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
			*v14 = (__int64)v19;
		}
		v3[5] = v16 + 1;
	}
	v20 = 1i64;
	if (v5 > 1)
	{
		v21 = v3 + 4;
		do
		{
			v22 = (unsigned int**)(*v4 + 8 * v20);
			v15 = **v22;
			if (**(v22 - 1) != (_DWORD)v15)
			{
				v23 = v21[1];
				v24 = sub_14018DB00(*v21, v23 + 1, 8i64);
				v25 = v24;
				*(_QWORD*)&v24[2 * v23] = v22;
				if ((int*)*v21 != v24)
				{
					sub_1407DB590(v24, (int*)*v21, 8 * v21[1]);
					v15 = *v21;
					if (*v21)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
					*v21 = (__int64)v25;
				}
				v21[1] = v23 + 1;
			}
			++v20;
		} while (v20 < v5);
		v3 = a1;
		v14 = v60;
	}
	sub_14062E680(v15, (__m128***) * v14, v3[5], a2);
	v26 = v3[9];
	v56 = v26;
	if (v26)
	{
		v27 = sub_14018B280(24 * v26 + 16, 0);
		if (v27)
		{
			*((_QWORD*)v27 + 1) = v26;
			v28 = (__int64)(v27 + 4);
			*(_QWORD*)v27 = off_140B55060;
		}
		else
		{
			v28 = 16i64;
		}
	}
	else
	{
		v28 = 0i64;
	}
	v58 = v28;
	sub_1407DB590((int*)v28, (int*)v3[8], 24 * v26);
	v29 = v62;
	v30 = 0i64;
	v61 = 0i64;
	if (v62)
	{
		v31 = 0i64;
		while (1)
		{
			if (v30 < v3[5])
			{
				v32 = (_DWORD*)v28;
				v33 = *(_DWORD***)(*v14 + 8 * v30);
				v55 = v33;
				v34 = **v33;
				v35 = 0i64;
				do
				{
					if (*v32 == v34)
						break;
					++v35;
					v32 += 6;
				} while (v35 < v29);
				if (v35 != v29)
				{
					v36 = v3[8];
					*(_QWORD*)(v36 + v31) = *(_QWORD*)(v28 + 24 * v35);
					*(_QWORD*)(v36 + v31 + 8) = *(_QWORD*)(v28 + 24 * v35 + 8);
					*(_QWORD*)(v36 + v31 + 16) = *(_QWORD*)(v28 + 24 * v35 + 16);
					v37 = *(void(__fastcall****)(_QWORD))(v31 + v3[8] + 16);
					(**v37)(v37);
					v38 = *(void(__fastcall****)(_QWORD))(v31 + v3[8] + 8);
					(**v38)(v38);
				LABEL_48:
					v42 = 0i64;
					v3[7] = 0i64;
					if (*v33)
					{
						v43 = v33;
						do
						{
							v44 = (_DWORD*)*v43;
							if (*(_DWORD*)*v43 != v34)
								break;
							v45 = v3[7];
							v46 = sub_14018DB00(v3[6], v45 + 1, 8i64);
							*(_QWORD*)&v46[2 * v45] = v44 + 4;
							v47 = (int*)v3[6];
							v48 = v46;
							if (v47 != v46)
							{
								sub_1407DB590(v46, v47, 8 * v3[7]);
								v49 = v3[6];
								if (v49)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(v49 - 16) + 8i64))(v49 - 16);
								v3[6] = (__int64)v48;
							}
							v50 = v45 + 1;
							v33 = v55;
							++v42;
							v3[7] = v50;
							v43 = &v55[v42];
						} while (*v43);
						v29 = v62;
						v30 = v61;
					}
					v51 = *(__int64**)(v31 + v3[8] + 8);
					v52 = *v51;
					if (v3[7] == 1)
						(*(void(__fastcall**)(__int64*, _DWORD*))(v52 + 96))(v51, *v33 + 4);
					else
						(*(void(__fastcall**)(__int64*, __int64*, __int64))(v52 + 112))(v51, v3 + 6, 1i64);
					v14 = v3 + 4;
					goto LABEL_62;
				}
				if (qword_140C63840)
				{
					v39 = qword_140C63840(off_140A6CE08, v34, qword_140C63858);
				}
				else
				{
					if (dword_140C646C8 || (int)sub_140233020() < 0)
						goto LABEL_61;
					v39 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C638A0 + 24i64))(qword_140C638A0, v34);
				}
				v40 = v39;
				if (v39
					&& (*(int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65848 + 40i64))(
						qword_140C65848,
						v31 + v3[8] + 8,
						0i64) >= 0)
				{
					*(_DWORD*)(v31 + v3[8]) = v34;
					(*(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD**)(v31 + v3[8] + 8) + 32i64))(
						*(_QWORD*)(v31 + v3[8] + 8),
						v31 + v3[8] + 16,
						*(unsigned int*)(v40 + 4),
						*(unsigned int*)(v40 + 8));
					v41 = *(_QWORD*)(v31 + v3[8] + 16);
					if (v41)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v41 + 64i64))(v41);
					goto LABEL_48;
				}
			}
		LABEL_61:
			*(_DWORD*)(v31 + v3[8]) = 0;
			*(_QWORD*)(v31 + v3[8] + 16) = 0i64;
			*(_QWORD*)(v31 + v3[8] + 8) = 0i64;
		LABEL_62:
			v28 = v58;
			++v30;
			v31 += 24i64;
			v61 = v30;
			if (v30 >= v29)
			{
				v26 = v56;
				break;
			}
		}
	}
	if (v26)
	{
		v53 = (_QWORD*)(v28 + 8);
		do
		{
			v54 = v53[1];
			if (v54)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v54 + 8i64))(v54);
				v53[1] = 0i64;
			}
			if (*v53)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v53 + 8i64))(*v53);
				*v53 = 0i64;
			}
			v53 += 3;
			--v26;
		} while (v26);
	}
	sub_14062E3E0(v3, 0i64);
	if (v58)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v58 - 16) + 8i64))(v58 - 16);
}
// 14062DDE8: ignored the value written to the shadow area of the succeeding call
// 14062DEB9: variable 'v11' is possibly undefined
// 14062DFCF: variable 'v15' is possibly undefined
// 140A6CE08: using guessed type wchar_t *off_140A6CE08[2];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638A0: using guessed type __int64 qword_140C638A0;
// 140C646C8: using guessed type int dword_140C646C8;
// 140C65848: using guessed type __int64 qword_140C65848;

