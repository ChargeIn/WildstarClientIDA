//----- (0000000140186820) ----------------------------------------------------
__int64 __fastcall sub_140186820(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	int* v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rax
	unsigned __int16* v8; // r9
	int v9; // r11d
	__int64 v10; // r8
	__int64 v11; // rdx
	int v12; // eax
	int v13; // eax
	_QWORD* v14; // r12
	const wchar_t* v15; // rbx
	unsigned __int16* v16; // r9
	int v17; // r10d
	int v18; // eax
	int v19; // eax
	int v20; // eax
	__int64 v21; // r14
	__int64 v22; // rsi
	__int64 v23; // rdi
	wchar_t* v24; // rax
	int v25; // ecx
	bool v26; // zf
	_WORD* v27; // rax
	__int64 v28; // rdi
	_WORD* v29; // rbx
	_WORD* v30; // rax
	int v31; // ecx
	bool v32; // zf
	_WORD* v33; // rax
	__int64 v34; // rdi
	_WORD* v35; // rbx
	_WORD* v36; // rax
	int v37; // ecx
	bool v38; // zf
	_WORD* v39; // rax
	double v40; // xmm1_8
	double v41; // xmm0_8
	__int64 v42; // rax
	float v43; // xmm1_4
	__int64 v44; // rsi
	__int64 v45; // r14
	__int64 v46; // rdi
	wchar_t* v47; // rax
	int v48; // ecx
	bool v49; // zf
	_WORD* v50; // rax
	__int64 v51; // rdi
	_WORD* v52; // rbx
	_WORD* v53; // rax
	int v54; // ecx
	bool v55; // zf
	_WORD* v56; // rax
	__int64 v57; // rax
	_WORD* v58; // rax
	double v59; // xmm1_8
	double v60; // xmm0_8
	__int64 v61; // rax
	float v62; // xmm1_4
	__int64 v63; // r14
	__int64 v64; // rsi
	__int64 v65; // rdi
	wchar_t* v66; // rax
	int v67; // ecx
	bool v68; // zf
	_WORD* v69; // rax
	__int64 v70; // rax
	_WORD* v71; // rax
	__int64 v72; // rax
	_WORD* v73; // rax
	__int64 v74; // rax
	_WORD* v75; // rax
	__int64 v76; // rax
	_WORD* v77; // rax
	double v78; // xmm1_8
	double v79; // xmm0_8
	__int64 v80; // rax
	float v81; // xmm1_4
	__int128 v83; // [rsp+20h] [rbp-79h]
	__int128 v84; // [rsp+30h] [rbp-69h] BYREF
	float v85; // [rsp+40h] [rbp-59h]
	double v86; // [rsp+50h] [rbp-49h] BYREF
	double v87; // [rsp+58h] [rbp-41h] BYREF
	double v88[2]; // [rsp+60h] [rbp-39h] BYREF
	__int128 v89; // [rsp+70h] [rbp-29h]
	double v90[2]; // [rsp+80h] [rbp-19h] BYREF
	__int128 v91; // [rsp+90h] [rbp-9h]
	double v92; // [rsp+A0h] [rbp+7h] BYREF
	double v93; // [rsp+A8h] [rbp+Fh] BYREF
	double v94; // [rsp+100h] [rbp+67h] BYREF
	double v95; // [rsp+110h] [rbp+77h] BYREF
	double v96; // [rsp+118h] [rbp+7Fh] BYREF

	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1);
	v4 = sub_1401A6B80(a2, L"ID");
	if (!v4)
		return 2147500037i64;
	v5 = (int*)sub_1401A4F40(v4 + 32);
	if (!v5)
		return 2147500037i64;
	v6 = 0i64;
	if (*(_WORD*)v5)
	{
		do
			++v6;
		while (*((_WORD*)v5 + v6));
	}
	sub_14001C480(a1 + 8, v5, (int*)((char*)v5 + 2 * v6));
	v7 = sub_1401A6B80(a2, L"PlaybackType");
	if (v7)
		v8 = (unsigned __int16*)sub_1401A4F40(v7 + 32);
	else
		v8 = 0i64;
	v9 = *v8;
	v10 = 0i64;
	if (v9 == aPingpong[0])
	{
		v11 = (unsigned __int16)v9;
		while ((_WORD)v11)
		{
			v11 = v8[v10 + 1];
			v12 = aPingpong[++v10];
			if ((_DWORD)v11 != v12)
				goto LABEL_12;
		}
		*(_DWORD*)(a1 + 40) = 2;
	}
	else
	{
	LABEL_12:
		v11 = 0i64;
		if (v9 == aRepeat[0])
		{
			v10 = (unsigned __int16)v9;
			while ((_WORD)v10)
			{
				v10 = v8[v11 + 1];
				v13 = aRepeat[++v11];
				if ((_DWORD)v10 != v13)
					goto LABEL_19;
			}
			*(_DWORD*)(a1 + 40) = 1;
		}
	}
