//----- (000000014002BEA0) ----------------------------------------------------
__int64 __fastcall sub_14002BEA0(__int64 a1, __int64 a2)
{
	unsigned int v2; // r15d
	__int64 v4; // rax
	int* v5; // rdi
	__int64 v7; // rsi
	__int64 v8; // rcx
	__int64 v9; // r12
	__int64 v10; // r13
	__int64 v11; // rdx
	__int64 v12; // r14
	__int64 v13; // rdi
	_QWORD* v14; // rsi
	__int64 v15; // rax
	unsigned __int64* v16; // rdx
	unsigned __int64 v17; // r8
	__int64 v18; // rcx
	int v19; // eax
	int v20; // edx
	__int64 v21; // rax
	__m128* v22; // rdi
	__int64 v23; // rax
	__int64 v24; // r9
	int v25; // eax
	__int64 v26; // r9
	__int64 v27; // rax
	int* v28; // r8
	int v29; // ecx
	int v30; // xmm6_4
	int v31; // xmm7_4
	double v32; // xmm8_8
	__int64 v33; // rax
	int v34; // ecx
	__int64 v35; // rdx
	float v36; // xmm0_4
	__int64 v37; // rax
	__int64 v38; // r9
	int v39; // eax
	int v40; // edx
	int v41; // edx
	__int64 v42; // rax
	__int64 v43; // rax
	__int64 v44; // rax
	__int64 v45; // r9
	double v46; // xmm3_8
	int v47; // edx
	int v48; // edx
	__int64 v49; // rax
	__int64 v50; // rax
	__int64 v51; // rax
	__int64 v52; // r9
	__int64 v53; // rsi
	unsigned int v54; // ebx
	unsigned int v55; // edi
	__int64 i; // rbx
	__int64 v57; // rcx
	int v59; // [rsp+48h] [rbp-69h]
	int v60; // [rsp+48h] [rbp-69h]
	int v61; // [rsp+58h] [rbp-59h]
	int v62; // [rsp+58h] [rbp-59h]
	unsigned __int64 v63; // [rsp+60h] [rbp-51h] BYREF
	__int64 v64; // [rsp+68h] [rbp-49h]
	__int64 v65; // [rsp+70h] [rbp-41h]
	unsigned __int64 v66; // [rsp+80h] [rbp-31h] BYREF
	int* v67; // [rsp+88h] [rbp-29h]
	__int64 v69; // [rsp+98h] [rbp-19h]
	int v71; // [rsp+120h] [rbp+6Fh]
	int v72; // [rsp+120h] [rbp+6Fh]
	int v73; // [rsp+128h] [rbp+77h]
	int v74; // [rsp+130h] [rbp+7Fh]
	int v75; // [rsp+130h] [rbp+7Fh]

	v2 = 0;
	v4 = 0i64;
	v5 = 0i64;
	v67 = 0i64;
	v69 = 0i64;
	while (asc_1409EE9D8[++v4] != 0)
		;
	v7 = (2 * v4) >> 1;
	if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v5 = sub_14018B280(2 * (v7 + 1), 0);
		v67 = v5;
		v69 = (__int64)v5 + 2 * v7 + 2;
	}
	sub_1407DB590(v5, (int*)L" \t\r\n", 2 * v7);
	if ((int*)((char*)v5 + 2 * v7))
		*((_WORD*)v5 + v7) = 0;
	sub_14018F570((__int64)&v63, a1, (__int64)&v66, 34, 92);
	if (v5)
		sub_14018B900((__int64)v5, 0);
	v9 = v65;
	v10 = v64;
	v63 = (v65 - v64) >> 5;
	if (!v63)
	{
		v2 = -2147024809;
		goto LABEL_47;
	}
	v12 = sub_14019D200(v8, *(unsigned __int16**)(v64 + 8));
	if (!v12)
	{
		v2 = -2147467259;
		goto LABEL_47;
	}
	v13 = a2;
	v14 = *(_QWORD**)(*(_QWORD*)(a2 + 88) + 400i64);
	sub_140058900((__int64)v14, v11, 0);
	v15 = v14[2];
	*(_QWORD*)v15 = 0x3FF0000000000000i64;
	*(_DWORD*)(v15 + 8) = 3;
	v14[2] += 16i64;
	v16 = (unsigned __int64*)sub_14018F0E0(&v66, *(unsigned __int16**)(v12 + 8))[1];
	if (v16)
	{
		v17 = -1i64;
		do
			++v17;
		while (*((_BYTE*)v16 + v17));
		sub_140058710((__int64)v14, v16, v17);
	}
	else
	{
		*(_DWORD*)(v14[2] + 8i64) = 0;
		v14[2] += 16i64;
	}
	if (v67)
		sub_14018B900((__int64)v67, 0);
	sub_14005EA50((__int64)v14, (__int64*)(v14[2] - 48i64), (int*)(v14[2] - 32i64), (unsigned int*)(v14[2] - 16i64));
	v14[2] -= 32i64;
	v18 = v14[2];
	*(_QWORD*)v18 = *(_QWORD*)(v18 - 16);
	*(_DWORD*)(v18 + 8) = *(_DWORD*)(v18 - 8);
	v14[2] += 16i64;
	v73 = sub_1400578C0((__int64)v14);
	v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
	switch (v19)
	{
	case 1:
		v47 = *(_DWORD*)(v12 + 16);
		v75 = 0x80000000;
		v72 = 0x7FFFFFFF;
		if (*(_DWORD*)qword_140C63750 < v47)
			v47 = *(_DWORD*)qword_140C63750;
		v48 = *(_DWORD*)(v12 + 4i64 * v47 + 32);
		v62 = v48;
		if (*(_DWORD*)(v12 + 72))
		{
			v75 = *(_DWORD*)(v12 + 52);
			v72 = *(_DWORD*)(v12 + 56);
		}
		v49 = v14[2];
		*(_QWORD*)v49 = 0x4000000000000000i64;
		*(_DWORD*)(v49 + 8) = 3;
		v14[2] += 16i64;
		v50 = v14[2];
		*(_DWORD*)(v50 + 8) = 3;
		*(double*)v50 = (double)v48;
		v14[2] += 16i64;
		sub_14005EA50(
			(__int64)v14,
			(__int64*)(v14[2] - 48i64),
			(int*)(v14[2] - 32i64),
			(unsigned int*)(v14[2] - 16i64));
		v14[2] -= 48i64;
		v51 = sub_140062650((__int64)v14, (unsigned __int64*)"OnConsoleIntValueChange", 0x17ui64);
		v52 = v14[2];
		v66 = v51;
		LODWORD(v67) = 4;
		sub_14005E8E0((__int64)v14, (__int64)(v14 + 15), (int*)&v66, v52);
		v14[2] += 16i64;
		v60 = sub_1400578C0((__int64)v14);
		v27 = sub_140124290(
			*(_QWORD*)(v13 + 88),
			*(_QWORD*)(v13 + 96),
			*(_QWORD*)(v12 + 8),
			COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT((float)v62)),
			(float)v75,
			(float)v72,
			1.0,
			0,
			v60,
			v73);
		break;
	case 3:
		v40 = *(_DWORD*)(v12 + 16);
		v74 = 0;
		v71 = -1;
		if (*(_DWORD*)qword_140C63750 < v40)
			v40 = *(_DWORD*)qword_140C63750;
		v41 = *(_DWORD*)(v12 + 4i64 * v40 + 32);
		v61 = v41;
		if (*(_DWORD*)(v12 + 72))
		{
			v74 = *(_DWORD*)(v12 + 52);
			v71 = *(_DWORD*)(v12 + 56);
		}
		v42 = v14[2];
		*(_QWORD*)v42 = 0x4000000000000000i64;
		*(_DWORD*)(v42 + 8) = 3;
		v14[2] += 16i64;
		v43 = v14[2];
		*(_DWORD*)(v43 + 8) = 3;
		*(double*)v43 = (double)v41;
		v14[2] += 16i64;
		sub_14005EA50(
			(__int64)v14,
			(__int64*)(v14[2] - 48i64),
			(int*)(v14[2] - 32i64),
			(unsigned int*)(v14[2] - 16i64));
		v14[2] -= 48i64;
		v44 = sub_140062650((__int64)v14, (unsigned __int64*)"OnConsoleIntValueChange", 0x17ui64);
		v45 = v14[2];
		v66 = v44;
		LODWORD(v67) = 4;
		sub_14005E8E0((__int64)v14, (__int64)(v14 + 15), (int*)&v66, v45);
		v14[2] += 16i64;
		HIDWORD(v46) = 0;
		v59 = sub_1400578C0((__int64)v14);
		*(float*)&v46 = (float)v61;
		v27 = sub_140124290(
			*(_QWORD*)(v13 + 88),
			*(_QWORD*)(v13 + 96),
			*(_QWORD*)(v12 + 8),
			v46,
			(float)v74,
			(float)v71,
			1.0,
			0,
			v59,
			v73);
		break;
	case 5:
		v28 = (int*)qword_140C63750;
		v29 = *(_DWORD*)(v12 + 16);
		v30 = -8388609;
		v31 = 2139095039;
		if (*(_DWORD*)qword_140C63750 < v29)
			v29 = *(_DWORD*)qword_140C63750;
		*(_QWORD*)&v32 = *(unsigned int*)(v12 + 4i64 * v29 + 32);
		if (*(_DWORD*)(v12 + 72))
		{
			v30 = *(_DWORD*)(v12 + 52);
			v31 = *(_DWORD*)(v12 + 56);
		}
		v33 = v14[2];
		*(_QWORD*)v33 = 0x4000000000000000i64;
		*(_DWORD*)(v33 + 8) = 3;
		v14[2] += 16i64;
		v34 = *(_DWORD*)(v12 + 16);
		v35 = v14[2];
		if (*v28 < v34)
			v34 = *v28;
		v36 = *(float*)(v12 + 4i64 * v34 + 32);
		*(_DWORD*)(v35 + 8) = 3;
		*(double*)v35 = v36;
		v14[2] += 16i64;
		sub_14005EA50(
			(__int64)v14,
			(__int64*)(v14[2] - 48i64),
			(int*)(v14[2] - 32i64),
			(unsigned int*)(v14[2] - 16i64));
		v14[2] -= 48i64;
		v37 = sub_140062650((__int64)v14, (unsigned __int64*)"OnConsoleFloatValueChange", 0x19ui64);
		v38 = v14[2];
		v66 = v37;
		LODWORD(v67) = 4;
		sub_14005E8E0((__int64)v14, (__int64)(v14 + 15), (int*)&v66, v38);
		v14[2] += 16i64;
		v39 = sub_1400578C0((__int64)v14);
		v27 = sub_140124290(
			*(_QWORD*)(a2 + 88),
			*(_QWORD*)(a2 + 96),
			*(_QWORD*)(v12 + 8),
			v32,
			*(float*)&v30,
			*(float*)&v31,
			1.0,
			3,
			v39,
			v73);
		break;
	case 12:
		v20 = *(_DWORD*)(v12 + 16);
		if (*(_DWORD*)qword_140C63750 < v20)
			v20 = *(_DWORD*)qword_140C63750;
		v21 = v14[2];
		*(_QWORD*)v21 = 0x4000000000000000i64;
		*(_DWORD*)(v21 + 8) = 3;
		v14[2] += 16i64;
		v22 = (__m128*)(v12 + 16 * (v20 + 2i64));
		sub_1401181F0(v14, v22);
		sub_14005EA50(
			(__int64)v14,
			(__int64*)(v14[2] - 48i64),
			(int*)(v14[2] - 32i64),
			(unsigned int*)(v14[2] - 16i64));
		v14[2] -= 48i64;
		v23 = sub_140062650((__int64)v14, (unsigned __int64*)"OnConsoleColorValueChange", 0x19ui64);
		v24 = v14[2];
		v66 = v23;
		LODWORD(v67) = 4;
		sub_14005E8E0((__int64)v14, (__int64)(v14 + 15), (int*)&v66, v24);
		v14[2] += 16i64;
		v25 = sub_1400578C0((__int64)v14);
		v27 = sub_140129A40(*(_QWORD*)(a2 + 88), *(_QWORD*)(a2 + 96), v22, v26, v25, v73);
		break;
	default:
		goto LABEL_47;
	}
	*(_QWORD*)(v27 + 656) |= 0x20ui64;
	v53 = v27;
	if (v63 >= 3)
	{
		v54 = sub_14018E820(*(WCHAR**)(v10 + 40));
		v55 = sub_14018E820(*(WCHAR**)(v10 + 72));
		sub_1400CB3D0(v53, &v63);
		v66 = __PAIR64__(v55, v54);
		LODWORD(v67) = v54 + v64 - v63;
		HIDWORD(v67) = v55 + HIDWORD(v64) - HIDWORD(v63);
		sub_1400CC7C0(v53, (int*)&v66);
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v53 + 8i64))(v53);
LABEL_47:
	for (i = v10; i != v9; i += 32i64)
	{
		v57 = *(_QWORD*)(i + 8);
		if (v57)
			sub_14018B900(v57, 0);
	}
	if (v10)
		sub_14018B900(v10, 0);
	return v2;
}
// 14002BFAF: variable 'v8' is possibly undefined
// 14002BFDC: variable 'v11' is possibly undefined
// 14002C172: variable 'v26' is possibly undefined
// 1409EE9D8: using guessed type wchar_t asc_1409EE9D8[5];
// 140C63750: using guessed type __int64 qword_140C63750;

