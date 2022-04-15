//----- (000000014091A0C0) ----------------------------------------------------
int __fastcall sub_14091A0C0(__int64 a1, __int64 a2, int a3)
{
	void* v3; // rax
	__int64 v4; // r14
	__int64 v6; // rsi
	void* v7; // rbx
	_QWORD* v8; // r15
	__int64 v9; // r8
	__int64 v10; // r10
	__int64 v11; // r9
	unsigned int v12; // edx
	_WORD* v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rax
	bool v16; // zf
	int v17; // eax
	unsigned __int64 v18; // r12
	int v19; // r8d
	int v20; // edx
	int v21; // ecx
	int v22; // r13d
	int* v23; // rax
	int* v24; // rax
	__int64 v25; // rbx
	__int64 v26; // r8
	char* v27; // rax
	unsigned int v28; // r8d
	_QWORD* v29; // rax
	unsigned int v30; // edx
	unsigned int v31; // eax
	_QWORD* v32; // r14
	_QWORD* v33; // rax
	__int64 v34; // rcx
	_QWORD* v35; // r13
	_QWORD* v36; // rax
	_QWORD* v37; // rax
	_QWORD* v38; // r12
	_QWORD* v39; // r14
	_QWORD* v40; // rax
	int v41; // eax
	unsigned int v42; // edx
	_QWORD* v43; // rax
	unsigned int v44; // edx
	_QWORD* v45; // rax
	_QWORD* v46; // r14
	_QWORD* v47; // rax
	__int64 v48; // r14
	_QWORD* v49; // rax
	_QWORD* v50; // rax
	_QWORD* v51; // rax
	_QWORD* v52; // rax
	_QWORD* v53; // rax
	_QWORD* v54; // rax
	_QWORD* v55; // rax
	_QWORD* v56; // r14
	_QWORD* v57; // rax
	__int64 v58; // r14
	_QWORD* v59; // rax
	_QWORD* v60; // rax
	__int64 v61; // r14
	_QWORD* v62; // rax
	_QWORD* v63; // rax
	_QWORD* v64; // rax
	_QWORD* v65; // rax
	_QWORD* v66; // rax
	_QWORD* v67; // rax
	_QWORD* v68; // rax
	_QWORD* v69; // rax
	_QWORD* v70; // rax
	unsigned __int64* v71; // rax
	__int64 v72; // r15
	__int64* v73; // r14
	__int64 v74; // rbx
	__int64 v75; // rcx
	_QWORD* v77; // [rsp+40h] [rbp-C0h]
	__int64 v78; // [rsp+48h] [rbp-B8h]
	_QWORD* v79; // [rsp+50h] [rbp-B0h]
	__int64 v80[2]; // [rsp+58h] [rbp-A8h] BYREF
	_QWORD* v81; // [rsp+68h] [rbp-98h]
	__int64 v82; // [rsp+70h] [rbp-90h]
	_WORD* v83; // [rsp+78h] [rbp-88h]
	__int64 v84; // [rsp+80h] [rbp-80h]
	unsigned int* v85[2]; // [rsp+90h] [rbp-70h] BYREF
	int* v86; // [rsp+A0h] [rbp-60h]
	__int64 v87; // [rsp+A8h] [rbp-58h]
	int v88; // [rsp+B0h] [rbp-50h]
	int v89; // [rsp+B4h] [rbp-4Ch]
	int v90; // [rsp+B8h] [rbp-48h]
	int v91; // [rsp+C0h] [rbp-40h]
	int v92; // [rsp+C4h] [rbp-3Ch]
	int v93; // [rsp+C8h] [rbp-38h]
	int v94; // [rsp+CCh] [rbp-34h]
	__int64 v95; // [rsp+D0h] [rbp-30h]
	void* v96; // [rsp+D8h] [rbp-28h]
	int v97; // [rsp+E0h] [rbp-20h]
	int v98; // [rsp+E4h] [rbp-1Ch]
	int v99; // [rsp+E8h] [rbp-18h]
	int v100; // [rsp+ECh] [rbp-14h]
	unsigned int v101; // [rsp+F0h] [rbp-10h]
	__int64 v102; // [rsp+F8h] [rbp-8h]
	int v103; // [rsp+100h] [rbp+0h]
	__int64 v104; // [rsp+120h] [rbp+20h]
	__int64 v105; // [rsp+128h] [rbp+28h]
	__int64 v106; // [rsp+130h] [rbp+30h]
	_QWORD* v107; // [rsp+138h] [rbp+38h]
	_QWORD* v108; // [rsp+140h] [rbp+40h]
	_QWORD* v109; // [rsp+148h] [rbp+48h]
	__int64* v110; // [rsp+158h] [rbp+58h]
	__int64* i; // [rsp+160h] [rbp+60h]
	__int64* v112; // [rsp+168h] [rbp+68h]
	__int64* v113; // [rsp+170h] [rbp+70h]
	__int64* v114; // [rsp+178h] [rbp+78h]
	__int64* v115; // [rsp+180h] [rbp+80h]
	__int64* v116; // [rsp+188h] [rbp+88h]
	__int64* v117; // [rsp+190h] [rbp+90h]
	__int64* v118; // [rsp+198h] [rbp+98h]
	__int64* v119; // [rsp+1A0h] [rbp+A0h]
	__int64* v120; // [rsp+1A8h] [rbp+A8h]
	__int64* v121; // [rsp+1B0h] [rbp+B0h]
	__int64* v122; // [rsp+1B8h] [rbp+B8h]
	__int64* v123; // [rsp+1C0h] [rbp+C0h]
	unsigned int v124; // [rsp+1C8h] [rbp+C8h]
	unsigned int v125; // [rsp+1CCh] [rbp+CCh]
	__int64* v126; // [rsp+1D0h] [rbp+D0h]

	v3 = *(void**)(a1 + 32);
	v4 = *(_QWORD*)(a2 + 8);
	v6 = a3;
	v84 = a2;
	v79 = 0i64;
	v7 = &unk_1409CFCA0;
	v8 = 0i64;
	if (v3)
		v7 = v3;
	v80[0] = 0i64;
	v80[1] = 0i64;
	v81 = 0i64;
	v82 = 0i64;
	v83 = 0i64;
	v78 = v4;
	sub_1407E4830((int*)v85, 0i64, 0x148ui64);
	v9 = *(unsigned __int16*)(a1 + 26);
	v10 = *(unsigned __int16*)(a1 + 28);
	v11 = *(unsigned __int16*)(a1 + 24);
	v12 = *(_DWORD*)(a1 + 8);
	v14 = (int)(v10 * *(unsigned __int16*)(a1 + 26));
	v96 = v7;
	v97 = v6;
	v98 = 0;
	v13 = (_WORD*)(a1 + 2 * (v11 + v14));
	v95 = (__int64)v7 + 256;
	v83 = v13;
	LODWORD(v14) = v12 & 0x700000;
	v85[1] = (unsigned int*)v13;
	if ((v12 & 0x700000) > 0x300000)
	{
		if ((_DWORD)v14 == 0x400000)
		{
			v98 = 1;
		}
		else
		{
			if ((_DWORD)v14 != 5242880)
				return v14;
			v98 = 2;
		}
		goto LABEL_14;
	}
	if ((_DWORD)v14 == 3145728)
	{
	LABEL_14:
		v99 = 3338;
		goto LABEL_15;
	}
	if (!(_DWORD)v14)
	{
	LABEL_8:
		v99 = 10;
		goto LABEL_15;
	}
	if ((_DWORD)v14 != 0x100000)
	{
		if ((_DWORD)v14 != 0x200000)
			return v14;
		goto LABEL_8;
	}
	v99 = 13;
LABEL_15:
	v100 = 2;
	if ((v12 & 0x800000) == 0)
		v100 = 1;
	v103 = -2;
	v105 = v10;
	v106 = v9;
	v101 = (v12 >> 5) & 1;
	v102 = (__int64)v7 + 832;
	v104 = a1 + 2 * v11;
	v125 = (v12 >> 11) & 1;
	v124 = (v12 >> 25) & 1;
	do
	{
		v15 = (unsigned __int16)v13[1];
		v16 = v13[v15] == 113;
		v13 += v15;
	} while (v16);
	v17 = *(unsigned __int16*)(a1 + 16);
	v18 = (unsigned __int64)(v13 + 2);
	v89 = 40;
	v14 = off_140C1B1E0(v17 + 1);
	v87 = v14;
	if (!v14)
		return v14;
	sub_1407E4830((int*)v14, 1i64, *(unsigned __int16*)(a1 + 16) + 1);
	v19 = sub_14092F3E0((__int64)v85, v83, v18);
	if (v19 < 0)
	{
	LABEL_21:
		LODWORD(v14) = off_140C1B1E8(v87);
		return v14;
	}
	if ((_DWORD)v6)
	{
		v91 = v89;
		v20 = v89 + 8;
		v89 += 8;
		if ((_DWORD)v6 != 1)
			goto LABEL_30;
		v92 = v20;
	}
	else
	{
		if ((*(_BYTE*)(a1 + 12) & 0x40) == 0 || (*(_DWORD*)(a1 + 8) & 0x4000000) != 0)
		{
			v20 = v89;
			goto LABEL_30;
		}
		v20 = v89;
		v90 = v89;
	}
	v20 += 8;
	v89 = v20;
LABEL_30:
	if ((*(_DWORD*)(a1 + 8) & 0x40000) != 0)
	{
		v93 = v20;
		v20 += 8;
		v89 = v20;
	}
	if ((v20 & 8) != 0)
	{
		v20 += 8;
		v89 = v20;
	}
	v21 = *(unsigned __int16*)(a1 + 16);
	v88 = v20 + 16 * (v21 + 1);
	v22 = v19 + v88 + 8 * (v21 + 1);
	if (v22 > 0x10000)
		goto LABEL_21;
	v23 = (int*)off_140C1B1E0(4 * ((__int64)(v18 - (_QWORD)v83) >> 1));
	v86 = v23;
	if (!v23)
		goto LABEL_21;
	sub_1407E4830(v23, 0i64, 4 * ((__int64)(v18 - (_QWORD)v83) >> 1));
	sub_140931630((__int64)v85, v88 + 8 + 8 * *(unsigned __int16*)(a1 + 16), v18);
	v24 = sub_140931A70();
	v25 = (__int64)v24;
	if (!v24)
	{
	LABEL_156:
		off_140C1B1E8(v87);
		LODWORD(v14) = off_140C1B1E8(v86);
		return v14;
	}
	v85[0] = (unsigned int*)v24;
	sub_140931CE0((unsigned int*)v24, 1, 5, 5, v22);
	sub_140930E10((__int64)v85, 2 * *(unsigned __int16*)(a1 + 16) + 2);
	if (!v90)
		goto LABEL_41;
	if (!*(_DWORD*)v25)
	{
		v26 = v90 + 48i64;
		*(_DWORD*)(v25 + 104) = 0;
		sub_14092AA10((unsigned int*)v25, 267, v26, 1, 0i64);
	LABEL_41:
		if (!*(_DWORD*)v25)
		{
			*(_DWORD*)(v25 + 104) = 0;
			v27 = sub_14092D140(v25, 1, 6, 0i64, 9, 0i64);
			if (v27)
				*v27 = -119;
		}
	}
	sub_140932690((unsigned int*)v25, 6, 1, 0i64, 6, 0i64);
	sub_140932690((unsigned int*)v25, 6, 6, 0i64, 257, 8i64);
	sub_140932690((unsigned int*)v25, 6, 7, 0i64, 257, 24i64);
	sub_140932690((unsigned int*)v25, 6, 3, 0i64, 257, 0i64);
	sub_140932690((unsigned int*)v25, 12, 1, 0i64, 257, 60i64);
	sub_140932690((unsigned int*)v25, 6, 2, 0i64, 259, 8i64);
	sub_140932690((unsigned int*)v25, 6, 8, 0i64, 259, 16i64);
	sub_140932690((unsigned int*)v25, 6, 267, 32i64, 1, 0i64);
	if ((_DWORD)v6 == 1)
		sub_140932690((unsigned int*)v25, 6, 267, v92, 512, 0i64);
	v28 = *(_DWORD*)(a1 + 8);
	if ((v28 & 0x10) == 0)
	{
		v29 = sub_140930010((__int64)v85, (*(unsigned __int16*)(a1 + 12) >> 11) & 1, (v28 >> 18) & 1);
		v30 = *(_DWORD*)(a1 + 8);
		v8 = v29;
		if ((v30 & 0x4000000) == 0 && ((_DWORD)v6 || !(unsigned int)sub_14092D9C0((__int64)v85, (v30 >> 18) & 1)))
		{
			v31 = *(unsigned __int16*)(a1 + 12);
			if ((v31 & 0x10) != 0)
			{
				sub_14092D690((__int64)v85, *(_WORD*)(a1 + 20), (v31 >> 5) & 1, (*(_DWORD*)(a1 + 8) >> 18) & 1);
			}
			else if ((v31 & 0x100) != 0)
			{
				sub_14092DFB0((__int64)v85, (*(_DWORD*)(a1 + 8) >> 18) & 1);
			}
			else if (v4 && (*(_BYTE*)(v4 + 4) & 1) != 0)
			{
				sub_14092E6A0((__int64)v85, v4 + 8, (*(_DWORD*)(a1 + 8) >> 18) & 1);
			}
		}
	}
	if (v90)
		v79 = sub_140931270(
			(__int64)v85,
			*(_WORD*)(a1 + 22),
			(*(unsigned __int16*)(a1 + 12) >> 7) & 1,
			(*(unsigned __int16*)(a1 + 12) >> 4) & 1);
	sub_140932690((unsigned int*)v25, 6, 267, v89, 6, 0i64);
	sub_140932690((unsigned int*)v25, 6, 10, 0i64, 267, 32i64);
	if (v94)
		sub_140932690((unsigned int*)v25, 6, 267, v94, 512, 0i64);
	if ((_DWORD)v6 == 1)
	{
		v32 = sub_140931B80((unsigned int*)v25, 1, 267, v92, 512, 0i64);
		sub_140932690((unsigned int*)v25, 6, 267, v91, 6, 0i64);
		v33 = sub_140932570(v25);
		if (v32 && v33)
		{
			v32[2] &= ~2ui64;
			v32[2] |= 1ui64;
			v32[3] = v33;
		}
	}
	else if ((_DWORD)v6 == 2)
	{
		sub_140932690((unsigned int*)v25, 6, 267, v91, 6, 0i64);
	}
	sub_140925310((__int64)v85, v83, v18, (__int64)v80);
	v34 = v25;
	if (*(_DWORD*)v25)
		goto LABEL_155;
	v35 = sub_140931B80((unsigned int*)v25, 0, 6, 0i64, 267, v89);
	v77 = sub_140932570(v25);
	v36 = sub_140932570(v25);
	v109 = v36;
	if (v114)
		sub_140931600(v114, (__int64)v36);
	sub_140927AB0((__int64)v85, *(unsigned __int16*)(a1 + 16) + 1);
	v37 = sub_140932570(v25);
	v108 = v37;
	if (v113)
		sub_140931600(v113, (__int64)v37);
	sub_1409331A0((unsigned int*)v25, 6, 1, 0i64);
	if ((_DWORD)v6)
	{
		v107 = sub_140932570(v25);
		sub_140931600(v112, (__int64)v107);
		sub_140930FC0((__int64)v85, (__int64)v108);
	}
	v38 = sub_140932570(v25);
	sub_14091DFC0((__int64)v85, v81);
	if (*(_DWORD*)v25)
	{
	LABEL_154:
		v34 = v25;
	LABEL_155:
		sub_140933320(v34);
		goto LABEL_156;
	}
	if ((_DWORD)v6 == 1)
	{
		v39 = sub_140931B80((unsigned int*)v25, 1, 267, v92, 512, -1i64);
		sub_140932690((unsigned int*)v25, 6, 1, 0i64, 267, v91);
		sub_140932690((unsigned int*)v25, 6, 267, v91, 512, -1i64);
		sub_140932690((unsigned int*)v25, 6, 267, v92, 1, 0i64);
		v40 = sub_140932570(v25);
		if (v39)
		{
			if (v40)
			{
				v39[2] &= ~2ui64;
				v39[2] |= 1ui64;
				v39[3] = v40;
			}
		}
	}
	sub_140932690((unsigned int*)v25, 6, 6, 0i64, 267, v89);
	v41 = *(_DWORD*)(a1 + 8);
	if ((v41 & 0x10) == 0)
	{
		if ((v41 & 0x40000) != 0)
		{
			if ((_DWORD)v6 || !v78 || (v44 = *(_DWORD*)(v78 + 40), v44 <= 1) || (v41 & 0x4000000) != 0)
			{
				v43 = sub_140931B80((unsigned int*)v25, 2, 6, 0i64, 267, v93);
			}
			else
			{
				sub_140932A90((unsigned int*)v25, 25, 1, 0i64, 6, 0i64, 512, 2 * v44 + 2);
				sub_140932A90((unsigned int*)v25, 2075, 0, 0i64, 1, 0i64, 7, 0i64);
				sub_140932FC0((unsigned int*)v25, 6, 3, 0i64, 0, 0, 4);
				sub_140932A90((unsigned int*)v25, 2075, 0, 0i64, 6, 0i64, 267, v93);
				sub_140932FC0((unsigned int*)v25, 543, 3, 0i64, 3, 0, 3);
				v43 = sub_140932450(v25, 0);
			}
		}
		else if ((_DWORD)v6 || !v78 || (v42 = *(_DWORD*)(v78 + 40), v42 <= 1) || (v41 & 0x4000000) != 0)
		{
			v43 = sub_140931B80((unsigned int*)v25, 2, 6, 0i64, 7, 0i64);
		}
		else
		{
			sub_140932A90((unsigned int*)v25, 25, 1, 0i64, 6, 0i64, 512, 2 * v42 + 2);
			v43 = sub_140931B80((unsigned int*)v25, 5, 1, 0i64, 7, 0i64);
		}
		if (v43 && v8)
		{
			v43[2] &= ~2ui64;
			v43[3] = v8;
			v43[2] |= 1ui64;
		}
	}
	if (v79)
	{
		v45 = sub_140932570(v25);
		if (v45)
		{
			v79[2] &= ~2ui64;
			v79[2] |= 1ui64;
			v79[3] = v45;
		}
	}
	if ((_DWORD)v6 == 1)
	{
		v46 = v107;
		v47 = sub_140931B80((unsigned int*)v25, 1, 267, v92, 512, 0i64);
		if (v47)
		{
			if (v46)
			{
				v47[2] &= ~2ui64;
				v47[2] |= 1ui64;
				v47[3] = v46;
			}
		}
	}
	sub_140932690((unsigned int*)v25, 6, 1, 0i64, 512, -1i64);
	v48 = (__int64)v108;
	v49 = sub_140932450(v25, 22);
	if (v49 && v48)
	{
		v49[2] &= ~2ui64;
		v49[2] |= 1ui64;
		v49[3] = v48;
	}
	sub_14092EB40((__int64)v85);
	v50 = sub_140932570(v25);
	if (v35 && v50)
	{
		v35[2] &= ~2ui64;
		v35[2] |= 1ui64;
		v35[3] = v50;
	}
	sub_140932690((unsigned int*)v25, 6, 1, 0i64, 9, 0i64);
	sub_140932690((unsigned int*)v25, 7, 3, 0i64, 257, 66i64);
	v51 = sub_140931B80((unsigned int*)v25, 1, 3, 0i64, 512, 0i64);
	if (v51 && v38)
	{
		v51[2] &= ~2ui64;
		v51[2] |= 1ui64;
		v51[3] = v38;
	}
	sub_140932690((unsigned int*)v25, 7, 3, 0i64, 257, 67i64);
	v52 = sub_140931B80((unsigned int*)v25, 0, 3, 0i64, 512, 0i64);
	if (v52 && v77)
	{
		v52[2] &= ~2ui64;
		v52[2] |= 1ui64;
		v52[3] = v77;
	}
	sub_140932690((unsigned int*)v25, 6, 3, 0i64, 257, 8i64);
	v53 = sub_140931B80((unsigned int*)v25, 1, 3, 0i64, 6, 0i64);
	if (v53 && v77)
	{
		v53[2] &= ~2ui64;
		v53[2] |= 1ui64;
		v53[3] = v77;
	}
	v54 = sub_140932450(v25, 22);
	if (v54 && v38)
	{
		v54[2] &= ~2ui64;
		v54[2] |= 1ui64;
		v54[3] = v38;
	}
	for (i = v110; i; i = (__int64*)*i)
	{
		sub_140925A10((__int64)v85);
		if (*(_DWORD*)v25)
			goto LABEL_154;
		sub_14092EB40((__int64)v85);
	}
	v55 = sub_140932570(v25);
	sub_140931600(v116, (__int64)v55);
	sub_140931FA0((unsigned int*)v25, 267, 0i64);
	sub_140932690((unsigned int*)v25, 6, 267, 8i64, 3, 0i64);
	sub_140932690((unsigned int*)v25, 6, 1, 0i64, 9, 0i64);
	sub_140932690((unsigned int*)v25, 6, 1, 0i64, 257, 0i64);
	sub_140932690((unsigned int*)v25, 6, 257, 0i64, 2, 0i64);
	sub_140932A90((unsigned int*)v25, 25, 3, 0i64, 257, 16i64, 512, 0x2000i64);
	sub_1409322B0((unsigned int*)v25, 26, 512, (__int64)sub_140933B70);
	v56 = sub_140931B80((unsigned int*)v25, 1, 1, 0i64, 512, 0i64);
	sub_140932690((unsigned int*)v25, 6, 1, 0i64, 9, 0i64);
	sub_140932690((unsigned int*)v25, 6, 1, 0i64, 257, 0i64);
	sub_140932690((unsigned int*)v25, 6, 2, 0i64, 257, 0i64);
	sub_140932690((unsigned int*)v25, 6, 8, 0i64, 257, 16i64);
	sub_140932690((unsigned int*)v25, 6, 3, 0i64, 267, 8i64);
	sub_1409320B0((unsigned int*)v25, 267, 0i64);
	v57 = sub_140932570(v25);
	if (v56 && v57)
	{
		v56[2] &= ~2ui64;
		v56[2] |= 1ui64;
		v56[3] = v57;
	}
	sub_140932690((unsigned int*)v25, 6, 1, 0i64, 512, -27i64);
	v58 = (__int64)v108;
	v59 = sub_140932450(v25, 22);
	if (v59 && v58)
	{
		v59[2] &= ~2ui64;
		v59[2] |= 1ui64;
		v59[3] = v58;
	}
	v60 = sub_140932570(v25);
	sub_140931600(v115, (__int64)v60);
	sub_140932690((unsigned int*)v25, 6, 1, 0i64, 512, -8i64);
	v61 = (__int64)v108;
	v62 = sub_140932450(v25, 22);
	if (v62 && v61)
	{
		v62[2] &= ~2ui64;
		v62[2] |= 1ui64;
		v62[3] = v61;
	}
	if (v117)
	{
		v63 = sub_140932570(v25);
		sub_140931600(v117, (__int64)v63);
		sub_140928FA0((__int64)v85);
	}
	if (v118)
	{
		v64 = sub_140932570(v25);
		sub_140931600(v118, (__int64)v64);
		sub_14091CAC0((__int64)v85);
	}
	if (v119)
	{
		v65 = sub_140932570(v25);
		sub_140931600(v119, (__int64)v65);
		sub_14091BA80(v85);
	}
	if (v120)
	{
		v66 = sub_140932570(v25);
		sub_140931600(v120, (__int64)v66);
		sub_14091BD30(v85);
	}
	if (v121)
	{
		v67 = sub_140932570(v25);
		sub_140931600(v121, (__int64)v67);
		sub_14091C920(v85);
	}
	if (v122)
	{
		v68 = sub_140932570(v25);
		sub_140931600(v122, (__int64)v68);
		sub_140928880(v85);
	}
	if (v123)
	{
		v69 = sub_140932570(v25);
		sub_140931600(v123, (__int64)v69);
		sub_140928B70((__int64)v85);
	}
	if (v126)
	{
		v70 = sub_140932570(v25);
		sub_140931600(v126, (__int64)v70);
		sub_140929620(v85);
	}
	off_140C1B1E8(v87);
	off_140C1B1E8(v86);
	v71 = sub_1409334F0(v25);
	v72 = *(_QWORD*)(v25 + 96);
	v73 = (__int64*)v71;
	LODWORD(v14) = sub_140933320(v25);
	if (v73)
	{
		v74 = v84;
		if ((*(_BYTE*)v84 & 0x40) == 0 || (v75 = *(_QWORD*)(v84 + 56)) == 0)
		{
			v14 = off_140C1B1E0(72i64);
			v75 = v14;
			if (!v14)
			{
				LODWORD(v14) = sub_140933390(v73);
				return v14;
			}
			*(_QWORD*)v14 = 0i64;
			*(_QWORD*)(v14 + 8) = 0i64;
			*(_QWORD*)(v14 + 16) = 0i64;
			*(_QWORD*)(v14 + 24) = 0i64;
			*(_QWORD*)(v14 + 32) = 0i64;
			*(_QWORD*)(v14 + 40) = 0i64;
			*(_QWORD*)(v14 + 48) = 0i64;
			*(_QWORD*)(v14 + 56) = 0i64;
			*(_QWORD*)(v14 + 64) = 0i64;
			LODWORD(v14) = 2 * *(unsigned __int16*)(a1 + 16) + 2;
			*(_DWORD*)(v75 + 40) = v14;
			*(_DWORD*)v74 |= 0x40u;
			*(_QWORD*)(v74 + 56) = v75;
		}
		*(_QWORD*)(v75 + 8 * v6) = v73;
		*(_QWORD*)(v75 + 8 * v6 + 48) = v72;
	}
	return v14;
}
// 140C1B1E0: using guessed type __int64 (__fastcall *off_140C1B1E0)(_QWORD);
// 140C1B1E8: using guessed type __int64 (__fastcall *off_140C1B1E8)(_QWORD);

