//----- (0000000140516E80) ----------------------------------------------------
void __fastcall sub_140516E80(__int64 a1)
{
	__int64 v1; // r12
	__int64 v2; // r14
	int v3; // edi
	char* v4; // rax
	__int64* v5; // rcx
	__int64 v6; // r8
	char* v7; // r15
	__int64 v8; // rbx
	__int64 v9; // rcx
	__int64 v10; // rsi
	__int16* v11; // rax
	__int64 v12; // rcx
	unsigned __int64 v13; // r13
	__int64 v14; // r12
	__int64 v15; // r15
	int* v16; // rdi
	int v17; // ecx
	__int64 v18; // rdx
	int v19; // ecx
	int v20; // ebx
	int v21; // ecx
	int* v22; // rax
	int* v23; // rax
	_QWORD* v24; // rax
	__int64 v25; // rcx
	__int64 v26; // rdi
	__int64 v27; // rsi
	void(__fastcall * **v28)(_QWORD); // rbx
	__int64 v29; // rax
	__int64 v30; // rax
	__int16* v31; // rax
	int v32; // edi
	_DWORD* v33; // rax
	int v34; // ebx
	int v35; // edx
	char* v36; // rax
	__int64* v37; // rcx
	__int64 v38; // r8
	char* v39; // r15
	__int64 v40; // rbx
	__int64 v41; // rcx
	__int64 v42; // rsi
	__int16* v43; // rax
	__int64 v44; // rcx
	unsigned __int64 v45; // r13
	__int64 v46; // r12
	__int64 v47; // r15
	int* v48; // rdi
	int v49; // ecx
	__int64 v50; // rdx
	int v51; // ecx
	int v52; // ebx
	int v53; // ecx
	int* v54; // rax
	int* v55; // rax
	_QWORD* v56; // rax
	__int64 v57; // rcx
	__int64 v58; // rsi
	void(__fastcall * **v59)(_QWORD); // rbx
	__int64 v60; // rdi
	__int64 v61; // rax
	__int64 v62; // rax
	__int16* v63; // rax
	int v64; // edi
	_DWORD* v65; // rax
	int v66; // ebx
	int v67; // edx
	unsigned int* v68; // [rsp+28h] [rbp-E0h]
	unsigned int* v69; // [rsp+28h] [rbp-E0h]
	int v70; // [rsp+38h] [rbp-D0h]
	char* v71; // [rsp+40h] [rbp-C8h] BYREF
	__int64 v72; // [rsp+48h] [rbp-C0h]
	__int64 v73; // [rsp+50h] [rbp-B8h]
	char* v74; // [rsp+58h] [rbp-B0h]
	__int64 v75; // [rsp+60h] [rbp-A8h]
	_QWORD v76[24]; // [rsp+68h] [rbp-A0h] BYREF
	__int128 v77; // [rsp+128h] [rbp+20h]
	int* v78; // [rsp+138h] [rbp+30h]
	__int64 v79; // [rsp+148h] [rbp+40h] BYREF
	int* v80; // [rsp+150h] [rbp+48h]
	int v81; // [rsp+168h] [rbp+60h]
	__int64 v82; // [rsp+448h] [rbp+340h]
	int v83; // [rsp+5E0h] [rbp+4D8h]
	int v84; // [rsp+5E8h] [rbp+4E0h]

	v1 = a1;
	v75 = a1;
	v2 = *(_QWORD*)(qword_140C65898 + 26392);
	if (v2)
	{
		v3 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64);
		v70 = v3;
		v4 = (char*)sub_1400F52E0(
			*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
			(__m128i*)L"UI\\ActionConfirmButton.xml",
			(int*)L"TooltipBase",
			0i64,
			0i64,
			-2);
		v5 = *(__int64**)(v1 + 8);
		v6 = *v5;
		v7 = v4;
		v71 = v4;
		(*(void(__fastcall**)(__int64*, char*))(v6 + 520))(v5, v4);
		if (v7)
		{
			v8 = sub_1400D3830((__int64)(v7 + 552), L"ActionConfirm_LabelML");
			if (v8)
			{
				v10 = sub_1400D3830((__int64)(v7 + 552), L"Container");
				v74 = (char*)v10;
				if (v10)
				{
					v11 = sub_14034BDD0(v9, 469429);
					sub_140514F00(v8, v10, (__int64)v11);
					v12 = 0i64;
					v13 = 0i64;
					if (*(_QWORD*)(v2 + 32))
					{
						v14 = 0i64;
						do
						{
							v15 = *(_QWORD*)(v2 + 24);
							if (*(_DWORD*)(v15 + v14 + 4) == v3)
							{
								v16 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v15 + v14 + 8), 0i64);
								if (v16)
								{
									sub_14040FAE0((__int64)&v79);
									v17 = v84;
									if (v84 > 6)
									{
										v18 = (__int64)v80;
									}
									else
									{
										v18 = (__int64)v16;
										v17 = 6;
										v80 = v16;
										v84 = 6;
									}
									if (v83)
									{
										v19 = 1;
										v20 = 7;
										if (v81 > 1)
											v19 = v81;
										if (v19 < 7)
											v20 = v19;
									}
									else if (v17 && v18)
									{
										v21 = 1;
										v20 = 7;
										if (*(int*)(v18 + 344) > 1)
											v21 = *(_DWORD*)(v18 + 344);
										if (v21 < 7)
											v20 = v21;
									}
									else
									{
										v20 = 8;
									}
									sub_1400B7210((__int64)v76, (int*)L"$1n");
									v78 = 0i64;
									v77 = 0i64;
									v76[0] = off_140B69230;
									v22 = sub_14018B280(16i64, 0);
									*(_QWORD*)&v77 = v22;
									*((_QWORD*)&v77 + 1) = v22;
									v78 = v22 + 4;
									if (v22)
										*(_WORD*)v22 = 0;
									v23 = sub_14018B280(96i64, 0);
									if (v23)
										v24 = (_QWORD*)sub_1404DDAF0((__int64)v23, v16[119]);
									else
										v24 = 0i64;
									sub_1400B7480((__int64)v76, v24);
									v25 = *(_QWORD*)(v75 + 8);
									v26 = 0i64;
									v27 = v25 + 1872 + 4i64 * v20;
									v28 = *(void(__fastcall****)(_QWORD))(v25 + 16 * (3i64 * v20 + 93));
									if (v84)
										v26 = (__int64)v80;
									v29 = sub_1400B7660(v76);
									v68 = (unsigned int*)v27;
									v10 = (__int64)v74;
									sub_140514C10(
										(__int64)v74,
										*(_QWORD*)(v29 + 8),
										*(__m128i**)(v26 + 488),
										v28,
										v68,
										*(_DWORD*)(v15 + v14 + 24));
									if ((_QWORD)v77)
										sub_14018B900(v77, 0);
									sub_1400B7390(v76);
									if (v79)
									{
										(*(void(__fastcall**)(__int64))(*(_QWORD*)v79 + 8i64))(v79);
										v79 = 0i64;
									}
									v12 = v82;
									if (v82)
										sub_14018B900(v82, 0);
								}
								v3 = v70;
							}
							++v13;
							v14 += 80i64;
						} while (v13 < *(_QWORD*)(v2 + 32));
						v7 = v71;
						v1 = v75;
					}
					if (*(_DWORD*)v2 == v3)
						v30 = *(_QWORD*)(v2 + 40);
					else
						v30 = *(_QWORD*)(v2 + 48);
					v71 = (char*)v30;
					v72 = 1i64;
					v73 = 0i64;
					v31 = sub_14034BDD0(v12, 469430);
					sub_140514AB0(v10, (__int64)v31, (__int64*)&v71);
					v32 = sub_1400CD4C0(v10, 0);
					v33 = sub_1400CB3D0(v10, &v71);
					v34 = v33[3] - v33[1];
					sub_1400CB3D0((__int64)v7, &v71);
					v35 = v32 + HIDWORD(v72) - v34;
					if (v35 < SHIDWORD(v72))
						v35 = HIDWORD(v72);
					HIDWORD(v72) = v35;
					sub_1400CC7C0((__int64)v7, (int*)&v71);
					sub_1400CB690((__int64)v7);
					sub_1400CB960(v7);
					v36 = (char*)sub_1400F52E0(
						*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
						(__m128i*)L"UI\\ActionConfirmButton.xml",
						(int*)L"TooltipBase",
						0i64,
						0i64,
						-2);
					v37 = *(__int64**)(v1 + 8);
					v38 = *v37;
					v39 = v36;
					v74 = v36;
					(*(void(__fastcall**)(__int64*, char*))(v38 + 528))(v37, v36);
					if (v39)
					{
						v40 = sub_1400D3830((__int64)(v39 + 552), L"ActionConfirm_LabelML");
						if (v40)
						{
							v42 = sub_1400D3830((__int64)(v39 + 552), L"Container");
							v71 = (char*)v42;
							if (v42)
							{
								v43 = sub_14034BDD0(v41, 469428);
								sub_140514F00(v40, v42, (__int64)v43);
								v45 = 0i64;
								if (*(_QWORD*)(v2 + 32))
								{
									v46 = 0i64;
									do
									{
										v47 = *(_QWORD*)(v2 + 24);
										if (*(_DWORD*)(v47 + v46 + 4) != v70)
										{
											v48 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v47 + v46 + 8), 0i64);
											if (v48)
											{
												sub_14040FAE0((__int64)&v79);
												v49 = v84;
												if (v84 > 6)
												{
													v50 = (__int64)v80;
												}
												else
												{
													v50 = (__int64)v48;
													v49 = 6;
													v80 = v48;
													v84 = 6;
												}
												if (v83)
												{
													v51 = 1;
													v52 = 7;
													if (v81 > 1)
														v51 = v81;
													if (v51 < 7)
														v52 = v51;
												}
												else if (v49 && v50)
												{
													v53 = 1;
													v52 = 7;
													if (*(int*)(v50 + 344) > 1)
														v53 = *(_DWORD*)(v50 + 344);
													if (v53 < 7)
														v52 = v53;
												}
												else
												{
													v52 = 8;
												}
												sub_1400B7210((__int64)v76, (int*)L"$1n");
												v78 = 0i64;
												v77 = 0i64;
												v76[0] = off_140B69230;
												v54 = sub_14018B280(16i64, 0);
												*(_QWORD*)&v77 = v54;
												*((_QWORD*)&v77 + 1) = v54;
												v78 = v54 + 4;
												if (v54)
													*(_WORD*)v54 = 0;
												v55 = sub_14018B280(96i64, 0);
												if (v55)
													v56 = (_QWORD*)sub_1404DDAF0((__int64)v55, v48[119]);
												else
													v56 = 0i64;
												sub_1400B7480((__int64)v76, v56);
												v57 = *(_QWORD*)(v75 + 8);
												v58 = v57 + 1872 + 4i64 * v52;
												v59 = *(void(__fastcall****)(_QWORD))(v57 + 16 * (3i64 * v52 + 93));
												v60 = 0i64;
												if (v84)
													v60 = (__int64)v80;
												v61 = sub_1400B7660(v76);
												v69 = (unsigned int*)v58;
												v42 = (__int64)v71;
												sub_140514C10(
													(__int64)v71,
													*(_QWORD*)(v61 + 8),
													*(__m128i**)(v60 + 488),
													v59,
													v69,
													*(_DWORD*)(v47 + v46 + 24));
												if ((_QWORD)v77)
													sub_14018B900(v77, 0);
												sub_1400B7390(v76);
												if (v79)
												{
													(*(void(__fastcall**)(__int64))(*(_QWORD*)v79 + 8i64))(v79);
													v79 = 0i64;
												}
												v44 = v82;
												if (v82)
													sub_14018B900(v82, 0);
											}
										}
										++v45;
										v46 += 80i64;
									} while (v45 < *(_QWORD*)(v2 + 32));
									v39 = v74;
								}
								if (*(_DWORD*)v2 == v70)
									v62 = *(_QWORD*)(v2 + 48);
								else
									v62 = *(_QWORD*)(v2 + 40);
								v71 = (char*)v62;
								v72 = 1i64;
								v73 = 0i64;
								v63 = sub_14034BDD0(v44, 469430);
								sub_140514AB0(v42, (__int64)v63, (__int64*)&v71);
								v64 = sub_1400CD4C0(v42, 0);
								v65 = sub_1400CB3D0(v42, &v71);
								v66 = v65[3] - v65[1];
								sub_1400CB3D0((__int64)v39, &v71);
								v67 = v64 + HIDWORD(v72) - v66;
								if (v67 < SHIDWORD(v72))
									v67 = HIDWORD(v72);
								HIDWORD(v72) = v67;
								sub_1400CC7C0((__int64)v39, (int*)&v71);
								sub_1400CB690((__int64)v39);
								sub_1400CB960(v39);
							}
						}
					}
				}
			}
		}
	}
}
// 140516F8F: variable 'v9' is possibly undefined
// 1405171D6: variable 'v12' is possibly undefined
// 1405172EC: variable 'v41' is possibly undefined
// 14051752D: variable 'v44' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B6B7C0: using guessed type wchar_t aActionconfirmL[22];
// 140B6B7F0: using guessed type wchar_t aContainer[10];
// 140B6B808: using guessed type wchar_t aTooltipbase[12];
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B6B900: using guessed type wchar_t a1n_3[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

