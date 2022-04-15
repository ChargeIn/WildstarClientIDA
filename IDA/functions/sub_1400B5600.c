#include "../winhttp.h"

//----- (00000001400B5600) ----------------------------------------------------
void __fastcall sub_1400B5600(_QWORD* a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rax
	_QWORD* v5; // rsi
	__int64 v6; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* v9; // rax
	_QWORD* v10; // rbx
	__int64 v11; // rax
	_QWORD* v12; // rsi
	__int64 v13; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v16; // rsi
	__int64 v17; // rbx
	__int64 v18; // rbp
	unsigned __int64 n; // rsi
	__int64 v20; // rcx
	__int64 v21; // rbx
	_QWORD* v22; // r14
	unsigned __int64 ii; // rsi
	__int64 v24; // rbx
	__int64 v25; // rcx
	__int64 v26; // rcx
	_QWORD* v27; // r14
	unsigned __int64 jj; // rsi
	__int64 v29; // rbx
	__int64 v30; // rcx
	__int64 v31; // rcx
	__int64 v32; // r14
	unsigned __int64 kk; // rbp
	__int64 v34; // rcx
	__int64 v35; // rsi
	__int64 v36; // rbx
	__int64 v37; // rcx
	_QWORD* v38; // r14
	unsigned __int64 mm; // rsi
	__int64 v40; // rbx
	__int64 v41; // rcx
	_QWORD* v42; // r14
	unsigned __int64 nn; // rsi
	__int64 v44; // rbx
	__int64 v45; // rcx
	__int64 v46; // rcx
	__int64 v47; // rsi
	__int64 v48; // rbx
	__int64 v49; // rsi
	__int64 v50; // rbx
	unsigned __int64 v51; // rbx
	__int64 v52; // rsi
	__int64 v53; // rcx
	__int64 v54; // rcx
	__int64 v55; // rcx
	unsigned __int64 i1; // rsi
	__int64 v57; // rbx
	__int64 v58; // rcx
	__int64 v59; // rcx
	unsigned __int64 i2; // rsi
	__int64 v61; // rbx
	__int64 v62; // rcx
	__int64 v63; // rcx
	unsigned __int64 i3; // rsi
	__int64 v65; // rbx
	__int64 v66; // rcx
	__int64 v67; // rcx
	unsigned __int64 i4; // rsi
	__int64 v69; // rbx
	__int64 v70; // rcx
	__int64 v71; // rcx
	unsigned __int64 i5; // rsi
	__int64 v73; // rbx
	__int64 v74; // rcx
	__int64 v75; // rcx
	unsigned __int64 i6; // rsi
	__int64 v77; // rbx
	__int64 v78; // rcx
	__int64 v79; // rcx
	__int64 v80; // rcx
	__int64 v81; // rcx

	*a1 = off_140B56168;
	v2 = (_QWORD*)a1[49];
	v3 = (_QWORD*)v2[2];
	if (v3 != v2)
	{
		do
		{
			v4 = v3[5];
			if (v4)
			{
				*(_QWORD*)(v4 + 8) = 0i64;
				v5 = (_QWORD*)v3[5];
				if (v5)
				{
					if (*v5)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v5 - 16i64) + 8i64))(*v5 - 16i64);
					sub_14018B900((__int64)v5, 0);
				}
			}
			v6 = v3[3];
			if (v6)
			{
				v3 = (_QWORD*)v3[3];
				for (i = *(_QWORD**)(v6 + 16); i; i = (_QWORD*)i[2])
					v3 = i;
			}
			else
			{
				for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = (_QWORD*)j;
				if (v3[3] != j)
					v3 = (_QWORD*)j;
			}
		} while (v3 != (_QWORD*)a1[49]);
	}
	sub_140008410((__int64)(a1 + 48));
	v9 = (_QWORD*)a1[53];
	v10 = (_QWORD*)v9[2];
	if (v10 != v9)
	{
		do
		{
			v11 = v10[5];
			if (v11)
			{
				*(_QWORD*)(v11 + 8) = 0i64;
				v12 = (_QWORD*)v10[5];
				if (v12)
				{
					if (*v12)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v12 - 16i64) + 8i64))(*v12 - 16i64);
					sub_14018B900((__int64)v12, 0);
				}
			}
			v13 = v10[3];
			if (v13)
			{
				v10 = (_QWORD*)v10[3];
				for (k = *(_QWORD**)(v13 + 16); k; k = (_QWORD*)k[2])
					v10 = k;
			}
			else
			{
				for (m = v10[1]; v10 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v10 = (_QWORD*)m;
				if (v10[3] != m)
					v10 = (_QWORD*)m;
			}
		} while (v10 != (_QWORD*)a1[53]);
	}
	if (a1[54])
	{
		v16 = *(_QWORD*)(a1[53] + 8i64);
		if (v16)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 52), *(_QWORD*)(v16 + 24));
				v17 = *(_QWORD*)(v16 + 16);
				sub_14018B900(v16, 0);
				v16 = v17;
			} while (v17);
		}
		*(_QWORD*)(a1[53] + 16i64) = a1[53];
		*(_QWORD*)(a1[53] + 8i64) = 0i64;
		*(_QWORD*)(a1[53] + 24i64) = a1[53];
		a1[54] = 0i64;
	}
	v18 = a1[11];
	for (n = 0i64; n < *(_QWORD*)(v18 + 8); ++n)
	{
		v20 = *(_QWORD*)(*(_QWORD*)(v18 + 16) + 8 * n);
		if (v20)
		{
			do
			{
				v21 = *(_QWORD*)(v20 + 8);
				if ((*(_BYTE*)(v20 + 24) & 1) == 0)
					sub_14018B900(*(_QWORD*)(v20 + 24), 0);
				v20 = v21;
			} while (v21);
		}
	}
	v22 = (_QWORD*)a1[11];
	if (v22)
	{
		for (ii = 0i64; ii < v22[1]; ++ii)
		{
			v24 = v22[2] + 8 * ii;
			while (*(_QWORD*)v24)
			{
				v25 = *(_QWORD*)v24;
				*(_QWORD*)v24 = *(_QWORD*)(*(_QWORD*)v24 + 8i64);
				sub_14018B900(v25, 0);
			}
		}
		v26 = v22[2];
		*v22 = 0i64;
		sub_14018B900(v26, 0);
		v22[2] = 0i64;
		sub_14018B900((__int64)v22, 0);
	}
	v27 = (_QWORD*)a1[12];
	if (v27)
	{
		for (jj = 0i64; jj < v27[1]; ++jj)
		{
			v29 = v27[2] + 8 * jj;
			while (*(_QWORD*)v29)
			{
				v30 = *(_QWORD*)v29;
				*(_QWORD*)v29 = *(_QWORD*)(*(_QWORD*)v29 + 8i64);
				sub_14018B900(v30, 0);
			}
		}
		v31 = v27[2];
		*v27 = 0i64;
		sub_14018B900(v31, 0);
		v27[2] = 0i64;
		sub_14018B900((__int64)v27, 0);
	}
	v32 = a1[13];
	for (kk = 0i64; kk < *(_QWORD*)(v32 + 8); ++kk)
	{
		v34 = *(_QWORD*)(*(_QWORD*)(v32 + 16) + 8 * kk);
		if (v34)
		{
			do
			{
				v35 = *(_QWORD*)(v34 + 8);
				*(_QWORD*)(*(_QWORD*)(v34 + 24) + 16i64) = 0i64;
				v36 = *(_QWORD*)(v34 + 24);
				if (v36)
				{
					v37 = *(_QWORD*)(v36 + 8);
					if (v37)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v37 - 16) + 8i64))(v37 - 16);
					sub_14018B900(v36, 0);
				}
				v34 = v35;
			} while (v35);
		}
	}
	v38 = (_QWORD*)a1[13];
	for (mm = 0i64; mm < v38[1]; ++mm)
	{
		v40 = v38[2] + 8 * mm;
		while (*(_QWORD*)v40)
		{
			v41 = *(_QWORD*)v40;
			*(_QWORD*)v40 = *(_QWORD*)(*(_QWORD*)v40 + 8i64);
			sub_14018B900(v41, 0);
		}
	}
	*v38 = 0i64;
	v42 = (_QWORD*)a1[13];
	if (v42)
	{
		for (nn = 0i64; nn < v42[1]; ++nn)
		{
			v44 = v42[2] + 8 * nn;
			while (*(_QWORD*)v44)
			{
				v45 = *(_QWORD*)v44;
				*(_QWORD*)v44 = *(_QWORD*)(*(_QWORD*)v44 + 8i64);
				sub_14018B900(v45, 0);
			}
		}
		v46 = v42[2];
		*v42 = 0i64;
		sub_14018B900(v46, 0);
		v42[2] = 0i64;
		sub_14018B900((__int64)v42, 0);
	}
	if (a1[54])
	{
		v47 = *(_QWORD*)(a1[53] + 8i64);
		if (v47)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 52), *(_QWORD*)(v47 + 24));
				v48 = *(_QWORD*)(v47 + 16);
				sub_14018B900(v47, 0);
				v47 = v48;
			} while (v48);
		}
		*(_QWORD*)(a1[53] + 16i64) = a1[53];
		*(_QWORD*)(a1[53] + 8i64) = 0i64;
		*(_QWORD*)(a1[53] + 24i64) = a1[53];
		a1[54] = 0i64;
	}
	sub_14018B900(a1[53], 0);
	if (a1[50])
	{
		v49 = *(_QWORD*)(a1[49] + 8i64);
		if (v49)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 48), *(_QWORD*)(v49 + 24));
				v50 = *(_QWORD*)(v49 + 16);
				sub_14018B900(v49, 0);
				v49 = v50;
			} while (v50);
		}
		*(_QWORD*)(a1[49] + 16i64) = a1[49];
		*(_QWORD*)(a1[49] + 8i64) = 0i64;
		*(_QWORD*)(a1[49] + 24i64) = a1[49];
		a1[50] = 0i64;
	}
	sub_14018B900(a1[49], 0);
	v51 = 0i64;
	if (a1[47])
	{
		v52 = 0i64;
		do
		{
			v53 = *(_QWORD*)(v52 + a1[46] + 8);
			if (v53)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v53 - 16) + 8i64))(v53 - 16);
			++v51;
			v52 += 24i64;
		} while (v51 < a1[47]);
	}
	v54 = a1[46];
	if (v54)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v54 - 16) + 8i64))(v54 - 16);
	v55 = a1[44];
	if (v55)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v55 - 16) + 8i64))(v55 - 16);
	for (i1 = 0i64; i1 < a1[40]; ++i1)
	{
		v57 = a1[41] + 8 * i1;
		while (*(_QWORD*)v57)
		{
			v58 = *(_QWORD*)v57;
			*(_QWORD*)v57 = *(_QWORD*)(*(_QWORD*)v57 + 8i64);
			sub_14018B900(v58, 0);
		}
	}
	v59 = a1[41];
	a1[39] = 0i64;
	sub_14018B900(v59, 0);
	a1[41] = 0i64;
	for (i2 = 0i64; i2 < a1[35]; ++i2)
	{
		v61 = a1[36] + 8 * i2;
		while (*(_QWORD*)v61)
		{
			v62 = *(_QWORD*)v61;
			*(_QWORD*)v61 = *(_QWORD*)(*(_QWORD*)v61 + 8i64);
			sub_14018B900(v62, 0);
		}
	}
	v63 = a1[36];
	a1[34] = 0i64;
	sub_14018B900(v63, 0);
	a1[36] = 0i64;
	for (i3 = 0i64; i3 < a1[30]; ++i3)
	{
		v65 = a1[31] + 8 * i3;
		while (*(_QWORD*)v65)
		{
			v66 = *(_QWORD*)v65;
			*(_QWORD*)v65 = *(_QWORD*)(*(_QWORD*)v65 + 8i64);
			sub_14018B900(v66, 0);
		}
	}
	v67 = a1[31];
	a1[29] = 0i64;
	sub_14018B900(v67, 0);
	a1[31] = 0i64;
	for (i4 = 0i64; i4 < a1[25]; ++i4)
	{
		v69 = a1[26] + 8 * i4;
		while (*(_QWORD*)v69)
		{
			v70 = *(_QWORD*)v69;
			*(_QWORD*)v69 = *(_QWORD*)(*(_QWORD*)v69 + 8i64);
			sub_14018B900(v70, 0);
		}
	}
	v71 = a1[26];
	a1[24] = 0i64;
	sub_14018B900(v71, 0);
	a1[26] = 0i64;
	for (i5 = 0i64; i5 < a1[20]; ++i5)
	{
		v73 = a1[21] + 8 * i5;
		while (*(_QWORD*)v73)
		{
			v74 = *(_QWORD*)v73;
			*(_QWORD*)v73 = *(_QWORD*)(*(_QWORD*)v73 + 8i64);
			sub_14018B900(v74, 0);
		}
	}
	v75 = a1[21];
	a1[19] = 0i64;
	sub_14018B900(v75, 0);
	a1[21] = 0i64;
	for (i6 = 0i64; i6 < a1[15]; ++i6)
	{
		v77 = a1[16] + 8 * i6;
		while (*(_QWORD*)v77)
		{
			v78 = *(_QWORD*)v77;
			*(_QWORD*)v77 = *(_QWORD*)(*(_QWORD*)v77 + 8i64);
			sub_14018B900(v78, 0);
		}
	}
	v79 = a1[16];
	a1[14] = 0i64;
	sub_14018B900(v79, 0);
	a1[16] = 0i64;
	v80 = a1[9];
	if (v80)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v80 - 16) + 8i64))(v80 - 16);
	v81 = a1[7];
	if (v81)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v81 - 16) + 8i64))(v81 - 16);
	if (a1[5])
	{
		sub_1400B61B0((__int64)(a1 + 3), *(_QWORD**)(a1[4] + 8i64));
		*(_QWORD*)(a1[4] + 16i64) = a1[4];
		*(_QWORD*)(a1[4] + 8i64) = 0i64;
		*(_QWORD*)(a1[4] + 24i64) = a1[4];
		a1[5] = 0i64;
	}
	sub_14018B900(a1[4], 0);
}
// 140B56168: using guessed type __int64 (__fastcall *off_140B56168[6])();

