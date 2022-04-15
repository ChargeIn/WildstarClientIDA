//----- (00000001400BDD50) ----------------------------------------------------
__int64 __fastcall sub_1400BDD50(__int64 a1, int* a2)
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
	int* v24; // r12
	int* v25; // rax
	unsigned __int16* v26; // rbx
	__int64 v27; // rcx
	int v28; // r8d
	__int64 v29; // rdx
	int v30; // r9d
	int v31; // eax
	__int64 v32; // rdx
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
	__int64 v45; // rdx
	int v46; // r9d
	int v47; // eax
	__int64 v48; // rdx
	int v49; // r9d
	int v50; // eax
	int v51; // r9d
	int v52; // eax
	__int64 v53; // rdx
	int v54; // r9d
	int v55; // eax
	int v56; // r9d
	int v57; // eax
	unsigned __int64 v58; // rax
	int v59; // eax
	__int64 v60; // rcx
	_QWORD* v61; // rax
	int* v62; // rcx
	unsigned int v63; // eax
	_QWORD* v64; // rax
	int v65; // eax
	__int64 v66; // rcx
	_QWORD* v67; // rax
	__int16 v68; // ax
	__int64 v69; // rdi
	float v70; // xmm0_4
	int v71; // eax
	__int64 v72; // rcx
	_QWORD* v73; // rax
	int v74; // eax
	__int64 v75; // rcx
	int* v76; // rdi
	unsigned __int16 v77; // cx
	__int16* v78; // rdx
	unsigned __int16 v79; // cx
	const wchar_t* v80; // rdx
	__int64 v81; // rax
	__int64 v82; // rcx
	int v83; // eax
	bool v84; // zf
	const wchar_t* v85; // rdx
	int v86; // eax
	__int64 v87; // rcx
	_QWORD* v88; // rax
	unsigned __int16 v89; // cx
	int v90; // eax
	int* v91; // rax
	__int16* v92; // rcx
	char* v93; // rdx
	int v94; // eax
	int* v95; // rax
	unsigned int v96; // eax
	unsigned int v97; // eax
	__int64 v98; // r8
	unsigned int v99; // r10d
	unsigned int v100; // ecx
	__int64 v101; // rax
	__int64 v103; // [rsp+38h] [rbp-59h]
	__int16* v104; // [rsp+40h] [rbp-51h] BYREF
	__int16* v105; // [rsp+48h] [rbp-49h]
	int* v106; // [rsp+50h] [rbp-41h] BYREF
	__int64 v107; // [rsp+58h] [rbp-39h] BYREF
	int* v108; // [rsp+60h] [rbp-31h]
	int* v109; // [rsp+88h] [rbp-9h] BYREF
	int* v110; // [rsp+90h] [rbp-1h]
	int* v111; // [rsp+98h] [rbp+7h]
	int* v112; // [rsp+A0h] [rbp+Fh]

	v109 = a2;
	if (a2 && *(_WORD*)a2)
	{
		v3 = 0i64;
		v4 = 1i64;
		v104 = 0i64;
		v5 = (int*)((char*)a2 + 2);
		v103 = 1i64;
		if (*(_DWORD*)(a1 + 56))
		{
			v6 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(a1 + 56) = 0;
			if (v6)
			{
				v7 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
				v8 = v104;
				v105 = v104;
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
					v8 = v105;
					v13[v14] = 0;
					v4 = v103;
					v104 = v13;
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
					v103 = ++v4;
					if (!v10)
						goto LABEL_12;
				}
				v12 = sub_1400B7780(a1, v5, (__int64*)&v104);
				v6 = *(_QWORD*)(a1 + 16);
				v4 += v12;
				v103 = v4;
			LABEL_24:
				v106 = 0i64;
				if (v104)
				{
					if (v6 && !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6))
					{
						sub_1400B8980(a1, v104);
						v3 = v4;
					LABEL_188:
						if (v106)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v106 - 2) + 8i64))(v106 - 4);
						if (v104)
							(*(void(__fastcall**)(__int16*))(*((_QWORD*)v104 - 2) + 8i64))(v104 - 8);
						return v3;
					}
					(**(void(__fastcall***)(__int64, __int16*, _QWORD, int**))a1)(a1, v104, 0i64, &v106);
					if (v106)
					{
						v15 = *((_QWORD*)v106 - 1);
						v16 = v104;
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
						sub_1407DB590(v17 + 4, v106, v19 * 2);
						v18[v19] = 0;
						v104 = v18;
						if (v16)
							(*(void(__fastcall**)(__int16*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 8);
					}
				}
				v20 = v109;
				v21 = ((char*)v5 - (char*)v109) >> 1;
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
				v24 = (int*)*((_QWORD*)v23 - 1);
				v110 = v24;
				v109 = v23;
				v25 = sub_14018B280(2i64 * (_QWORD)v24 + 18, 0);
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
				sub_1401B2410(&v109, (__int64)(v25 + 4));
				v26[(_QWORD)v24] = 0;
				(*(void(__fastcall**)(int*))(*((_QWORD*)v23 - 2) + 8i64))(v23 - 4);
				v28 = *v26;
				v29 = 0i64;
				if (v28 == 110)
				{
					LOWORD(v30) = 110;
					while ((_WORD)v30)
					{
						v30 = v26[v29 + 1];
						v31 = (unsigned __int16)word_1409D1B36[v29++];
						if (v30 != v31)
							goto LABEL_44;
					}
					goto LABEL_143;
				}
			LABEL_44:
				v32 = 0i64;
				if (v28 == 35)
				{
					LOWORD(v33) = 35;
					while ((_WORD)v33)
					{
						v33 = v26[v32 + 1];
						v34 = (unsigned __int16)word_1409D1BE6[v32++];
						if (v33 != v34)
							goto LABEL_48;
					}
					if (!v6)
						goto LABEL_183;
					v59 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 24i64))(v6, v32);
					v61 = sub_1400BED80(v60, &v109, v59, (int*)v104);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 48i64))(a1, v61[1]);
					v62 = v110;
					goto LABEL_181;
				}
			LABEL_48:
				v32 = 0i64;
				if (v28 == 43)
				{
					LOWORD(v35) = 43;
					while ((_WORD)v35)
					{
						v35 = v26[v32 + 1];
						v36 = (unsigned __int16)word_1409D1C06[v32++];
						if (v35 != v36)
							goto LABEL_52;
					}
					if (!v6)
						goto LABEL_183;
					v63 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 24i64))(v6, v32);
					v64 = sub_14018EFA0(&v109, (__int64)L"%d", v63);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 48i64))(a1, v64[1]);
					if (v110)
						sub_14018B900((__int64)v110, 0);
					if (!v104 || !*v104)
						goto LABEL_183;
					do
						++v3;
					while (v104[v3]);
					if (!v3)
						goto LABEL_183;
					sub_1400A7EA0(*(_QWORD**)(a1 + 32), 160);
					v65 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6);
					v67 = sub_1400BED80(v66, &v109, v65, (int*)v104);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 48i64))(a1, v67[1]);
					v62 = v110;
					goto LABEL_181;
				}
			LABEL_52:
				v32 = 0i64;
				if (v28 == 102)
				{
					LOWORD(v37) = 102;
					while ((_WORD)v37)
					{
						v37 = v26[v32 + 1];
						v38 = (unsigned __int16)word_1409D1C1E[v32++];
						if (v37 != v38)
							goto LABEL_56;
					}
					if (!v6)
						goto LABEL_183;
					v68 = *((_WORD*)v20 + 1);
					v69 = v103;
					LODWORD(v107) = 3;
					LOBYTE(v108) = 9;
					if ((unsigned __int16)(v68 - 48) <= 9u)
					{
						v69 = v103 + 1;
						LOBYTE(v108) = *((_BYTE*)v20 + 2) - 48;
					}
					v70 = (*(float(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 32i64))(v6, v32);
					if (sub_14034C610(v70, (__int64)&v109, 0x10ui64, &v107) >= 0)
						(*(void(__fastcall**)(__int64, int**))(*(_QWORD*)a1 + 48i64))(a1, &v109);
					if (!v104 || !*v104)
						goto LABEL_184;
					do
						++v3;
					while (v104[v3]);
					if (!v3)
						goto LABEL_184;
					sub_1400A7EA0(*(_QWORD**)(a1 + 32), 160);
					v71 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6);
					v73 = sub_1400BED80(v72, &v107, v71, (int*)v104);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 48i64))(a1, v73[1]);
					if (!v108)
						goto LABEL_184;
					sub_14018B900((__int64)v108, 0);
					v3 = v69;
					goto LABEL_187;
				}
			LABEL_56:
				v32 = 0i64;
				if (v28 == 112)
				{
					LOWORD(v39) = 112;
					while ((_WORD)v39)
					{
						v39 = v26[v32 + 1];
						v40 = (unsigned __int16)word_1409D1B56[v32++];
						if (v39 != v40)
							goto LABEL_60;
					}
					if (!v6 || !v104 || !*v104)
						goto LABEL_183;
					do
						++v3;
					while (v104[v3]);
					if (!v3)
						goto LABEL_183;
					v74 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 24i64))(v6, v32);
					sub_1400BED80(v75, &v109, v74, (int*)v104);
					if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6) == 1)
					{
						v76 = v110;
						v77 = *(_WORD*)v110;
						if (*(_WORD*)v110 >= 0x80u)
						{
							v77 = sub_14018DF60(v77);
						}
						else if ((unsigned __int16)(v77 - 65) <= 0x19u)
						{
							v77 += 32;
						}
						switch (v77)
						{
						case 0x61u:
						case 0x65u:
						case 0x68u:
						case 0x69u:
						case 0x6Fu:
						case 0x75u:
						case 0x79u:
						case 0xE6u:
							(*(void(__fastcall**)(__int64, const wchar_t*))(*(_QWORD*)a1 + 48i64))(a1, L"d'");
							break;
						default:
							(*(void(__fastcall**)(__int64, const wchar_t*))(*(_QWORD*)a1 + 48i64))(a1, L"de ");
							break;
						}
					}
					else
					{
						(*(void(__fastcall**)(__int64, const wchar_t*))(*(_QWORD*)a1 + 48i64))(a1, L"des ");
						v76 = v110;
					}
					goto LABEL_126;
				}
			LABEL_60:
				v32 = 0i64;
				if (v28 == 100)
				{
					LOWORD(v41) = 100;
					while ((_WORD)v41)
					{
						v41 = v26[v32 + 1];
						v42 = (unsigned __int16)word_1409D1C5E[v32++];
						if (v41 != v42)
							goto LABEL_64;
					}
					if (!v6 || !v104 || !*v104)
						goto LABEL_183;
					do
						++v3;
					while (v104[v3]);
					if (!v3)
						goto LABEL_183;
					if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 24i64))(v6, v32) == 1)
					{
						v79 = *v104;
						if ((unsigned __int16)*v104 >= 0x80u)
						{
							v79 = sub_14018DF60(v79);
						}
						else if ((unsigned __int16)(v79 - 65) <= 0x19u)
						{
							v79 += 32;
						}
						switch (v79)
						{
						case 0x61u:
						case 0x65u:
						case 0x68u:
						case 0x69u:
						case 0x6Fu:
						case 0x75u:
						case 0x79u:
						case 0xE6u:
							v80 = L"l'";
						LABEL_141:
							v81 = *(_QWORD*)a1;
							v82 = a1;
							break;
						default:
							v83 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 40i64))(v6);
							v82 = a1;
							v84 = v83 == 1;
							v81 = *(_QWORD*)a1;
							if (v84)
								v80 = L"la ";
							else
								v80 = L"le ";
							break;
						}
						goto LABEL_142;
					}
					v85 = L"les ";
				LABEL_148:
					(*(void(__fastcall**)(__int64, const wchar_t*))(*(_QWORD*)a1 + 48i64))(a1, v85);
					v86 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6);
					v88 = sub_1400BED80(v87, &v107, v86, (int*)v104);
				LABEL_180:
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 48i64))(a1, v88[1]);
					v62 = v108;
				LABEL_181:
					if (v62)
						sub_14018B900((__int64)v62, 0);
					goto LABEL_183;
				}
			LABEL_64:
				v32 = 0i64;
				if (v28 == 112)
				{
					LOWORD(v43) = 112;
					while ((_WORD)v43)
					{
						v43 = v26[v32 + 1];
						v44 = (unsigned __int16)word_1409D35C6[v32++];
						if (v43 != v44)
							goto LABEL_68;
					}
					if (!v6)
						goto LABEL_183;
					if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 24i64))(v6, v32) == 1)
					{
						v89 = *v104;
						if ((unsigned __int16)*v104 >= 0x80u)
						{
							v89 = sub_14018DF60(v89);
						}
						else if ((unsigned __int16)(v89 - 65) <= 0x19u)
						{
							v89 += 32;
						}
						switch (v89)
						{
						case 0x61u:
						case 0x65u:
						case 0x68u:
						case 0x69u:
						case 0x6Fu:
						case 0x75u:
						case 0x79u:
						case 0xE6u:
							v80 = L"de l'";
							goto LABEL_141;
						default:
							v90 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 40i64))(v6);
							v82 = a1;
							v84 = v90 == 1;
							v81 = *(_QWORD*)a1;
							if (v84)
								v80 = L"de la ";
							else
								v80 = L"du ";
							break;
						}
					LABEL_142:
						(*(void(__fastcall**)(__int64, const wchar_t*))(v81 + 48))(v82, v80);
					LABEL_143:
						(*(void(__fastcall**)(__int64, __int16*))(*(_QWORD*)a1 + 48i64))(a1, v104);
						v3 = v103;
						goto LABEL_187;
					}
					v85 = L"des ";
					goto LABEL_148;
				}
			LABEL_68:
				v45 = 0i64;
				if (v28 == 107)
				{
					LOWORD(v46) = 107;
					while ((_WORD)v46)
					{
						v46 = v26[v45 + 1];
						v47 = (unsigned __int16)word_1409D1D6E[v45++];
						if (v46 != v47)
							goto LABEL_72;
					}
					v91 = sub_14018B280(16i64, 0);
					v76 = v91;
					v110 = v91;
					v111 = v91;
					v112 = v91 + 4;
					if (v91)
						*(_WORD*)v91 = 0;
					v92 = v104;
					if (!v104)
						goto LABEL_167;
					v93 = "k";
				}
				else
				{
				LABEL_72:
					v48 = 0i64;
					if (v28 != 111)
					{
					LABEL_76:
						v32 = 0i64;
						if (v28 == 99)
						{
							LOWORD(v51) = 99;
							while ((_WORD)v51)
							{
								v51 = v26[v32 + 1];
								v52 = (unsigned __int16)word_1409D1D16[v32++];
								if (v51 != v52)
									goto LABEL_80;
							}
							if (!v6)
								goto LABEL_183;
							v96 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 24i64))(v6, v32);
							v88 = sub_14018EFA0(&v107, (__int64)L"%d", v96);
						}
						else
						{
						LABEL_80:
							v53 = 0i64;
							if (v28 == 109)
							{
								LOWORD(v54) = 109;
								while ((_WORD)v54)
								{
									v54 = v26[v53 + 1];
									v55 = (unsigned __int16)word_1409D1DE6[v53++];
									if (v54 != v55)
										goto LABEL_84;
								}
								v88 = sub_1400BED80(v27, &v107, 2, (int*)v104);
							}
							else
							{
							LABEL_84:
								v32 = 0i64;
								if (v28 != 116)
								{
								LABEL_88:
									v58 = *((_QWORD*)v26 - 1);
									if (v58 && v28 == 91)
									{
										v3 = 1i64;
									}
									else if (v58 > 1)
									{
										v101 = *(_QWORD*)a1;
										*(_DWORD*)(a1 + 56) = 1;
										v3 = (*(__int64(__fastcall**)(__int64, int*))(v101 + 64))(a1, v20);
									}
									goto LABEL_187;
								}
								LOWORD(v56) = 116;
								while ((_WORD)v56)
								{
									v56 = v26[v32 + 1];
									v57 = (unsigned __int16)word_1409D1E26[v32++];
									if (v56 != v57)
										goto LABEL_88;
								}
								v97 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 24i64))(v6, v32);
								v98 = v97 % 0x5265C00 / 0x36EE80;
								v99 = v97 % 0x5265C00 % 0x36EE80;
								v100 = v99 / 0xEA60;
								if (v97 / 0x5265C00)
								{
									v88 = sub_14018EFA0(
										&v107,
										(__int64)L"%dd %02d:%02d:%02d",
										v97 / 0x5265C00,
										(unsigned int)v98,
										v99 / 0xEA60,
										v99 % 0xEA60 / 0x3E8);
								}
								else if ((_DWORD)v98)
								{
									v88 = sub_14018EFA0(&v107, (__int64)L"%02d:%02d:%02d", v98, v100, v99 % 0xEA60 / 0x3E8);
								}
								else
								{
									v88 = sub_14018EFA0(&v107, (__int64)L"%02d:%02d", v100, v99 % 0xEA60 / 0x3E8);
								}
							}
						}
						goto LABEL_180;
					}
					LOWORD(v49) = 111;
					while ((_WORD)v49)
					{
						v49 = v26[v48 + 1];
						v50 = (unsigned __int16)word_1409D1CB6[v48++];
						if (v49 != v50)
							goto LABEL_76;
					}
					v95 = sub_14018B280(16i64, 0);
					v76 = v95;
					v110 = v95;
					v111 = v95;
					v112 = v95 + 4;
					if (v95)
						*(_WORD*)v95 = 0;
					v92 = v104;
					if (!v104)
					{
					LABEL_167:
						v78 = v92;
						goto LABEL_127;
					}
					v93 = "o";
				}
				v94 = sub_1400B8AA0(v92, (int*)v93, (__int64)&v109);
				v76 = v110;
				if (v94)
				{
				LABEL_126:
					v78 = (__int16*)v76;
				LABEL_127:
					(*(void(__fastcall**)(__int64, __int16*))(*(_QWORD*)a1 + 48i64))(a1, v78);
					if (!v76)
					{
					LABEL_183:
						v69 = v103;
					LABEL_184:
						v3 = v69;
						goto LABEL_187;
					}
					sub_14018B900((__int64)v76, 0);
					v3 = v103;
				LABEL_187:
					(*(void(__fastcall**)(unsigned __int16*, __int64))(*((_QWORD*)v26 - 2) + 8i64))(v26 - 8, v32);
					goto LABEL_188;
				}
				v92 = v104;
				goto LABEL_167;
			}
		LABEL_12:
			v6 = *(_QWORD*)(a1 + 16);
			if (v6)
			{
				v7 = (int*)(*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)v6 + 16i64))(*(_QWORD*)(a1 + 16));
				v8 = v104;
				v105 = v104;
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
				v104 = 0i64;
				goto LABEL_22;
			}
		}
		return v3;
	}
	return 0i64;
}
// 1400BE2BE: variable 'v60' is possibly undefined
// 1400BE368: variable 'v66' is possibly undefined
// 1400BE435: variable 'v72' is possibly undefined
// 1400BE4AA: variable 'v75' is possibly undefined
// 1400BE675: variable 'v87' is possibly undefined
// 1400BE7F0: variable 'v27' is possibly undefined
// 1400BE904: variable 'v32' is possibly undefined
// 1409D1B36: using guessed type __int16 word_1409D1B36[];
// 1409D1B56: using guessed type __int16 word_1409D1B56[];
// 1409D1BE6: using guessed type __int16 word_1409D1BE6[];
// 1409D1C06: using guessed type __int16 word_1409D1C06[];
// 1409D1C1E: using guessed type __int16 word_1409D1C1E[];
// 1409D1C5E: using guessed type __int16 word_1409D1C5E[];
// 1409D1CB6: using guessed type __int16 word_1409D1CB6[];
// 1409D1D16: using guessed type __int16 word_1409D1D16[];
// 1409D1D6E: using guessed type __int16 word_1409D1D6E[];
// 1409D1DE6: using guessed type __int16 word_1409D1DE6[];
// 1409D1E26: using guessed type __int16 word_1409D1E26[];
// 1409D3424: using guessed type wchar_t aD_8[3];
// 1409D34E4: using guessed type wchar_t aD_7[3];
// 1409D35C6: using guessed type __int16 word_1409D35C6[111];
// 1409D36A4: using guessed type wchar_t asc_1409D36A4[3];
// 1409D36DC: using guessed type wchar_t aD_9[3];
// 140A14490: using guessed type wchar_t aDe_0[4];
// 140A14498: using guessed type wchar_t aDes[5];
// 140A144A8: using guessed type wchar_t aLes[5];
// 140A144B8: using guessed type wchar_t aDeL[6];
// 140A144C8: using guessed type wchar_t aDeLa[7];
// 140A144D8: using guessed type wchar_t aLa[4];
// 140A144E0: using guessed type wchar_t aLe[4];
// 140A144E8: using guessed type wchar_t aDu[4];
// 140A144F0: using guessed type wchar_t aDes_0[5];
// 140A14500: using guessed type wchar_t a02d02d[10];
// 140A14550: using guessed type wchar_t aDd02d02d02d[19];
// 140A14578: using guessed type wchar_t a02d02d02d[15];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

