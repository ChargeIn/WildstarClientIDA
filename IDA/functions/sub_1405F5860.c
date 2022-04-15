//----- (00000001405F5860) ----------------------------------------------------
__int64 __fastcall sub_1405F5860(__int64 a1, __int64 a2, int a3, __int64** a4)
{
	int v5; // r14d
	__int64 v8; // rdx
	__int64 v9; // rax
	__int64 i; // rcx
	__int64 v11; // rcx
	_QWORD* v12; // rdi
	unsigned int v13; // r12d
	__int64 v14; // rcx
	unsigned int v15; // ebx
	_QWORD* v16; // rbx
	__int64* v17; // rsi
	unsigned int v18; // r8d
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rdx
	__int64* v22; // rcx
	__int64 v23; // rax
	__int64 v24; // rdi
	unsigned int v25; // eax
	int v26; // eax
	int v27; // r14d
	unsigned int v28; // eax
	_DWORD* v29; // rax
	unsigned int v30; // eax
	_DWORD* v31; // rax
	unsigned int v32; // eax
	_DWORD* v33; // rax
	int v34; // edi
	int v35; // edi
	unsigned int v36; // eax
	__int64 v37; // rax
	unsigned int v38; // eax
	__int64 v39; // rdi
	__int64 v40; // rcx
	__int64 v41; // rax
	__int64 v42; // rcx
	__int64 k; // rcx
	__int64 m; // rcx
	unsigned int v45; // r8d
	__int64 v46; // rax
	__int64 v47; // rcx
	__int64 v48; // rdx
	__int64* v49; // rcx
	unsigned int v50; // r8d
	__int64 v51; // rax
	__int64 v52; // rcx
	__int64 v53; // rdx
	__int64* v54; // rcx
	unsigned int v55; // eax
	_DWORD* v56; // rax
	int v57; // eax
	unsigned int v58; // eax
	_DWORD* v59; // rax
	unsigned int v60; // eax
	__int64 v61; // rax
	__int64 v62; // rdi
	__int64 v63; // rax
	__int64 v64; // rcx
	__int64 v65; // r14
	bool v66; // zf
	int v67; // edi
	int v68; // edi
	int v69; // edi
	int v70; // eax
	bool v71; // zf
	unsigned int v72; // eax
	_DWORD* v73; // rax
	int v74; // edx
	_DWORD* v75; // rax
	__int64 v76; // rax
	_QWORD* n; // rax
	__int64 ii; // rax
	__int64 v79[2]; // [rsp+20h] [rbp-29h] BYREF
	_QWORD* j; // [rsp+30h] [rbp-19h]
	int v81; // [rsp+38h] [rbp-11h]
	__int64 v82; // [rsp+40h] [rbp-9h] BYREF
	__int64 v83; // [rsp+48h] [rbp-1h] BYREF
	__int64 v84; // [rsp+50h] [rbp+7h] BYREF
	__int64 v85; // [rsp+58h] [rbp+Fh] BYREF
	__int64 v86; // [rsp+60h] [rbp+17h] BYREF
	__int64 v87; // [rsp+68h] [rbp+1Fh] BYREF
	__int64 v88; // [rsp+B0h] [rbp+67h]
	int v89; // [rsp+B0h] [rbp+67h]
	int v90; // [rsp+B8h] [rbp+6Fh]

	v5 = a3;
	if (!*(_QWORD*)(a2 + 24))
		return 0i64;
	v8 = *(_QWORD*)(qword_140C65980 + 16);
	v9 = *(_QWORD*)(v8 + 8);
	for (i = v8; v9; v9 = *(_QWORD*)(v9 + 16))
		i = v9;
	if (i == v8 || (v88 = i, *(_DWORD*)(i + 32)))
		v88 = *(_QWORD*)(qword_140C65980 + 16);
	if (v88 == v8 || (v11 = *(_QWORD*)(v88 + 40)) == 0)
		v12 = 0i64;
	else
		v12 = *(_QWORD**)(v11 + 32);
	v13 = 0;
	for (j = v12; v12; j = v12)
	{
		if ((*(unsigned int(__fastcall**)(_QWORD*))(*v12 + 104i64))(v12)
			&& !(*(unsigned int(__fastcall**)(_QWORD*))(*v12 + 112i64))(v12))
		{
			v14 = *(_QWORD*)(qword_140C65898 + 120);
			if (v14)
			{
				v15 = *(_DWORD*)(v14 + 60);
				if (!v15)
					v15 = *(_DWORD*)(v14 + 56);
			}
			else
			{
				v15 = 0;
			}
			if (v15 >= *(_DWORD*)((*(__int64(__fastcall**)(_QWORD*))(*v12 + 32i64))(v12) + 32))
			{
				v16 = *(_QWORD**)(*(_QWORD*)((*(__int64(__fastcall**)(_QWORD*))(*v12 + 72i64))(v12) + 8) + 16i64);
				while (v16 != *(_QWORD**)((*(__int64(__fastcall**)(_QWORD*))(*v12 + 72i64))(v12) + 8))
				{
					v17 = (__int64*)v16[5];
					if ((*(unsigned int(__fastcall**)(__int64*))(*v17 + 104))(v17)
						&& !(*(unsigned int(__fastcall**)(__int64*))(*v17 + 160))(v17))
					{
						v81 = 0;
						v18 = (*(__int64(__fastcall**)(__int64*))(*v17 + 344))(v17);
						v19 = *(_QWORD*)(a2 + 14208);
						v20 = *(_QWORD*)(v19 + 8);
						v21 = v19;
						while (v20)
						{
							if (*(_DWORD*)(v20 + 32) < v18)
							{
								v20 = *(_QWORD*)(v20 + 24);
							}
							else
							{
								v21 = v20;
								v20 = *(_QWORD*)(v20 + 16);
							}
						}
						if (v21 == v19 || v18 < *(_DWORD*)(v21 + 32))
						{
							v87 = *(_QWORD*)(a2 + 14208);
							v22 = &v87;
						}
						else
						{
							v84 = v21;
							v22 = &v84;
						}
						if (*v22 != v19)
						{
							v23 = *v17;
							v81 = 1;
							if ((*(_DWORD*)((*(__int64(__fastcall**)(__int64*))(v23 + 328))(v17) + 8) & 0x1000) != 0 && v5)
								*(_BYTE*)(a2 + 13476) = 1;
							if (a4)
								*a4 = v17;
						}
						if (!v5 || (v89 = 1, !(*(unsigned int(__fastcall**)(__int64*))(*v17 + 512))(v17)))
							v89 = 0;
						v24 = *v17;
						v25 = (*(__int64(__fastcall**)(_QWORD*))(*j + 368i64))(j);
						v26 = (*(__int64(__fastcall**)(__int64*, _QWORD))(v24 + 224))(v17, v25);
						v79[1] = a2;
						v90 = v26;
						v79[0] = (__int64)off_140B66440;
						switch ((*(unsigned int(__fastcall**)(__int64*))(*v17 + 336))(v17))
						{
						case 0u:
						case 0xEu:
							v27 = v90;
							if (!v90)
								goto LABEL_172;
							v32 = (*(__int64(__fastcall**)(__int64*))(*v17 + 352))(v17);
							if (v32)
							{
								v33 = (_DWORD*)(*(__int64(__fastcall**)(__int64*, _QWORD))(v79[0] + 8))(v79, v32);
								if ((unsigned int)sub_1403B4A20((__int64)v79, v33))
									goto LABEL_172;
							}
							v34 = v89;
							if (v89)
								*(_BYTE*)(a2 + 13404) = 1;
							if (a4)
								*a4 = v17;
							goto LABEL_66;
						case 1u:
						case 0xFu:
							v27 = v90;
							if (!v90)
								goto LABEL_172;
							v45 = (*(__int64(__fastcall**)(_QWORD*))(*j + 16i64))(j);
							v46 = *(_QWORD*)(a2 + 14176);
							v47 = *(_QWORD*)(v46 + 8);
							v48 = v46;
							while (v47)
							{
								if (*(_DWORD*)(v47 + 32) < v45)
								{
									v47 = *(_QWORD*)(v47 + 24);
								}
								else
								{
									v48 = v47;
									v47 = *(_QWORD*)(v47 + 16);
								}
							}
							if (v48 == v46 || v45 < *(_DWORD*)(v48 + 32))
							{
								v86 = *(_QWORD*)(a2 + 14176);
								v49 = &v86;
							}
							else
							{
								v82 = v48;
								v49 = &v82;
							}
							v34 = v89;
							if (*v49 == v46)
								goto LABEL_173;
							if (v89)
								*(_BYTE*)(a2 + 13404) = 1;
							if (!a4)
								goto LABEL_66;
							*a4 = v17;
							v13 = 1;
							goto LABEL_173;
						case 3u:
							v27 = v90;
							if (v90)
								goto LABEL_43;
							goto LABEL_172;
						case 4u:
							v27 = v90;
							if (!v90)
								goto LABEL_172;
							if (*(_DWORD*)(a2 + 13816) == -1)
								goto LABEL_172;
							v30 = (*(__int64(__fastcall**)(__int64*))(*v17 + 352))(v17);
							if (v30)
							{
								v31 = (_DWORD*)(*(__int64(__fastcall**)(__int64*, _QWORD))(v79[0] + 8))(v79, v30);
								if ((unsigned int)sub_1403B4A20((__int64)v79, v31))
									goto LABEL_172;
							}
							if ((*(unsigned int(__fastcall**)(__int64*, _QWORD))(*v17 + 144))(
								v17,
								*(unsigned int*)(a2 + 13816)))
							{
								goto LABEL_172;
							}
							if (a3)
								*(_BYTE*)(a2 + 8220) = 1;
							if (!a4)
								goto LABEL_49;
							*a4 = v17;
							v13 = 1;
							goto LABEL_172;
						case 7u:
							v27 = v90;
							if (!v90)
								goto LABEL_172;
							v35 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
							if (v35 != (*(unsigned int(__fastcall**)(__int64*))(*v17 + 352))(v17))
								goto LABEL_172;
							v36 = (*(__int64(__fastcall**)(__int64*))(*v17 + 360))(v17);
							v37 = sub_140227BC0(v36);
							if (!v37 || !(unsigned int)sub_1403AC840(qword_140C65898 + 160, 771, *(_DWORD*)(v37 + 8)))
								goto LABEL_172;
							if (a3)
								*(_BYTE*)(a2 + 8220) = 1;
							if (!a4)
								goto LABEL_49;
							*a4 = v17;
							v13 = 1;
							goto LABEL_172;
						case 8u:
						case 0x10u:
						case 0x14u:
							v27 = v90;
							if (!v90)
								goto LABEL_172;
							v50 = (*(__int64(__fastcall**)(__int64*))(*v17 + 344))(v17);
							v51 = *(_QWORD*)(a2 + 14208);
							v52 = *(_QWORD*)(v51 + 8);
							v53 = v51;
							while (v52)
							{
								if (*(_DWORD*)(v52 + 32) < v50)
								{
									v52 = *(_QWORD*)(v52 + 24);
								}
								else
								{
									v53 = v52;
									v52 = *(_QWORD*)(v52 + 16);
								}
							}
							if (v53 == v51 || v50 < *(_DWORD*)(v53 + 32))
							{
								v85 = *(_QWORD*)(a2 + 14208);
								v54 = &v85;
							}
							else
							{
								v83 = v53;
								v54 = &v83;
							}
							v34 = v89;
							if (*v54 == v51)
								goto LABEL_173;
							if (v89)
								*(_BYTE*)(a2 + 13404) = 1;
							if (a4)
							{
								*a4 = v17;
								v13 = 1;
							}
							else
							{
							LABEL_66:
								v13 = 1;
							}
							goto LABEL_173;
						case 0x11u:
							v27 = v90;
							if (!v90)
								goto LABEL_172;
							v55 = (*(__int64(__fastcall**)(__int64*))(*v17 + 352))(v17);
							if (!v55)
								goto LABEL_129;
							v56 = (_DWORD*)(*(__int64(__fastcall**)(__int64*, _QWORD))(v79[0] + 8))(v79, v55);
							v57 = sub_1403B4A20((__int64)v79, v56);
						LABEL_128:
							if (v57)
								goto LABEL_172;
						LABEL_129:
							if (a3)
								*(_BYTE*)(a2 + 9084) = 1;
							goto LABEL_47;
						case 0x12u:
							v27 = v90;
							if (!v90)
								goto LABEL_172;
							if (*(_DWORD*)(a2 + 13816) == -1)
								goto LABEL_172;
							v58 = (*(__int64(__fastcall**)(__int64*))(*v17 + 352))(v17);
							if (v58)
							{
								v59 = (_DWORD*)(*(__int64(__fastcall**)(__int64*, _QWORD))(v79[0] + 8))(v79, v58);
								if ((unsigned int)sub_1403B4A20((__int64)v79, v59))
									goto LABEL_172;
							}
							v57 = (*(__int64(__fastcall**)(__int64*, _QWORD))(*v17 + 144))(v17, *(unsigned int*)(a2 + 13816));
							goto LABEL_128;
						case 0x1Au:
							v60 = (*(__int64(__fastcall**)(__int64*))(*v17 + 352))(v17);
							v61 = sub_140228CC0(v60);
							v62 = v61;
							if (!v61)
								goto LABEL_171;
							v63 = sub_140228CC0(*(_DWORD*)(v61 + 28));
							v64 = *(_QWORD*)(qword_140C65898 + 120);
							v65 = v63;
							if (!v64
								|| (unsigned int)sub_140469990(v64, *(_DWORD*)(v62 + 16))
								|| v65 && (unsigned int)sub_140469990(*(_QWORD*)(qword_140C65898 + 120), *(_DWORD*)(v65 + 24)))
							{
								goto LABEL_171;
							}
							if (*(_DWORD*)(v62 + 12)
								&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2) == *(_DWORD*)(v62 + 12))
							{
								v27 = v90;
							LABEL_144:
								v66 = v27 == 0;
								goto LABEL_145;
							}
							if (!*(_DWORD*)(v62 + 8)
								|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2) != *(_DWORD*)(v62 + 8))
							{
								if (!v65 || !*(_DWORD*)(v65 + 20))
								{
								LABEL_171:
									v27 = v90;
									goto LABEL_172;
								}
								v66 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2) == *(_DWORD*)(v65 + 20);
								v27 = v90;
								if (!v66)
									goto LABEL_172;
								goto LABEL_144;
							}
							v27 = v90;
							if (v90 || (*(_BYTE*)(v62 + 4) & 1) == 0)
								goto LABEL_172;
							v66 = (*(unsigned int(__fastcall**)(__int64*))(*v17 + 152))(v17) == 0;
						LABEL_145:
							if (!v66)
							{
							LABEL_45:
								if (a3)
									*(_BYTE*)(a2 + 8220) = 1;
							LABEL_47:
								if (a4)
									*a4 = v17;
							LABEL_49:
								v13 = 1;
							}
						LABEL_172:
							v34 = v89;
						LABEL_173:
							v74 = *(_DWORD*)((*(__int64(__fastcall**)(__int64*))(*v17 + 328))(v17) + 56);
							if (v27)
							{
								if (v74)
								{
									v75 = (_DWORD*)(*(__int64(__fastcall**)(__int64*))(v79[0] + 8))(v79);
									if (!(unsigned int)sub_1403B4A20((__int64)v79, v75))
									{
										if (v34)
											*(_BYTE*)(a2 + 13476) = 1;
										if (a4)
											*a4 = v17;
										v13 = 1;
									}
								}
								if (v81 && ((*(__int64(__fastcall**)(__int64*))(*v17 + 376))(v17) & 0x200000) != 0)
									v13 = 1;
							}
							v5 = a3;
							v12 = j;
							v79[0] = (__int64)off_140B66400;
							break;
						case 0x1Bu:
							v67 = (*(__int64(__fastcall**)(_QWORD*))(*j + 368i64))(j);
							v27 = v90;
							if ((*(unsigned int(__fastcall**)(__int64*))(*v17 + 520))(v17) == v67)
								goto LABEL_172;
							if (!v90)
							{
								v68 = (*(__int64(__fastcall**)(__int64*))(*v17 + 520))(v17);
								if (v68 != (*(unsigned int(__fastcall**)(__int64*))(*v17 + 368))(v17))
									goto LABEL_172;
							}
						LABEL_43:
							v28 = (*(__int64(__fastcall**)(__int64*))(*v17 + 352))(v17);
							if (!v28)
								goto LABEL_45;
							v29 = (_DWORD*)(*(__int64(__fastcall**)(__int64*, _QWORD))(v79[0] + 8))(v79, v28);
							if (!(unsigned int)sub_1403B4A20((__int64)v79, v29))
								goto LABEL_45;
							goto LABEL_172;
						case 0x1Cu:
							v27 = v90;
							if (v90)
							{
								v38 = (*(__int64(__fastcall**)(__int64*))(*v17 + 360))(v17);
								v39 = sub_140228000(v38);
								if (v39)
								{
									if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2) == *(_DWORD*)(v39 + 4))
									{
										v40 = v17[29];
										v41 = *(_QWORD*)(v40 + 16);
										if (v41 != v40)
										{
											do
											{
												if (*(_DWORD*)(v41 + 36))
												{
													if (a3)
														*(_BYTE*)(a2 + 8220) = 1;
													if (a4)
														*a4 = v17;
													v13 = 1;
												}
												v42 = *(_QWORD*)(v41 + 24);
												if (v42)
												{
													v41 = *(_QWORD*)(v41 + 24);
													for (k = *(_QWORD*)(v42 + 16); k; k = *(_QWORD*)(k + 16))
														v41 = k;
												}
												else
												{
													for (m = *(_QWORD*)(v41 + 8); v41 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
														v41 = m;
													if (*(_QWORD*)(v41 + 24) != m)
														v41 = m;
												}
											} while (v41 != v17[29]);
										}
									}
								}
							}
							goto LABEL_172;
						case 0x1Eu:
							v69 = *((_DWORD*)v17 + 56);
							v70 = (*(__int64(__fastcall**)(_QWORD*))(*j + 368i64))(j);
							if (v69)
								v71 = v69 == v70;
							else
								v71 = (*(unsigned int(__fastcall**)(__int64*))(*v17 + 520))(v17) == v70;
							if (!v71)
							{
								v72 = (*(__int64(__fastcall**)(__int64*))(*v17 + 352))(v17);
								if (!v72
									|| (v73 = (_DWORD*)(*(__int64(__fastcall**)(__int64*, _QWORD))(v79[0] + 8))(v79, v72),
										!(unsigned int)sub_1403B4A20((__int64)v79, v73)))
								{
									if (v5)
										*(_BYTE*)(a2 + 8220) = 1;
									if (a4)
										*a4 = v17;
									v13 = 1;
								}
							}
							goto LABEL_171;
						default:
							goto LABEL_171;
						}
					}
					v76 = v16[3];
					if (v76)
					{
						v16 = (_QWORD*)v16[3];
						for (n = *(_QWORD**)(v76 + 16); n; n = (_QWORD*)n[2])
							v16 = n;
					}
					else
					{
						for (ii = v16[1]; v16 == *(_QWORD**)(ii + 24); ii = *(_QWORD*)(ii + 8))
							v16 = (_QWORD*)ii;
						if (v16[3] != ii)
							v16 = (_QWORD*)ii;
					}
				}
			}
		}
		v12 = (_QWORD*)v12[2];
	}
	return v13;
}
// 140B66400: using guessed type __int64 (__fastcall *off_140B66400[2])();
// 140B66440: using guessed type __int64 (__fastcall *off_140B66440[9])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

