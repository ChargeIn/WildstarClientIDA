//----- (00000001402BB1F0) ----------------------------------------------------
__int64 __fastcall sub_1402BB1F0(__int64 a1, void(__fastcall*** a2)(_QWORD), int* a3, __int64 a4, int a5)
{
	__int64 v9; // rcx
	int* v10; // rax
	unsigned int v11; // r14d
	__int64* v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rbx
	__int64 v15; // rbx
	unsigned __int64 v16; // rax
	__int64 v17; // rsi
	unsigned __int64 v18; // r15
	unsigned __int64 v19; // rdi
	int* v20; // rax
	int* v21; // r8
	__int64 v22; // rcx
	__int64 v23; // rax
	__int64 v24; // rdx
	unsigned __int64 v25; // rdx
	int i; // r8d
	__int64 v27; // rax
	__int16 v28; // r9
	__int64 v29; // rcx
	__int64 v30; // rax
	__int64 v31; // rax
	unsigned __int64 v32; // rdx
	__int64 v33; // rcx
	int v34; // r8d
	unsigned __int64 v35; // rax
	SCRIPT_ITEM* pItems; // rax
	int v37; // r8d
	int v38; // edx
	HRESULT v39; // eax
	unsigned __int64 v40; // rdx
	__int64 v41; // rcx
	int v42; // r8d
	SCRIPT_ITEM* v43; // rax
	unsigned __int64 v44; // r15
	__int64 v45; // rdx
	__int64 v46; // rcx
	__int64 v47; // rsi
	unsigned __int64 v48; // r12
	unsigned __int64 v49; // r13
	int v50; // r9d
	int v51; // eax
	__int64 v52; // rdi
	__int64 v53; // rax
	int v54; // edi
	HRESULT v55; // eax
	__int64 v56; // rdx
	__int16 v57; // cx
	unsigned __int64 j; // rdx
	__int64 v59; // rdx
	unsigned __int64 k; // rax
	__int64 v61; // rdx
	__int64 v62; // r8
	char v63; // cl
	unsigned __int64 v64; // r8
	__int64 v65; // r10
	unsigned __int64 v66; // r9
	unsigned __int16 v67; // cx
	_WORD* m; // rax
	unsigned __int64 v69; // r10
	unsigned __int64 v70; // rdx
	__int64 v71; // rcx
	char v72; // al
	char v73; // cl
	__int16 v74; // r11
	float v75; // xmm1_4
	__int64 v76; // rcx
	__m128i v77; // xmm0
	SCRIPT_VISATTR* psva; // [rsp+40h] [rbp-A8h]
	int cGlyphs; // [rsp+50h] [rbp-98h] BYREF
	int cChars; // [rsp+54h] [rbp-94h]
	__int64 v82; // [rsp+58h] [rbp-90h] BYREF
	__int64 v83; // [rsp+60h] [rbp-88h]
	__int64 v84; // [rsp+68h] [rbp-80h]
	__int64 v85; // [rsp+70h] [rbp-78h]
	unsigned __int64 v86; // [rsp+78h] [rbp-70h]
	ABC pABC; // [rsp+80h] [rbp-68h] BYREF

	if (*(void(__fastcall****)(_QWORD))(a1 + 24) != a2)
	{
		if (a2)
			(**a2)(a2);
		v9 = *(_QWORD*)(a1 + 24);
		if (v9)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		*(_QWORD*)(a1 + 24) = a2;
	}
	v10 = sub_14018B280(2 * a4 + 2, 0);
	*(_QWORD*)(a1 + 32) = v10;
	sub_1407DB590(v10, a3, 2 * a4);
	v11 = 0;
	*(_WORD*)(2 * a4 + *(_QWORD*)(a1 + 32)) = 0;
	v12 = (__int64*)(*(_QWORD*)(a1 + 24) + 96i64);
	*(_QWORD*)(a1 + 40) = a4;
	*(_DWORD*)(a1 + 48) = a5;
	if (!*(_QWORD*)(a1 + 264))
	{
		*(_QWORD*)(a1 + 264) = v12;
		*(_QWORD*)(a1 + 272) = *v12;
		*v12 = a1;
		v13 = *(_QWORD*)(a1 + 272);
		if (v13)
			*(_QWORD*)(v13 + 264) = a1 + 272;
	}
	v14 = *(_QWORD*)(a1 + 16);
	v82 = *(_QWORD*)(a1 + 24);
	v15 = v14 + 136;
	v83 = *(_QWORD*)(a1 + 32);
	v84 = *(_QWORD*)(a1 + 40);
	LODWORD(v85) = *(_DWORD*)(a1 + 48);
	if (*(_QWORD*)v15 == *(_QWORD*)(v15 + 8))
		sub_1400290D0(v15);
	v16 = (*(__int64(__fastcall**)(__int64*))(v15 + 24))(&v82);
	v17 = *(_QWORD*)(v15 + 16);
	v18 = v16;
	v19 = v16 % *(_QWORD*)(v15 + 8);
	v20 = sub_14018B280(56i64, 0);
	v21 = v20;
	if (v20)
	{
		v22 = *(_QWORD*)(v17 + 8 * v19);
		*(_QWORD*)v20 = v18;
		*((_QWORD*)v20 + 1) = v22;
		*((_QWORD*)v20 + 2) = v82;
		*((_QWORD*)v20 + 3) = v83;
		*((_QWORD*)v20 + 4) = v84;
		v23 = v85;
		*((_QWORD*)v21 + 6) = a1;
		*((_QWORD*)v21 + 5) = v23;
	}
	else
	{
		v21 = 0i64;
	}
	*(_QWORD*)(v17 + 8 * v19) = v21;
	++* (_QWORD*)v15;
	v24 = *(_QWORD*)(a1 + 40);
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 192) = 0i64;
	sub_1402BBB00((_QWORD*)a1, v24);
	v25 = 0i64;
	for (i = 0; v25 < *(_QWORD*)(a1 + 40); ++v25)
	{
		*(_WORD*)(*(_QWORD*)(a1 + 64) + 2 * v25) = *(_WORD*)(a1 + 88);
		v27 = *(_QWORD*)(a1 + 32);
		if (i)
		{
			if (*(_WORD*)(v27 + 2 * v25) == 59)
				i = 0;
		}
		else
		{
			v28 = *(_WORD*)(v27 + 2 * v25);
			if (v28 == 28)
			{
				i = 1;
			}
			else
			{
				v29 = *(_QWORD*)(a1 + 88);
				v30 = *(_QWORD*)(a1 + 56);
				if ((*(_BYTE*)(a1 + 48) & 1) != 0)
					*(_WORD*)(v30 + 2 * v29) = 8226;
				else
					*(_WORD*)(v30 + 2 * v29) = v28;
				++* (_QWORD*)(a1 + 88);
			}
		}
	}
	*(_WORD*)(*(_QWORD*)(a1 + 64) + 2i64 * *(_QWORD*)(a1 + 40)) = *(_WORD*)(a1 + 88);
	sub_1407E4830(*(int**)(a1 + 80), 0i64, 2i64 * *(_QWORD*)(a1 + 88));
	sub_1407E4830(*(int**)(a1 + 72), 0i64, *(_QWORD*)(a1 + 88));
	v31 = *(_QWORD*)(a1 + 88);
	if (!v31)
	{
		sub_1402BBB80(a1, 0i64);
		goto LABEL_78;
	}
	v32 = *(_QWORD*)(a1 + 120);
	v33 = *(_QWORD*)(a1 + 104);
	v34 = 4 * (*(_DWORD*)(a1 + 48) & 1 | 2);
	v35 = v31 + 1;
	if (v32 < v35)
		v32 = v35;
	*(_QWORD*)(a1 + 120) = v32;
	pItems = (SCRIPT_ITEM*)sub_14018C320(v33, 8 * v32, v34);
	v37 = *(_DWORD*)(a1 + 120);
	v38 = *(_DWORD*)(a1 + 88);
	*(_QWORD*)(a1 + 104) = pItems;
	v39 = ScriptItemize(*(const WCHAR**)(a1 + 56), v38, v37, 0i64, 0i64, pItems, &cGlyphs);
	if (v39 >= 0)
	{
	LABEL_34:
		*(_QWORD*)(a1 + 112) = cGlyphs;
	}
	else
	{
		while (v39 == -2147024882)
		{
			v40 = *(_QWORD*)(a1 + 120);
			v41 = *(_QWORD*)(a1 + 104);
			v42 = 4 * (*(_DWORD*)(a1 + 48) & 1 | 2);
			if (v40 < 2 * v40)
				v40 = 2i64 * *(_QWORD*)(a1 + 120);
			*(_QWORD*)(a1 + 120) = v40;
			v43 = (SCRIPT_ITEM*)sub_14018C320(v41, 8 * v40, v42);
			*(_QWORD*)(a1 + 104) = v43;
			v39 = ScriptItemize(
				*(const WCHAR**)(a1 + 56),
				*(_DWORD*)(a1 + 88),
				*(_DWORD*)(a1 + 120),
				0i64,
				0i64,
				v43,
				&cGlyphs);
			if (v39 >= 0)
				goto LABEL_34;
		}
	}
	sub_1402BBB80(a1, (int*)(((unsigned __int64)(3i64 * *(_QWORD*)(a1 + 88)) >> 1) + 16));
	v44 = 0i64;
	if (!*(_QWORD*)(a1 + 112))
		goto LABEL_50;
	do
	{
		v45 = *(_QWORD*)(a1 + 104);
		v46 = *(_QWORD*)(a1 + 176);
		v47 = *(_QWORD*)(a1 + 24);
		v48 = *(int*)(v45 + 8 * v44);
		v49 = *(int*)(v45 + 8 * v44 + 8);
		v50 = *(_DWORD*)(a1 + 184) - v46;
		v51 = *(_DWORD*)(v45 + 8 * v44 + 8) - v48;
		cGlyphs = 0;
		cChars = v51;
		v52 = *(_QWORD*)(a1 + 136) + 2 * v46;
		v53 = *(_QWORD*)(a1 + 80);
		v86 = v49;
		psva = (SCRIPT_VISATTR*)v52;
		v54 = cChars;
		v55 = ScriptShape(
			*(HDC*)(v47 + 104),
			(SCRIPT_CACHE*)(v47 + 240),
			(const WCHAR*)(*(_QWORD*)(a1 + 56) + 2 * v48),
			cChars,
			v50,
			(SCRIPT_ANALYSIS*)(v45 + 4 + 8 * v44),
			(WORD*)(*(_QWORD*)(a1 + 128) + 2 * v46),
			(WORD*)(v53 + 2 * v48),
			psva,
			&cGlyphs);
		if (v55 >= 0)
			goto LABEL_44;
		while (v55 == -2147024882)
		{
			sub_1402BBB80(a1, (int*)(2i64 * *(_QWORD*)(a1 + 184)));
		LABEL_42:
			v54 = cChars;
			v55 = ScriptShape(
				*(HDC*)(*(_QWORD*)(a1 + 24) + 104i64),
				(SCRIPT_CACHE*)(*(_QWORD*)(a1 + 24) + 240i64),
				(const WCHAR*)(*(_QWORD*)(a1 + 56) + 2 * v48),
				cChars,
				*(_DWORD*)(a1 + 184) - *(_QWORD*)(a1 + 176),
				(SCRIPT_ANALYSIS*)(*(_QWORD*)(a1 + 104) + 4i64 + 8 * v44),
				(WORD*)(*(_QWORD*)(a1 + 128) + 2i64 * *(_QWORD*)(a1 + 176)),
				(WORD*)(*(_QWORD*)(a1 + 80) + 2 * v48),
				(SCRIPT_VISATTR*)(*(_QWORD*)(a1 + 136) + 2i64 * *(_QWORD*)(a1 + 176)),
				&cGlyphs);
			if (v55 >= 0)
				goto LABEL_43;
		}
		if (v55 == -2147220992)
		{
			v56 = *(_QWORD*)(a1 + 104);
			v57 = *(_WORD*)(v56 + 8 * v44 + 4);
			if ((v57 & 0x3FF) != 0)
			{
				*(_WORD*)(v56 + 8 * v44 + 4) = v57 & 0xFC00;
				goto LABEL_42;
			}
		}
	LABEL_43:
		v49 = v86;
	LABEL_44:
		for (j = v48; j < v49; *(_WORD*)(*(_QWORD*)(a1 + 80) + 2 * j - 2) += *(_WORD*)(a1 + 176))
			++j;
		v59 = *(_QWORD*)(a1 + 176);
		if (ScriptPlace(
			*(HDC*)(*(_QWORD*)(a1 + 24) + 104i64),
			(SCRIPT_CACHE*)(*(_QWORD*)(a1 + 24) + 240i64),
			(const WORD*)(*(_QWORD*)(a1 + 128) + 2 * v59),
			cGlyphs,
			(const SCRIPT_VISATTR*)(*(_QWORD*)(a1 + 136) + 2 * v59),
			(SCRIPT_ANALYSIS*)(*(_QWORD*)(a1 + 104) + 4i64 + 8 * v44),
			(int*)(*(_QWORD*)(a1 + 144) + 4 * v59),
			(GOFFSET*)(*(_QWORD*)(a1 + 160) + 8 * v59),
			&pABC) >= 0
			&& ScriptBreak(
				(const WCHAR*)(*(_QWORD*)(a1 + 56) + 2 * v48),
				v54,
				(const SCRIPT_ANALYSIS*)(*(_QWORD*)(a1 + 104) + 4i64 + 8 * v44),
				(SCRIPT_LOGATTR*)(v48 + *(_QWORD*)(a1 + 72))) >= 0)
		{
			*(_QWORD*)(a1 + 176) += (unsigned int)cGlyphs;
		}
		++v44;
	} while (v44 < *(_QWORD*)(a1 + 112));
