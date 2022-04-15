#include "../winhttp.h"

//----- (00000001406D0410) ----------------------------------------------------
__int64 __fastcall sub_1406D0410(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	_QWORD* a4,
	_OWORD* a5,
	__int64 a6,
	unsigned int a7)
{
	int* v9; // rax
	int* v10; // rax
	int v11; // r14d
	int** v12; // rbx
	int i; // ebp
	int* v14; // rax
	int v15; // xmm0_4
	int** v16; // rbx
	int* v17; // rax
	int v18; // xmm0_4
	_QWORD* v19; // rax
	__int64 v20; // rcx
	unsigned __int64 v21; // r8
	__int64 v22; // rbp
	__int64 v23; // rbx
	int v24; // r10d
	int v25; // r9d
	int v26; // r11d
	int v27; // ecx
	int v28; // eax
	int v29; // edx
	int v30; // r9d
	__int64 v31; // rax
	__int64 v32; // rcx
	int v33; // edx
	int v34; // ebp
	int v35; // r14d
	__int64 v36; // rcx
	int v37; // edx
	int v38; // edx
	int v39; // ebx
	int v40; // esi
	__int64 v41; // rbx
	void(__fastcall * **v42)(_QWORD); // rbx
	__int64 v43; // r8
	unsigned int v45; // r12d
	int* v46; // rax
	int* v47; // rdx
	int* v48; // rbx
	__int64 v49; // rcx
	unsigned int j; // ebp
	int* v51; // rax
	__int64 v52; // r14
	__int64 v53; // rbx
	int* v54; // rax
	int* v55; // rsi
	int* v56; // rdx
	__int64 v57; // rcx
	__int64 v59; // [rsp+40h] [rbp-48h] BYREF
	__int64 v60; // [rsp+48h] [rbp-40h]

	sub_1400C5920(a1, a2, a3, a4, a5, a6, 0i64);
	*(_QWORD*)a1 = off_140B71080;
	*(_QWORD*)(a1 + 1040) = 0i64;
	*(_QWORD*)(a1 + 1048) = 0i64;
	*(_QWORD*)(a1 + 1056) = 0i64;
	v9 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 1040) = v9;
	*(_QWORD*)(a1 + 1048) = v9;
	*(_QWORD*)(a1 + 1056) = v9 + 4;
	if (v9)
		*(_WORD*)v9 = 0;
	*(_QWORD*)(a1 + 1072) = 0i64;
	*(_QWORD*)(a1 + 1080) = 0i64;
	*(_QWORD*)(a1 + 1088) = 0i64;
	v10 = sub_14018B280(8i64, 0);
	*(_QWORD*)(a1 + 1072) = v10;
	*(_QWORD*)(a1 + 1080) = v10;
	*(_QWORD*)(a1 + 1088) = v10 + 2;
	if (v10)
		*(_BYTE*)v10 = 0;
	*(_DWORD*)(a1 + 1096) = -16777216;
	*(_QWORD*)(a1 + 1104) = 0i64;
	*(_QWORD*)(a1 + 1120) = 0i64;
	*(_QWORD*)(a1 + 1112) = 0i64;
	sub_14013FEB0(a1 + 1136, *(_QWORD*)(a1 + 32));
	*(_QWORD*)(a1 + 2040) = 0i64;
	*(_QWORD*)(a1 + 2048) = 0i64;
	*(_QWORD*)(a1 + 2072) = 0i64;
	*(_DWORD*)(a1 + 2064) = -2;
	*(_QWORD*)(a1 + 2056) = off_140B56A08;
	*(_QWORD*)(a1 + 2080) = 0i64;
	*(_QWORD*)(a1 + 2112) = 0i64;
	sub_1401095E0(a1 + 2120);
	sub_1401095E0(a1 + 2168);
	sub_1401095E0(a1 + 2216);
	sub_1401095E0(a1 + 2264);
	sub_1401095E0(a1 + 2312);
	sub_1401095E0(a1 + 2360);
	sub_1401095E0(a1 + 2408);
	sub_1401095E0(a1 + 2456);
	*(_DWORD*)(a1 + 2504) = 0;
	sub_1401095E0(a1 + 2512);
	v11 = 7;
	v12 = (int**)(a1 + 2592);
	for (i = 7; i >= 0; --i)
	{
		*(v12 - 1) = 0i64;
		*v12 = 0i64;
		v12[1] = 0i64;
		v14 = sub_14018B280(16i64, 0);
		*(v12 - 1) = v14;
		*v12 = v14;
		v12[1] = v14 + 4;
		if (v14)
			*(_WORD*)v14 = 0;
		v15 = dword_140C63664;
		*(v12 - 4) = 0i64;
		*((_DWORD*)v12 - 5) = 1065353216;
		*((_DWORD*)v12 - 6) = v15;
		v12 += 6;
	}
	v16 = (int**)(a1 + 2976);
	do
	{
		*(v16 - 1) = 0i64;
		*v16 = 0i64;
		v16[1] = 0i64;
		v17 = sub_14018B280(16i64, 0);
		*(v16 - 1) = v17;
		*v16 = v17;
		v16[1] = v17 + 4;
		if (v17)
			*(_WORD*)v17 = 0;
		v18 = dword_140C63664;
		*(v16 - 4) = 0i64;
		*((_DWORD*)v16 - 5) = 1065353216;
		*((_DWORD*)v16 - 6) = v18;
		v16 += 6;
		--v11;
	} while (v11 >= 0);
	*(_QWORD*)(a1 + 432) |= 0x20000000ui64;
	sub_1406D0FF0(a1);
	if (!a3)
		sub_1400E7280(*(_QWORD*)(a1 + 32), (void(__fastcall***)(_QWORD))a1, L"DefaultStratum");
	*(_DWORD*)(a1 + 1100) = a7;
	v19 = sub_14018EFA0(&v59, (__int64)L"Bag %d", a7);
	if (v19 != (_QWORD*)(a1 + 1032))
		sub_14001C480(a1 + 1032, (int*)v19[1], (int*)v19[2]);
	if (v60)
		sub_14018B900(v60, 0);
	*(_BYTE*)(a1 + 1024) = 1;
	*(_WORD*)(a1 + 2088) = 0;
	*(_DWORD*)(a1 + 676) = 3;
	*(_QWORD*)(a1 + 2096) = 0i64;
	*(_QWORD*)(a1 + 2104) = 0i64;
	v20 = *(_QWORD*)(a1 + 1072);
	v21 = *(_QWORD*)(a1 + 1080) - v20;
	if (v21 < 9)
	{
		sub_1407DB590((int*)v20, (int*)&qword_140B3C2F0, v21);
		sub_14001B050(
			(_QWORD*)(a1 + 1064),
			(int*)((char*)&qword_140B3C2F0 + *(_QWORD*)(a1 + 1080) - *(_QWORD*)(a1 + 1072)),
			&dword_140B3C2F9);
	}
	else
	{
		*(_QWORD*)v20 = 0x6574496761424444i64;
		*(_BYTE*)(v20 + 8) = 109;
		v22 = *(_QWORD*)(a1 + 1080);
		v23 = *(_QWORD*)(a1 + 1072) + 9i64;
		if (v23 != v22)
		{
			sub_1407DB590((int*)(*(_QWORD*)(a1 + 1072) + 9i64), *(int**)(a1 + 1080), 1ui64);
			*(_QWORD*)(a1 + 1080) += v23 - v22;
		}
	}
	*(_DWORD*)(a1 + 2000) = 4;
	v24 = 1;
	*(_QWORD*)(a1 + 2004) = 1i64;
	v25 = *(_DWORD*)(a1 + 724);
	v26 = 1;
	v27 = abs32(dword_140C4AFA8);
	v28 = dword_140C4AFAC;
	v29 = dword_140C4AFAC >> 31;
	if (v27 > 1)
		v26 = v27;
	*(_DWORD*)(a1 + 2012) = v26;
	*(_DWORD*)(a1 + 2016) = v26 * ((v29 ^ v28) - v29) / v27;
	v30 = v25 - *(_DWORD*)(a1 + 716);
	if (v30 > 0)
	{
		if ((v30 - v26) / (v26 + 1) + 1 > 1)
			v24 = (v30 - v26) / (v26 + 1) + 1;
		*(_DWORD*)(a1 + 2000) = v24;
		sub_1406D0EC0((_DWORD*)a1);
	}
	v31 = sub_1400E58C0(*(_QWORD*)(a1 + 32), (int*)L"Default");
	v32 = qword_140C65898;
	v33 = *(_DWORD*)(a1 + 1100);
	*(_QWORD*)(a1 + 696) = v31;
	v34 = *(_DWORD*)(a1 + 720);
	v35 = *(_DWORD*)(a1 + 728);
	v36 = v32 + 160;
	if (v33)
	{
		v37 = v33 - 1;
		if (v37)
		{
			v38 = v37 - 1;
			if (!v38)
			{
				v36 += 48i64;
				goto LABEL_36;
			}
			if (v38 == 8)
			{
				v36 += 72i64;
				goto LABEL_36;
			}
		}
		v36 += 24i64;
	}
