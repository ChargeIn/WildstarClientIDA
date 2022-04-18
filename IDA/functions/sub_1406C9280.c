#include "../winhttp.h"

//----- (00000001406C9280) ----------------------------------------------------
char __fastcall sub_1406C9280(_QWORD* a1)
{
	unsigned __int64 i; // rdx
	__int64 v3; // r10
	__int64 v4; // rcx
	__int64 v5; // rbp
	__int64 v6; // r10
	__int64 v7; // r14
	__int64 v8; // r13
	__int64 v9; // rcx
	__int64 v10; // r11
	unsigned __int64 j; // rcx
	__int64 v12; // r10
	__int64 v13; // rdx
	__int64 v14; // r10
	unsigned __int64 k; // rcx
	__int64 v16; // r10
	__int64 v17; // rdx
	__int64 v18; // r10
	unsigned __int64 m; // rcx
	__int64 v20; // r10
	__int64 v21; // rdx
	__int64 v22; // r10
	unsigned __int64 n; // rcx
	__int64 v24; // r10
	__int64 v25; // rdx
	__int64 v26; // r10
	int v27; // esi
	unsigned int v28; // r15d
	void(__fastcall * **v29)(_QWORD, __int64); // rax
	__int64 v30; // rcx
	void(__fastcall * **v31)(_QWORD, __int64); // rbx
	__int64 v32; // rbx
	__int64 v33; // rdi
	__int64 v34; // rdi
	__int64 v35; // rcx
	__int64 v36; // rcx
	__int64 v37; // r10
	unsigned int v38; // r10d
	unsigned __int64 v40; // rdx
	__int64 v41; // r8
	__int64 v42; // rax
	int v43; // eax
	__int64 v44; // rax
	__m128i* v45; // rbx
	__m128i* v46; // rax
	__int64 v47; // [rsp+60h] [rbp+8h] BYREF

	for (i = 0i64; aAbar[i]; ++i)
		;
	v3 = a1[184];
	if ((a1[185] - v3) >> 1 == i)
	{
		v4 = 0i64;
		LODWORD(v5) = 1;
		if (i)
		{
			v6 = v3 - (_QWORD)L"ABar";
			while (*(wchar_t*)((char*)&aAbar[v4] + v6) == aAbar[v4])
			{
				if (++v4 >= i)
					goto LABEL_10;
			}
			goto LABEL_97;
		}
	LABEL_10:
		v7 = a1[4] + 3368i64;
		v8 = *(_QWORD*)(a1[4] + 3392i64);
		if (!v8 || (*(_DWORD*)(v8 + 432) & 0x10000000) == 0)
			return 0;
		v9 = *(_QWORD*)(a1[4] + 3384i64);
		v10 = 0i64;
		if (v9 && (*(_DWORD*)(v9 + 432) & 0x10000000) != 0)
		{
			v10 = *(_QWORD*)(a1[4] + 3384i64);
			for (j = 0i64; aLasbar[j]; ++j)
				;
			v12 = *(_QWORD*)(v10 + 1472);
			if ((*(_QWORD*)(v10 + 1480) - v12) >> 1 == j)
			{
				v13 = 0i64;
				if (j)
				{
					v14 = v12 - (_QWORD)L"LASBar";
					while (*(wchar_t*)((char*)&aLasbar[v13] + v14) == aLasbar[v13])
					{
						if (++v13 >= j)
							goto LABEL_23;
					}
				}
				else
				{
				LABEL_23:
					for (k = 0i64; aLasbar[k]; ++k)
						;
					v16 = *(_QWORD*)(v8 + 1472);
					if ((*(_QWORD*)(v8 + 1480) - v16) >> 1 != k)
						return 0;
					v17 = 0i64;
					if (k)
					{
						v18 = v16 - (_QWORD)L"LASBar";
						while (*(wchar_t*)((char*)&aLasbar[v17] + v18) == aLasbar[v17])
						{
							if (++v17 >= k)
								goto LABEL_32;
						}
						return 0;
					}
				}
			}
		}
	LABEL_32:
		for (m = 0i64; aLasbar[m]; ++m)
			;
		v20 = *(_QWORD*)(v8 + 1472);
		if ((*(_QWORD*)(v8 + 1480) - v20) >> 1 != m)
			goto LABEL_49;
		v21 = 0i64;
		if (m)
		{
			v22 = v20 - (_QWORD)L"LASBar";
			while (*(wchar_t*)((char*)&aLasbar[v21] + v22) == aLasbar[v21])
			{
				if (++v21 >= m)
					goto LABEL_41;
			}
		LABEL_49:
			v27 = 0;
			v28 = 0;
			v29 = sub_1406C5440(v8);
			v31 = v29;
			if (v29)
			{
				v28 = ((__int64(__fastcall*)(void(__fastcall***)(_QWORD, __int64)))(*v29)[3])(v29);
				v27 = ((__int64(__fastcall*)(void(__fastcall***)(_QWORD, __int64)))(*v31)[1])(v31);
				if (v27 == 4)
				{
					v30 = qword_140C635F0;
					if (*(_DWORD*)(qword_140C635F0 + 5704))
						return 0;
				}
			}
			v32 = *(_QWORD*)(v7 + 72);
			v33 = *(_QWORD*)(v7 + 80);
			v47 = -4294966996i64;
			v34 = v33 - v32;
			if (v34 == 9 && *(_QWORD*)v32 == 0x6574496761424444i64 && *(_BYTE*)(v32 + 8) == 109)
			{
				v35 = *(_QWORD*)(v7 + 120);
				LODWORD(v47) = BYTE1(v35);
				HIDWORD(v47) = (unsigned __int8)v35;
				sub_1403AC780(qword_140C65898 + 160, (int*)&v47);
				sub_14053BBA0(v36, (__int64)&v47);
				if (!v37)
					return 0;
				v38 = **(_DWORD**)(v37 + 64);
			}
			else if (v34 != 15 || (unsigned int)sub_1407E6AF0((unsigned __int64*)v32, (__int64)"DDSpellbookItem", 0xFui64))
			{
				if (v34 == 7 && *(_DWORD*)v32 == 1632453700 && *(_WORD*)(v32 + 4) == 29283 && *(_BYTE*)(v32 + 6) == 111)
				{
					if (!sub_140778230(*(_QWORD*)(qword_140C65898 + 29520), *(_DWORD*)(v7 + 120)))
						return 0;
					LODWORD(v5) = 2;
				}
				else if (v34 == 11
					&& *(_QWORD*)v32 == 0x6E6F697463414444i64
					&& *(_WORD*)(v32 + 8) == 24898
					&& *(_BYTE*)(v32 + 10) == 114)
				{
					v38 = *(_DWORD*)(v7 + 120);
					v5 = HIDWORD(*(_QWORD*)(v7 + 120));
					if (!(_DWORD)v5)
						return 0;
				}
				else
				{
					if (v34 == 12 && *(_QWORD*)v32 == 0x6465726168534444i64 && *(_DWORD*)(v32 + 8) == 1835365449)
						return 0;
					if (v34 == 11
						&& *(_QWORD*)v32 == 0x6D6F436E6F4E4444i64
						&& *(_WORD*)(v32 + 8) == 24930
						&& *(_BYTE*)(v32 + 10) == 116)
					{
						v42 = sub_1403C1780(qword_140C65898, *(_DWORD*)(v7 + 120));
						if (!v42)
							return 0;
						v43 = *(_DWORD*)(v42 + 36);
						LODWORD(v5) = 13;
						LODWORD(v47) = 4;
						HIDWORD(v47) = v43;
					}
					else
					{
						if (v34 != 13
							|| *(_QWORD*)v32 != 0x6F43656D61474444i64
							|| *(_DWORD*)(v32 + 8) != 1851878765
							|| *(_BYTE*)(v32 + 12) != 100)
						{
							return 0;
						}
						v38 = *(_DWORD*)(v7 + 120);
						LODWORD(v5) = 3;
					}
				}
			}
			else
			{
				v40 = *(unsigned int*)(v7 + 120);
				if (v40 >= *(_QWORD*)(qword_140C65898 + 2712))
					return 0;
				v41 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 2704) + 8 * v40);
				if (!v41)
					return 0;
				v38 = *(_DWORD*)(v41 + 64);
				LODWORD(v5) = 4;
				HIDWORD(v47) = *(_DWORD*)(v7 + 120);
				LODWORD(v47) = 4;
			}
			v44 = *(_QWORD*)(v8 + 1800);
			if (v44)
			{
				v46 = *(__m128i**)(v44 + 32);
				v45 = (__m128i*) & word_140B7B704;
				if (v46)
					v45 = v46;
			}
			else
			{
				v45 = 0i64;
			}
			if ((int)sub_1403C2020(v30, *(_DWORD*)(v8 + 1496), v5, v38, (__int64)&v47) >= 0 && v27)
			{
				sub_1400E9780(
					(_QWORD*)a1[4],
					v8,
					(int*)&qword_140B397D0,
					v45,
					v28 | (unsigned __int64)((__int64)v27 << 32),
					0i64);
				(*(void(__fastcall**)(_QWORD*, _QWORD))(*a1 + 504i64))(a1, 0i64);
				return 1;
			}
			return 0;
		}
	LABEL_41:
		if (v10)
		{
			for (n = 0i64; aLasbar[n]; ++n)
				;
			v24 = *(_QWORD*)(v10 + 1472);
			if ((*(_QWORD*)(v10 + 1480) - v24) >> 1 == n)
			{
				v25 = 0i64;
				if (!n)
					goto LABEL_49;
				v26 = v24 - (_QWORD)L"LASBar";
				while (*(wchar_t*)((char*)&aLasbar[v25] + v26) == aLasbar[v25])
				{
					if (++v25 >= n)
						goto LABEL_49;
				}
			}
		}
		return 0;
	}
LABEL_97:
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ActionBarNonSpellShortcutAddFailed", &unk_1409D0CAA);
	return 0;
}
// 1406C930B: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1406C93EA: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1406C9459: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1406C94C9: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1406C9624: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1406C95FF: variable 'v36' is possibly undefined
// 1406C9607: variable 'v37' is possibly undefined
// 1406C983B: variable 'v30' is possibly undefined
// 1406C983B: variable 'v38' is possibly undefined
// 140B39778: using guessed type wchar_t aAbar[5];
// 140B397A8: using guessed type wchar_t aLasbar[7];
// 140B397D0: using guessed type __int64 qword_140B397D0;
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