LABEL_50:
	*(_WORD*)(*(_QWORD*)(a1 + 80) + 2i64 * *(_QWORD*)(a1 + 88)) = *(_WORD*)(a1 + 176);
	for (k = 2i64; k < *(_QWORD*)(a1 + 88); ++k)
	{
		v61 = *(_QWORD*)(a1 + 72);
		if ((*(_BYTE*)(v61 + k - 2) & 2) == 0)
		{
			v62 = *(_QWORD*)(a1 + 56);
			if (*(_WORD*)(v62 + 2 * k - 2) == 45)
			{
				v63 = *(_BYTE*)(v61 + k);
				if ((v63 & 2) == 0 && *(_WORD*)(v62 + 2 * k) != 45)
					*(_BYTE*)(v61 + k) = v63 | 1;
			}
		}
	}
	v64 = 0i64;
	if (*(_QWORD*)(a1 + 88))
	{
		do
		{
			v65 = *(_QWORD*)(a1 + 80);
			v66 = v64 + 1;
			v67 = *(_WORD*)(v65 + 2 * v64);
			for (m = (_WORD*)(v65 + 2 * (v64 + 1)); *m == v67; ++v66)
				++m;
			v69 = *(unsigned __int16*)(v65 + 2 * v66);
			v70 = v67;
			if (v64)
			{
				v71 = *(_QWORD*)(a1 + 72);
				if ((*(_BYTE*)(v71 + v64 - 1) & 2) != 0)
				{
					v72 = *(_BYTE*)(v71 + v64);
					if ((v72 & 2) == 0)
					{
						*(_BYTE*)(v71 + v64) = v72 | 1;
						*(_BYTE*)(*(_QWORD*)(a1 + 72) + v64) |= 8u;
					}
				}
			}
			v73 = *(_BYTE*)(v64 + *(_QWORD*)(a1 + 72));
			if ((v73 & 0x10) != 0
				|| v66 - v64 == 1 && (v74 = *(_WORD*)(*(_QWORD*)(a1 + 56) + 2 * v64), ((v74 - 9) & 0xFFFA) == 0) && v74 != 14)
			{
				for (; v70 < v69; *(_WORD*)(*(_QWORD*)(a1 + 128) + 2 * v70 - 2) = *(_WORD*)(*(_QWORD*)(a1 + 24) + 252i64))
				{
					++v70;
					*(_DWORD*)(*(_QWORD*)(a1 + 144) + 4 * v70 - 4) = 0;
				}
				*(_BYTE*)(*(_QWORD*)(a1 + 72) + v64) |= 2u;
			}
			else if ((v73 & 2) != 0 && v70 < v69)
			{
				do
				{
					++v70;
					*(_WORD*)(*(_QWORD*)(a1 + 128) + 2 * v70 - 2) = *(_WORD*)(*(_QWORD*)(a1 + 24) + 252i64);
				} while (v70 < v69);
			}
			v64 = v66;
		} while (v66 < *(_QWORD*)(a1 + 88));
	}
LABEL_78:
	v75 = 0.0;
	if (*(_QWORD*)(a1 + 176))
	{
		v76 = 0i64;
		do
		{
			++v11;
			*(float*)(*(_QWORD*)(a1 + 152) + 4 * v76) = v75;
			v77 = _mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(a1 + 144) + 4 * v76));
			v76 = v11;
			v75 = v75 + (float)(_mm_cvtepi32_ps(v77).m128_f32[0] * *(float*)(*(_QWORD*)(a1 + 24) + 36i64));
		} while ((unsigned __int64)v11 < *(_QWORD*)(a1 + 176));
	}
	*(float*)(*(_QWORD*)(a1 + 152) + 4i64 * *(_QWORD*)(a1 + 176)) = v75;
	return 0i64;
}