LABEL_36:
	v39 = *(_DWORD*)(v36 + 12);
	v40 = v39 / (*(int(__fastcall**)(__int64))(*(_QWORD*)a1 + 624i64))(a1);
	if (v39 % (*(int(__fastcall**)(__int64))(*(_QWORD*)a1 + 624i64))(a1) > 0)
		++v40;
	sub_1400CAD80(a1, *(_DWORD*)(a1 + 2024) * v40 - v35 + v34, v35 - v34, *(_DWORD*)(a1 + 2024));
	v41 = *(_QWORD*)(a1 + 32);
	if (v41 && (!*(_QWORD*)(a1 + 2512) || !sub_14002C740(a1 + 2528, L"sprAS_GCD_Fill")))
	{
		v42 = (void(__fastcall***)(_QWORD))sub_140108E80(v41 + 240, (const __m128i*)L"sprAS_GCD_Fill");
		if (v42)
		{
			v43 = 0i64;
			while (aSprasGcdFill[++v43] != 0)
				;
			sub_14001C480(a1 + 2528, (int*)L"sprAS_GCD_Fill", (int*)&aSprasGcdFill[v43]);
		}
		sub_1401097F0((_QWORD*)(a1 + 2512), v42);
	}
	if (!*(_QWORD*)(a1 + 16))
		sub_1400D42F0(a1, 0, 0, 4.0);
	v45 = 232;
	if (a7 == 10)
		v45 = 250;
	if (*(_QWORD*)(a1 + 1120) > (unsigned __int64)v45)
		*(_QWORD*)(a1 + 1120) = v45;
	v46 = sub_14018DBC0(*(_QWORD*)(a1 + 1112), v45, 8i64);
	v47 = *(int**)(a1 + 1112);
	v48 = v46;
	if (v47 != v46)
	{
		sub_1407DB590(v46, v47, 8i64 * *(_QWORD*)(a1 + 1120));
		v49 = *(_QWORD*)(a1 + 1112);
		if (v49)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v49 - 16) + 8i64))(v49 - 16);
		*(_QWORD*)(a1 + 1112) = v48;
	}
	for (j = 0; j < v45; ++j)
	{
		v51 = sub_14018B280(624i64, 0);
		if (v51)
			v52 = sub_1406D7B10((__int64)v51);
		else
			v52 = 0i64;
		*(_QWORD*)(v52 + 12) = __PAIR64__(j, *(_DWORD*)(a1 + 1100));
		v53 = *(_QWORD*)(a1 + 1120);
		v54 = sub_14018DB00(*(_QWORD*)(a1 + 1112), v53 + 1, 8i64);
		v55 = v54;
		*(_QWORD*)&v54[2 * v53] = v52;
		v56 = *(int**)(a1 + 1112);
		if (v56 != v54)
		{
			sub_1407DB590(v54, v56, 8i64 * *(_QWORD*)(a1 + 1120));
			v57 = *(_QWORD*)(a1 + 1112);
			if (v57)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v57 - 16) + 8i64))(v57 - 16);
			*(_QWORD*)(a1 + 1112) = v55;
		}
		*(_QWORD*)(a1 + 1120) = v53 + 1;
	}
	return a1;
}
// 1406D09C6: conditional instruction was optimized away because r12d.4 is in (==E8|==FA)
// 140B3B3F8: using guessed type wchar_t aSprasGcdFill[15];
// 140B3B418: using guessed type wchar_t aDefault_17[8];
// 140B3B428: using guessed type wchar_t aBagD[7];
// 140B3C2C8: using guessed type wchar_t aDefaultstratum_8[15];
// 140B3C2F0: using guessed type __int64 qword_140B3C2F0;
// 140B3C2F9: using guessed type int dword_140B3C2F9;
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140B71080: using guessed type __int64 (__fastcall *off_140B71080[25])();
// 140C4AFA8: using guessed type int dword_140C4AFA8;
// 140C4AFAC: using guessed type int dword_140C4AFAC;
// 140C63664: using guessed type int dword_140C63664;
// 140C65898: using guessed type __int64 qword_140C65898;

