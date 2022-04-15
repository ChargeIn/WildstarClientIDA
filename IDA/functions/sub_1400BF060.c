//----- (00000001400BF060) ----------------------------------------------------
__int64 __fastcall sub_1400BF060(__int64 a1, int* a2)
{
	__int64 v3; // rsi
	__int64 v4; // rbx
	int* v5; // r15
	__int64 v6; // r12
	int* v7; // r13
	__int16* v8; // rax
	unsigned __int64 v9; // rbx
	__int16 v10; // ax
	int* v11; // rax
	__int64 v12; // rax
	__int16* v13; // rdi
	unsigned __int64 v14; // rbx
	unsigned __int64 v15; // rbx
	__int16* v16; // r13
	int* v17; // rax
	__int16* v18; // rdi
	unsigned __int64 v19; // rbx
	int* v20; // r13
	__int64 v21; // r15
	int* v22; // rax
	int* v23; // rdi
	__int64 v24; // r15
	int* v25; // rax
	unsigned __int16* v26; // rbx
	__int64 v27; // rcx
	int v28; // r9d
	__int64 v29; // rdx
	int v30; // r8d
	int v31; // eax
	__int64 v32; // rdx
	int v33; // r8d
	int v34; // eax
	int v35; // r8d
	int v36; // eax
	int v37; // r8d
	int v38; // eax
	__int64 v39; // rdx
	int v40; // r8d
	int v41; // eax
	__int64 v42; // rdx
	int v43; // r8d
	int v44; // eax
	int v45; // r8d
	int v46; // eax
	__int64 v47; // rdx
	int v48; // r8d
	int v49; // eax
	int v50; // r8d
	int v51; // eax
	unsigned __int64 v52; // rax
	int v53; // eax
	__int64 v54; // rcx
	_QWORD* v55; // rax
	__int64 v56; // rcx
	unsigned int v57; // eax
	_QWORD* v58; // rax
	__int16 v59; // ax
	__int64 v60; // rdi
	float v61; // xmm0_4
	int v62; // eax
	__int64 v63; // rcx
	_QWORD* v64; // rax
	int* v65; // rax
	__int64 v66; // rdi
	__int16* v67; // rcx
	char* v68; // rdx
	int v69; // eax
	__int64 v70; // rdx
	int* v71; // rax
	unsigned int v72; // eax
	_QWORD* v73; // rax
	unsigned int v74; // eax
	__int64 v75; // r8
	unsigned int v76; // r10d
	unsigned int v77; // ecx
	__int64 v78; // rax
	__int64 v80; // [rsp+38h] [rbp-59h]
	__int16* v81; // [rsp+40h] [rbp-51h] BYREF
	__int16* v82; // [rsp+48h] [rbp-49h]
	int* v83; // [rsp+50h] [rbp-41h] BYREF
	__int64 v84; // [rsp+58h] [rbp-39h] BYREF
	__int64 v85; // [rsp+60h] [rbp-31h]
	int* v86; // [rsp+88h] [rbp-9h] BYREF
	__int64 v87; // [rsp+90h] [rbp-1h]
	int* v88; // [rsp+98h] [rbp+7h]
	int* v89; // [rsp+A0h] [rbp+Fh]

	v86 = a2;
	if (a2 && *(_WORD*)a2)
	{
		v3 = 0i64;
		v4 = 1i64;
		v5 = (int*)((char*)a2 + 2);
		v81 = 0i64;
		v80 = 1i64;
		if (*(_DWORD*)(a1 + 56))
		{
			v6 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(a1 + 56) = 0;
			if (v6)
			{
				v7 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
				v8 = v81;
				v82 = v81;
				if (v7)
				{
					v9 = 0i64;
					if (*(_WORD*)v7)
					{
						do
							++v9;
						while (*((_WORD*)v7 + v9));
					}
				LABEL_16:
					v11 = sub_14018B280(2 * v9 + 18, 0);
					if (v11)
					{
						*(_QWORD*)v11 = off_140B55060;
						*((_QWORD*)v11 + 1) = v9;
					}
					else
					{
						v11 = 0i64;
					}
					v13 = (__int16*)(v11 + 4);
					v14 = v9;
					sub_1407DB590(v11 + 4, v7, v14 * 2);
					v8 = v82;
					v13[v14] = 0;
					v4 = v80;
					v81 = v13;
				LABEL_22:
					if (v8)
						(*(void(__fastcall**)(__int16*))(*((_QWORD*)v8 - 2) + 8i64))(v8 - 8);
					goto LABEL_24;
				}
				goto LABEL_21;
			}
		}
		else
		{
			v10 = *((_WORD*)a2 + 1);
			if (v10)
			{
				while (v10 != 40)
				{
					v10 = *((_WORD*)v5 + 1);
					v5 = (int*)((char*)v5 + 2);
					v80 = ++v4;
					if (!v10)
						goto LABEL_12;
				}
				v12 = sub_1400B7780(a1, v5, (__int64*)&v81);
				v6 = *(_QWORD*)(a1 + 16);
				v4 += v12;
				v80 = v4;
			LABEL_24:
				v83 = 0i64;
				if (v81)
				{
					if (v6 && !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6))
					{
						sub_1400B8980(a1, v81);
						v3 = v4;
					LABEL_131:
						if (v83)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v83 - 2) + 8i64))(v83 - 4);
						if (v81)
							(*(void(__fastcall**)(__int16*))(*((_QWORD*)v81 - 2) + 8i64))(v81 - 8);
						return v3;
					}
					(**(void(__fastcall***)(__int64, __int16*, _QWORD, int**))a1)(a1, v81, 0i64, &v83);
					if (v83)
					{
						v15 = *((_QWORD*)v83 - 1);
						v16 = v81;
						v17 = sub_14018B280(2 * v15 + 18, 0);
						if (v17)
						{
							*(_QWORD*)v17 = off_140B55060;
							*((_QWORD*)v17 + 1) = v15;
						}
						else
						{
							v17 = 0i64;
						}
						v18 = (__int16*)(v17 + 4);
						v19 = v15;
						sub_1407DB590(v17 + 4, v83, v19 * 2);
						v18[v19] = 0;
						v81 = v18;
						if (v16)
							(*(void(__fastcall**)(__int16*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 8);
					}
				}
				v20 = v86;
				v21 = ((char*)v5 - (char*)v86) >> 1;
				v22 = sub_14018B280(2 * v21 + 18, 0);
				if (v22)
				{
					*((_QWORD*)v22 + 1) = v21;
					*(_QWORD*)v22 = off_140B55060;
				}
				else
				{
					v22 = 0i64;
				}
				v23 = v22 + 4;
				sub_1407DB590(v22 + 4, v20, 2 * v21);
				*((_WORD*)v23 + v21) = 0;
				v24 = *((_QWORD*)v23 - 1);
				v87 = v24;
				v86 = v23;
				v25 = sub_14018B280(2 * v24 + 18, 0);
				if (v25)
				{
					*((_QWORD*)v25 + 1) = v24;
					*(_QWORD*)v25 = off_140B55060;
				}
				else
				{
					v25 = 0i64;
				}
				v26 = (unsigned __int16*)(v25 + 4);
				sub_1401B2410(&v86, (__int64)(v25 + 4));
				v26[v24] = 0;
				(*(void(__fastcall**)(int*))(*((_QWORD*)v23 - 2) + 8i64))(v23 - 4);
				v28 = *v26;
				v29 = 0i64;
				if (v28 == 110)
				{
					LOWORD(v30) = 110;
					while ((_WORD)v30)
					{
						v30 = v26[v29 + 1];
						v31 = (unsigned __int16)word_1409D1EE6[v29++];
						if (v30 != v31)
							goto LABEL_44;
					}
					(*(void(__fastcall**)(__int64, __int16*))(*(_QWORD*)a1 + 48i64))(a1, v81);
					v3 = v80;
					goto LABEL_130;
				}
			LABEL_44:
				v32 = 0i64;
				if (v28 == 35)
				{
					LOWORD(v33) = 35;
					while ((_WORD)v33)
					{
						v33 = v26[v32 + 1];
						v34 = (unsigned __int16)word_1409D1F16[v32++];
						if (v33 != v34)
							goto LABEL_48;
					}
					if (!v6)
						goto LABEL_126;
				LABEL_81:
					v53 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 24i64))(v6, v32);
					v55 = sub_1400BFB90(v54, &v86, v53, (int*)v81);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 48i64))(a1, v55[1]);
					v56 = v87;
				LABEL_124:
					if (v56)
						sub_14018B900(v56, 0);
					goto LABEL_126;
				}
			LABEL_48:
				v32 = 0i64;
				if (v28 == 43)
				{
					LOWORD(v35) = 43;
					while ((_WORD)v35)
					{
						v35 = v26[v32 + 1];
						v36 = (unsigned __int16)word_1409D1FCE[v32++];
						if (v35 != v36)
							goto LABEL_52;
					}
					if (!v6)
						goto LABEL_126;
					v57 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 24i64))(v6, v32);
					v58 = sub_14018EFA0(&v86, (__int64)L"%d", v57);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 48i64))(a1, v58[1]);
					if (v87)
						sub_14018B900(v87, 0);
					if (!v81 || !*v81)
						goto LABEL_126;
					do
						++v3;
					while (v81[v3]);
					if (!v3)
						goto LABEL_126;
					sub_1400A7EA0(*(_QWORD**)(a1 + 32), 160);
					goto LABEL_81;
				}
			LABEL_52:
				v32 = 0i64;
				if (v28 == 102)
				{
					LOWORD(v37) = 102;
					while ((_WORD)v37)
					{
						v37 = v26[v32 + 1];
						v38 = (unsigned __int16)word_1409D200E[v32++];
						if (v37 != v38)
							goto LABEL_56;
					}
					if (!v6)
						goto LABEL_126;
					v59 = *((_WORD*)v20 + 1);
					v60 = v80;
					LODWORD(v84) = 3;
					LOBYTE(v85) = 9;
					if ((unsigned __int16)(v59 - 48) <= 9u)
					{
						v60 = v80 + 1;
						LOBYTE(v85) = *((_BYTE*)v20 + 2) - 48;
					}
					v61 = (*(float(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 32i64))(v6, v32);
					if (sub_14034C610(v61, (__int64)&v86, 0x10ui64, &v84) >= 0)
						(*(void(__fastcall**)(__int64, int**))(*(_QWORD*)a1 + 48i64))(a1, &v86);
					if (!v81 || !*v81)
						goto LABEL_127;
					do
						++v3;
					while (v81[v3]);
					if (!v3)
						goto LABEL_127;
					sub_1400A7EA0(*(_QWORD**)(a1 + 32), 160);
					v62 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6);
					v64 = sub_1400BFB90(v63, &v84, v62, (int*)v81);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 48i64))(a1, v64[1]);
					if (!v85)
						goto LABEL_127;
					sub_14018B900(v85, 0);
					v3 = v60;
					goto LABEL_130;
				}
			LABEL_56:
				v39 = 0i64;
				if (v28 == 107)
				{
					LOWORD(v40) = 107;
					while ((_WORD)v40)
					{
						v40 = v26[v39 + 1];
						v41 = (unsigned __int16)word_1409D2026[v39++];
						if (v40 != v41)
							goto LABEL_60;
					}
					v65 = sub_14018B280(16i64, 0);
					v66 = (__int64)v65;
					v87 = (__int64)v65;
					v88 = v65;
					v89 = v65 + 4;
					if (v65)
						*(_WORD*)v65 = 0;
					v67 = v81;
					if (!v81)
						goto LABEL_108;
					v68 = "k";
				}
				else
				{
				LABEL_60:
					v42 = 0i64;
					if (v28 != 111)
					{
					LABEL_64:
						v32 = 0i64;
						if (v28 == 99)
						{
							LOWORD(v45) = 99;
							while ((_WORD)v45)
							{
								v45 = v26[v32 + 1];
								v46 = (unsigned __int16)word_1409D1FA6[v32++];
								if (v45 != v46)
									goto LABEL_68;
							}
							if (!v6)
								goto LABEL_126;
							v72 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 24i64))(v6, v32);
							v73 = sub_14018EFA0(&v84, (__int64)L"%d", v72);
						}
						else
						{
						LABEL_68:
							v47 = 0i64;
							if (v28 == 109)
							{
								LOWORD(v48) = 109;
								while ((_WORD)v48)
								{
									v48 = v26[v47 + 1];
									v49 = (unsigned __int16)word_1409D203E[v47++];
									if (v48 != v49)
										goto LABEL_72;
								}
								v73 = sub_1400BFB90(v27, &v84, 2, (int*)v81);
							}
							else
							{
							LABEL_72:
								v32 = 0i64;
								if (v28 != 116)
								{
								LABEL_76:
									v52 = *((_QWORD*)v26 - 1);
									if (v52 && v28 == 91)
									{
										v3 = 1i64;
									}
									else if (v52 > 1)
									{
										v78 = *(_QWORD*)a1;
										*(_DWORD*)(a1 + 56) = 1;
										v3 = (*(__int64(__fastcall**)(__int64, int*))(v78 + 64))(a1, v20);
									}
									goto LABEL_130;
								}
								LOWORD(v50) = 116;
								while ((_WORD)v50)
								{
									v50 = v26[v32 + 1];
									v51 = (unsigned __int16)word_1409D2056[v32++];
									if (v50 != v51)
										goto LABEL_76;
								}
								v74 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 24i64))(v6, v32);
								v75 = v74 % 0x5265C00 / 0x36EE80;
								v76 = v74 % 0x5265C00 % 0x36EE80;
								v77 = v76 / 0xEA60;
								if (v74 / 0x5265C00)
								{
									v73 = sub_14018EFA0(
										&v84,
										(__int64)L"%dd %02d:%02d:%02d",
										v74 / 0x5265C00,
										(unsigned int)v75,
										v76 / 0xEA60,
										v76 % 0xEA60 / 0x3E8);
								}
								else if ((_DWORD)v75)
								{
									v73 = sub_14018EFA0(&v84, (__int64)L"%02d:%02d:%02d", v75, v77, v76 % 0xEA60 / 0x3E8);
								}
								else
								{
									v73 = sub_14018EFA0(&v84, (__int64)L"%02d:%02d", v77, v76 % 0xEA60 / 0x3E8);
								}
							}
						}
						(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 48i64))(a1, v73[1]);
						v56 = v85;
						goto LABEL_124;
					}
					LOWORD(v43) = 111;
					while ((_WORD)v43)
					{
						v43 = v26[v42 + 1];
						v44 = (unsigned __int16)word_1409D1F56[v42++];
						if (v43 != v44)
							goto LABEL_64;
					}
					v71 = sub_14018B280(16i64, 0);
					v66 = (__int64)v71;
					v87 = (__int64)v71;
					v88 = v71;
					v89 = v71 + 4;
					if (v71)
						*(_WORD*)v71 = 0;
					v67 = v81;
					if (!v81)
						goto LABEL_108;
					v68 = "o";
				}
				v69 = sub_1400B8AA0(v67, (int*)v68, (__int64)&v86);
				v66 = v87;
				if (v69)
				{
					v70 = v87;
				LABEL_109:
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 48i64))(a1, v70);
					if (!v66)
					{
					LABEL_126:
						v60 = v80;
					LABEL_127:
						v3 = v60;
						goto LABEL_130;
					}
					sub_14018B900(v66, 0);
					v3 = v80;
				LABEL_130:
					(*(void(__fastcall**)(unsigned __int16*, __int64))(*((_QWORD*)v26 - 2) + 8i64))(v26 - 8, v32);
					goto LABEL_131;
				}
				v67 = v81;
			LABEL_108:
				v70 = (__int64)v67;
				goto LABEL_109;
			}
		LABEL_12:
			v6 = *(_QWORD*)(a1 + 16);
			if (v6)
			{
				v7 = (int*)(*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)v6 + 16i64))(*(_QWORD*)(a1 + 16));
				v8 = v81;
				v82 = v81;
				if (v7)
				{
					v9 = 0i64;
					if (*(_WORD*)v7)
					{
						do
							++v9;
						while (*((_WORD*)v7 + v9));
					}
					goto LABEL_16;
				}
			LABEL_21:
				v81 = 0i64;
				goto LABEL_22;
			}
		}
		return v3;
	}
	return 0i64;
}
// 1400BF54A: variable 'v32' is possibly undefined
// 1400BF558: variable 'v54' is possibly undefined
// 1400BF6A8: variable 'v63' is possibly undefined
// 1400BF7C1: variable 'v27' is possibly undefined
// 1409D1EE6: using guessed type __int16 word_1409D1EE6[];
// 1409D1F16: using guessed type __int16 word_1409D1F16[];
// 1409D1F56: using guessed type __int16 word_1409D1F56[];
// 1409D1FA6: using guessed type __int16 word_1409D1FA6[];
// 1409D1FCE: using guessed type __int16 word_1409D1FCE[];
// 1409D200E: using guessed type __int16 word_1409D200E[];
// 1409D2026: using guessed type __int16 word_1409D2026[];
// 1409D203E: using guessed type __int16 word_1409D203E[];
// 1409D2056: using guessed type __int16 word_1409D2056[];
// 1409D37B4: using guessed type wchar_t aD_10[3];
// 1409D37E4: using guessed type wchar_t aD_11[3];
// 140A14598: using guessed type wchar_t a02d02d02d_0[15];
// 140A145B8: using guessed type wchar_t a02d02d_0[10];
// 140A145F0: using guessed type wchar_t aDd02d02d02d_0[19];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

