//----- (00000001404DC7F0) ----------------------------------------------------
void __fastcall sub_1404DC7F0(__int64* a1, __int64 a2, _QWORD* a3, __int64* a4, float a5, __int64 a6)
{
	_QWORD* v6; // rax
	__int64 v7; // r14
	unsigned int v8; // r15d
	_QWORD* v9; // rbx
	__int64 v12; // rdx
	unsigned int v13; // edi
	__int64 v14; // rsi
	__int64 v15; // rdi
	_QWORD* v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rsi
	__int64 v19; // rdi
	_QWORD* v20; // rax
	__int64 v21; // rsi
	__int64 v22; // rdi
	_QWORD* v23; // rax
	__int64 v24; // rax
	__int64 v25; // rsi
	__int64 v26; // rdi
	_QWORD* v27; // rax
	__int64 v28; // rsi
	__int64 v29; // rdi
	_QWORD* v30; // rax
	__int64 v31; // rax
	__int64 v32; // rdi
	int* v33; // r14
	__int64 v34; // rax
	__int64 v35; // rsi
	__int64 v36; // rdi
	_QWORD* v37; // rax
	_QWORD* v38; // rax
	unsigned __int64 j; // rsi
	__int64 v40; // rdx
	unsigned int v41; // ebx
	__int64 v42; // rax
	__int64 v43; // rdi
	_QWORD* v44; // rax
	unsigned int v45; // edi
	__int64 v46; // rax
	__int64 v47; // rsi
	unsigned int v48; // edi
	_QWORD* v49; // rax
	unsigned __int64 i; // r14
	__int64 v51; // rax
	unsigned int v52; // edi
	__int64 v53; // rdx
	unsigned int v54; // esi
	__int64 v55; // rdi
	_QWORD* v56; // rax
	_QWORD* v57; // rax
	__int64 v58; // rsi
	__int64 v59; // rdi
	_QWORD* v60; // rax
	unsigned int v61; // edi
	__int64 v62; // rax
	__int64 v63; // rax
	unsigned int v64; // edi
	__int64 v65; // rbx
	_QWORD* v66; // rax
	__int64 v67; // rbx
	_QWORD* v68; // rax
	__int64 v69; // rcx
	unsigned int v70; // ebx
	__int64 v71; // rax
	__int64 v72; // rdi
	__int64 v73; // rbx
	_QWORD* v74; // rax
	__int64 v75; // rbx
	_QWORD* v76; // rax
	unsigned int v77; // ebx
	__int64 v78; // rax
	__int64 v79; // rdi
	__int64 v80; // rbx
	_QWORD* v81; // rax
	__int64 v82; // rbx
	_QWORD* v83; // rax
	__int64 v84; // [rsp+28h] [rbp-E0h] BYREF
	__int64 v85; // [rsp+30h] [rbp-D8h]
	__int64 v86; // [rsp+48h] [rbp-C0h] BYREF
	__int64 v87; // [rsp+50h] [rbp-B8h]
	__int64 v88[4]; // [rsp+68h] [rbp-A0h] BYREF
	_QWORD v89[4]; // [rsp+88h] [rbp-80h] BYREF
	_QWORD v90[4]; // [rsp+A8h] [rbp-60h] BYREF
	__int64 v91; // [rsp+C8h] [rbp-40h] BYREF
	__int64 v92; // [rsp+D0h] [rbp-38h]
	__int64 v93; // [rsp+E8h] [rbp-20h] BYREF
	__int64 v94; // [rsp+F0h] [rbp-18h]
	__int64 v95; // [rsp+108h] [rbp+0h] BYREF
	__int64 v96; // [rsp+110h] [rbp+8h]
	_QWORD v97[4]; // [rsp+128h] [rbp+20h] BYREF
	_QWORD v98[4]; // [rsp+148h] [rbp+40h] BYREF
	_QWORD v99[4]; // [rsp+168h] [rbp+60h] BYREF
	__int64 v100; // [rsp+188h] [rbp+80h] BYREF
	__int64 v101; // [rsp+190h] [rbp+88h]
	_QWORD v102[4]; // [rsp+1A8h] [rbp+A0h] BYREF
	_QWORD v103[4]; // [rsp+1C8h] [rbp+C0h] BYREF
	_QWORD v104[4]; // [rsp+1E8h] [rbp+E0h] BYREF
	__int64 v105; // [rsp+208h] [rbp+100h] BYREF
	__int64 v106; // [rsp+210h] [rbp+108h]
	_QWORD v107[4]; // [rsp+228h] [rbp+120h] BYREF
	_QWORD v108[3]; // [rsp+248h] [rbp+140h] BYREF

	v6 = *(_QWORD**)(a2 + 8);
	v7 = a6;
	v8 = 0;
	v9 = (_QWORD*)*v6;
	if ((_QWORD*)*v6 != v6)
	{
		while (2)
		{
			v12 = v9[2];
			switch (*(_DWORD*)(v12 + 8))
			{
			case 1:
				v13 = *(_DWORD*)(v12 + 12);
				if (!sub_140444550(qword_140C658F0, v13))
					goto LABEL_22;
				v14 = sub_1402096E0(v13);
				if (!v14)
					goto LABEL_22;
				v15 = *a1;
				v16 = sub_14018EFA0(v107, (__int64)L"%sitem%d", v7, v8);
				(*(void(__fastcall**)(__int64*, _QWORD*, _QWORD))(v15 + 144))(a1, v16, *(unsigned int*)(v14 + 176));
				v17 = v107[1];
				goto LABEL_6;
			case 2:
				v21 = sub_1401FF120(*(_DWORD*)(v12 + 12));
				if (!v21)
					goto LABEL_22;
				v22 = *a1;
				v23 = sub_14018EFA0(v99, (__int64)L"%sitem%d", v7, v8);
				(*(void(__fastcall**)(__int64*, _QWORD*, _QWORD))(v22 + 144))(a1, v23, *(unsigned int*)(v21 + 12));
				v17 = v99[1];
				goto LABEL_6;
			case 3:
				v18 = sub_1401FA4A0(*(_DWORD*)(v12 + 12));
				if (!v18)
					goto LABEL_22;
				v19 = *a1;
				v20 = sub_14018EFA0(v88, (__int64)L"%sitem%d", v7, v8);
				(*(void(__fastcall**)(__int64*, _QWORD*, _QWORD))(v19 + 144))(a1, v20, *(unsigned int*)(v18 + 16));
				v17 = v88[1];
				goto LABEL_6;
			case 4:
				v24 = sub_140246480(*(_DWORD*)(v12 + 12));
				if (!v24)
					goto LABEL_22;
				v25 = sub_140242D40(*(_DWORD*)(v24 + 4));
				if (!v25)
					goto LABEL_22;
				v26 = *a1;
				v27 = sub_14018EFA0(v90, (__int64)L"%sitem%d", v7, v8);
				(*(void(__fastcall**)(__int64*, _QWORD*, _QWORD))(v26 + 144))(a1, v27, *(unsigned int*)(v25 + 4));
				v17 = v90[1];
				goto LABEL_6;
			case 5:
				v28 = sub_140242D40(*(_DWORD*)(v12 + 12));
				if (!v28)
					goto LABEL_22;
				v29 = *a1;
				v30 = sub_14018EFA0(v104, (__int64)L"%sitem%d", v7, v8);
				(*(void(__fastcall**)(__int64*, _QWORD*, _QWORD))(v29 + 144))(a1, v30, *(unsigned int*)(v28 + 4));
				v17 = v104[1];
				goto LABEL_6;
			case 6:
				v31 = sub_1401E8C20(*(_DWORD*)(v12 + 12));
				v32 = v31;
				if (!v31)
					goto LABEL_22;
				v33 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v31 + 8), 0i64);
				v34 = sub_1401FE020(*(_DWORD*)(v32 + 12));
				v35 = v34;
				if (v33)
				{
					v36 = *a1;
					v37 = sub_14018EFA0(&v93, (__int64)L"%sitem%d", a6, v8);
					(*(void(__fastcall**)(__int64*, _QWORD*, _QWORD))(v36 + 144))(a1, v37, (unsigned int)v33[119]);
					if (v94)
						sub_14018B900(v94, 0);
				LABEL_21:
					v7 = a6;
					goto LABEL_22;
				}
				if (!v34)
					goto LABEL_21;
				v7 = a6;
				v43 = *a1;
				v44 = sub_14018EFA0(v102, (__int64)L"%sitem%d", a6, v8);
				(*(void(__fastcall**)(__int64*, _QWORD*, _QWORD))(v43 + 144))(a1, v44, *(unsigned int*)(v35 + 20));
				v17 = v102[1];
			LABEL_6:
				if (v17)
					sub_14018B900(v17, 0);
			LABEL_22:
				v38 = sub_14018EFA0(&v91, (__int64)L"%scount%d", v7, v8);
				(*(void(__fastcall**)(__int64*, _QWORD, _QWORD))(*a1 + 176))(a1, v38[1], *(unsigned int*)(v9[2] + 16i64));
				if (v92)
					sub_14018B900(v92, 0);
				++v8;
			LABEL_25:
				v9 = (_QWORD*)*v9;
				if (v9 == *(_QWORD**)(a2 + 8))
					break;
				continue;
			case 7:
				v45 = *(_DWORD*)(v12 + 12);
				v46 = sub_1401E87E0(v45);
				if (!v46 || !sub_1401E8C20(*(_DWORD*)(v46 + 16)))
					goto LABEL_22;
				v47 = *a1;
				v48 = sub_1405057D0(v45);
				v49 = sub_14018EFA0(v97, (__int64)L"%sitem%d", v7, v8);
				(*(void(__fastcall**)(__int64*, _QWORD*, _QWORD))(v47 + 144))(a1, v49, v48);
				v17 = v97[1];
				goto LABEL_6;
			case 8:
			case 9:
				v58 = sub_140201320(*(_DWORD*)(v12 + 12));
				if (!v58)
					goto LABEL_22;
				v59 = *a1;
				v60 = sub_14018EFA0(v89, (__int64)L"%sitem%d", v7, v8);
				(*(void(__fastcall**)(__int64*, _QWORD*, _QWORD))(v59 + 144))(a1, v60, *(unsigned int*)(v58 + 4));
				v17 = v89[1];
				goto LABEL_6;
			case 0xA:
				if (!a3)
					goto LABEL_22;
				for (i = 0i64; i < a3[1]; ++i)
				{
					v51 = sub_1401E87E0(*(_DWORD*)(*a3 + 4 * i));
					if (v51 && sub_1401E8C20(*(_DWORD*)(v51 + 16)))
					{
						v52 = *(_DWORD*)(*a3 + 4 * i);
						v53 = sub_1401E87E0(v52);
						if (v53)
						{
							if (v52 != 7 || (v54 = 733829, (*(_BYTE*)(*(_QWORD*)(qword_140C635F0 + 5864) + 4i64) & 1) == 0))
								v54 = *(_DWORD*)(v53 + 4);
						}
						else
						{
							v54 = 0;
						}
						v55 = *a1;
						v56 = sub_14018EFA0(&v84, (__int64)L"%sitem%d", a6, v8);
						(*(void(__fastcall**)(__int64*, _QWORD*, _QWORD))(v55 + 144))(a1, v56, v54);
						if (v85)
							sub_14018B900(v85, 0);
						v57 = sub_14018EFA0(&v86, (__int64)L"%scount%d", a6, v8);
						(*(void(__fastcall**)(__int64*, _QWORD, _QWORD))(*a1 + 176))(
							a1,
							v57[1],
							(unsigned int)(int)(float)((float)*(int*)(v9[2] + 16i64) * a5));
						if (v87)
							sub_14018B900(v87, 0);
						++v8;
					}
				}
				v7 = a6;
				if (!a3[1])
					goto LABEL_22;
				goto LABEL_25;
			default:
				goto LABEL_22;
			}
			break;
		}
	}
	if (a4)
	{
		for (j = 0i64; j < a4[1]; ++j)
		{
			v40 = *(_QWORD*)(*a4 + 8 * j);
			switch (*(_DWORD*)(v40 + 4))
			{
			case 1:
				v77 = *(_DWORD*)(v40 + 8);
				if (qword_140C63840)
				{
					v78 = qword_140C63840(off_140A69F38, v77, qword_140C63858);
				}
				else
				{
					if (dword_140C64A64 || (int)sub_1401FA240() < 0)
						break;
					v78 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C640D8 + 24i64))(
						qword_140C640D8,
						v77);
				}
				v79 = v78;
				if (v78)
				{
					v80 = *a1;
					v81 = sub_14018EFA0(&v105, (__int64)L"%sitem%d", v7, v8);
					(*(void(__fastcall**)(__int64*, _QWORD*, _QWORD))(v80 + 144))(a1, v81, *(unsigned int*)(v79 + 16));
					if (v106)
						sub_14018B900(v106, 0);
					v82 = *a4;
					v83 = sub_14018EFA0(v108, (__int64)L"%scount%d", v7, v8);
					(*(void(__fastcall**)(__int64*, _QWORD, _QWORD))(*a1 + 176))(
						a1,
						v83[1],
						*(unsigned int*)(*(_QWORD*)(v82 + 8 * j) + 12i64));
					v69 = v108[1];
					goto LABEL_100;
				}
				break;
			case 2:
				v70 = *(_DWORD*)(v40 + 8);
				if (sub_140444550(qword_140C658F0, v70))
				{
					if (qword_140C63840)
					{
						v71 = qword_140C63840(off_140A6ABB0, v70, qword_140C63858);
					}
					else
					{
						if (dword_140C649FC || (int)sub_140209480() < 0)
							break;
						v71 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C640E8 + 24i64))(
							qword_140C640E8,
							v70);
					}
					v72 = v71;
					if (v71)
					{
						v73 = *a1;
						v74 = sub_14018EFA0(&v100, (__int64)L"%sitem%d", v7, v8);
						(*(void(__fastcall**)(__int64*, _QWORD*, _QWORD))(v73 + 144))(a1, v74, *(unsigned int*)(v72 + 176));
						if (v101)
							sub_14018B900(v101, 0);
						v75 = *a4;
						v76 = sub_14018EFA0(v103, (__int64)L"%scount%d", v7, v8);
						(*(void(__fastcall**)(__int64*, _QWORD, _QWORD))(*a1 + 176))(
							a1,
							v76[1],
							*(unsigned int*)(*(_QWORD*)(v75 + 8 * j) + 12i64));
						v69 = v103[1];
						goto LABEL_100;
					}
				}
				break;
			case 3:
				v41 = *(_DWORD*)(v40 + 8);
				if (qword_140C63840)
				{
					v42 = qword_140C63840(off_140A69090, v41, qword_140C63858);
				}
				else
				{
					if (dword_140C64F2C || (int)sub_1401E8580() < 0)
						break;
					v42 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A98 + 24i64))(
						qword_140C64A98,
						v41);
				}
				if (v42)
				{
					v61 = *(_DWORD*)(v42 + 16);
					if (qword_140C63840)
					{
						v62 = qword_140C63840(off_140A690C8, v61, qword_140C63858);
					}
					else
					{
						if (dword_140C64170 || (int)sub_1401E89C0() < 0)
							break;
						v62 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652D0 + 24i64))(
							qword_140C652D0,
							v61);
					}
					if (v62)
					{
						if (qword_140C63840)
						{
							v63 = qword_140C63840(off_140A69090, v41, qword_140C63858);
							goto LABEL_72;
						}
						if (dword_140C64F2C || (int)sub_1401E8580() < 0)
							goto LABEL_77;
						v63 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A98 + 24i64))(
							qword_140C64A98,
							v41);
					LABEL_72:
						if (!v63)
						{
						LABEL_77:
							v64 = 0;
						}
						else if (v41 == 7 && (*(_BYTE*)(*(_QWORD*)(qword_140C635F0 + 5864) + 4i64) & 1) != 0)
						{
							v64 = 733829;
						}
						else
						{
							v64 = *(_DWORD*)(v63 + 4);
						}
						v65 = *a1;
						v66 = sub_14018EFA0(&v95, (__int64)L"%sitem%d", v7, v8);
						(*(void(__fastcall**)(__int64*, _QWORD*, _QWORD))(v65 + 144))(a1, v66, v64);
						if (v96)
							sub_14018B900(v96, 0);
						v67 = *a4;
						v68 = sub_14018EFA0(v98, (__int64)L"%scount%d", v7, v8);
						(*(void(__fastcall**)(__int64*, _QWORD, _QWORD))(*a1 + 176))(
							a1,
							v68[1],
							*(unsigned int*)(*(_QWORD*)(v67 + 8 * j) + 12i64));
						v69 = v98[1];
					LABEL_100:
						if (v69)
							sub_14018B900(v69, 0);
						++v8;
					}
				}
				break;
			}
		}
	}
}
// 140A69090: using guessed type wchar_t *off_140A69090[2];
// 140A690C8: using guessed type wchar_t *off_140A690C8[2];
// 140A69F38: using guessed type wchar_t *off_140A69F38[2];
// 140A6ABB0: using guessed type wchar_t *off_140A6ABB0[2];
// 140B0AA18: using guessed type wchar_t aSitemD_4[9];
// 140B0AA30: using guessed type wchar_t aSitemD_5[9];
// 140B0AA48: using guessed type wchar_t aSitemD_6[9];
// 140B0AA60: using guessed type wchar_t aSitemD_7[9];
// 140B0AA78: using guessed type wchar_t aSitemD_0[9];
// 140B0AA90: using guessed type wchar_t aSitemD_1[9];
// 140B0AAA8: using guessed type wchar_t aSitemD_2[9];
// 140B0AAC0: using guessed type wchar_t aSitemD_3[9];
// 140B0AB08: using guessed type wchar_t aSitemD[9];
// 140B0ABA8: using guessed type wchar_t aScountD_2[10];
// 140B0ABF0: using guessed type wchar_t aScountD_1[10];
// 140B0AC08: using guessed type wchar_t aSitemD_11[9];
// 140B0AC20: using guessed type wchar_t aScountD_3[10];
// 140B0AC38: using guessed type wchar_t aSitemD_10[9];
// 140B0AC50: using guessed type wchar_t aScountD_0[10];
// 140B0AC68: using guessed type wchar_t aSitemD_8[9];
// 140B0AC80: using guessed type wchar_t aScountD[10];
// 140B0AC98: using guessed type wchar_t aSitemD_9[9];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C640D8: using guessed type __int64 qword_140C640D8;
// 140C640E8: using guessed type __int64 qword_140C640E8;
// 140C64170: using guessed type int dword_140C64170;
// 140C649FC: using guessed type int dword_140C649FC;
// 140C64A64: using guessed type int dword_140C64A64;
// 140C64A98: using guessed type __int64 qword_140C64A98;
// 140C64F2C: using guessed type int dword_140C64F2C;
// 140C652D0: using guessed type __int64 qword_140C652D0;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 1404DC7F0: using guessed type __int64 var_240[4];

