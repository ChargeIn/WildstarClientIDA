//----- (0000000140012780) ----------------------------------------------------
__int64 __fastcall sub_140012780(__int64 a1)
{
	int v2; // ecx
	__int64 v3; // r8
	const wchar_t* v4; // rbx
	const wchar_t* v5; // r8
	_QWORD* v6; // rax
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // r8
	unsigned __int64 i; // rdx
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rdx
	__m128i* v14; // rcx
	int v15; // r9d
	__int64 v16; // r8
	__int16 v17; // ax
	__int64 v18; // rcx
	__m128i* v19; // rax
	int v20; // ecx
	int v21; // eax
	int v22; // edx
	int v23; // edx
	__int64(__fastcall * *v24)(); // rcx
	__int64 result; // rax
	int* v26; // rax
	__int64 v27; // rcx
	int* v28; // rbx
	int v29; // r9d
	char* v30; // rax
	__int64 v31; // rbx
	__int64 v32; // rcx
	signed __int64 v33; // r8
	__int16 v34; // dx
	__int64 v35; // r8
	unsigned __int64 j; // rdx
	__int64 v37; // rax
	__int64 v38; // rcx
	int v39; // esi
	int** v40; // rdi
	__int64 v41; // rax
	__int64 v42; // [rsp+40h] [rbp-688h] BYREF
	__int64 v43; // [rsp+48h] [rbp-680h]
	char v44[24]; // [rsp+50h] [rbp-678h] BYREF
	char v45[24]; // [rsp+68h] [rbp-660h] BYREF
	__m128i v46[33]; // [rsp+80h] [rbp-648h] BYREF
	WCHAR v47[264]; // [rsp+290h] [rbp-438h] BYREF
	__m128i Filename[33]; // [rsp+4A0h] [rbp-228h] BYREF

	v2 = *(_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 712i64))(qword_140C65670);
	if (v2)
	{
		v4 = L" - DX11";
		if (v2 != 1)
			v4 = (const wchar_t*)&unk_1409D06D4;
	}
	else
	{
		v4 = L" - DX9";
	}
	sub_1401B5020(*(__int64*)&qword_140C63788, v47, v3, L"..");
	if (!*(_QWORD*)&qword_140C63788 || (v5 = *(const wchar_t**)(*(_QWORD*)&qword_140C63788 + 4896i64)) == 0i64)
		v5 = L"WildStar";
	v6 = sub_14018D540(
		&v42,
		(__int64)L"%s %s - %s%s%s - %s",
		v5,
		L"1.7.8.16042",
		L"ReleaseShipping|x64",
		&unk_1409D068C,
		v4,
		v47);
	v7 = *(_QWORD*)(a1 + 312);
	*(_QWORD*)(a1 + 312) = *v6;
	*v6 = v7;
	if (v42)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v42 - 16) + 8i64))(v42 - 16);
	if (GetModuleFileNameW(0i64, (LPWSTR)Filename, 0x104u) && (int)sub_1401B71D0(v8, Filename, (__int64)v45) >= 0)
	{
		v9 = *(_QWORD*)(a1 + 5672);
		for (i = 0i64;
			i < 0x14;
			v9 = 2860486313u
			* (2860486313u
				* (2860486313u * (2860486313i64 * (2860486313i64 * (v9 + v11) + v12) + (unsigned __int8)v44[i + 21])
					+ (unsigned __int8)v44[i + 22])
				+ (unsigned __int8)v44[i + 23]))
		{
			v11 = (unsigned __int8)v45[i];
			v12 = (unsigned __int8)v45[i + 1];
			i += 5i64;
		}
		*(_QWORD*)(a1 + 5672) = v9;
	}
	v13 = 260i64;
	v14 = v46;
	v15 = 0;
	v16 = *(_QWORD*)&qword_140C63788 - (_QWORD)v46;
	while (v13 != -2147483386)
	{
		v17 = *(__int16*)((char*)&v14[135].m128i_i16[2] + v16);
		if (!v17)
			break;
		v14->m128i_i16[0] = v17;
		v14 = (__m128i*)((char*)v14 + 2);
		if (!--v13)
		{
			v14 = (__m128i*)((char*)v14 - 2);
			v15 = -2147024774;
			break;
		}
	}
	v14->m128i_i16[0] = 0;
	if (v15 >= 0)
	{
		v18 = 260i64;
		v19 = v46;
		while (v19->m128i_i16[0])
		{
			v19 = (__m128i*)((char*)v19 + 2);
			if (!--v18)
			{
				v43 = 0i64;
				goto LABEL_25;
			}
		}
		v29 = 0;
		v43 = 260 - v18;
		v30 = &v46[0].m128i_i8[2 * (260 - v18)];
		v31 = v18;
		v32 = 2147483646i64;
		v33 = (char*)L"\\Patch.index" - v30;
		while (v32)
		{
			v34 = *(_WORD*)&v30[v33];
			if (!v34)
				break;
			*(_WORD*)v30 = v34;
			v30 += 2;
			--v32;
			if (!--v31)
			{
				v30 -= 2;
				v29 = -2147024774;
				break;
			}
		}
		*(_WORD*)v30 = 0;
		if (v29 >= 0 && (int)sub_1401B71D0(v32, v46, (__int64)v44) >= 0)
		{
			v35 = *(_QWORD*)(a1 + 5672);
			for (j = 0i64;
				j < 0x14;
				v35 = 2860486313u
				* (2860486313u
					* (2860486313u * (2860486313i64 * (2860486313i64 * (v35 + v37) + v38) + (unsigned __int8)v44[j - 3])
						+ (unsigned __int8)v44[j - 2])
					+ (unsigned __int8)v44[j - 1]))
			{
				v37 = (unsigned __int8)v44[j];
				v38 = (unsigned __int8)v44[j + 1];
				j += 5i64;
			}
			*(_QWORD*)(a1 + 5672) = v35;
		}
	}
