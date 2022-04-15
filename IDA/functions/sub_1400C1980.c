#include "../winhttp.h"

//----- (00000001400C1980) ----------------------------------------------------
__int64 __fastcall sub_1400C1980(__int64 a1, int* a2)
{
	__int64 v3; // rsi
	__int64 v4; // rbx
	int* v5; // r12
	__int64 v6; // r15
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
	__int64 v21; // r12
	int* v22; // rax
	int* v23; // rdi
	__int64 v24; // r12
	int* v25; // rax
	unsigned __int16* v26; // rbx
	__int64 v27; // rcx
	__int16* v28; // rdx
	__int64 v29; // r8
	int v30; // r9d
	int v31; // eax
	__int64 v32; // r8
	int v33; // r9d
	int v34; // eax
	int v35; // r9d
	int v36; // eax
	int v37; // r9d
	int v38; // eax
	int v39; // r9d
	int v40; // eax
	int v41; // r9d
	int v42; // eax
	int v43; // r9d
	int v44; // eax
	int v45; // r9d
	int v46; // eax
	int v47; // r9d
	int v48; // eax
	int v49; // r9d
	int v50; // eax
	int v51; // r9d
	int v52; // eax
	__int64 v53; // r8
	int v54; // r9d
	int v55; // eax
	int v56; // r9d
	int v57; // eax
	unsigned __int64 v58; // rax
	__int64 v59; // rax
	int v60; // eax
	__int64 v61; // rcx
	_QWORD* v62; // rax
	__int64 v63; // rcx
	unsigned int v64; // eax
	_QWORD* v65; // rax
	int v66; // eax
	__int64 v67; // rcx
	_QWORD* v68; // rax
	__int16 v69; // ax
	__int64 v70; // rdi
	float v71; // xmm0_4
	int v72; // eax
	__int64 v73; // rcx
	_QWORD* v74; // rax
	int v75; // eax
	int v76; // eax
	int v77; // eax
	int v78; // eax
	int v79; // eax
	unsigned int v80; // eax
	_QWORD* v81; // rax
	unsigned int v82; // eax
	__int64 v83; // r8
	unsigned int v84; // r10d
	unsigned int v85; // ecx
	__int64 v86; // rax
	__int64 v88; // [rsp+38h] [rbp-59h]
	__int16* v89; // [rsp+40h] [rbp-51h] BYREF
	__int16* v90; // [rsp+48h] [rbp-49h]
	int* v91; // [rsp+50h] [rbp-41h] BYREF
	__int64 v92; // [rsp+58h] [rbp-39h] BYREF
	__int64 v93; // [rsp+60h] [rbp-31h]
	int* v94; // [rsp+88h] [rbp-9h] BYREF
	__int64 v95; // [rsp+90h] [rbp-1h]

	v94 = a2;
	if (a2 && *(_WORD*)a2)
	{
		v3 = 0i64;
		v4 = 1i64;
		v89 = 0i64;
		v5 = (int*)((char*)a2 + 2);
		v88 = 1i64;
		if (*(_DWORD*)(a1 + 60))
		{
			v6 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(a1 + 60) = 0;
			if (v6)
			{
				v7 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
				v8 = v89;
				v90 = v89;
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
					v8 = v90;
					v13[v14] = 0;
					v4 = v88;
					v89 = v13;
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
					v88 = ++v4;
					if (!v10)
						goto LABEL_12;
				}
				v12 = sub_1400B7780(a1, v5, (__int64*)&v89);
				v6 = *(_QWORD*)(a1 + 16);
				v4 += v12;
				v88 = v4;
			LABEL_24:
				v91 = 0i64;
				if (v89)
				{
					if (v6 && !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6))
					{
						sub_1400B8980(a1, v89);
						v3 = v4;
					LABEL_166:
						if (v91)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v91 - 2) + 8i64))(v91 - 4);
						if (v89)
							(*(void(__fastcall**)(__int16*))(*((_QWORD*)v89 - 2) + 8i64))(v89 - 8);
						return v3;
					}
					(**(void(__fastcall***)(__int64, __int16*, _QWORD, int**))a1)(a1, v89, 0i64, &v91);
					if (v91)
					{
						v15 = *((_QWORD*)v91 - 1);
						v16 = v89;
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
						sub_1407DB590(v17 + 4, v91, v19 * 2);
						v18[v19] = 0;
						v89 = v18;
						if (v16)
							(*(void(__fastcall**)(__int16*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 8);
					}
				}
				v20 = v94;
				v21 = ((char*)v5 - (char*)v94) >> 1;
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
				v95 = v24;
				v94 = v23;
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
				sub_1401B2410(&v94, (__int64)(v25 + 4));
				v26[v24] = 0;
				(*(void(__fastcall**)(int*))(*((_QWORD*)v23 - 2) + 8i64))(v23 - 4);
				v28 = (__int16*)*v26;
				v29 = 0i64;
				if ((_DWORD)v28 == 110)
				{
					LOWORD(v30) = 110;
					while ((_WORD)v30)
					{
						v30 = v26[v29 + 1];
						v31 = (unsigned __int16)word_1409D25CE[v29++];
						if (v30 != v31)
							goto LABEL_44;
					}
					(*(void(__fastcall**)(__int64, __int16*, __int64))(*(_QWORD*)a1 + 48i64))(a1, v89, v29);
					v3 = v88;
					goto LABEL_165;
				}
			LABEL_44:
				v32 = 0i64;
				if ((_DWORD)v28 == 112)
				{
					LOWORD(v33) = 112;
					while ((_WORD)v33)
					{
						v33 = v26[v32 + 1];
						v34 = (unsigned __int16)word_1409D2606[v32++];
						if (v33 != v34)
							goto LABEL_48;
					}
					v28 = v89;
					if (v89 && *v89)
					{
						do
							++v3;
						while (v89[v3]);
						if (v3)
						{
							(*(void(__fastcall**)(__int64, __int16*, __int64))(*(_QWORD*)a1 + 48i64))(a1, v89, v32);
							v59 = *(_QWORD*)a1;
							if (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8i64)
								+ 2
								* ((__int64)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 16i64)
									- *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8i64)) >> 1)
								- 2) == 115)
								(*(void(__fastcall**)(__int64, const char*))(v59 + 48))(a1, "'");
							else
								(*(void(__fastcall**)(__int64, const wchar_t*))(v59 + 48))(a1, L"'s");
							v3 = v88;
							goto LABEL_165;
						}
					}
					goto LABEL_161;
				}
			LABEL_48:
				v32 = 0i64;
				if ((_DWORD)v28 == 35)
				{
					LOWORD(v35) = 35;
					while ((_WORD)v35)
					{
						v35 = v26[v32 + 1];
						v36 = (unsigned __int16)word_1409D2666[v32++];
						if (v35 != v36)
							goto LABEL_52;
					}
					if (!v6)
						goto LABEL_161;
					v60 = (*(__int64(__fastcall**)(__int64, __int16*, __int64))(*(_QWORD*)v6 + 24i64))(v6, v28, v32);
					v62 = sub_1400C2830(v61, &v94, v60, (int*)v89);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 48i64))(a1, v62[1]);
					v63 = v95;
				}
				else
				{
				LABEL_52:
					v32 = 0i64;
					if ((_DWORD)v28 == 43)
					{
						LOWORD(v37) = 43;
						while ((_WORD)v37)
						{
							v37 = v26[v32 + 1];
							v38 = (unsigned __int16)word_1409D268E[v32++];
							if (v37 != v38)
								goto LABEL_56;
						}
						if (!v6)
							goto LABEL_161;
						v64 = (*(__int64(__fastcall**)(__int64, __int16*, __int64))(*(_QWORD*)v6 + 24i64))(v6, v28, v32);
						v65 = sub_14018EFA0(&v94, (__int64)L"%d", v64);
						(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 48i64))(a1, v65[1]);
						if (v95)
							sub_14018B900(v95, 0);
						if (!v89 || !*v89)
							goto LABEL_161;
						do
							++v3;
						while (v89[v3]);
						if (!v3)
							goto LABEL_161;
						sub_1400A7EA0(*(_QWORD**)(a1 + 32), 160);
						v66 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6);
						v68 = sub_1400C2830(v67, &v94, v66, (int*)v89);
						(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 48i64))(a1, v68[1]);
						v63 = v95;
					}
					else
					{
					LABEL_56:
						v32 = 0i64;
						if ((_DWORD)v28 == 102)
						{
							LOWORD(v39) = 102;
							while ((_WORD)v39)
							{
								v39 = v26[v32 + 1];
								v40 = (unsigned __int16)word_1409D2616[v32++];
								if (v39 != v40)
									goto LABEL_60;
							}
							if (v6)
							{
								v69 = *((_WORD*)v20 + 1);
								v70 = v88;
								LODWORD(v92) = 3;
								LOBYTE(v93) = 9;
								if ((unsigned __int16)(v69 - 48) <= 9u)
								{
									v70 = v88 + 1;
									LOBYTE(v93) = *((_BYTE*)v20 + 2) - 48;
								}
								v71 = (*(float(__fastcall**)(__int64, __int16*, __int64))(*(_QWORD*)v6 + 32i64))(v6, v28, v32);
								if (sub_14034C610(v71, (__int64)&v94, 0x10ui64, &v92) >= 0)
									(*(void(__fastcall**)(__int64, int**))(*(_QWORD*)a1 + 48i64))(a1, &v94);
								if (v89 && *v89)
								{
									do
										++v3;
									while (v89[v3]);
									if (v3)
									{
										sub_1400A7EA0(*(_QWORD**)(a1 + 32), 160);
										v72 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6);
										v74 = sub_1400C2830(v73, &v92, v72, (int*)v89);
										(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 48i64))(a1, v74[1]);
										if (v93)
										{
											sub_14018B900(v93, 0);
											v3 = v70;
										LABEL_165:
											(*(void(__fastcall**)(unsigned __int16*, __int16*, __int64))(*((_QWORD*)v26 - 2) + 8i64))(
												v26 - 8,
												v28,
												v32);
											goto LABEL_166;
										}
									}
								}
							LABEL_162:
								v3 = v70;
								goto LABEL_165;
							}
						LABEL_161:
							v70 = v88;
							goto LABEL_162;
						}
					LABEL_60:
						v32 = 0i64;
						if ((_DWORD)v28 == 111)
						{
							LOWORD(v41) = 111;
							while ((_WORD)v41)
							{
								v41 = v26[v32 + 1];
								v42 = (unsigned __int16)word_1409D262E[v32++];
								if (v41 != v42)
									goto LABEL_64;
							}
							if (v6)
							{
								if ((*(int(__fastcall**)(__int64, __int16*, __int64))(*(_QWORD*)v6 + 24i64))(v6, v28, v32) <= 1)
								{
									v75 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 40i64))(v6);
									(*(void(__fastcall**)(__int64, wchar_t*))(*(_QWORD*)a1 + 48i64))(a1, off_140C1F1F0[v75]);
								}
								else
								{
									(*(void(__fastcall**)(__int64, const wchar_t*))(*(_QWORD*)a1 + 48i64))(a1, L"them");
								}
								v3 = v88;
								goto LABEL_165;
							}
							goto LABEL_161;
						}
					LABEL_64:
						v32 = 0i64;
						if ((_DWORD)v28 == 115)
						{
							LOWORD(v43) = 115;
							while ((_WORD)v43)
							{
								v43 = v26[v32 + 1];
								v44 = (unsigned __int16)word_1409D2726[v32++];
								if (v43 != v44)
									goto LABEL_68;
							}
							if (v6)
							{
								if ((*(int(__fastcall**)(__int64, __int16*, __int64))(*(_QWORD*)v6 + 24i64))(v6, v28, v32) <= 1)
								{
									v76 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 40i64))(v6);
									(*(void(__fastcall**)(__int64, wchar_t*))(*(_QWORD*)a1 + 48i64))(a1, off_140C1F1D8[v76]);
								}
								else
								{
									(*(void(__fastcall**)(__int64, const wchar_t*))(*(_QWORD*)a1 + 48i64))(a1, L"they");
								}
								v3 = v88;
								goto LABEL_165;
							}
							goto LABEL_161;
						}
					LABEL_68:
						v32 = 0i64;
						if ((_DWORD)v28 == 114)
						{
							LOWORD(v45) = 114;
							while ((_WORD)v45)
							{
								v45 = v26[v32 + 1];
								v46 = (unsigned __int16)word_1409D2746[v32++];
								if (v45 != v46)
									goto LABEL_72;
							}
							if (v6)
							{
								if ((*(int(__fastcall**)(__int64, __int16*, __int64))(*(_QWORD*)v6 + 24i64))(v6, v28, v32) <= 1)
								{
									v77 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 40i64))(v6);
									(*(void(__fastcall**)(__int64, wchar_t*))(*(_QWORD*)a1 + 48i64))(a1, off_140C1F1C0[v77]);
								}
								else
								{
									(*(void(__fastcall**)(__int64, const wchar_t*))(*(_QWORD*)a1 + 48i64))(a1, L"themselves");
								}
								v3 = v88;
								goto LABEL_165;
							}
							goto LABEL_161;
						}
					LABEL_72:
						v32 = 0i64;
						if ((_DWORD)v28 == 104)
						{
							LOWORD(v47) = 104;
							while ((_WORD)v47)
							{
								v47 = v26[v32 + 1];
								v48 = (unsigned __int16)word_1409D26CE[v32++];
								if (v47 != v48)
									goto LABEL_76;
							}
							if (v6)
							{
								if ((*(int(__fastcall**)(__int64, __int16*, __int64))(*(_QWORD*)v6 + 24i64))(v6, v28, v32) <= 1)
								{
									v78 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 40i64))(v6);
									(*(void(__fastcall**)(__int64, wchar_t*))(*(_QWORD*)a1 + 48i64))(a1, off_140C1F1A8[v78]);
								}
								else
								{
									(*(void(__fastcall**)(__int64, const wchar_t*))(*(_QWORD*)a1 + 48i64))(a1, L"theirs");
								}
								v3 = v88;
								goto LABEL_165;
							}
							goto LABEL_161;
						}
					LABEL_76:
						v32 = 0i64;
						if ((_DWORD)v28 == 97)
						{
							LOWORD(v49) = 97;
							while ((_WORD)v49)
							{
								v49 = v26[v32 + 1];
								v50 = (unsigned __int16)word_1409D26F6[v32++];
								if (v49 != v50)
									goto LABEL_80;
							}
							if (v6)
							{
								if ((*(int(__fastcall**)(__int64, __int16*, __int64))(*(_QWORD*)v6 + 24i64))(v6, v28, v32) <= 1)
								{
									v79 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 40i64))(v6);
									(*(void(__fastcall**)(__int64, wchar_t*))(*(_QWORD*)a1 + 48i64))(a1, off_140C1F190[v79]);
								}
								else
								{
									(*(void(__fastcall**)(__int64, const wchar_t*))(*(_QWORD*)a1 + 48i64))(a1, L"their");
								}
								v3 = v88;
								goto LABEL_165;
							}
							goto LABEL_161;
						}
					LABEL_80:
						v32 = 0i64;
						if ((_DWORD)v28 == 99)
						{
							LOWORD(v51) = 99;
							while ((_WORD)v51)
							{
								v51 = v26[v32 + 1];
								v52 = (unsigned __int16)word_1409D278E[v32++];
								if (v51 != v52)
									goto LABEL_84;
							}
							if (!v6)
								goto LABEL_161;
							v80 = (*(__int64(__fastcall**)(__int64, __int16*, __int64))(*(_QWORD*)v6 + 24i64))(v6, v28, v32);
							v81 = sub_14018EFA0(&v92, (__int64)L"%d", v80);
						}
						else
						{
						LABEL_84:
							v53 = 0i64;
							if ((_DWORD)v28 == 109)
							{
								LOWORD(v54) = 109;
								while ((_WORD)v54)
								{
									v54 = v26[v53 + 1];
									v55 = (unsigned __int16)word_1409D27D6[v53++];
									if (v54 != v55)
										goto LABEL_88;
								}
								v81 = sub_1400C2830(v27, &v92, 2, (int*)v89);
							}
							else
							{
							LABEL_88:
								v32 = 0i64;
								if ((_DWORD)v28 != 116)
								{
								LABEL_92:
									v58 = *((_QWORD*)v26 - 1);
									if (v58 && (_DWORD)v28 == 91)
									{
										v3 = 1i64;
									}
									else if (v58 > 1)
									{
										v86 = *(_QWORD*)a1;
										*(_DWORD*)(a1 + 60) = 1;
										v3 = (*(__int64(__fastcall**)(__int64, int*, __int64))(v86 + 64))(a1, v20, v32);
									}
									goto LABEL_165;
								}
								LOWORD(v56) = 116;
								while ((_WORD)v56)
								{
									v56 = v26[v32 + 1];
									v57 = (unsigned __int16)word_1409D2896[v32++];
									if (v56 != v57)
										goto LABEL_92;
								}
								v82 = (*(__int64(__fastcall**)(__int64, __int16*, __int64))(*(_QWORD*)v6 + 24i64))(v6, v28, v32);
								v83 = v82 % 0x5265C00 / 0x36EE80;
								v84 = v82 % 0x5265C00 % 0x36EE80;
								v85 = v84 / 0xEA60;
								if (v82 / 0x5265C00)
								{
									v81 = sub_14018EFA0(
										&v92,
										(__int64)L"%dd %02d:%02d:%02d",
										v82 / 0x5265C00,
										(unsigned int)v83,
										v84 / 0xEA60,
										v84 % 0xEA60 / 0x3E8);
								}
								else if ((_DWORD)v83)
								{
									v81 = sub_14018EFA0(&v92, (__int64)L"%02d:%02d:%02d", v83, v85, v84 % 0xEA60 / 0x3E8);
								}
								else
								{
									v81 = sub_14018EFA0(&v92, (__int64)L"%02d:%02d", v85, v84 % 0xEA60 / 0x3E8);
								}
							}
						}
						(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 48i64))(a1, v81[1]);
						v63 = v93;
					}
				}
				if (v63)
					sub_14018B900(v63, 0);
				goto LABEL_161;
			}
		LABEL_12:
			v6 = *(_QWORD*)(a1 + 16);
			if (v6)
			{
				v7 = (int*)(*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)v6 + 16i64))(*(_QWORD*)(a1 + 16));
				v8 = v89;
				v90 = v89;
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
				v89 = 0i64;
				goto LABEL_22;
			}
		}
		return v3;
	}
	return 0i64;
}
// 1400C1FB6: variable 'v61' is possibly undefined
// 1400C2065: variable 'v67' is possibly undefined
// 1400C2135: variable 'v73' is possibly undefined
// 1400C2368: variable 'v27' is possibly undefined
// 1400C247C: variable 'v28' is possibly undefined
// 1400C247C: variable 'v32' is possibly undefined
// 1409D25CE: using guessed type __int16 word_1409D25CE[];
// 1409D2606: using guessed type __int16 word_1409D2606[];
// 1409D2616: using guessed type __int16 word_1409D2616[];
// 1409D262E: using guessed type __int16 word_1409D262E[];
// 1409D2666: using guessed type __int16 word_1409D2666[];
// 1409D268E: using guessed type __int16 word_1409D268E[];
// 1409D26CE: using guessed type __int16 word_1409D26CE[];
// 1409D26F6: using guessed type __int16 word_1409D26F6[];
// 1409D2726: using guessed type __int16 word_1409D2726[];
// 1409D2746: using guessed type __int16 word_1409D2746[];
// 1409D278E: using guessed type __int16 word_1409D278E[];
// 1409D27D6: using guessed type __int16 word_1409D27D6[];
// 1409D2896: using guessed type __int16 word_1409D2896[];
// 1409D3AD4: using guessed type wchar_t aD_14[3];
// 1409D3B44: using guessed type wchar_t aS[3];
// 1409D3B74: using guessed type wchar_t aD_15[3];
// 140A14740: using guessed type wchar_t aThem[5];
// 140A14750: using guessed type wchar_t aTheirs[7];
// 140A14760: using guessed type wchar_t aTheir[6];
// 140A14770: using guessed type wchar_t aThey[5];
// 140A14780: using guessed type wchar_t aThemselves[11];
// 140A14798: using guessed type wchar_t aDd02d02d02d_2[19];
// 140A147C0: using guessed type wchar_t a02d02d02d_2[15];
// 140A147E0: using guessed type wchar_t a02d02d_2[10];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C1F190: using guessed type wchar_t *off_140C1F190[5];
// 140C1F1A8: using guessed type wchar_t *off_140C1F1A8[2];
// 140C1F1C0: using guessed type wchar_t *off_140C1F1C0[9];
// 140C1F1D8: using guessed type wchar_t *off_140C1F1D8[6];
// 140C1F1F0: using guessed type wchar_t *off_140C1F1F0[3];

