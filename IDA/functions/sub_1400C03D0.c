#include "../winhttp.h"

//----- (00000001400C03D0) ----------------------------------------------------
__int64 __fastcall sub_1400C03D0(__int64 a1, int* a2)
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
	__int64 v28; // rdx
	__int64 v29; // r8
	int v30; // r9d
	int v31; // eax
	int v32; // r9d
	int v33; // eax
	__int64 v34; // r8
	int v35; // r9d
	int v36; // eax
	int v37; // r9d
	int v38; // eax
	int v39; // r9d
	int v40; // eax
	__int64 v41; // r8
	int v42; // r9d
	int v43; // eax
	__int64 v44; // r8
	int v45; // r9d
	int v46; // eax
	__int64 v47; // r8
	int v48; // r9d
	int v49; // eax
	__int64 v50; // r8
	int v51; // r9d
	int v52; // eax
	__int64 v53; // r8
	int v54; // r9d
	int v55; // eax
	int v56; // r9d
	int v57; // eax
	int v58; // r9d
	int v59; // eax
	__int64 v60; // r8
	int v61; // r9d
	int v62; // eax
	int v63; // r9d
	int v64; // eax
	unsigned __int64 v65; // rax
	int v66; // eax
	__int64 v67; // rcx
	_QWORD* v68; // rax
	__int64 v69; // rcx
	unsigned int v70; // eax
	_QWORD* v71; // rax
	__int16 v72; // ax
	__int64 v73; // rdi
	float v74; // xmm0_4
	int v75; // eax
	__int64 v76; // rcx
	_QWORD* v77; // rax
	int* v78; // rax
	__int64 v79; // rdi
	__int16* v80; // rcx
	char* v81; // rdx
	int v82; // eax
	__int64 v83; // rdx
	int* v84; // rax
	int* v85; // rax
	int* v86; // rax
	int* v87; // rax
	unsigned int v88; // eax
	_QWORD* v89; // rax
	unsigned int v90; // eax
	__int64 v91; // r8
	unsigned int v92; // r10d
	unsigned int v93; // ecx
	__int64 v94; // rax
	__int64 v96; // [rsp+38h] [rbp-59h]
	__int16* v97; // [rsp+40h] [rbp-51h] BYREF
	__int16* v98; // [rsp+48h] [rbp-49h]
	int* v99; // [rsp+50h] [rbp-41h] BYREF
	__int64 v100; // [rsp+58h] [rbp-39h] BYREF
	__int64 v101; // [rsp+60h] [rbp-31h]
	int* v102; // [rsp+88h] [rbp-9h] BYREF
	__int64 v103; // [rsp+90h] [rbp-1h]
	int* v104; // [rsp+98h] [rbp+7h]
	int* v105; // [rsp+A0h] [rbp+Fh]

	v102 = a2;
	if (a2 && *(_WORD*)a2)
	{
		v3 = 0i64;
		v4 = 1i64;
		v5 = (int*)((char*)a2 + 2);
		v97 = 0i64;
		v96 = 1i64;
		if (*(_DWORD*)(a1 + 56))
		{
			v6 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(a1 + 56) = 0;
			if (v6)
			{
				v7 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
				v8 = v97;
				v98 = v97;
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
					v8 = v98;
					v13[v14] = 0;
					v4 = v96;
					v97 = v13;
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
					v96 = ++v4;
					if (!v10)
						goto LABEL_12;
				}
				v12 = sub_1400B7780(a1, v5, (__int64*)&v97);
				v6 = *(_QWORD*)(a1 + 16);
				v4 += v12;
				v96 = v4;
			LABEL_24:
				v99 = 0i64;
				if (v97)
				{
					if (v6 && !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6))
					{
						sub_1400B8980(a1, v97);
						v3 = v4;
					LABEL_163:
						if (v99)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v99 - 2) + 8i64))(v99 - 4);
						if (v97)
							(*(void(__fastcall**)(__int16*))(*((_QWORD*)v97 - 2) + 8i64))(v97 - 8);
						return v3;
					}
					(**(void(__fastcall***)(__int64, __int16*, _QWORD, int**))a1)(a1, v97, 0i64, &v99);
					if (v99)
					{
						v15 = *((_QWORD*)v99 - 1);
						v16 = v97;
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
						sub_1407DB590(v17 + 4, v99, v19 * 2);
						v18[v19] = 0;
						v97 = v18;
						if (v16)
							(*(void(__fastcall**)(__int16*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 8);
					}
				}
				v20 = v102;
				v21 = ((char*)v5 - (char*)v102) >> 1;
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
				v103 = v24;
				v102 = v23;
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
				sub_1401B2410(&v102, (__int64)(v25 + 4));
				v26[v24] = 0;
				(*(void(__fastcall**)(int*))(*((_QWORD*)v23 - 2) + 8i64))(v23 - 4);
				v28 = *v26;
				v29 = 0i64;
				if ((_DWORD)v28 == 110)
				{
					LOWORD(v30) = 110;
					while ((_WORD)v30)
					{
						v30 = v26[v29 + 1];
						v31 = (unsigned __int16)word_1409D218E[v29++];
						if (v30 != v31)
							goto LABEL_44;
					}
					goto LABEL_99;
				}
			LABEL_44:
				v29 = 0i64;
				if ((_DWORD)v28 == 112)
				{
					LOWORD(v32) = 112;
					while ((_WORD)v32)
					{
						v32 = v26[v29 + 1];
						v33 = (unsigned __int16)word_1409D20BE[v29++];
						if (v32 != v33)
							goto LABEL_48;
					}
					goto LABEL_99;
				}
			LABEL_48:
				v34 = 0i64;
				if ((_DWORD)v28 == 35)
				{
					LOWORD(v35) = 35;
					while ((_WORD)v35)
					{
						v35 = v26[v34 + 1];
						v36 = (unsigned __int16)word_1409D20EE[v34++];
						if (v35 != v36)
							goto LABEL_52;
					}
					if (!v6)
						goto LABEL_158;
				LABEL_101:
					v66 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v6 + 24i64))(v6, v28, v34);
					v68 = sub_1400C10B0(v67, &v102, v66, (int*)v97);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 48i64))(a1, v68[1]);
					v69 = v103;
				LABEL_156:
					if (v69)
						sub_14018B900(v69, 0);
					goto LABEL_158;
				}
			LABEL_52:
				v34 = 0i64;
				if ((_DWORD)v28 == 43)
				{
					LOWORD(v37) = 43;
					while ((_WORD)v37)
					{
						v37 = v26[v34 + 1];
						v38 = (unsigned __int16)word_1409D2136[v34++];
						if (v37 != v38)
							goto LABEL_56;
					}
					if (!v6)
						goto LABEL_158;
					v70 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v6 + 24i64))(v6, v28, v34);
					v71 = sub_14018EFA0(&v102, (__int64)L"%d", v70);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 48i64))(a1, v71[1]);
					if (v103)
						sub_14018B900(v103, 0);
					if (!v97 || !*v97)
						goto LABEL_158;
					do
						++v3;
					while (v97[v3]);
					if (!v3)
						goto LABEL_158;
					sub_1400A7EA0(*(_QWORD**)(a1 + 32), 160);
					goto LABEL_101;
				}
			LABEL_56:
				v34 = 0i64;
				if ((_DWORD)v28 == 102)
				{
					LOWORD(v39) = 102;
					while ((_WORD)v39)
					{
						v39 = v26[v34 + 1];
						v40 = (unsigned __int16)word_1409D228E[v34++];
						if (v39 != v40)
							goto LABEL_60;
					}
					if (v6)
					{
						v72 = *((_WORD*)v20 + 1);
						v73 = v96;
						LODWORD(v100) = 3;
						LOBYTE(v101) = 9;
						if ((unsigned __int16)(v72 - 48) <= 9u)
						{
							v73 = v96 + 1;
							LOBYTE(v101) = *((_BYTE*)v20 + 2) - 48;
						}
						v74 = (*(float(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v6 + 32i64))(v6, v28, v34);
						if (sub_14034C610(v74, (__int64)&v102, 0x10ui64, &v100) >= 0)
							(*(void(__fastcall**)(__int64, int**))(*(_QWORD*)a1 + 48i64))(a1, &v102);
						if (v97 && *v97)
						{
							do
								++v3;
							while (v97[v3]);
							if (v3)
							{
								sub_1400A7EA0(*(_QWORD**)(a1 + 32), 160);
								v75 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6);
								v77 = sub_1400C10B0(v76, &v100, v75, (int*)v97);
								(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 48i64))(a1, v77[1]);
								if (v101)
								{
									sub_14018B900(v101, 0);
									v3 = v73;
									goto LABEL_162;
								}
							}
						}
					LABEL_159:
						v3 = v73;
						goto LABEL_162;
					}
				LABEL_158:
					v73 = v96;
					goto LABEL_159;
				}
			LABEL_60:
				v41 = 0i64;
				if ((_DWORD)v28 == 111)
				{
					LOWORD(v42) = 111;
					while ((_WORD)v42)
					{
						v42 = v26[v41 + 1];
						v43 = (unsigned __int16)word_1409D22AE[v41++];
						if (v42 != v43)
							goto LABEL_64;
					}
					v78 = sub_14018B280(16i64, 0);
					v79 = (__int64)v78;
					v103 = (__int64)v78;
					v104 = v78;
					v105 = v78 + 4;
					if (v78)
						*(_WORD*)v78 = 0;
					v80 = v97;
					if (!v97)
						goto LABEL_128;
					v81 = (char*)L"o";
				}
				else
				{
				LABEL_64:
					v44 = 0i64;
					if ((_DWORD)v28 == 115)
					{
						LOWORD(v45) = 115;
						while ((_WORD)v45)
						{
							v45 = v26[v44 + 1];
							v46 = (unsigned __int16)word_1409D2316[v44++];
							if (v45 != v46)
								goto LABEL_68;
						}
						v84 = sub_14018B280(16i64, 0);
						v79 = (__int64)v84;
						v103 = (__int64)v84;
						v104 = v84;
						v105 = v84 + 4;
						if (v84)
							*(_WORD*)v84 = 0;
						v80 = v97;
						if (!v97)
							goto LABEL_128;
						v81 = "s";
					}
					else
					{
					LABEL_68:
						v47 = 0i64;
						if ((_DWORD)v28 == 114)
						{
							LOWORD(v48) = 114;
							while ((_WORD)v48)
							{
								v48 = v26[v47 + 1];
								v49 = (unsigned __int16)word_1409D21DE[v47++];
								if (v48 != v49)
									goto LABEL_72;
							}
							v85 = sub_14018B280(16i64, 0);
							v79 = (__int64)v85;
							v103 = (__int64)v85;
							v104 = v85;
							v105 = v85 + 4;
							if (v85)
								*(_WORD*)v85 = 0;
							v80 = v97;
							if (!v97)
								goto LABEL_128;
							v81 = "r";
						}
						else
						{
						LABEL_72:
							v50 = 0i64;
							if ((_DWORD)v28 == 104)
							{
								LOWORD(v51) = 104;
								while ((_WORD)v51)
								{
									v51 = v26[v50 + 1];
									v52 = (unsigned __int16)word_1409D223E[v50++];
									if (v51 != v52)
										goto LABEL_76;
								}
								v86 = sub_14018B280(16i64, 0);
								v79 = (__int64)v86;
								v103 = (__int64)v86;
								v104 = v86;
								v105 = v86 + 4;
								if (v86)
									*(_WORD*)v86 = 0;
								v80 = v97;
								if (!v97)
									goto LABEL_128;
								v81 = "h";
							}
							else
							{
							LABEL_76:
								v53 = 0i64;
								if ((_DWORD)v28 != 97)
								{
								LABEL_80:
									v29 = 0i64;
									if ((_DWORD)v28 == 105)
									{
										LOWORD(v56) = 105;
										while ((_WORD)v56)
										{
											v56 = v26[v29 + 1];
											v57 = (unsigned __int16)word_1409D2566[v29++];
											if (v56 != v57)
												goto LABEL_84;
										}
									LABEL_99:
										(*(void(__fastcall**)(__int64, __int16*, __int64))(*(_QWORD*)a1 + 48i64))(a1, v97, v29);
										v3 = v96;
									LABEL_162:
										(*(void(__fastcall**)(unsigned __int16*, __int64, __int64))(*((_QWORD*)v26 - 2) + 8i64))(
											v26 - 8,
											v28,
											v34);
										goto LABEL_163;
									}
								LABEL_84:
									v34 = 0i64;
									if ((_DWORD)v28 == 99)
									{
										LOWORD(v58) = 99;
										while ((_WORD)v58)
										{
											v58 = v26[v34 + 1];
											v59 = (unsigned __int16)word_1409D2366[v34++];
											if (v58 != v59)
												goto LABEL_88;
										}
										if (!v6)
											goto LABEL_158;
										v88 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v6 + 24i64))(v6, v28, v34);
										v89 = sub_14018EFA0(&v100, (__int64)L"%d", v88);
									}
									else
									{
									LABEL_88:
										v60 = 0i64;
										if ((_DWORD)v28 == 109)
										{
											LOWORD(v61) = 109;
											while ((_WORD)v61)
											{
												v61 = v26[v60 + 1];
												v62 = (unsigned __int16)word_1409D23CE[v60++];
												if (v61 != v62)
													goto LABEL_92;
											}
											v89 = sub_1400C10B0(v27, &v100, 2, (int*)v97);
										}
										else
										{
										LABEL_92:
											v34 = 0i64;
											if ((_DWORD)v28 != 116)
											{
											LABEL_96:
												v65 = *((_QWORD*)v26 - 1);
												if (v65 && (_DWORD)v28 == 91)
												{
													v3 = 1i64;
												}
												else if (v65 > 1)
												{
													v94 = *(_QWORD*)a1;
													*(_DWORD*)(a1 + 56) = 1;
													v3 = (*(__int64(__fastcall**)(__int64, int*, __int64))(v94 + 64))(a1, v20, v34);
												}
												goto LABEL_162;
											}
											LOWORD(v63) = 116;
											while ((_WORD)v63)
											{
												v63 = v26[v34 + 1];
												v64 = (unsigned __int16)word_1409D2416[v34++];
												if (v63 != v64)
													goto LABEL_96;
											}
											v90 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v6 + 24i64))(v6, v28, v34);
											v91 = v90 % 0x5265C00 / 0x36EE80;
											v92 = v90 % 0x5265C00 % 0x36EE80;
											v93 = v92 / 0xEA60;
											if (v90 / 0x5265C00)
											{
												v89 = sub_14018EFA0(
													&v100,
													(__int64)L"%dd %02d:%02d:%02d",
													v90 / 0x5265C00,
													(unsigned int)v91,
													v92 / 0xEA60,
													v92 % 0xEA60 / 0x3E8);
											}
											else if ((_DWORD)v91)
											{
												v89 = sub_14018EFA0(&v100, (__int64)L"%02d:%02d:%02d", v91, v93, v92 % 0xEA60 / 0x3E8);
											}
											else
											{
												v89 = sub_14018EFA0(&v100, (__int64)L"%02d:%02d", v93, v92 % 0xEA60 / 0x3E8);
											}
										}
									}
									(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 48i64))(a1, v89[1]);
									v69 = v101;
									goto LABEL_156;
								}
								LOWORD(v54) = 97;
								while ((_WORD)v54)
								{
									v54 = v26[v53 + 1];
									v55 = (unsigned __int16)word_1409D245E[v53++];
									if (v54 != v55)
										goto LABEL_80;
								}
								v87 = sub_14018B280(16i64, 0);
								v79 = (__int64)v87;
								v103 = (__int64)v87;
								v104 = v87;
								v105 = v87 + 4;
								if (v87)
									*(_WORD*)v87 = 0;
								v80 = v97;
								if (!v97)
									goto LABEL_128;
								v81 = "a";
							}
						}
					}
				}
				v82 = sub_1400B8AA0(v80, (int*)v81, (__int64)&v102);
				v79 = v103;
				if (v82)
				{
					v83 = v103;
					goto LABEL_129;
				}
				v80 = v97;
			LABEL_128:
				v83 = (__int64)v80;
			LABEL_129:
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 48i64))(a1, v83);
				if (v79)
				{
					sub_14018B900(v79, 0);
					v3 = v96;
					goto LABEL_162;
				}
				goto LABEL_158;
			}
		LABEL_12:
			v6 = *(_QWORD*)(a1 + 16);
			if (v6)
			{
				v7 = (int*)(*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)v6 + 16i64))(*(_QWORD*)(a1 + 16));
				v8 = v97;
				v98 = v97;
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
				v97 = 0i64;
				goto LABEL_22;
			}
		}
		return v3;
	}
	return 0i64;
}
// 1400C09A8: variable 'v28' is possibly undefined
// 1400C09A8: variable 'v34' is possibly undefined
// 1400C09B6: variable 'v67' is possibly undefined
// 1400C0B08: variable 'v76' is possibly undefined
// 1400C0CDB: variable 'v27' is possibly undefined
// 1409D20BE: using guessed type __int16 word_1409D20BE[];
// 1409D20EE: using guessed type __int16 word_1409D20EE[];
// 1409D2136: using guessed type __int16 word_1409D2136[];
// 1409D218E: using guessed type __int16 word_1409D218E[];
// 1409D21DE: using guessed type __int16 word_1409D21DE[];
// 1409D223E: using guessed type __int16 word_1409D223E[];
// 1409D228E: using guessed type __int16 word_1409D228E[];
// 1409D22AE: using guessed type __int16 word_1409D22AE[];
// 1409D22CC: using guessed type wchar_t aO_0[2];
// 1409D2316: using guessed type __int16 word_1409D2316[];
// 1409D2366: using guessed type __int16 word_1409D2366[];
// 1409D23CE: using guessed type __int16 word_1409D23CE[];
// 1409D2416: using guessed type __int16 word_1409D2416[];
// 1409D245E: using guessed type __int16 word_1409D245E[];
// 1409D2566: using guessed type __int16 word_1409D2566[];
// 1409D383C: using guessed type wchar_t aD_12[3];
// 1409D388C: using guessed type wchar_t aD_13[3];
// 140A14658: using guessed type wchar_t aDd02d02d02d_1[19];
// 140A14680: using guessed type wchar_t a02d02d02d_1[15];
// 140A146A0: using guessed type wchar_t a02d02d_1[10];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

