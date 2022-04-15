//----- (00000001404DF2C0) ----------------------------------------------------
__int64 __fastcall sub_1404DF2C0(_QWORD* a1, int* a2, unsigned int a3, int** a4)
{
	__int64 result; // rax
	_QWORD* v8; // r13
	_WORD* v9; // rax
	__int64 v10; // rax
	__int64 v11; // rbx
	int* v12; // rdx
	int* v13; // rdi
	unsigned __int64 v14; // rbx
	char* v15; // rsi
	int* v16; // rax
	__int64 v17; // rbx
	char* v18; // rdi
	int* v19; // rax
	unsigned __int64 v20; // rdi
	char* v21; // rax
	__int64 v22; // rcx
	int* v23; // r8
	unsigned __int64 v24; // rax
	unsigned __int64 v25; // rdx
	unsigned __int64 v26; // rcx
	unsigned __int64* v27; // rax
	char* v28; // rcx
	unsigned __int64 v29; // rax
	char* v30; // rsi
	int* v31; // rbx
	unsigned __int64 v32; // rax
	int* v33; // rax
	int* v34; // rdx
	char* v35; // r8
	unsigned int v36; // edi
	__int64 v37; // rax
	BOOL v38; // esi
	__int64 v39; // rdx
	unsigned int v40; // ecx
	__int64 v41; // rax
	__int64 v42; // r8
	int* v43; // rdx
	__int64 v44; // rax
	unsigned int v45; // eax
	__int64 v46; // rcx
	int v47; // eax
	__int64 v48; // rcx
	__int64 v49; // r8
	__int64 v50; // rax
	__int64 v51; // rdx
	__int64 v52; // r8
	__int64 v53; // rax
	int* v54; // rax
	__int64 v55; // rdx
	int* v56; // rsi
	int** v57; // r15
	int* v58; // r14
	__int64 v59; // rbx
	int* v60; // rax
	float v61; // xmm7_4
	__int64 v62; // rcx
	float v63; // xmm6_4
	__int64 v64; // rdx
	unsigned int v65; // eax
	__int64 v66; // rcx
	__int64 v67; // rax
	__int64 v68; // rcx
	__int64 v69; // r8
	float v70; // xmm0_4
	__int64 v71; // rcx
	__int64 v72; // rax
	__int64 v73; // rcx
	__int64 v74; // r8
	float v75; // xmm0_4
	__int64 v76; // rcx
	__int64 v77; // rax
	__int64 v78; // rcx
	__int64 v79; // r8
	float v80; // xmm0_4
	__int64 v81; // rcx
	__int64 v82; // rax
	int v83; // ecx
	float v84; // xmm0_4
	__int64 v85; // rdi
	int* v86; // rdi
	__int64 v87; // rcx
	int* v88; // rdx
	__int64 v89; // rcx
	__int64 v90; // rcx
	__int64 v91; // rcx
	__int64 v92; // rax
	__int64 v93; // rdi
	__int64 v94; // r10
	int v95; // r8d
	_DWORD* v96; // rax
	unsigned __int64 v97; // rcx
	__int64 v98; // rax
	__int64 v99; // rbx
	int v100; // r8d
	_DWORD* v101; // rax
	unsigned __int64 v102; // rcx
	int* v103; // rdi
	unsigned __int64 v104; // rbx
	__int64 v105; // rbx
	unsigned __int64 v106; // [rsp+30h] [rbp-29h] BYREF
	unsigned __int64 v107; // [rsp+38h] [rbp-21h] BYREF
	int* v108; // [rsp+40h] [rbp-19h]
	int* v109; // [rsp+48h] [rbp-11h]
	__int64 v110; // [rsp+50h] [rbp-9h]
	unsigned int v111; // [rsp+D0h] [rbp+77h] BYREF
	int** v112; // [rsp+D8h] [rbp+7Fh]

	v112 = a4;
	if (!a3)
		return 0i64;
	result = sub_1403ACD90(qword_140C65B70, a3, *(_QWORD*)(qword_140C65898 + 120));
	v8 = (_QWORD*)result;
	if (result)
	{
		v9 = (_WORD*)a1[24];
		if (v9 != (_WORD*)a1[25])
		{
			*v9 = 0;
			a1[25] = a1[24];
		}
		v10 = 0i64;
		v108 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v10;
			while (*((_WORD*)a2 + v10));
		}
		v11 = (2 * v10) >> 1;
		if ((unsigned __int64)(v11 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v108 = sub_14018B280(2 * (v11 + 1), 0);
		v12 = a2;
		v13 = v108;
		v14 = 2 * v11;
		sub_1407DB590(v108, v12, v14);
		v15 = (char*)v108 + v14;
		if ((int*)((char*)v108 + v14))
			*(_WORD*)v15 = 0;
		v16 = sub_14018B280(16i64, 0);
		v109 = v16;
		if (v16)
			*(_WORD*)v16 = 0;
		v17 = (v15 - (char*)v13) >> 1;
		if (!v17 || (HIWORD(v111) = 46, v18 = (char*)sub_14002C8A0(v13, (__int64)v15, v111), v18 == v15))
		{
			v19 = v108;
			v20 = -1i64;
		}
		else
		{
			v19 = v108;
			v20 = (v18 - (char*)v108) >> 1;
		}
		if (!v17
			|| (HIWORD(v111) = 41, v21 = (char*)sub_14002C8A0(v19, (__int64)v15, v111), v21 == v15)
			|| (v23 = v108, v24 = (v21 - (char*)v108) >> 1, v110 = v24, v24 == -1i64))
		{
			v105 = 0i64;
		LABEL_185:
			if (v109)
				sub_14018B900((__int64)v109, 0);
			if (v108)
				sub_14018B900((__int64)v108, 0);
			return v105;
		}
		if (v20 != -1i64 && v20 < v24)
		{
			v25 = v20 + 1;
			v26 = v24 - v20 - 1;
			v27 = &v107;
			v107 = v17 - (v20 + 1);
			v106 = v26;
			if (v107 >= v26)
				v27 = &v106;
			v28 = (char*)v108 + 2 * v25;
			v29 = *v27;
			v107 = (unsigned __int64)v28;
			v30 = (char*)v108 + 2 * v25 + 2 * v29;
			v31 = 0i64;
			v32 = ((v30 - v28) >> 1) + 1;
			if (v32 <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v33 = sub_14018B280(2 * v32, 0);
				v28 = (char*)v107;
				v23 = v108;
				v31 = v33;
			}
			v34 = v31;
			if (v28 != v30)
			{
				v35 = (char*)v23 + 2 * v20 + 2 - (_QWORD)v31;
				do
				{
					if (v34)
						*(_WORD*)v34 = *(_WORD*)&v35[(_QWORD)v34];
					v34 = (int*)((char*)v34 + 2);
				} while (&v35[(_QWORD)v34] != v30);
			}
			v36 = 0;
			if (v34)
				*(_WORD*)v34 = 0;
			v37 = (__int64)v109;
			v109 = v31;
			if (v37)
				sub_14018B900(v37, 0);
			v38 = sub_14018E5E0(v31, L"pctAdd") != 0;
			LODWORD(v106) = sub_14018E5E0(v31, L"pctSub") != 0;
			LODWORD(v107) = sub_14018E5E0(v31, L"pct") != 0;
			LOBYTE(v36) = sub_14018E5E0(v31, L"abs") != 0;
			if (sub_14018E5E0(v31, L"castTime"))
			{
				v39 = *(unsigned int*)(v8[14] + 28i64);
				v40 = *(_DWORD*)(v8[1] + 72i64);
				if (v40)
					v39 = v40;
				goto LABEL_39;
			}
			if (sub_14018E5E0(v31, L"cd"))
				goto LABEL_39;
			if (sub_14018E5E0(v31, L"sc"))
			{
				v41 = sub_14023B200(*(_DWORD*)(v8[14] + 288i64));
				if (v41)
					v42 = *(unsigned int*)(v41 + 4);
				else
					v42 = 0i64;
				v43 = (int*)*sub_14034C700(&v107, (__int64)L"%d", v42);
				v44 = 0i64;
				if (*(_WORD*)v43)
				{
					do
						++v44;
					while (*((_WORD*)v43 + v44));
				}
			LABEL_149:
				sub_14001C480((__int64)(a1 + 23), v43, (int*)((char*)v43 + 2 * v44));
				if (v107)
					(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)(v107 - 16) + 8i64))(v107 - 16);
				goto LABEL_77;
			}
			if (sub_14018E5E0(v31, L"auraDuration"))
				goto LABEL_39;
			if (sub_14018E5E0(v31, L"chargeTotal"))
			{
				v45 = sub_1405A6EB0(qword_140C65898, a3, *(_DWORD*)(v8[14] + 4i64));
				v43 = (int*)*sub_14034C700(&v107, (__int64)L"%d", v45);
				v44 = 0i64;
				if (*(_WORD*)v43)
				{
					do
						++v44;
					while (*((_WORD*)v43 + v44));
				}
				goto LABEL_149;
			}
			if (sub_14018E5E0(v31, L"rechargeTime"))
			{
				v47 = sub_1405A6EF0(v46, a3);
				v43 = (int*)*sub_14034C700(
					&v107,
					(__int64)L"%d",
					(unsigned int)(int)(float)((float)((float)v47 * 0.001) + 0.5));
				v44 = 0i64;
				if (*(_WORD*)v43)
				{
					do
						++v44;
					while (*((_WORD*)v43 + v44));
				}
				goto LABEL_149;
			}
			if (sub_14018E5E0(v31, L"rechargeAmount"))
			{
				if (*(_QWORD*)(qword_140C65898 + 120))
				{
					v50 = sub_1407A16F0(v48, a3);
					v49 = 0i64;
					if (v50)
						v49 = *(unsigned int*)(v50 + 8);
				}
				else
				{
					v49 = 0i64;
				}
				v43 = (int*)*sub_14034C700(&v107, (__int64)L"%d", v49);
				v44 = 0i64;
				if (*(_WORD*)v43)
				{
					do
						++v44;
					while (*((_WORD*)v43 + v44));
				}
				goto LABEL_149;
			}
			if (sub_14018E5E0(v31, L"totalDuration"))
				goto LABEL_39;
			if (sub_14018E5E0(v31, L"cost0"))
			{
				v43 = (int*)*sub_14034C700(&v107, (__int64)L"%d", *(unsigned int*)(v8[14] + 176i64));
				v44 = 0i64;
				if (*(_WORD*)v43)
				{
					do
						++v44;
					while (*((_WORD*)v43 + v44));
				}
				goto LABEL_149;
			}
			if (sub_14018E5E0(v31, L"cost1"))
			{
				v43 = (int*)*sub_14034C700(&v107, (__int64)L"%d", *(unsigned int*)(v8[14] + 180i64));
				v44 = 0i64;
				if (*(_WORD*)v43)
				{
					do
						++v44;
					while (*((_WORD*)v43 + v44));
				}
				goto LABEL_149;
			}
			if (sub_14018E5E0(v31, L"minRange"))
			{
				v52 = v36;
			LABEL_76:
				sub_1404DE6F0((__int64)a1, v51, v52);
				goto LABEL_77;
			}
			if (sub_14018E5E0(v31, L"maxRange"))
			{
				v52 = v36;
				goto LABEL_76;
			}
			if (sub_14018E5E0(v31, L"channelMax")
				|| sub_14018E5E0(v31, L"channelPulse")
				|| sub_14018E5E0(v31, L"channelDelay"))
			{
			LABEL_39:
				sub_1404DE760((__int64)a1, v39, 0i64);
				goto LABEL_77;
			}
			if (sub_14018E5E0(v31, L"lasData"))
			{
				v111 = 0;
				(*(void(__fastcall**)(_QWORD*, int*, const wchar_t*, unsigned int*))(*a1 + 184i64))(
					a1,
					v31,
					L"lasData",
					&v111);
				if (v111 < 0xA)
				{
					v61 = 0.0;
					v62 = *(_QWORD*)(v8[1] + 64i64);
					if (v62)
						v63 = *(float*)(v62 + 4i64 * v111);
					else
						v63 = 0.0;
					if (sub_14018E5E0(v31, L"ms"))
					{
						sub_1404DE760((__int64)a1, v64, v36);
					}
					else if (v38)
					{
						sub_1404DE7D0((__int64)a1, (int)(float)((float)((float)(v63 * 1000.0) - 1000.0) + 0.5), v36);
					}
					else if ((_DWORD)v106)
					{
						sub_1404DE7D0((__int64)a1, (int)(float)((float)(1000.0 - (float)(v63 * 1000.0)) + 0.5), v36);
					}
					else
					{
						if (!(_DWORD)v107)
						{
							if (sub_14018E5E0(v31, L"rawInt"))
							{
								v65 = (int)v63;
								if (v36)
									v65 = abs32(v65);
								v43 = (int*)*sub_14034C700(&v107, (__int64)L"%d", v65);
								v44 = 0i64;
								if (*(_WORD*)v43)
								{
									do
										++v44;
									while (*((_WORD*)v43 + v44));
								}
								goto LABEL_149;
							}
							if (sub_14018E5E0(v31, L"asdmg"))
							{
								v67 = sub_1403C2300(v66, a3);
								v70 = sub_140565AA0(v68, v67, v69, v63, v63).m128_f32[0];
								v43 = (int*)*sub_14034C700(&v107, (__int64)L"%d", (unsigned int)(int)(float)(v70 + 0.5));
								v44 = 0i64;
								if (*(_WORD*)v43)
								{
									do
										++v44;
									while (*((_WORD*)v43 + v44));
								}
								goto LABEL_149;
							}
							if (sub_14018E5E0(v31, L"admg"))
							{
								v72 = sub_1403C2300(v71, a3);
								v75 = sub_140565AA0(v73, v72, v74, v63, 0.0).m128_f32[0];
								v43 = (int*)*sub_14034C700(&v107, (__int64)L"%d", (unsigned int)(int)(float)(v75 + 0.5));
								v44 = 0i64;
								if (*(_WORD*)v43)
								{
									do
										++v44;
									while (*((_WORD*)v43 + v44));
								}
								goto LABEL_149;
							}
							if (sub_14018E5E0(v31, L"sdmg"))
							{
								v77 = sub_1403C2300(v76, a3);
								v80 = sub_140565AA0(v78, v77, v79, 0.0, v63).m128_f32[0];
								v43 = (int*)*sub_14034C700(&v107, (__int64)L"%d", (unsigned int)(int)(float)(v80 + 0.5));
								v44 = 0i64;
								if (*(_WORD*)v43)
								{
									do
										++v44;
									while (*((_WORD*)v43 + v44));
								}
								goto LABEL_149;
							}
							if (sub_14018E5E0(v31, L"cost"))
							{
								v82 = sub_1403C2300(v81, a3);
								if (v82)
									v61 = sub_140462A90(v82);
								v43 = (int*)*sub_14034C700(&v107, (__int64)L"%d", (unsigned int)(int)(float)((float)(v61 * v63) + 0.5));
								v44 = 0i64;
								if (*(_WORD*)v43)
								{
									do
										++v44;
									while (*((_WORD*)v43 + v44));
								}
								goto LABEL_149;
							}
							v52 = v36;
							goto LABEL_76;
						}
						sub_1404DE7D0((__int64)a1, (int)(float)(v63 * 1000.0), v36);
					}
				}
			}
			else
			{
				if (sub_14018E5E0(v31, L"threat"))
				{
					v83 = *(_DWORD*)(v8[14] + 352i64);
					if (v38)
					{
						sub_1404DE7D0((__int64)a1, (int)(float)((float)((float)((float)v83 * 1000.0) - 1000.0) + 0.5), v36);
					}
					else
					{
						v84 = (float)v83;
						if ((_DWORD)v106)
							sub_1404DE7D0((__int64)a1, (int)(float)((float)(1000.0 - (float)(v84 * 1000.0)) + 0.5), v36);
						else
							sub_1404DE7D0((__int64)a1, (int)(float)(v84 * 1000.0), v36);
					}
					goto LABEL_77;
				}
				if (sub_14018E5E0(v31, L"aoe"))
				{
					v85 = v8[9];
					if (v85)
					{
						if (sub_14018E5E0(v31, L"aoeMax"))
						{
							v43 = (int*)*sub_14034C700(&v107, (__int64)L"%d", (unsigned int)(int)*(float*)(v85 + 4));
							v44 = 0i64;
							if (*(_WORD*)v43)
							{
								do
									++v44;
								while (*((_WORD*)v43 + v44));
							}
							goto LABEL_149;
						}
						if (sub_14018E5E0(v31, L"aoeMin"))
						{
							v43 = (int*)*sub_14034C700(&v107, (__int64)L"%d", (unsigned int)(int)*(float*)v85);
							v44 = 0i64;
							if (*(_WORD*)v43)
							{
								do
									++v44;
								while (*((_WORD*)v43 + v44));
							}
							goto LABEL_149;
						}
						if (sub_14018E5E0(v31, L"aoeTc"))
						{
							v43 = (int*)*sub_14034C700(&v107, (__int64)L"%d", *(unsigned int*)(v85 + 12));
							v44 = 0i64;
							if (*(_WORD*)v43)
							{
								do
									++v44;
								while (*((_WORD*)v43 + v44));
							}
							goto LABEL_149;
						}
					}
				}
				else
				{
					if (sub_14018E5E0(v31, L"Tooltip"))
					{
						v86 = (int*)v8[1];
						if (v86)
						{
							if (sub_14018E5E0(v31, L"cTooltip"))
							{
								v88 = (int*)sub_14034BDD0(v87, v86[9]);
							}
							else if (sub_14018E5E0(v31, L"ptTooltip"))
							{
								v88 = (int*)sub_14034BDD0(v89, v86[10]);
							}
							else if (sub_14018E5E0(v31, L"stTooltip"))
							{
								v88 = (int*)sub_14034BDD0(v90, v86[11]);
							}
							else if (sub_14018E5E0(v31, L"abTooltip"))
							{
								v88 = (int*)sub_14034BDD0(v91, v86[8]);
							}
							else
							{
								v88 = (int*)&unk_1409F0BC4;
							}
							v92 = 0i64;
							if (*(_WORD*)v88)
							{
								do
									++v92;
								while (*((_WORD*)v88 + v92));
							}
							sub_14001C480((__int64)(a1 + 23), v88, (int*)((char*)v88 + 2 * v92));
						}
						goto LABEL_77;
					}
					if (sub_14018E5E0(v31, L"mp"))
					{
						v93 = v8[11];
						if (v93)
						{
							if (sub_14018E5E0(v31, L"mpms"))
							{
								v94 = *(_QWORD*)(v93 + 8);
								v39 = 0i64;
								v95 = 0;
								if (v94 >= 2)
								{
									v96 = *(_DWORD**)v93;
									v97 = ((unsigned __int64)(v94 - 2) >> 1) + 1;
									do
									{
										v39 = (unsigned int)(*v96 + v39);
										v95 += v96[1];
										v96 += 2;
										--v97;
									} while (v97);
								}
							}
							else
							{
								v98 = *a1;
								v111 = 0;
								(*(void(__fastcall**)(_QWORD*, int*, const wchar_t*, unsigned int*))(v98 + 184))(
									a1,
									v31,
									L"mp",
									&v111);
								v99 = v8[11];
								if ((unsigned __int64)v111 < *(_QWORD*)(v99 + 8))
								{
									v39 = 0i64;
									v100 = 0;
									if (v111 + 1i64 >= 2)
									{
										v101 = *(_DWORD**)v99;
										v102 = ((unsigned __int64)v111 + 1) >> 1;
										do
										{
											v39 = (unsigned int)(*v101 + v39);
											v100 += v101[1];
											v101 += 2;
											--v102;
										} while (v102);
									}
								}
							}
							goto LABEL_39;
						}
					}
				}
			}
		}
	LABEL_77:
		if (a1[24] == a1[25])
		{
			v53 = v8[1];
			if (v53)
			{
				v54 = (int*)sub_14034BDD0(v22, *(_DWORD*)(v53 + 16));
				v55 = 0i64;
				if (*(_WORD*)v54)
				{
					do
						++v55;
					while (*((_WORD*)v54 + v55));
				}
				sub_14001C480((__int64)(a1 + 23), v54, (int*)((char*)v54 + 2 * v55));
			}
		}
		v56 = (int*)a1[24];
		v57 = v112;
		v58 = *v112;
		if (v56)
		{
			v59 = 0i64;
			if (*(_WORD*)v56)
			{
				do
					++v59;
				while (*((_WORD*)v56 + v59));
			}
			v60 = sub_14018B280(2 * v59 + 18, 0);
			if (v60)
			{
				*((_QWORD*)v60 + 1) = v59;
				*(_QWORD*)v60 = off_140B55060;
			}
			else
			{
				v60 = 0i64;
			}
			v103 = v60 + 4;
			v104 = 2 * v59;
			sub_1407DB590(v60 + 4, v56, v104);
			*(_WORD*)((char*)v103 + v104) = 0;
			*v57 = v103;
		}
		else
		{
			*v112 = 0i64;
		}
		if (v58)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v58 - 2) + 8i64))(v58 - 4);
		v105 = v110;
		goto LABEL_185;
	}
	return result;
}
// 1404DF5CE: variable 'v39' is possibly undefined
// 1404DF706: variable 'v46' is possibly undefined
// 1404DF78C: variable 'v48' is possibly undefined
// 1404DF8C6: variable 'v51' is possibly undefined
// 1404DF8EE: variable 'v22' is possibly undefined
// 1404DFAA3: variable 'v64' is possibly undefined
// 1404DFBA6: variable 'v66' is possibly undefined
// 1404DFBB7: variable 'v68' is possibly undefined
// 1404DFBB7: variable 'v69' is possibly undefined
// 1404DFC16: variable 'v71' is possibly undefined
// 1404DFC27: variable 'v73' is possibly undefined
// 1404DFC27: variable 'v74' is possibly undefined
// 1404DFC86: variable 'v76' is possibly undefined
// 1404DFC97: variable 'v78' is possibly undefined
// 1404DFC97: variable 'v79' is possibly undefined
// 1404DFCF6: variable 'v81' is possibly undefined
// 1404DFF65: variable 'v87' is possibly undefined
// 1404DFF86: variable 'v89' is possibly undefined
// 1404DFFA7: variable 'v90' is possibly undefined
// 1404DFFC8: variable 'v91' is possibly undefined
// 140B08374: using guessed type wchar_t aCd[3];
// 140B086D4: using guessed type wchar_t aSc[3];
// 140B08754: using guessed type wchar_t aD_31[3];
// 140B08FC4: using guessed type wchar_t aD_35[3];
// 140B09104: using guessed type wchar_t aD_36[3];
// 140B09574: using guessed type wchar_t aD_34[3];
// 140B0AF98: using guessed type wchar_t aAuraduration[13];
// 140B0AFB8: using guessed type wchar_t aPctsub_0[7];
// 140B0AFC8: using guessed type wchar_t aPct_0[4];
// 140B0AFD0: using guessed type wchar_t aAbs_0[4];
// 140B0AFD8: using guessed type wchar_t aCasttime[9];
// 140B0B028: using guessed type wchar_t aPctadd_0[7];
// 140B0B080: using guessed type wchar_t aMaxrange[9];
// 140B0B098: using guessed type wchar_t aChannelmax[11];
// 140B0B0B0: using guessed type wchar_t aChannelpulse[13];
// 140B0B0D0: using guessed type wchar_t aChanneldelay[13];
// 140B0B0F0: using guessed type wchar_t aCost1[6];
// 140B0B100: using guessed type wchar_t aMinrange[9];
// 140B0B118: using guessed type wchar_t aRechargeamount[15];
// 140B0B138: using guessed type wchar_t aTotalduration[14];
// 140B0B158: using guessed type wchar_t aCost0[6];
// 140B0B168: using guessed type wchar_t aChargetotal[12];
// 140B0B180: using guessed type wchar_t aD_32[3];
// 140B0B188: using guessed type wchar_t aRechargetime[13];
// 140B0B1A4: using guessed type wchar_t aD_33[3];
// 140B0B1AC: using guessed type wchar_t aD_41[3];
// 140B0B1B8: using guessed type wchar_t aThreat_0[7];
// 140B0B1C8: using guessed type wchar_t aAoe[4];
// 140B0B1D0: using guessed type wchar_t aAoemax[7];
// 140B0B1E0: using guessed type wchar_t aD_39[3];
// 140B0B1E8: using guessed type wchar_t aSdmg[5];
// 140B0B1F4: using guessed type wchar_t aD_40[3];
// 140B0B200: using guessed type wchar_t aCost[5];
// 140B0B20C: using guessed type wchar_t aD_37[3];
// 140B0B218: using guessed type wchar_t aAsdmg[6];
// 140B0B224: using guessed type wchar_t aD_38[3];
// 140B0B230: using guessed type wchar_t aAdmg[5];
// 140B0B240: using guessed type wchar_t aLasdata[8];
// 140B0B250: using guessed type wchar_t aLasdata_0[8];
// 140B0B260: using guessed type wchar_t aMs_0[3];
// 140B0B268: using guessed type wchar_t aRawint_1[7];
// 140B0B278: using guessed type wchar_t aMpms[5];
// 140B0B284: using guessed type wchar_t aMp_0[3];
// 140B0B2B0: using guessed type wchar_t aSttooltip[10];
// 140B0B2C8: using guessed type wchar_t aAbtooltip[10];
// 140B0B2DC: using guessed type wchar_t aMp[3];
// 140B0B2E4: using guessed type wchar_t aD_44[3];
// 140B0B2F0: using guessed type wchar_t aTooltip_1[8];
// 140B0B300: using guessed type wchar_t aCtooltip[9];
// 140B0B318: using guessed type wchar_t aPttooltip[10];
// 140B0B32C: using guessed type wchar_t aD_42[3];
// 140B0B338: using guessed type wchar_t aAoemin[7];
// 140B0B348: using guessed type wchar_t aD_43[3];
// 140B0B350: using guessed type wchar_t aAoetc[6];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

