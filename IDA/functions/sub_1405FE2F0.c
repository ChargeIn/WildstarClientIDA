#include "../winhttp.h"

//----- (00000001405FE2F0) ----------------------------------------------------
__int64 __fastcall sub_1405FE2F0(_QWORD* a1, __int64 a2)
{
	unsigned __int64 v2; // r14
	_QWORD* v3; // r15
	__int64 v4; // rdi
	int* v5; // rsi
	__int64 v6; // r9
	unsigned int v7; // r8d
	int v8; // r13d
	__int64 v9; // rax
	int v10; // r12d
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rax
	unsigned int v15; // r13d
	__int64 v16; // r12
	unsigned int v17; // edx
	int v18; // ecx
	unsigned int v19; // ebx
	int v20; // eax
	int v21; // eax
	int v22; // eax
	int v23; // eax
	bool v24; // zf
	unsigned int v25; // ebx
	__int64 v26; // rax
	unsigned int v27; // ebx
	__int64 v28; // rax
	unsigned int v29; // ebx
	__int64 v30; // rax
	__int64 v31; // rax
	int* v32; // rax
	int* v33; // rbx
	int* v34; // rax
	__int128 v35; // xmm1
	__int128 v36; // xmm0
	__int128 v37; // xmm1
	__int128 v38; // xmm0
	__int64 v39; // rdx
	__int64 v40; // rcx
	__int64 v41; // rax
	__int64* v42; // rax
	__int64 v43; // rax
	__int64 v44; // rsi
	int* v45; // rdi
	unsigned int v46; // r14d
	_QWORD* v47; // rbx
	int* v48; // rax
	unsigned __int64 v49; // rsi
	int* v50; // r15
	__int64 v51; // rcx
	int* v52; // rbx
	__int64 v53; // rax
	int* v54; // rax
	__int64 v55; // r14
	__int64 v56; // rcx
	__int64 v57; // r14
	int* v58; // rbx
	int* v59; // rax
	__int64 v60; // rdx
	__int64 v61; // rcx
	__int64 v62; // rax
	__int64* v63; // rax
	__int64 v64; // rax
	int* v65; // rsi
	int* v66; // rdi
	int v67; // r9d
	__int64 v68; // rcx
	int v69; // r9d
	__int64 v70; // rcx
	__int64 v72; // [rsp+20h] [rbp-E0h] BYREF
	__int64 v73; // [rsp+28h] [rbp-D8h]
	int* v74; // [rsp+30h] [rbp-D0h]
	unsigned __int64 v75; // [rsp+38h] [rbp-C8h]
	int* v76; // [rsp+40h] [rbp-C0h] BYREF
	unsigned __int64 v77; // [rsp+48h] [rbp-B8h]
	unsigned int v78; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v79; // [rsp+58h] [rbp-A8h]
	void(__fastcall * v80)(__int64); // [rsp+60h] [rbp-A0h]
	__int64 v81; // [rsp+68h] [rbp-98h]
	__int128 v82; // [rsp+70h] [rbp-90h] BYREF
	__int128 v83; // [rsp+80h] [rbp-80h]
	__int128 v84; // [rsp+90h] [rbp-70h]
	__int128 v85; // [rsp+A0h] [rbp-60h]
	__int128 v86; // [rsp+B0h] [rbp-50h]
	__int64 v87; // [rsp+C0h] [rbp-40h]
	__int64 v88; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v89; // [rsp+D8h] [rbp-28h] BYREF
	__int64 v90; // [rsp+E0h] [rbp-20h] BYREF
	int* v91; // [rsp+E8h] [rbp-18h] BYREF
	char v92[80]; // [rsp+F0h] [rbp-10h] BYREF
	int v95; // [rsp+160h] [rbp+60h]
	int v96; // [rsp+168h] [rbp+68h]

	v2 = 0i64;
	v3 = a1;
	v4 = a2;
	v5 = 0i64;
	v75 = 0i64;
	v77 = 0i64;
	v74 = 0i64;
	v76 = 0i64;
	sub_1407E4830((int*)&v82, 0i64, 0x58ui64);
	v6 = v3[1];
	v7 = *(_DWORD*)v4;
	v8 = 0;
	v9 = *(_QWORD*)(v6 + 8);
	v10 = 0;
	v96 = 0;
	DWORD1(v82) = *(_DWORD*)v4;
	v95 = 0;
	v11 = v6;
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < v7)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v11 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v11 == v6 || (v73 = v11, v7 < *(_DWORD*)(v11 + 32)))
		v73 = v6;
	if (v73 != v6)
	{
		sub_140003500((__int64*)&v76, v73 + 40);
		v2 = v77;
		v5 = v76;
		v75 = v77;
		v74 = v76;
	}
	v12 = 0i64;
	LODWORD(v73) = 0;
	if (*(_DWORD*)(v4 + 12))
	{
		while (1)
		{
			v13 = 9 * v12;
			v14 = *(_QWORD*)(v4 + 16);
			v15 = *(_DWORD*)(v14 + 8 * v13);
			v16 = v14 + 8 * v13;
			if (!v15)
				goto LABEL_90;
			v17 = *(_DWORD*)(v16 + 4);
			v18 = dword_140C636A8 + *(_DWORD*)(v16 + 32);
			v19 = *(_DWORD*)(v16 + 8);
			*((_QWORD*)&v83 + 1) = *(_QWORD*)(v16 + 40);
			v20 = *(_DWORD*)(v16 + 48);
			LODWORD(v72) = v15;
			LODWORD(v82) = v15;
			LODWORD(v84) = v20;
			v21 = *(_DWORD*)(v16 + 52);
			*((_QWORD*)&v82 + 1) = __PAIR64__(v17, v19);
			DWORD1(v84) = v21;
			DWORD2(v86) = *(_DWORD*)(v16 + 28);
			v22 = *(_DWORD*)(v16 + 16);
			HIDWORD(v87) = v18;
			HIDWORD(v86) = v22;
			DWORD1(v86) = *(_DWORD*)(v16 + 12);
			LODWORD(v87) = *(_DWORD*)(v16 + 24);
			if (v17)
				*(_QWORD*)&v83 = 0i64;
			else
				*(_QWORD*)&v83 = sub_1400B5DF0(qword_140C658F0, v19, 0i64);
			v23 = 15;
			if (*(_DWORD*)(v16 + 4) == 2)
				v23 = v19;
			v24 = *(_DWORD*)(v16 + 4) == 6;
			LODWORD(v86) = v23;
			if (!v24)
				goto LABEL_26;
			v25 = *(_DWORD*)(v16 + 8);
			if (qword_140C63840)
			{
				v26 = qword_140C63840(off_140A6DFC0, v25, qword_140C63858);
				goto LABEL_27;
			}
			if (dword_140C63B58 || (int)sub_140248860() < 0)
				LABEL_26:
			v26 = 0i64;
			else
				v26 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64810 + 24i64))(qword_140C64810, v25);
		LABEL_27:
			v24 = *(_DWORD*)(v16 + 4) == 7;
			*((_QWORD*)&v84 + 1) = v26;
			if (!v24)
				goto LABEL_33;
			v27 = *(_DWORD*)(v16 + 8);
			if (qword_140C63840)
			{
				v28 = qword_140C63840(off_140A6B278, v27, qword_140C63858);
			}
			else
			{
				if (dword_140C63BE8 || (int)sub_1402118A0() < 0)
				{
				LABEL_33:
					v28 = 0i64;
					goto LABEL_34;
				}
				v28 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64F00 + 24i64))(qword_140C64F00, v27);
			}
		LABEL_34:
			v24 = *(_DWORD*)(v16 + 4) == 8;
			*(_QWORD*)&v85 = v28;
			if (!v24)
				goto LABEL_40;
			v29 = *(_DWORD*)(v16 + 8);
			if (qword_140C63840)
			{
				v30 = qword_140C63840(off_140A690C8, v29, qword_140C63858);
				goto LABEL_41;
			}
			if (dword_140C64170 || (int)sub_1401E89C0() < 0)
				LABEL_40:
			v30 = 0i64;
			else
				v30 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652D0 + 24i64))(qword_140C652D0, v29);
		LABEL_41:
			*((_QWORD*)&v85 + 1) = v30;
			if (v30)
				*(_QWORD*)&v83 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v30 + 8), 0i64);
			v31 = 0i64;
			if (v2)
			{
				while (v5[v31] != v15)
				{
					if (++v31 >= v2)
						goto LABEL_46;
				}
			}
			else
			{
			LABEL_46:
				v32 = sub_14018DB00((__int64)v5, v2 + 1, 4i64);
				v32[v2] = v15;
				v33 = v32;
				if (v5 != v32)
				{
					sub_1407DB590(v32, v5, 4 * v2);
					if (v5)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v5 - 2) + 8i64))(v5 - 4);
					v74 = v33;
				}
				v75 = v2 + 1;
				v4 = a2;
			}
			v34 = sub_1405FF6A0((__int64)(v3 + 4), &v72);
			v35 = v83;
			*(_OWORD*)v34 = v82;
			v36 = v84;
			*((_OWORD*)v34 + 1) = v35;
			v37 = v85;
			*((_OWORD*)v34 + 2) = v36;
			v38 = v86;
			*((_OWORD*)v34 + 3) = v37;
			*(_QWORD*)&v37 = v87;
			*((_OWORD*)v34 + 4) = v38;
			*((_QWORD*)v34 + 10) = v37;
			if (*(_DWORD*)(v16 + 20))
			{
				sub_1400293C0((__int64)(v3 + 8), (__int64)v92, (int*)&v72);
				v96 = 1;
			}
			else
			{
				v39 = v3[9];
				v40 = v39;
				v41 = *(_QWORD*)(v39 + 8);
				while (v41)
				{
					if (*(_DWORD*)(v41 + 32) < v15)
					{
						v41 = *(_QWORD*)(v41 + 24);
					}
					else
					{
						v40 = v41;
						v41 = *(_QWORD*)(v41 + 16);
					}
				}
				if (v40 == v39 || v15 < *(_DWORD*)(v40 + 32))
				{
					v88 = v3[9];
					v42 = &v88;
				}
				else
				{
					v89 = v40;
					v42 = &v89;
				}
				v43 = *v42;
				if (v43 != v39)
				{
					v96 = 1;
					v72 = v43;
					sub_1400EFCD0((__int64)(v3 + 8), &v72);
				}
			}
			if (*(_DWORD*)(v16 + 56))
			{
				v44 = 0i64;
				v45 = 0i64;
				v46 = 0;
				v95 = 1;
				do
				{
					v47 = (_QWORD*)(*(_QWORD*)(v16 + 64) + 16i64 * v46);
					v72 = v44 + 1;
					v48 = sub_14018DB00((__int64)v45, v44 + 1, 16i64);
					v49 = 4 * v44;
					v50 = v48;
					*(_QWORD*)&v48[v49] = *v47;
					*(_QWORD*)&v48[v49 + 2] = v47[1];
					if (v45 != v48)
					{
						sub_1407DB590(v48, v45, v49 * 4);
						if (v45)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v45 - 2) + 8i64))(v45 - 4);
						v45 = v50;
					}
					v44 = v72;
					++v46;
				} while (v46 < *(_DWORD*)(v16 + 56));
				v3 = a1;
				v51 = a1[13];
				v52 = (int*)v51;
				v53 = *(_QWORD*)(v51 + 8);
				while (v53)
				{
					if (*(_DWORD*)(v53 + 32) < v15)
					{
						v53 = *(_QWORD*)(v53 + 24);
					}
					else
					{
						v52 = (int*)v53;
						v53 = *(_QWORD*)(v53 + 16);
					}
				}
				if (v52 == (int*)v51 || v15 < v52[8])
				{
					v78 = v15;
					v80 = 0i64;
					v79 = 0i64;
					v72 = (__int64)v52;
					sub_1405FFB80((__int64)(a1 + 12), &v91, &v72, (int*)&v78);
					v52 = v91;
				}
				if (v44)
				{
					v54 = sub_14018B280(16 * (v44 + 1), 0);
					if (v54)
					{
						*((_QWORD*)v54 + 1) = v44;
						v55 = (__int64)(v54 + 4);
						*(_QWORD*)v54 = off_140B55060;
					}
					else
					{
						v55 = 16i64;
					}
				}
				else
				{
					v55 = 0i64;
				}
				sub_1407DB590((int*)v55, v45, 16 * v44);
				v56 = *((_QWORD*)v52 + 5);
				if (v56)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v56 - 16) + 8i64))(v56 - 16);
				*((_QWORD*)v52 + 6) = v44;
				*((_QWORD*)v52 + 5) = v55;
				if (v45)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v45 - 2) + 8i64))(v45 - 4);
				v4 = a2;
			LABEL_90:
				v10 = v95;
				goto LABEL_91;
			}
			v60 = v3[13];
			v61 = v60;
			v62 = *(_QWORD*)(v60 + 8);
			while (v62)
			{
				if (*(_DWORD*)(v62 + 32) < v15)
				{
					v62 = *(_QWORD*)(v62 + 24);
				}
				else
				{
					v61 = v62;
					v62 = *(_QWORD*)(v62 + 16);
				}
			}
			if (v61 == v60 || v15 < *(_DWORD*)(v61 + 32))
			{
				v76 = (int*)v3[13];
				v63 = (__int64*)&v76;
			}
			else
			{
				v90 = v61;
				v63 = &v90;
			}
			v64 = *v63;
			if (v64 == v60)
				goto LABEL_90;
			v10 = 1;
			v95 = 1;
			v72 = v64;
			sub_1405FFD90((__int64)(v3 + 12), &v72);
		LABEL_91:
			v12 = (unsigned int)(v73 + 1);
			LODWORD(v73) = v12;
			if ((unsigned int)v12 >= *(_DWORD*)(v4 + 12))
			{
				v8 = v96;
				break;
			}
			v5 = v74;
			v2 = v75;
		}
	}
	v57 = v75;
	if (v75)
	{
		v58 = sub_140451280((__int64)v3, (int*)v4);
		v59 = sub_14018B280(4 * v57 + 16, 0);
		if (v59)
		{
			*((_QWORD*)v59 + 1) = v57;
			*(_QWORD*)v59 = off_140B55060;
		}
		v65 = v74;
		v66 = v59 + 4;
		sub_1407DB590(v59 + 4, v74, 4 * v57);
		if (*(_QWORD*)v58)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)v58 - 16i64) + 8i64))(*(_QWORD*)v58 - 16i64);
		*((_QWORD*)v58 + 1) = v57;
		*(_QWORD*)v58 = v66;
	}
	else
	{
		v65 = v74;
	}
	if (v8 && !*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5296i64))
	{
		v67 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5272i64);
		v68 = *(_QWORD*)(qword_140C65898 + 29504) + 5280i64;
		v79 = *(_QWORD*)(qword_140C65898 + 29504) + 5216i64;
		v78 = 0;
		v80 = sub_1400A8020;
		v81 = 0i64;
		sub_140195960(v68, 0, (__int64)&v78, v67);
	}
	if (v10 && !*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5432i64))
	{
		v69 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5408i64);
		v70 = *(_QWORD*)(qword_140C65898 + 29504) + 5416i64;
		v79 = *(_QWORD*)(qword_140C65898 + 29504) + 5352i64;
		v78 = 0;
		v80 = sub_1400A8020;
		v81 = 0i64;
		sub_140195960(v70, 0, (__int64)&v78, v69);
	}
	if (v65)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v65 - 2) + 8i64))(v65 - 4);
	return 0i64;
}
// 1405FE707: conditional instruction was optimized away because eax.4!=0
// 140A690C8: using guessed type wchar_t *off_140A690C8[2];
// 140A6B278: using guessed type wchar_t *off_140A6B278[2];
// 140A6DFC0: using guessed type wchar_t *off_140A6DFC0[2];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B58: using guessed type int dword_140C63B58;
// 140C63BE8: using guessed type int dword_140C63BE8;
// 140C64170: using guessed type int dword_140C64170;
// 140C64810: using guessed type __int64 qword_140C64810;
// 140C64F00: using guessed type __int64 qword_140C64F00;
// 140C652D0: using guessed type __int64 qword_140C652D0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 1405FE2F0: using guessed type char var_50[80];

