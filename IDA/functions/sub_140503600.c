//----- (0000000140503600) ----------------------------------------------------
__int64 __fastcall sub_140503600(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
	__int64 v8; // rbx
	__int64 v9; // rax
	bool v10; // zf
	int* v11; // rcx
	int* v12; // r14
	unsigned __int64 v13; // r8
	unsigned __int64 v14; // rdi
	unsigned __int64 v15; // rdi
	__int64 v16; // rcx
	int* v17; // rax
	__int64 v18; // rcx
	__int64 v19; // rax
	int* v20; // rcx
	int* v21; // r14
	unsigned __int64 v22; // r8
	unsigned __int64 v23; // rdi
	unsigned __int64 v24; // rdi
	__int64 v25; // rcx
	int* v26; // rax
	__int64 v27; // rcx
	__int64 v28; // rax
	int* v29; // rcx
	int* v30; // r14
	unsigned __int64 v31; // r8
	unsigned __int64 v32; // rdi
	unsigned __int64 v33; // rdi
	__int64 v34; // rcx
	int* v35; // rax
	__int64 v36; // rcx
	__int64 v37; // rax
	int* v38; // rcx
	int* v39; // r14
	unsigned __int64 v40; // r8
	unsigned __int64 v41; // rdi
	unsigned __int64 v42; // rdi
	__int64 v43; // rcx
	int* v44; // rax
	__int64 v45; // rbx
	__int64 v46; // rax
	int* v47; // rcx
	int* v48; // r14
	unsigned __int64 v49; // r8
	unsigned __int64 v50; // rdi
	unsigned __int64 v51; // rdi
	__int64 v52; // rcx
	int* v53; // rax
	__int64 result; // rax
	__int64 v55; // rdi
	unsigned __int64 v56; // rcx
	int* v57; // rdx
	__int64 v58; // rax
	__int64 v59; // rcx
	int* v60; // rax
	__int64 v61; // rdx
	int v62; // eax
	__int64 v63; // rcx
	__int64 v64; // rdi
	__int64 v65; // rcx
	unsigned __int64 v66; // rcx
	int* v67; // rdx
	__int64 v68; // rax
	__int64 v69; // rcx

	if (a2 == 1)
	{
		v8 = 0i64;
		*(_BYTE*)(a1 + 40) = 1;
		*(_DWORD*)(a1 + 80) = 1;
		*(_QWORD*)(a1 + 120) = 99i64;
		*(_DWORD*)(a1 + 84) = 3;
		v9 = 0i64;
		do
			v10 = aSprcashcopper[++v9] == 0;
		while (!v10);
		v11 = *(int**)(a1 + 56);
		v12 = (int*)&aSprcashcopper[v9];
		v13 = (__int64)(*(_QWORD*)(a1 + 64) - (_QWORD)v11) >> 1;
		v14 = (2 * v9) >> 1;
		if (v14 > v13)
		{
			sub_1407DB590(v11, (int*)L"sprCashCopper", 2 * v13);
			sub_14001C310(
				(_QWORD*)(a1 + 48),
				(int*)&aSprcashcopper[(__int64)(*(_QWORD*)(a1 + 64) - *(_QWORD*)(a1 + 56)) >> 1],
				v12);
		}
		else
		{
			v15 = 2 * v14;
			sub_1407DB590(v11, (int*)L"sprCashCopper", v15);
			sub_14001C2B0(a1 + 48, (int*)(v15 + *(_QWORD*)(a1 + 56)), *(int**)(a1 + 64));
		}
		v17 = (int*)sub_14034BDD0(v16, 634024);
		v18 = 0i64;
		if (*(_WORD*)v17)
		{
			do
				++v18;
			while (*((_WORD*)v17 + v18));
		}
		sub_14001C480(a1 + 88, v17, (int*)((char*)v17 + 2 * v18));
		*(_BYTE*)(a1 + 128) = 1;
		*(_QWORD*)(a1 + 208) = 99i64;
		*(_DWORD*)(a1 + 168) = 100;
		*(_DWORD*)(a1 + 172) = 3;
		v19 = 0i64;
		do
			v10 = aSprcashsilver[++v19] == 0;
		while (!v10);
		v20 = *(int**)(a1 + 144);
		v21 = (int*)&aSprcashsilver[v19];
		v22 = (__int64)(*(_QWORD*)(a1 + 152) - (_QWORD)v20) >> 1;
		v23 = (2 * v19) >> 1;
		if (v23 > v22)
		{
			sub_1407DB590(v20, (int*)L"sprCashSilver", 2 * v22);
			sub_14001C310(
				(_QWORD*)(a1 + 136),
				(int*)&aSprcashsilver[(__int64)(*(_QWORD*)(a1 + 152) - *(_QWORD*)(a1 + 144)) >> 1],
				v21);
		}
		else
		{
			v24 = 2 * v23;
			sub_1407DB590(v20, (int*)L"sprCashSilver", v24);
			sub_14001C2B0(a1 + 136, (int*)(v24 + *(_QWORD*)(a1 + 144)), *(int**)(a1 + 152));
		}
		v26 = (int*)sub_14034BDD0(v25, 634025);
		v27 = 0i64;
		if (*(_WORD*)v26)
		{
			do
				++v27;
			while (*((_WORD*)v26 + v27));
		}
		sub_14001C480(a1 + 176, v26, (int*)((char*)v26 + 2 * v27));
		*(_BYTE*)(a1 + 216) = 1;
		*(_QWORD*)(a1 + 296) = 99i64;
		*(_DWORD*)(a1 + 256) = 10000;
		*(_DWORD*)(a1 + 260) = 3;
		v28 = 0i64;
		do
			v10 = aSprcashgold[++v28] == 0;
		while (!v10);
		v29 = *(int**)(a1 + 232);
		v30 = (int*)&aSprcashgold[v28];
		v31 = (__int64)(*(_QWORD*)(a1 + 240) - (_QWORD)v29) >> 1;
		v32 = (2 * v28) >> 1;
		if (v32 > v31)
		{
			sub_1407DB590(v29, (int*)L"sprCashGold", 2 * v31);
			sub_14001C310(
				(_QWORD*)(a1 + 224),
				(int*)&aSprcashgold[(__int64)(*(_QWORD*)(a1 + 240) - *(_QWORD*)(a1 + 232)) >> 1],
				v30);
		}
		else
		{
			v33 = 2 * v32;
			sub_1407DB590(v29, (int*)L"sprCashGold", v33);
			sub_14001C2B0(a1 + 224, (int*)(v33 + *(_QWORD*)(a1 + 232)), *(int**)(a1 + 240));
		}
		v35 = (int*)sub_14034BDD0(v34, 634026);
		v36 = 0i64;
		if (*(_WORD*)v35)
		{
			do
				++v36;
			while (*((_WORD*)v35 + v36));
		}
		sub_14001C480(a1 + 264, v35, (int*)((char*)v35 + 2 * v36));
		*(_BYTE*)(a1 + 304) = 1;
		*(_QWORD*)(a1 + 384) = 0x7FFFFFFFi64;
		*(_DWORD*)(a1 + 344) = 1000000;
		*(_DWORD*)(a1 + 348) = 4;
		v37 = 0i64;
		do
			v10 = aSprcashplatinu[++v37] == 0;
		while (!v10);
		v38 = *(int**)(a1 + 320);
		v39 = (int*)&aSprcashplatinu[v37];
		v40 = (__int64)(*(_QWORD*)(a1 + 328) - (_QWORD)v38) >> 1;
		v41 = (2 * v37) >> 1;
		if (v41 > v40)
		{
			sub_1407DB590(v38, (int*)L"sprCashPlatinum", 2 * v40);
			sub_14001C310(
				(_QWORD*)(a1 + 312),
				(int*)&aSprcashplatinu[(__int64)(*(_QWORD*)(a1 + 328) - *(_QWORD*)(a1 + 320)) >> 1],
				v39);
		}
		else
		{
			v42 = 2 * v41;
			sub_1407DB590(v38, (int*)L"sprCashPlatinum", v42);
			sub_14001C2B0(a1 + 312, (int*)(v42 + *(_QWORD*)(a1 + 320)), *(int**)(a1 + 328));
		}
		v44 = (int*)sub_14034BDD0(v43, 634027);
		if (*(_WORD*)v44)
		{
			do
				++v8;
			while (*((_WORD*)v44 + v8));
		}
		sub_14001C480(a1 + 352, v44, (int*)((char*)v44 + 2 * v8));
		goto LABEL_71;
	}
	if (a2 != 15)
		goto LABEL_60;
	if (a3 == 1)
	{
		v45 = 0i64;
		*(_BYTE*)(a1 + 40) = 1;
		*(_DWORD*)(a1 + 80) = 1;
		*(_QWORD*)(a1 + 120) = 0x7FFFFFFFi64;
		*(_DWORD*)(a1 + 84) = 6;
		v46 = 0i64;
		do
			v10 = aIconWindowsUiC[++v46] == 0;
		while (!v10);
		v47 = *(int**)(a1 + 56);
		v48 = (int*)&aIconWindowsUiC[v46];
		v49 = (__int64)(*(_QWORD*)(a1 + 64) - (_QWORD)v47) >> 1;
		v50 = (2 * v46) >> 1;
		if (v50 > v49)
		{
			sub_1407DB590(v47, (int*)L"Icon_Windows_UI_CRB_Coin_War", 2 * v49);
			sub_14001C310(
				(_QWORD*)(a1 + 48),
				(int*)&aIconWindowsUiC[(__int64)(*(_QWORD*)(a1 + 64) - *(_QWORD*)(a1 + 56)) >> 1],
				v48);
		}
		else
		{
			v51 = 2 * v50;
			sub_1407DB590(v47, (int*)L"Icon_Windows_UI_CRB_Coin_War", v51);
			sub_14001C2B0(a1 + 48, (int*)(v51 + *(_QWORD*)(a1 + 56)), *(int**)(a1 + 64));
		}
		v53 = (int*)sub_14034BDD0(v52, 525647);
		if (*(_WORD*)v53)
		{
			do
				++v45;
			while (*((_WORD*)v53 + v45));
		}
	LABEL_70:
		sub_14001C480(a1 + 88, v53, (int*)((char*)v53 + 2 * v45));
		*(_BYTE*)(a1 + 304) = 0;
		*(_BYTE*)(a1 + 216) = 0;
		*(_BYTE*)(a1 + 128) = 0;
	LABEL_71:
		result = a3;
		*(_DWORD*)(a1 + 24) = a4;
		*(_DWORD*)(a1 + 16) = a2;
		*(_DWORD*)(a1 + 20) = a3;
		*(_DWORD*)(a1 + 28) = a5;
		return result;
	}
	if (!a4)
	{
		if (a5)
		{
			*(_BYTE*)(a1 + 40) = 1;
			*(_QWORD*)(a1 + 120) = 0x7FFFFFFFi64;
			*(_DWORD*)(a1 + 80) = 1;
			*(_DWORD*)(a1 + 84) = 6;
			v60 = (int*)sub_140505820(a5);
			v45 = 0i64;
			v61 = 0i64;
			if (*(_WORD*)v60)
			{
				do
					++v61;
				while (*((_WORD*)v60 + v61));
			}
			sub_14001C480(a1 + 48, v60, (int*)((char*)v60 + 2 * v61));
			v62 = sub_1405057D0(a5);
			v53 = (int*)sub_14034BDD0(v63, v62);
			if (*(_WORD*)v53)
			{
				do
					++v45;
				while (*((_WORD*)v53 + v45));
			}
			goto LABEL_70;
		}
	LABEL_60:
		result = sub_1401FA4A0(a2);
		v64 = result;
		if (!result)
			return result;
		*(_BYTE*)(a1 + 40) = 1;
		v65 = *(_QWORD*)(result + 32);
		*(_DWORD*)(a1 + 80) = 1;
		*(_DWORD*)(a1 + 84) = 6;
		*(_QWORD*)(a1 + 120) = v65;
		v66 = *(_QWORD*)(result + 24);
		v45 = 0i64;
		if (v66)
		{
			if (v66 <= qword_140C3FE70)
				v67 = (int*)(v66 + qword_140C3FE68);
			else
				v67 = 0i64;
		}
		else
		{
			v67 = 0i64;
		}
		v68 = 0i64;
		if (*(_WORD*)v67)
		{
			do
				++v68;
			while (*((_WORD*)v67 + v68));
		}
		sub_14001C480(a1 + 48, v67, (int*)((char*)v67 + 2 * v68));
		v53 = (int*)sub_14034BDD0(v69, *(_DWORD*)(v64 + 16));
		if (*(_WORD*)v53)
		{
			do
				++v45;
			while (*((_WORD*)v53 + v45));
		}
		goto LABEL_70;
	}
	result = sub_140444550(qword_140C658F0, a4);
	if ((_DWORD)result)
	{
		result = sub_1402096E0(a4);
		v55 = result;
		if (result)
		{
			*(_BYTE*)(a1 + 40) = 1;
			*(_QWORD*)(a1 + 120) = 0x7FFFFFFFi64;
			*(_DWORD*)(a1 + 80) = 1;
			*(_DWORD*)(a1 + 84) = 6;
			v56 = *(_QWORD*)(result + 192);
			v45 = 0i64;
			if (v56)
			{
				if (v56 <= qword_140C3FE70)
					v57 = (int*)(v56 + qword_140C3FE68);
				else
					v57 = 0i64;
			}
			else
			{
				v57 = 0i64;
			}
			v58 = 0i64;
			if (*(_WORD*)v57)
			{
				do
					++v58;
				while (*((_WORD*)v57 + v58));
			}
			sub_14001C480(a1 + 48, v57, (int*)((char*)v57 + 2 * v58));
			v53 = (int*)sub_14034BDD0(v59, *(_DWORD*)(v55 + 176));
			if (*(_WORD*)v53)
			{
				do
					++v45;
				while (*((_WORD*)v53 + v45));
			}
			goto LABEL_70;
		}
	}
	return result;
}
// 1405036DB: variable 'v16' is possibly undefined
// 1405037B9: variable 'v25' is possibly undefined
// 140503899: variable 'v34' is possibly undefined
// 140503979: variable 'v43' is possibly undefined
// 140503A5B: variable 'v52' is possibly undefined
// 140503B1C: variable 'v59' is possibly undefined
// 140503B93: variable 'v63' is possibly undefined
// 140503C29: variable 'v69' is possibly undefined
// 140B0FF50: using guessed type wchar_t aSprcashgold[12];
// 140B0FF68: using guessed type wchar_t aSprcashsilver[14];
// 140B0FF88: using guessed type wchar_t aIconWindowsUiC[29];
// 140B0FFC8: using guessed type wchar_t aSprcashplatinu[16];
// 140B0FFE8: using guessed type wchar_t aSprcashcopper[14];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C658F0: using guessed type __int64 qword_140C658F0;

