//----- (000000014051C100) ----------------------------------------------------
void __fastcall sub_14051C100(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // r13
	__int64 v4; // rbx
	char* v5; // rax
	__int64* v6; // rcx
	char* v7; // r12
	__int64 v8; // r8
	__int64 v9; // rdi
	__int64 v10; // rcx
	__int64 v11; // r14
	__int16* v12; // rax
	int v13; // eax
	int* v14; // r12
	int v15; // ecx
	__int64 v16; // rdx
	int v17; // ecx
	int v18; // ebx
	int v19; // ecx
	int* v20; // rax
	int* v21; // rax
	_QWORD* v22; // rax
	__int64 v23; // rcx
	unsigned int* v24; // rdi
	void(__fastcall * **v25)(_QWORD); // rbx
	__int64 v26; // rax
	__int64 v27; // rdx
	int* v28; // rbx
	__int64 v29; // rsi
	int v30; // edi
	unsigned int v31; // eax
	int* v32; // rax
	__int64 v33; // rcx
	unsigned int i; // ebx
	unsigned int v35; // edx
	int* v36; // rax
	unsigned int v37; // edx
	int* v38; // rax
	int v39; // edi
	_DWORD* v40; // rax
	int v41; // ebx
	int v42; // edx
	int* v43; // rsi
	int v44; // ecx
	__int64 v45; // rdx
	int v46; // ecx
	int v47; // ebx
	int v48; // ecx
	int* v49; // rax
	int* v50; // rax
	_QWORD* v51; // rax
	__int64 v52; // rcx
	unsigned int* v53; // rdi
	void(__fastcall * **v54)(_QWORD); // rbx
	__int64 v55; // rax
	int v56; // [rsp+30h] [rbp-D0h] BYREF
	char* v57; // [rsp+38h] [rbp-C8h] BYREF
	int v58; // [rsp+44h] [rbp-BCh]
	__int64 v59[24]; // [rsp+50h] [rbp-B0h] BYREF
	__int128 v60; // [rsp+110h] [rbp+10h]
	int* v61; // [rsp+120h] [rbp+20h]
	__int64 v62; // [rsp+130h] [rbp+30h] BYREF
	int* v63; // [rsp+138h] [rbp+38h]
	int v64; // [rsp+150h] [rbp+50h]
	__int64 v65; // [rsp+430h] [rbp+330h]
	int v66; // [rsp+5C8h] [rbp+4C8h]
	int v67; // [rsp+5D0h] [rbp+4D0h]

	v2 = sub_140245C00(*(_DWORD*)(qword_140C65898 + 6864));
	v3 = v2;
	if (v2)
	{
		v4 = sub_140242D40(*(_DWORD*)(v2 + 8));
		if (v4)
		{
			v5 = (char*)sub_1400F52E0(
				*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
				(__m128i*)L"UI\\ActionConfirmButton.xml",
				(int*)L"TooltipBase",
				0i64,
				0i64,
				-2);
			v6 = *(__int64**)(a1 + 8);
			v7 = v5;
			v8 = *v6;
			v57 = v5;
			(*(void(__fastcall**)(__int64*, char*))(v8 + 520))(v6, v5);
			if (v7)
			{
				v9 = sub_1400D3830((__int64)(v7 + 552), L"ActionConfirm_LabelML");
				if (v9)
				{
					v11 = sub_1400D3830((__int64)(v7 + 552), L"Container");
					if (v11)
					{
						v12 = sub_14034BDD0(v10, 618164);
						sub_140514F00(v9, v11, (__int64)v12);
						v13 = *(_DWORD*)(v4 + 12);
						v56 = 0;
						if ((v13 & 8) != 0)
						{
							v14 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v3 + 12), 0i64);
							if (!v14)
								return;
							sub_14040FAE0((__int64)&v62);
							v15 = v67;
							if (v67 > 6)
							{
								v16 = (__int64)v63;
							}
							else
							{
								v16 = (__int64)v14;
								v15 = 6;
								v63 = v14;
								v67 = 6;
							}
							if (v66)
							{
								v17 = 1;
								v18 = 7;
								if (v64 > 1)
									v17 = v64;
								if (v17 < 7)
									v18 = v17;
							}
							else if (v15 && v16)
							{
								v19 = 1;
								v18 = 7;
								if (*(int*)(v16 + 344) > 1)
									v19 = *(_DWORD*)(v16 + 344);
								if (v19 < 7)
									v18 = v19;
							}
							else
							{
								v18 = 8;
							}
							sub_1400B7210((__int64)v59, (int*)L"$1n");
							v59[0] = (__int64)off_140B69230;
							v61 = 0i64;
							v60 = 0i64;
							v20 = sub_14018B280(16i64, 0);
							*(_QWORD*)&v60 = v20;
							*((_QWORD*)&v60 + 1) = v20;
							v61 = v20 + 4;
							if (v20)
								*(_WORD*)v20 = 0;
							v21 = sub_14018B280(96i64, 0);
							if (v21)
								v22 = (_QWORD*)sub_1404DDAF0((__int64)v21, v14[119]);
							else
								v22 = 0i64;
							sub_1400B7480((__int64)v59, v22);
							v23 = *(_QWORD*)(a1 + 8);
							v24 = (unsigned int*)(v23 + 1872 + 4i64 * v18);
							v25 = *(void(__fastcall****)(_QWORD))(v23 + 16 * (3i64 * v18 + 93));
							v26 = sub_1400B7660(v59);
							sub_140514C10(v11, *(_QWORD*)(v26 + 8), *((__m128i**)v14 + 61), v25, v24, 1u);
							v28 = (int*)(v3 + 36);
							v29 = 5i64;
							do
							{
								v30 = *v28;
								if (*v28 && v28[5])
								{
									v31 = sub_1405E6430(qword_140C65898 + 5784, v27, *(_DWORD*)(v3 + 8), v14[81], *v28);
									if (!v31)
										v31 = v30;
									v32 = sub_1400B5DF0(qword_140C658F0, v31, 0i64);
									if (v32)
										sub_14051BE10(&v56, *(_QWORD*)(a1 + 8), v11, (__int64)v32);
								}
								++v28;
								--v29;
							} while (v29);
							v33 = qword_140C65898;
							for (i = 0; i < *(_DWORD*)(v33 + 6940); ++i)
							{
								if (*(_DWORD*)(v33 + 4i64 * i + 6916))
								{
									if (i >= *(_DWORD*)(v33 + 6940))
										v35 = 0;
									else
										v35 = *(_DWORD*)(v33 + 4i64 * i + 6916);
									v36 = sub_1400B5DF0(qword_140C658F0, v35, 0i64);
									if (v36)
										sub_14051BE10(&v56, *(_QWORD*)(a1 + 8), v11, (__int64)v36);
									v33 = qword_140C65898;
								}
							}
							v37 = *(_DWORD*)(v33 + 6912);
							if (v37)
							{
								v38 = sub_1400B5DF0(qword_140C658F0, v37, 0i64);
								if (v38)
									sub_14051BE10(&v56, *(_QWORD*)(a1 + 8), v11, (__int64)v38);
							}
							if ((_QWORD)v60)
								sub_14018B900(v60, 0);
							sub_1400B7390(v59);
							if (v62)
							{
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v62 + 8i64))(v62);
								v62 = 0i64;
							}
							if (v65)
								sub_14018B900(v65, 0);
							v7 = v57;
						}
						else if ((v13 & 4) != 0)
						{
							v43 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v3 + 12), 0i64);
							if (!v43)
								return;
							sub_14040FAE0((__int64)&v62);
							v44 = v67;
							if (v67 > 6)
							{
								v45 = (__int64)v63;
							}
							else
							{
								v45 = (__int64)v43;
								v44 = 6;
								v63 = v43;
								v67 = 6;
							}
							if (v66)
							{
								v46 = 1;
								v47 = 7;
								if (v64 > 1)
									v46 = v64;
								if (v46 < 7)
									v47 = v46;
							}
							else if (v44 && v45)
							{
								v48 = 1;
								v47 = 7;
								if (*(int*)(v45 + 344) > 1)
									v48 = *(_DWORD*)(v45 + 344);
								if (v48 < 7)
									v47 = v48;
							}
							else
							{
								v47 = 8;
							}
							sub_1400B7210((__int64)v59, (int*)L"$1n");
							v59[0] = (__int64)off_140B69230;
							v61 = 0i64;
							v60 = 0i64;
							v49 = sub_14018B280(16i64, 0);
							*(_QWORD*)&v60 = v49;
							*((_QWORD*)&v60 + 1) = v49;
							v61 = v49 + 4;
							if (v49)
								*(_WORD*)v49 = 0;
							v50 = sub_14018B280(96i64, 0);
							if (v50)
								v51 = (_QWORD*)sub_1404DDAF0((__int64)v50, v43[119]);
							else
								v51 = 0i64;
							sub_1400B7480((__int64)v59, v51);
							v52 = *(_QWORD*)(a1 + 8);
							v53 = (unsigned int*)(v52 + 1872 + 4i64 * v47);
							v54 = *(void(__fastcall****)(_QWORD))(v52 + 16 * (3i64 * v47 + 93));
							v55 = sub_1400B7660(v59);
							sub_140514C10(v11, *(_QWORD*)(v55 + 8), *((__m128i**)v43 + 61), v54, v53, 1u);
							if ((_QWORD)v60)
								sub_14018B900(v60, 0);
							sub_1400B7390(v59);
							if (v62)
							{
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v62 + 8i64))(v62);
								v62 = 0i64;
							}
							if (v65)
								sub_14018B900(v65, 0);
						}
						v39 = sub_1400CD4C0(v11, 0);
						v40 = sub_1400CB3D0(v11, &v57);
						v41 = v40[3] - v40[1];
						sub_1400CB3D0((__int64)v7, &v57);
						v42 = v39 + v58 - v41;
						if (v42 < v58)
							v42 = v58;
						v58 = v42;
						sub_1400CC7C0((__int64)v7, (int*)&v57);
						sub_1400CB690((__int64)v7);
						sub_1400CB960(v7);
					}
				}
			}
		}
	}
}
// 14051C224: variable 'v10' is possibly undefined
// 14051C3DB: variable 'v27' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B6B7C0: using guessed type wchar_t aActionconfirmL[22];
// 140B6B7F0: using guessed type wchar_t aContainer[10];
// 140B6B808: using guessed type wchar_t aTooltipbase[12];
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B6B900: using guessed type wchar_t a1n_3[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 14051C100: using guessed type char *var_5E8;