LABEL_25:
	if (sub_140017250())
		dword_140C1B438 = -1090519040;
	v20 = *(_DWORD*)qword_140C63750;
	v21 = dword_140C3B190;
	if (*(_DWORD*)qword_140C63750 < dword_140C3B190)
		v21 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&dword_140C3B1A0 + v21))
	{
		v22 = *(_DWORD*)(a1 + 172);
		if (v22 == 2)
			goto LABEL_34;
		if (v22 == 3)
		{
			v23 = dword_140C3B310;
			if (v20 < dword_140C3B310)
				v23 = *(_DWORD*)qword_140C63750;
			v24 = &off_140C3B300;
			goto LABEL_37;
		}
		if (((v22 - 6) & 0xFFFFFFFA) == 0 && v22 != 10)
		{
		LABEL_34:
			v23 = dword_140C3B350;
			if (v20 < dword_140C3B350)
				v23 = *(_DWORD*)qword_140C63750;
			v24 = &off_140C3B340;
		LABEL_37:
			sub_14001A6C0((__int64)v24, v23, 1);
		}
	}
	result = sub_140017900(a1);
	if ((int)result >= 0)
	{
		v26 = sub_14018B280(80i64, 0);
		v28 = v26;
		if (v26)
		{
			*(_QWORD*)v26 = off_140B55048;
			v26[2] = 1;
			*((_QWORD*)v26 + 3) = 0i64;
			*((_QWORD*)v26 + 4) = 0i64;
			*((_QWORD*)v26 + 6) = 0i64;
			v26[14] = 0;
			*((_QWORD*)v26 + 2) = 0i64;
			*(_QWORD*)v26 = off_140B55EA0;
			v26[10] = 0;
		}
		else
		{
			v28 = 0i64;
		}
		v28[18] = 0;
		v39 = sub_14000B690(v27, 1i64);
		if (v39 >= 0)
		{
			v40 = (int**)(a1 + 5552);
			if (!*((_QWORD*)v28 + 3))
			{
				*((_QWORD*)v28 + 3) = v40;
				*((_QWORD*)v28 + 4) = *v40;
				*v40 = v28;
				v41 = *((_QWORD*)v28 + 4);
				if (v41)
					*(_QWORD*)(v41 + 24) = v28 + 8;
			}
			return 0i64;
		}
		else
		{
			(*(void(__fastcall**)(int*))(*(_QWORD*)v28 + 8i64))(v28);
			return (unsigned int)v39;
		}
	}
	return result;
}
// 14001296B: conditional instruction was optimized away because rdx.8!=0
// 140012A82: conditional instruction was optimized away because rcx.8!=0
// 140012AA5: conditional instruction was optimized away because rcx.8!=0
// 140012AE3: conditional instruction was optimized away because rbx.8!=0
// 1400127F6: variable 'v3' is possibly undefined
// 1400128B5: variable 'v8' is possibly undefined
// 140012B95: variable 'v27' is possibly undefined
// 1409D1C4C: using guessed type wchar_t asc_1409D1C4C[3];
// 1409DF9F8: using guessed type wchar_t aSSSSSS[20];
// 1409DFBD8: using guessed type wchar_t aDx9[7];
// 1409DFBE8: using guessed type wchar_t aDx11[8];
// 1409DFBF8: using guessed type wchar_t aPatchIndex[13];
// 140A44F50: using guessed type wchar_t aWildstar_0[9];
// 140A44F78: using guessed type wchar_t aReleaseshippin[20];
// 140A44FA0: using guessed type wchar_t a17816042[12];
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B55EA0: using guessed type __int64 (__fastcall *off_140B55EA0[9])();
// 140C1B438: using guessed type int dword_140C1B438;
// 140C3B190: using guessed type int dword_140C3B190;
// 140C3B1A0: using guessed type int dword_140C3B1A0;
// 140C3B300: using guessed type __int64 (__fastcall *off_140C3B300)();
// 140C3B310: using guessed type int dword_140C3B310;
// 140C3B340: using guessed type __int64 (__fastcall *off_140C3B340)();
// 140C3B350: using guessed type int dword_140C3B350;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140012780: using guessed type WCHAR var_438[264];
// 140012780: using guessed type __m128i Filename[33];
// 140012780: using guessed type __m128i var_648[33];

