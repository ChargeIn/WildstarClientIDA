//----- (00000001406D5A40) ----------------------------------------------------
__int64 __fastcall sub_1406D5A40(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	__int64 v9; // r15
	__int64 v10; // rax
	_WORD* v11; // rax
	__int64 v12; // rax
	_WORD* v13; // rax
	unsigned int v14; // ebx
	int* v15; // rax
	__int64 v16; // rax
	__int64 v17; // rax
	int* v18; // rsi
	__int64 v19; // rax
	__m128i* v20; // rdi
	__int64 v21; // r14
	int* v22; // rsi
	__int64 v23; // rax
	__int64 v24; // rax
	int* v25; // r14
	__int64 v26; // rax
	unsigned __int64 v27; // rax
	unsigned __int64 v28; // rbx
	unsigned __int64 v29; // rbx
	int* v30; // rbx
	__int64 v31; // rbx
	__int64 v32; // rax
	__int64 v33; // rax
	int* v34; // r14
	__int64 v35; // rax
	unsigned __int64 v36; // rax
	unsigned __int64 v37; // rbx
	unsigned __int64 v38; // rbx
	int* v39; // rbx
	__int64 v40; // rbx
	unsigned int* v41; // rax
	__int64 v42; // rcx
	unsigned int* v43; // rbx
	unsigned int* v44; // rsi
	unsigned __int64 v45; // rax
	__int64 v46; // r8
	int v47; // edx
	__int64 v48; // rax
	_WORD* v49; // rax
	int v50; // ebx
	int v51; // eax
	__int64 v52; // rax
	_WORD* v53; // rax
	int v54; // r9d
	int v55; // r10d
	int v56; // ecx
	int v57; // r9d
	int v59; // [rsp+40h] [rbp-A1h] BYREF
	int v60; // [rsp+44h] [rbp-9Dh] BYREF
	char* v61; // [rsp+48h] [rbp-99h] BYREF
	int v62; // [rsp+50h] [rbp-91h] BYREF
	int v63; // [rsp+54h] [rbp-8Dh] BYREF
	__int64 v64; // [rsp+58h] [rbp-89h] BYREF
	__m128i* v65; // [rsp+60h] [rbp-81h]
	int* v66; // [rsp+68h] [rbp-79h]
	__int64 v67; // [rsp+70h] [rbp-71h]
	_OWORD v68[6]; // [rsp+80h] [rbp-61h] BYREF

	v9 = 0i64;
	sub_1400D45E0((__int64)v68, a1, a2, a5, 0i64);
	v60 = 0;
	v10 = sub_1401A6B80(a5, L"IsBank");
	if (v10)
	{
		v11 = (_WORD*)sub_1401A4F40(v10 + 32);
		sub_1407DF428(v11, (__int64)L"%d", &v60);
	}
	v63 = 0;
	v12 = sub_1401A6B80(a5, L"IsSharedRealmBank");
	if (v12)
	{
		v13 = (_WORD*)sub_1401A4F40(v12 + 32);
		sub_1407DF428(v13, (__int64)L"%d", &v63);
	}
	v14 = (v60 != 0) + 1;
	if (v63)
		v14 = 10;
	v15 = sub_14018B280(3328i64, 0);
	if (v15)
		v9 = sub_1406D0410((__int64)v15, a1, a2, a3, v68, a4, v14);
	v16 = sub_1401A6B80(a5, L"NewQuestOverlaySprite");
	if (v16)
		v17 = sub_1401A4F40(v16 + 32);
	else
		v17 = 0i64;
	v18 = (int*)&unk_1409F79D4;
	if (v17)
		v18 = (int*)v17;
	v19 = 0i64;
	v20 = 0i64;
	v65 = 0i64;
	v67 = 0i64;
	if (*(_WORD*)v18)
	{
		do
			++v19;
		while (*((_WORD*)v18 + v19));
	}
	v21 = (2 * v19) >> 1;
	if ((unsigned __int64)(v21 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v20 = (__m128i*)sub_14018B280(2 * (v21 + 1), 0);
		v65 = v20;
		v67 = (__int64)v20->m128i_i64 + 2 * v21 + 2;
	}
	sub_1407DB590(v20->m128i_i32, v18, 2 * v21);
	v22 = (__int32*)((char*)v20->m128i_i32 + 2 * v21);
	v66 = v22;
	if (v22)
		*(_WORD*)v22 = 0;
	if (v20 != (__m128i*)v22 && a1)
		sub_140109710((__int64*)(v9 + 2216), a1 + 240, v20, 0);
	v23 = sub_1401A6B80(a5, L"NewItemSprite");
	if (v23)
		v24 = sub_1401A4F40(v23 + 32);
	else
		v24 = 0i64;
	v25 = (int*)&unk_1409F79C4;
	if (v24)
		v25 = (int*)v24;
	v26 = 0i64;
	if (*(_WORD*)v25)
	{
		do
			++v26;
		while (*((_WORD*)v25 + v26));
	}
	v61 = (char*)v25 + 2 * v26;
	v27 = ((char*)v22 - (char*)v20) >> 1;
	v28 = (v61 - (char*)v25) >> 1;
	if (v28 > v27)
	{
		v31 = 2 * v27;
		sub_1407DB590(v20->m128i_i32, v25, 2 * v27);
		sub_14001C310(&v64, (int*)((char*)v25 + v31), (int*)v61);
		v22 = v66;
		v20 = v65;
	}
	else
	{
		v29 = 2 * v28;
		sub_1407DB590(v20->m128i_i32, v25, v29);
		v30 = (__int32*)((char*)v20->m128i_i32 + v29);
		if (v30 != v22)
		{
			sub_1407DB590(v30, v22, 2ui64);
			v22 = (int*)((char*)v22 - 2 * (((char*)v22 - (char*)v30) >> 1));
			v66 = v22;
		}
	}
	if (v20 != (__m128i*)v22 && a1)
		sub_140109710((__int64*)(v9 + 2264), a1 + 240, v20, 0);
	v32 = sub_1401A6B80(a5, L"CannotUseSprite");
	if (v32)
		v33 = sub_1401A4F40(v32 + 32);
	else
		v33 = 0i64;
	v34 = (int*)&unk_1409F79B4;
	if (v33)
		v34 = (int*)v33;
	v35 = 0i64;
	if (*(_WORD*)v34)
	{
		do
			++v35;
		while (*((_WORD*)v34 + v35));
	}
	v61 = (char*)v34 + 2 * v35;
	v36 = ((char*)v22 - (char*)v20) >> 1;
	v37 = (v61 - (char*)v34) >> 1;
	if (v37 > v36)
	{
		v40 = 2 * v36;
		sub_1407DB590(v20->m128i_i32, v34, 2 * v36);
		sub_14001C310(&v64, (int*)((char*)v34 + v40), (int*)v61);
		v22 = v66;
		v20 = v65;
	}
	else
	{
		v38 = 2 * v37;
		sub_1407DB590(v20->m128i_i32, v34, v38);
		v39 = (__int32*)((char*)v20->m128i_i32 + v38);
		if (v39 != v22)
		{
			sub_1407DB590(v39, v22, 2ui64);
			v22 = (int*)((char*)v22 - 2 * (((char*)v22 - (char*)v39) >> 1));
		}
	}
	if (v20 != (__m128i*)v22 && a1)
		sub_140109710((__int64*)(v9 + 2312), a1 + 240, v20, 0);
	v41 = sub_1400F66F0(&v61, a5, L"CannotUseColor", 0xFFFFFFFF);
	v42 = qword_140C63678;
	v43 = (unsigned int*)(v9 + 2504);
	v44 = v41;
	if ((unsigned int*)(v9 + 2504) != v41)
	{
		sub_1401429A0(qword_140C63678, *v43);
		v45 = *v44;
		v42 = qword_140C63678;
		*v43 = v45;
		if (v45 < *(_QWORD*)(v42 + 48))
		{
			v46 = 32i64 * (unsigned int)v45 + *(_QWORD*)(v42 + 40);
			v47 = *(_DWORD*)(v46 + 16);
			if ((unsigned int)(v47 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v46 + 16) = v47 + 1;
		}
	}
	sub_1401429A0(v42, (unsigned int)v61);
	v62 = 0;
	v48 = sub_1401A6B80(a5, L"BoxesPerRow");
	if (v48)
	{
		v49 = (_WORD*)sub_1401A4F40(v48 + 32);
		sub_1407DF428(v49, (__int64)L"%d", &v62);
	}
	v50 = 1;
	if (v62 > 0)
	{
		v51 = 1;
		if (v62 > 1)
			v51 = v62;
		*(_DWORD*)(v9 + 2000) = v51;
		sub_1406D0EC0((_DWORD*)v9);
	}
	v59 = 0;
	v52 = sub_1401A6B80(a5, L"SquareSize");
	if (v52)
	{
		v53 = (_WORD*)sub_1401A4F40(v52 + 32);
		sub_1407DF428(v53, (__int64)L"%d", &v59);
	}
	if (v59 > 0)
	{
		v54 = *(_DWORD*)(v9 + 724);
		v55 = 1;
		v56 = abs32(v59);
		if (v56 > 1)
			v55 = v56;
		*(_DWORD*)(v9 + 2012) = v55;
		*(_DWORD*)(v9 + 2016) = v55 * v56 / v56;
		v57 = v54 - *(_DWORD*)(v9 + 716);
		if (v57 > 0)
		{
			if ((v57 - v55) / (v55 + *(_DWORD*)(v9 + 2004)) + 1 > 1)
				v50 = (v57 - v55) / (v55 + *(_DWORD*)(v9 + 2004)) + 1;
			*(_DWORD*)(v9 + 2000) = v50;
			sub_1406D0EC0((_DWORD*)v9);
		}
	}
	if (v20)
		sub_14018B900((__int64)v20, 0);
	return v9;
}
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140B3BFD0: using guessed type wchar_t aNewquestoverla[22];
// 140B3C008: using guessed type wchar_t aNewitemsprite[14];
// 140B3C030: using guessed type wchar_t aCannotusesprit[16];
// 140B3C058: using guessed type wchar_t aCannotusecolor[15];
// 140B3C080: using guessed type wchar_t aBoxesperrow[12];
// 140B3C0A0: using guessed type wchar_t aSquaresize[11];
// 140B3C1C0: using guessed type wchar_t aIsbank[7];
// 140B3C1D8: using guessed type wchar_t aIssharedrealmb[18];
// 140C63678: using guessed type __int64 qword_140C63678;
// 1406D5A40: using guessed type _OWORD var_B0[6];

