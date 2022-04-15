#include "../winhttp.h"

//----- (00000001406C98E0) ----------------------------------------------------
__int64 __fastcall sub_1406C98E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	__int64 v6; // rsi
	__int64 v7; // r14
	unsigned __int64 i; // rbx
	wchar_t* v9; // rdx
	__int64 v10; // rax
	wchar_t* v11; // rax
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // r13
	int* v15; // rdi
	__int64 v16; // rax
	__m128i* v17; // r9
	__int64 v18; // rbx
	unsigned __int64 v19; // rbx
	int* v20; // rax
	__int64 v21; // rbx
	__m128i* v22; // r13
	__int64 v23; // rdi
	__int64 v24; // rax
	_WORD* v25; // rax
	__int64 v26; // rax
	_WORD* v27; // rax
	__int64 v28; // rax
	_WORD* v29; // rax
	__int64 v30; // rax
	_WORD* v31; // rax
	__int64 v32; // rdx
	__int64* v33; // rcx
	char* v34; // rax
	int v35; // r8d
	__int64 v36; // rax
	__int64 v37; // rcx
	__int64 v38; // rdx
	int v39; // eax
	__int64 v40; // rax
	__m128i* v41; // rax
	__int64 v42; // rax
	__m128i* v43; // rax
	__int64 v44; // rax
	unsigned __int16* v45; // rax
	unsigned int* v46; // r14
	unsigned __int64 v47; // rbx
	__int64 v48; // r8
	__int64 v49; // rdx
	__int64 v50; // rcx
	int v51; // r9d
	__int64 v52; // rax
	unsigned __int16* v53; // rax
	unsigned int* v54; // r14
	unsigned __int64 v55; // rbx
	__int64 v56; // r8
	__int64 v57; // rdx
	__int64 v58; // rcx
	int v59; // r9d
	__int64 v60; // rax
	int* v61; // rax
	__int64 v62; // rax
	int* v63; // rax
	__int64 v64; // rax
	int* v65; // rax
	__int64 v66; // rax
	int* v67; // rax
	__int64 v68; // rax
	__int64 v69; // rax
	int* v70; // r15
	int* v71; // r14
	__int64 v72; // rax
	__int64 v73; // rbx
	unsigned __int64 v74; // rbx
	char* v75; // r15
	__int64 v76; // rax
	_WORD* v77; // rax
	unsigned int v78; // ebx
	unsigned __int64 v79; // rcx
	__int64 v80; // rdx
	__int64 v82; // [rsp+28h] [rbp-99h]
	bool v83; // [rsp+40h] [rbp-81h] BYREF
	int v84; // [rsp+44h] [rbp-7Dh] BYREF
	int v85; // [rsp+48h] [rbp-79h] BYREF
	__m128i* v86; // [rsp+50h] [rbp-71h] BYREF
	__int64 v87; // [rsp+58h] [rbp-69h]
	__int64 v88; // [rsp+60h] [rbp-61h]
	__int128 v89; // [rsp+70h] [rbp-51h] BYREF
	__int64 v90[6]; // [rsp+80h] [rbp-41h] BYREF
	char v91; // [rsp+B0h] [rbp-11h] BYREF
	int v92; // [rsp+C0h] [rbp-1h]

	v87 = a2;
	v88 = a4;
	v6 = 0i64;
	sub_1400D45E0((__int64)&v89, a1, a2, a5, 0i64);
	v7 = 0i64;
	for (i = 0i64; i < 0xF; ++i)
	{
		v9 = off_140B395F0[i];
		v83 = 0;
		v10 = sub_1401A6B80(a5, v9);
		if (v10)
		{
			v11 = (wchar_t*)sub_1401A4F40(v10 + 32);
			sub_1401A52E0(v11, &v83);
			if (v83)
				v7 |= 1i64 << i;
		}
	}
	v12 = sub_1401A6B80(a5, L"Base");
	if (v12)
		v13 = sub_1401A4F40(v12 + 32);
	else
		v13 = 0i64;
	v14 = v88;
	v15 = (int*)&unk_1409F777C;
	if (v13)
		v15 = (int*)v13;
	v16 = 0i64;
	v17 = 0i64;
	v86 = 0i64;
	if (*(_WORD*)v15)
	{
		do
			++v16;
		while (*((_WORD*)v15 + v16));
	}
	v18 = (2 * v16) >> 1;
	if ((unsigned __int64)(v18 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v17 = (__m128i*)sub_14018B280(2 * (v18 + 1), 0);
		v86 = v17;
	}
	v19 = 2 * v18;
	sub_1407DB590(v17->m128i_i32, v15, v19);
	if (&v86->m128i_i8[v19])
		v86->m128i_i16[v19 / 2] = 0;
	v20 = sub_14018B280(3120i64, 0);
	v21 = v87;
	if (v20)
	{
		v82 = v14;
		v22 = v86;
		v23 = sub_1406C3DE0((__int64)v20, a1, v87, v86, &v89, v82, v7);
	}
	else
	{
		v22 = v86;
		v23 = 0i64;
	}
	*(_DWORD*)(v23 + 3088) = dword_140C7ED50;
	*(_DWORD*)(v23 + 3092) = dword_140C7ED54;
	*(_DWORD*)(v23 + 3096) = dword_140C7ED58;
	*(_DWORD*)(v23 + 3100) = dword_140C7ED5C;
	v84 = 0;
	v24 = sub_1401A6B80(a5, L"LeftMargin");
	if (v24)
	{
		v25 = (_WORD*)sub_1401A4F40(v24 + 32);
		if ((unsigned int)sub_1407DF428(v25, (__int64)L"%d", &v84) == 1)
			*(_DWORD*)(v23 + 3088) = v84;
	}
	v26 = sub_1401A6B80(a5, L"TopMargin");
	if (v26)
	{
		v27 = (_WORD*)sub_1401A4F40(v26 + 32);
		if ((unsigned int)sub_1407DF428(v27, (__int64)L"%d", &v84) == 1)
			*(_DWORD*)(v23 + 3092) = v84;
	}
	v28 = sub_1401A6B80(a5, L"RightMargin");
	if (v28)
	{
		v29 = (_WORD*)sub_1401A4F40(v28 + 32);
		if ((unsigned int)sub_1407DF428(v29, (__int64)L"%d", &v84) == 1)
			*(_DWORD*)(v23 + 3096) = v84;
	}
	v30 = sub_1401A6B80(a5, L"BottomMargin");
	if (v30)
	{
		v31 = (_WORD*)sub_1401A4F40(v30 + 32);
		if ((unsigned int)sub_1407DF428(v31, (__int64)L"%d", &v84) == 1)
			*(_DWORD*)(v23 + 3100) = v84;
	}
	sub_1400D45E0((__int64)&v89, a1, v21, a5, (int*)L"RechargeBar");
	v32 = 0i64;
	v33 = v90;
	v34 = &v91;
	while (1)
	{
		v35 = v92;
		if (*((float*)v34 - 4) != 0.0 || *(_DWORD*)v34 || *v33)
			break;
		++v32;
		v34 += 4;
		++v33;
		if (v32 >= 4)
		{
			if ((v92 & 1) == 0)
				goto LABEL_41;
			break;
		}
	}
	v36 = v90[0];
	v37 = 64i64;
	*(_OWORD*)(v23 + 2960) = v89;
	*(_QWORD*)(v23 + 2976) = v36;
	*(_QWORD*)(v23 + 2984) = v90[1];
	v38 = 4i64;
	*(_QWORD*)(v23 + 2992) = v90[2];
	*(_QWORD*)(v23 + 3000) = v90[3];
	*(_QWORD*)(v23 + 3008) = v90[4];
	*(_QWORD*)(v23 + 3016) = v90[5];
	do
	{
		v39 = *(_DWORD*)((char*)&v90[-2] + v37);
		v37 += 4i64;
		*(_DWORD*)(v37 + v23 + 2956) = v39;
		--v38;
	} while (v38);
	*(_DWORD*)(v23 + 3040) = v35;
LABEL_41:
	v40 = sub_1401A6B80(a5, L"RechargeBarEmptyAttribute");
	if (v40)
	{
		v41 = (__m128i*)sub_1401A4F40(v40 + 32);
		if (v41)
		{
			if (a1)
				sub_140109710((__int64*)(v23 + 2184), a1 + 240, v41, 0);
		}
	}
	v42 = sub_1401A6B80(a5, L"RechargeBarFullAttribute");
	if (v42)
	{
		v43 = (__m128i*)sub_1401A4F40(v42 + 32);
		if (v43)
		{
			if (a1)
				sub_140109710((__int64*)(v23 + 2232), a1 + 240, v43, 0);
		}
	}
	v44 = sub_1401A6B80(a5, L"RechargeBarEmptyColorAttribute");
	if (v44)
	{
		v45 = (unsigned __int16*)sub_1401A4F40(v44 + 32);
		if (v45)
		{
			v46 = (unsigned int*)(v23 + 2952);
			v47 = (unsigned int)sub_140142170(qword_140C63678, v45);
			if ((__m128i**)(v23 + 2952) == &v86)
			{
				v48 = qword_140C63678;
			}
			else
			{
				sub_1401429A0(qword_140C63678, *v46);
				v48 = qword_140C63678;
				*v46 = v47;
				if (v47 < *(_QWORD*)(v48 + 48))
				{
					v49 = *(_QWORD*)(v48 + 40);
					v50 = 32i64 * (unsigned int)v47;
					v51 = *(_DWORD*)(v50 + v49 + 16);
					if ((unsigned int)(v51 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v50 + v49 + 16) = v51 + 1;
				}
			}
			sub_1401429A0(v48, v47);
		}
	}
	v52 = sub_1401A6B80(a5, L"RechargeBarFullColorAttribute");
	if (v52)
	{
		v53 = (unsigned __int16*)sub_1401A4F40(v52 + 32);
		if (v53)
		{
			v54 = (unsigned int*)(v23 + 2956);
			v55 = (unsigned int)sub_140142170(qword_140C63678, v53);
			if ((__m128i**)(v23 + 2956) == &v86)
			{
				v56 = qword_140C63678;
			}
			else
			{
				sub_1401429A0(qword_140C63678, *v54);
				v56 = qword_140C63678;
				*v54 = v55;
				if (v55 < *(_QWORD*)(v56 + 48))
				{
					v57 = *(_QWORD*)(v56 + 40);
					v58 = 32i64 * (unsigned int)v55;
					v59 = *(_DWORD*)(v58 + v57 + 16);
					if ((unsigned int)(v59 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v58 + v57 + 16) = v59 + 1;
				}
			}
			sub_1401429A0(v56, v55);
		}
	}
	v60 = sub_1401A6B80(a5, L"CountFontAttribute");
	if (v60)
	{
		v61 = (int*)sub_1401A4F40(v60 + 32);
		if (v61)
			*(_QWORD*)(v23 + 3072) = sub_1400E58C0(*(_QWORD*)(v23 + 32), v61);
	}
	v62 = sub_1401A6B80(a5, L"LongHotkeyFontAttribute");
	if (v62)
	{
		v63 = (int*)sub_1401A4F40(v62 + 32);
		if (v63)
			*(_QWORD*)(v23 + 3056) = sub_1400E58C0(*(_QWORD*)(v23 + 32), v63);
	}
	v64 = sub_1401A6B80(a5, L"ShortHotkeyFontAttribute");
	if (v64)
	{
		v65 = (int*)sub_1401A4F40(v64 + 32);
		if (v65)
			*(_QWORD*)(v23 + 3064) = sub_1400E58C0(*(_QWORD*)(v23 + 32), v65);
	}
	v66 = sub_1401A6B80(a5, L"CooldownFontAttribute");
	if (v66)
	{
		v67 = (int*)sub_1401A4F40(v66 + 32);
		if (v67)
			*(_QWORD*)(v23 + 3080) = sub_1400E58C0(*(_QWORD*)(v23 + 32), v67);
	}
	v68 = sub_1401A6B80(a5, L"ContentType");
	if (v68)
		v69 = sub_1401A4F40(v68 + 32);
	else
		v69 = 0i64;
	v70 = (int*)&unk_1409F76FC;
	v71 = 0i64;
	if (v69)
		v70 = (int*)v69;
	v72 = 0i64;
	if (*(_WORD*)v70)
	{
		do
			++v72;
		while (*((_WORD*)v70 + v72));
	}
	v73 = (2 * v72) >> 1;
	if ((unsigned __int64)(v73 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v71 = sub_14018B280(2 * (v73 + 1), 0);
	v74 = 2 * v73;
	sub_1407DB590(v71, v70, v74);
	v75 = (char*)v71 + v74;
	if ((int*)((char*)v71 + v74))
		*(_WORD*)v75 = 0;
	v85 = 0;
	v76 = sub_1401A6B80(a5, L"ContentId");
	if (v76)
	{
		v77 = (_WORD*)sub_1401A4F40(v76 + 32);
		if ((unsigned int)sub_1407DF428(v77, (__int64)L"%d", &v85) == 1)
		{
			v78 = 0;
			v79 = 0i64;
			if (v85 > 0)
				v78 = v85;
			v85 = v78;
			if (aAbar[0])
			{
				do
					++v79;
				while (aAbar[v79]);
			}
			if ((v75 - (char*)v71) >> 1 == v79)
			{
				v80 = 0i64;
				if (v79)
				{
					while (*((_WORD*)v71 + v80) == aAbar[v80])
					{
						if (++v80 >= v79)
							goto LABEL_100;
					}
				}
				else
				{
				LABEL_100:
					if (v78 < 0xC)
					{
						v78 += 12;
						v85 = v78;
					}
				}
			}
			if (*(_WORD*)v71)
			{
				do
					++v6;
				while (*((_WORD*)v71 + v6));
			}
			sub_14001C480(v23 + 1464, v71, (int*)((char*)v71 + 2 * v6));
			*(_DWORD*)(v23 + 1496) = v78;
		}
	}
	if (v71)
		sub_14018B900((__int64)v71, 0);
	if (v22)
		sub_14018B900((__int64)v22, 0);
	return v23;
}
// 1406CA03F: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A31928: using guessed type wchar_t aBase[5];
// 140A31938: using guessed type wchar_t aContentid[10];
// 140A31950: using guessed type wchar_t aContenttype[12];
// 140A31E30: using guessed type wchar_t aLeftmargin[11];
// 140A31E48: using guessed type wchar_t aTopmargin[10];
// 140A31FA8: using guessed type wchar_t aBottommargin[13];
// 140A31FC8: using guessed type wchar_t aRightmargin[12];
// 140B395F0: using guessed type wchar_t *off_140B395F0[15];
// 140B39778: using guessed type wchar_t aAbar[5];
// 140B39C98: using guessed type wchar_t aShorthotkeyfon[25];
// 140B39D68: using guessed type wchar_t aLonghotkeyfont[24];
// 140B39D98: using guessed type wchar_t aCountfontattri[19];
// 140B39E08: using guessed type wchar_t aRechargebarful[25];
// 140B39E88: using guessed type wchar_t aRechargebar[12];
// 140B39EE8: using guessed type wchar_t aCooldownfontat[22];
// 140B39F18: using guessed type wchar_t aRechargebarful_0[30];
// 140B39F58: using guessed type wchar_t aRechargebaremp_0[31];
// 140B39F98: using guessed type wchar_t aRechargebaremp[26];
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C7ED50: using guessed type int dword_140C7ED50;
// 140C7ED54: using guessed type int dword_140C7ED54;
// 140C7ED58: using guessed type int dword_140C7ED58;
// 140C7ED5C: using guessed type int dword_140C7ED5C;