LABEL_19:
	v14 = *(_QWORD**)(a2 + 48);
	if (v14)
	{
		v15 = L"Time";
		do
		{
			if ((*(__int64(__fastcall**)(_QWORD*, __int64, __int64))(*v14 + 48i64))(v14, v11, v10))
				v16 = 0i64;
			else
				v16 = (unsigned __int16*)sub_1401A4F40((__int64)(v14 + 3));
			v17 = *v16;
			v10 = 0i64;
			if (v17 == 83)
			{
				v11 = 83i64;
				while ((_WORD)v11)
				{
					v11 = v16[v10 + 1];
					v18 = (unsigned __int16)word_140A3FABA[v10++];
					if ((_DWORD)v11 != v18)
						goto LABEL_28;
				}
				v21 = v14[6];
				v94 = 0.0;
				v89 = 0i64;
				if (!v21)
					goto LABEL_156;
				do
				{
					v22 = (**(__int64(__fastcall***)(__int64, __int64, __int64))v21)(v21, v11, v10);
					v23 = *(_QWORD*)(v22 + 96);
					if (!v23)
						goto LABEL_64;
					while (1)
					{
						v24 = (wchar_t*)sub_1401A4F40(v23 + 8);
						if (v24 == L"Time")
							break;
						v25 = 0;
						if (*v24)
						{
							do
							{
								if (!*v15 || *v24 != *v15)
									break;
								v26 = v25 == 0x7FFFFFFF;
								if (v25 == 0x7FFFFFFF)
									goto LABEL_46;
								++v24;
								++v15;
								++v25;
							} while (*v24);
							v26 = v25 == 0x7FFFFFFF;
						LABEL_46:
							if (v26)
								break;
						}
						if (!*v24 && !*v15)
							break;
						v23 = *(_QWORD*)(v23 + 56);
						if (!v23)
							goto LABEL_64;
						v15 = L"Time";
					}
					v27 = (_WORD*)sub_1401A4F40(v23 + 32);
					if ((unsigned int)sub_1407DF428(v27, (__int64)L"%lf", &v94) != 1)
						goto LABEL_64;
					v28 = *(_QWORD*)(v22 + 96);
					if (!v28)
						goto LABEL_64;
					while (1)
					{
						v29 = &unk_1409E1094;
						v30 = (_WORD*)sub_1401A4F40(v28 + 8);
						if (v30 == (_WORD*)&unk_1409E1094)
							break;
						v31 = 0;
						if (*v30)
						{
							do
							{
								if (!*v29 || *v30 != *v29)
									break;
								v32 = v31 == 0x7FFFFFFF;
								if (v31 == 0x7FFFFFFF)
									goto LABEL_60;
								++v30;
								++v29;
								++v31;
							} while (*v30);
							v32 = v31 == 0x7FFFFFFF;
						LABEL_60:
							if (v32)
								break;
						}
						if (!*v30 && !*v29)
							break;
						v28 = *(_QWORD*)(v28 + 56);
						if (!v28)
							goto LABEL_64;
					}
					v33 = (_WORD*)sub_1401A4F40(v28 + 32);
					if ((unsigned int)sub_1407DF428(v33, (__int64)L"%lf", &v95) != 1)
						goto LABEL_64;
					v34 = *(_QWORD*)(v22 + 96);
					if (!v34)
						goto LABEL_64;
					while (1)
					{
						v35 = &unk_1409E111C;
						v36 = (_WORD*)sub_1401A4F40(v34 + 8);
						if (v36 == (_WORD*)&unk_1409E111C)
							break;
						v37 = 0;
						if (*v36)
						{
							do
							{
								if (!*v35 || *v36 != *v35)
									break;
								v38 = v37 == 0x7FFFFFFF;
								if (v37 == 0x7FFFFFFF)
									goto LABEL_76;
								++v36;
								++v35;
								++v37;
							} while (*v36);
							v38 = v37 == 0x7FFFFFFF;
						LABEL_76:
							if (v38)
								break;
						}
						if (!*v36 && !*v35)
							break;
						v34 = *(_QWORD*)(v34 + 56);
						if (!v34)
							goto LABEL_64;
					}
					v39 = (_WORD*)sub_1401A4F40(v34 + 32);
					if ((unsigned int)sub_1407DF428(v39, (__int64)L"%lf", &v96) == 1)
					{
						v40 = v96;
						v41 = v95;
						v42 = *(_QWORD*)(a1 + 72);
						*(_DWORD*)(a1 + 52) = 0;
						*(_QWORD*)(a1 + 88) = v42;
						*(float*)&v40 = v40;
						*(float*)&v41 = v41;
						v11 = *(_QWORD*)(a1 + 72);
						*(_QWORD*)&v89 = __PAIR64__(LODWORD(v40), LODWORD(v41));
						v84 = v89;
						v43 = v94;
						v85 = v43;
						if (v11 == *(_QWORD*)(a1 + 80))
						{
							sub_140188EA0((_QWORD*)(a1 + 56), v11, &v84);
						}
						else
						{
							if (v11)
							{
								*(_OWORD*)v11 = v89;
								*(float*)(v11 + 16) = v43;
							}
							*(_QWORD*)(a1 + 72) += 32i64;
						}
					}
					else
					{
					LABEL_64:
						sub_1400035B0();
					}
					v21 = *(_QWORD*)(v21 + 72);
					v15 = L"Time";
				} while (v21);
			}
			else
			{
			LABEL_28:
				v10 = 0i64;
				if (v17 == 84)
				{
					v11 = 84i64;
					while ((_WORD)v11)
					{
						v11 = v16[v10 + 1];
						v19 = (unsigned __int16)word_140A3FAA2[v10++];
						if ((_DWORD)v11 != v19)
							goto LABEL_32;
					}
					v44 = v14[6];
					v94 = 0.0;
					v91 = 0i64;
					if (!v44)
						goto LABEL_156;
					do
					{
						v45 = (**(__int64(__fastcall***)(__int64, __int64, __int64))v44)(v44, v11, v10);
						v46 = *(_QWORD*)(v45 + 96);
						if (!v46)
							goto LABEL_114;
						while (1)
						{
							v47 = (wchar_t*)sub_1401A4F40(v46 + 8);
							if (v47 == L"Time")
								break;
							v48 = 0;
							if (*v47)
							{
								do
								{
									if (!*v15 || *v47 != *v15)
										break;
									v49 = v48 == 0x7FFFFFFF;
									if (v48 == 0x7FFFFFFF)
										goto LABEL_96;
									++v47;
									++v15;
									++v48;
								} while (*v47);
								v49 = v48 == 0x7FFFFFFF;
							LABEL_96:
								if (v49)
									break;
							}
							if (!*v47 && !*v15)
								break;
							v46 = *(_QWORD*)(v46 + 56);
							if (!v46)
								goto LABEL_114;
							v15 = L"Time";
						}
						v50 = (_WORD*)sub_1401A4F40(v46 + 32);
						if ((unsigned int)sub_1407DF428(v50, (__int64)L"%lf", &v94) != 1)
							goto LABEL_114;
						v51 = *(_QWORD*)(v45 + 96);
						if (!v51)
							goto LABEL_114;
						while (1)
						{
							v52 = &unk_1409E10FC;
							v53 = (_WORD*)sub_1401A4F40(v51 + 8);
							if (v53 == (_WORD*)&unk_1409E10FC)
								break;
							v54 = 0;
							if (*v53)
							{
								do
								{
									if (!*v52 || *v53 != *v52)
										break;
									v55 = v54 == 0x7FFFFFFF;
									if (v54 == 0x7FFFFFFF)
										goto LABEL_110;
									++v53;
									++v52;
									++v54;
								} while (*v53);
								v55 = v54 == 0x7FFFFFFF;
							LABEL_110:
								if (v55)
									break;
							}
							if (!*v53 && !*v52)
								break;
							v51 = *(_QWORD*)(v51 + 56);
							if (!v51)
								goto LABEL_114;
						}
						v56 = (_WORD*)sub_1401A4F40(v51 + 32);
						if ((unsigned int)sub_1407DF428(v56, (__int64)L"%lf", &v92) == 1
							&& (v57 = sub_1401A6B80(v45, word_1409E101C)) != 0
							&& (v58 = (_WORD*)sub_1401A4F40(v57 + 32), (unsigned int)sub_1407DF428(v58, (__int64)L"%lf", &v87) == 1))
						{
							v59 = v87;
							v60 = v92;
							v61 = *(_QWORD*)(a1 + 128);
							*(_DWORD*)(a1 + 108) = 0;
							*(_QWORD*)(a1 + 144) = v61;
							*(float*)&v59 = v59;
							*(float*)&v60 = v60;
							v11 = *(_QWORD*)(a1 + 128);
							*(_QWORD*)&v91 = __PAIR64__(LODWORD(v59), LODWORD(v60));
							v84 = v91;
							v62 = v94;
							v85 = v62;
							if (v11 == *(_QWORD*)(a1 + 136))
							{
								sub_140188EA0((_QWORD*)(a1 + 112), v11, &v84);
							}
							else
							{
								if (v11)
								{
									*(_OWORD*)v11 = v91;
									*(float*)(v11 + 16) = v62;
								}
								*(_QWORD*)(a1 + 128) += 32i64;
							}
						}
						else
						{
						LABEL_114:
							sub_1400035B0();
						}
						v44 = *(_QWORD*)(v44 + 72);
						v15 = L"Time";
					} while (v44);
				}
				else
				{
				LABEL_32:
					v11 = 0i64;
					if (v17 != 67)
						goto LABEL_156;
					v10 = 67i64;
					while ((_WORD)v10)
					{
						v10 = v16[v11 + 1];
						v20 = (unsigned __int16)word_140A3FAEA[v11++];
						if ((_DWORD)v10 != v20)
							goto LABEL_156;
					}
					v63 = v14[6];
					v94 = 0.0;
					if (!v63)
						goto LABEL_156;
					do
					{
						v64 = (**(__int64(__fastcall***)(__int64, __int64))v63)(v63, v11);
						v65 = *(_QWORD*)(v64 + 96);
						if (!v65)
							goto LABEL_153;
						while (1)
						{
							v66 = (wchar_t*)sub_1401A4F40(v65 + 8);
							if (v66 == L"Time")
								break;
							v67 = 0;
							if (*v66)
							{
								do
								{
									if (!*v15 || *v66 != *v15)
										break;
									v68 = v67 == 0x7FFFFFFF;
									if (v67 == 0x7FFFFFFF)
										goto LABEL_134;
									++v66;
									++v15;
									++v67;
								} while (*v66);
								v68 = v67 == 0x7FFFFFFF;
							LABEL_134:
								if (v68)
									break;
							}
							if (!*v66 && !*v15)
								break;
							v65 = *(_QWORD*)(v65 + 56);
							if (!v65)
								goto LABEL_153;
							v15 = L"Time";
						}
						v69 = (_WORD*)sub_1401A4F40(v65 + 32);
						if ((unsigned int)sub_1407DF428(v69, (__int64)L"%lf", &v94) != 1)
							goto LABEL_153;
						v70 = sub_1401A6B80(v64, word_1409E0F2C);
						if (!v70)
							goto LABEL_153;
						v71 = (_WORD*)sub_1401A4F40(v70 + 32);
						if ((unsigned int)sub_1407DF428(v71, (__int64)L"%lf", &v93) == 1
							&& (v72 = sub_1401A6B80(v64, word_1409E1084)) != 0
							&& (v73 = (_WORD*)sub_1401A4F40(v72 + 32), (unsigned int)sub_1407DF428(v73, (__int64)L"%lf", v88) == 1)
							&& (v74 = sub_1401A6B80(v64, word_1409E103C)) != 0
							&& (v75 = (_WORD*)sub_1401A4F40(v74 + 32), (unsigned int)sub_1407DF428(v75, (__int64)L"%lf", &v86) == 1)
							&& (v76 = sub_1401A6B80(v64, word_1409E1364)) != 0
							&& (v77 = (_WORD*)sub_1401A4F40(v76 + 32), (unsigned int)sub_1407DF428(v77, (__int64)L"%lf", v90) == 1))
						{
							v78 = v88[0];
							v79 = v93;
							v80 = *(_QWORD*)(a1 + 184);
							*(_DWORD*)(a1 + 164) = 0;
							*(_QWORD*)(a1 + 200) = v80;
							*(float*)&v78 = v78;
							*(float*)&v79 = v79;
							v11 = *(_QWORD*)(a1 + 184);
							*(_QWORD*)&v83 = __PAIR64__(LODWORD(v78), LODWORD(v79));
							*(float*)&v78 = v90[0];
							HIDWORD(v83) = LODWORD(v78);
							*(float*)&v79 = v86;
							v81 = v94;
							DWORD2(v83) = LODWORD(v79);
							v84 = v83;
							v85 = v81;
							if (v11 == *(_QWORD*)(a1 + 192))
							{
								sub_140188EA0((_QWORD*)(a1 + 168), v11, &v84);
							}
							else
							{
								if (v11)
								{
									*(_OWORD*)v11 = v83;
									*(float*)(v11 + 16) = v81;
								}
								*(_QWORD*)(a1 + 184) += 32i64;
							}
						}
						else
						{
						LABEL_153:
							sub_1400035B0();
						}
						v63 = *(_QWORD*)(v63 + 72);
						v15 = L"Time";
					} while (v63);
				}
			}
			v15 = L"Time";
		LABEL_156:
			v14 = (_QWORD*)v14[9];
		} while (v14);
	}
	return 0i64;
}
// 140186B02: conditional instruction was optimized away because rdi.8!=0
// 140186BD3: conditional instruction was optimized away because rdi.8!=0
// 140186C7A: conditional instruction was optimized away because rdi.8!=0
// 140186DC2: conditional instruction was optimized away because rdi.8!=0
// 140186E95: conditional instruction was optimized away because rdi.8!=0
// 140187012: conditional instruction was optimized away because rdi.8!=0
// 140186987: variable 'v11' is possibly undefined
// 140186987: variable 'v10' is possibly undefined
// 1409E0F2C: using guessed type _WORD word_1409E0F2C[2];
// 1409E101C: using guessed type _WORD word_1409E101C[2];
// 1409E103C: using guessed type _WORD word_1409E103C[2];
// 1409E1084: using guessed type _WORD word_1409E1084[2];
// 1409E1364: using guessed type _WORD word_1409E1364[2];
// 1409E1AB4: using guessed type wchar_t aId_1[3];
// 140A3FA18: using guessed type wchar_t aPlaybacktype[13];
// 140A3FA38: using guessed type wchar_t aPingpong[9];
// 140A3FA50: using guessed type wchar_t aRepeat[7];
// 140A3FA90: using guessed type wchar_t aTime_1[5];
// 140A3FAA2: using guessed type __int16 word_140A3FAA2[];
// 140A3FABA: using guessed type __int16 word_140A3FABA[];
// 140A3FAEA: using guessed type __int16 word_140A3FAEA[];
// 140A452C8: using guessed type wchar_t aLf[4];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140186820: using guessed type double var_90[2];
// 140186820: using guessed type double var_70[2];

