#include "../winhttp.h"

//----- (00000001405379E0) ----------------------------------------------------
void __fastcall sub_1405379E0(__int64 a1)
{
	_QWORD* v1; // rdi
	int v3; // r9d
	int v4; // r8d
	__int64 v5; // rdx
	char* v6; // rax
	unsigned __int64 v7; // rax
	int v8; // edx
	__int64* v9; // rcx
	signed __int64 v10; // r8
	__int64 v11; // rax
	__int64 v12; // rcx
	unsigned __int64 v13; // rbp
	int v14; // eax
	__int64 v15; // rbx
	int* (__fastcall * v16)(__int64, __int64, _QWORD*, __int64, __int64); // rax
	unsigned int* v17; // r9
	unsigned __int64* v18; // rbx
	__int64 v19; // rax
	__int64* v20; // rsi
	__int64 v21; // r14
	__int64 v22; // rax
	__int64 v23; // r8
	_QWORD* v24; // rax
	__int64 v25; // rcx
	__int64* v26; // rax
	unsigned __int64 v27; // r8
	__int64* v28; // r14
	int* (__fastcall * v29)(__int64, __int64, _QWORD*, __int64, __int64); // rax
	unsigned int* v30; // r9
	__int64 v31; // rbx
	__int64 v32; // rax
	__int64 v33; // rax
	__int64* v34; // rax
	__int64 v35; // rax
	__int64* v36; // rax
	__int64 v37; // rax
	__int64* v38; // rax
	__int64 v39; // rax
	__int64* v40; // rax
	__int64 v41; // rax
	__int64* v42; // rax
	__int64 v43; // rax
	__int64* v44; // rax
	__int64 v45; // rbx
	int* (__fastcall * v46)(__int64, __int64, _QWORD*, __int64, __int64); // rax
	__int64 v47; // r9
	__int64 v48; // rdx
	int v49; // ecx
	__int64 v50; // rdx
	int v51; // ecx
	int v52; // ecx
	int v53; // ecx
	int v54; // ecx
	__int64 v55; // r8
	int v56; // eax
	__int64(__fastcall * v57)(__int64(__fastcall*)(__int64, __int64, __int64, __int64, __int64), __int64, __int64, __int64, __int64, __int64); // rax
	int* (__fastcall * v58)(__int64, __int64, _QWORD*, __int64, __int64); // [rsp+20h] [rbp-4048h] BYREF
	__int64(__fastcall * v59)(__int64(__fastcall*)(__int64, __int64, __int64, __int64, __int64), __int64, __int64, __int64, __int64, __int64); // [rsp+28h] [rbp-4040h]
	__int64 v60[2048]; // [rsp+30h] [rbp-4038h] BYREF

	v1 = *(_QWORD**)(a1 + 400);
	sub_1407E4830((int*)v60, 0i64, 0x4000ui64);
	v3 = 0;
	v4 = 0;
	v5 = 0i64;
	do
	{
		++v4;
		++v3;
		v60[v5] = (__int64)(&off_140C56A80)[v5];
		v6 = (&off_140C56A80)[v5 + 1];
		v5 += 2i64;
		v60[v5 - 1] = (__int64)v6;
	} while ((unsigned __int64)v4 < 0x97);
	v7 = 16i64 * v3;
	v8 = 0;
	v9 = &v60[v7 / 8];
	v10 = (char*)&(&off_140C59F40)[v7 / 0xFFFFFFFFFFFFFFF8ui64] - (char*)v60;
	do
	{
		v11 = *(__int64*)((char*)v9 + v10);
		++v8;
		v9 += 2;
		*(v9 - 2) = v11;
		*(v9 - 1) = *(__int64*)((char*)v9 + v10 - 8);
	} while ((unsigned __int64)v8 < 0x4D);
	sub_1400569B0((__int64)v1, (unsigned __int64*)"Apollo.ZoneMapWindow");
	v12 = v1[2];
	if (*(_DWORD*)(v12 - 8) != 2)
	{
		if (*(_DWORD*)(v12 - 8) == 5 || *(_DWORD*)(v12 - 8) == 6)
			goto LABEL_15;
		if (*(_DWORD*)(v12 - 8) != 7)
		{
			if (*(_DWORD*)(v12 - 8) != 8)
			{
				v13 = 0i64;
				goto LABEL_16;
			}
			goto LABEL_15;
		}
	}
	v14 = *(_DWORD*)(v12 - 8);
	if (v14 == 2)
	{
	LABEL_15:
		v13 = *(_QWORD*)(v12 - 16);
		goto LABEL_16;
	}
	if (v14 == 7)
		v13 = *(_QWORD*)(v12 - 16) + 48i64;
	else
		v13 = 0i64;
LABEL_16:
	*(_QWORD*)v12 = *(_QWORD*)(v12 - 16);
	*(_DWORD*)(v12 + 8) = *(_DWORD*)(v12 - 8);
	v1[2] += 16i64;
	v15 = v1[2];
	v16 = (int* (__fastcall*)(__int64, __int64, _QWORD*, __int64, __int64))sub_140062650(
		(__int64)v1,
		(unsigned __int64*)"__index",
		7ui64);
	v17 = (unsigned int*)(v1[2] - 16i64);
	v58 = v16;
	LODWORD(v59) = 4;
	sub_14005EA50((__int64)v1, (__int64*)(v15 - 32), (int*)&v58, v17);
	v1[2] -= 16i64;
	v18 = (unsigned __int64*)v60[0];
	v19 = v1[2];
	v20 = v60;
	if (v60[0])
	{
		do
		{
			v21 = v20[1];
			if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
				sub_14005E2C0((__int64)v1);
			v22 = v1[5];
			if (v22 == v1[10])
				v23 = v1[15];
			else
				v23 = *(_QWORD*)(**(_QWORD**)(v22 + 8) + 24i64);
			v24 = sub_140060AB0((__int64)v1, 0, v23);
			v24[4] = v21;
			v25 = v1[2];
			*(_QWORD*)v25 = v24;
			*(_DWORD*)(v25 + 8) = 6;
			v1[2] += 16i64;
			v26 = (__int64*)sub_1400580E0((__int64)v1, -2);
			v27 = -1i64;
			v28 = v26;
			do
				++v27;
			while (*((_BYTE*)v18 + v27));
			v29 = (int* (__fastcall*)(__int64, __int64, _QWORD*, __int64, __int64))sub_140062650((__int64)v1, v18, v27);
			v30 = (unsigned int*)(v1[2] - 16i64);
			v58 = v29;
			LODWORD(v59) = 4;
			sub_14005EA50((__int64)v1, v28, (int*)&v58, v30);
			v1[2] -= 16i64;
			v18 = (unsigned __int64*)v20[2];
			v19 = v1[2];
			v20 += 2;
		} while (v18);
	}
	v1[2] = v19;
	sub_140057020(v1, "ZoneMapWindow", &qword_140B720B8);
	sub_140058710((__int64)v1, (unsigned __int64*)"CodeEnumDisplayMode", 0x13ui64);
	if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
		sub_14005E2C0((__int64)v1);
	v31 = v1[2];
	v32 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v31 + 8) = 5;
	*(_QWORD*)v31 = v32;
	v1[2] += 16i64;
	sub_140058710((__int64)v1, (unsigned __int64*)"SuperPanning", 0xCui64);
	v33 = v1[2];
	*(_QWORD*)v33 = 0x3FF0000000000000i64;
	*(_DWORD*)(v33 + 8) = 3;
	v1[2] += 16i64;
	v34 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v34, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 32i64;
	sub_140058710((__int64)v1, (unsigned __int64*)"Panning", 7ui64);
	v35 = v1[2];
	*(_QWORD*)v35 = 0x4000000000000000i64;
	*(_DWORD*)(v35 + 8) = 3;
	v1[2] += 16i64;
	v36 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v36, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 32i64;
	sub_140058710((__int64)v1, (unsigned __int64*)"Scaled", 6ui64);
	v37 = v1[2];
	*(_QWORD*)v37 = 0x4008000000000000i64;
	*(_DWORD*)(v37 + 8) = 3;
	v1[2] += 16i64;
	v38 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v38, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 32i64;
	sub_140058710((__int64)v1, (unsigned __int64*)"Continent", 9ui64);
	v39 = v1[2];
	*(_QWORD*)v39 = 0x4010000000000000i64;
	*(_DWORD*)(v39 + 8) = 3;
	v1[2] += 16i64;
	v40 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v40, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 32i64;
	sub_140058710((__int64)v1, (unsigned __int64*)"World", 5ui64);
	v41 = v1[2];
	*(_QWORD*)v41 = 0x4014000000000000i64;
	*(_DWORD*)(v41 + 8) = 3;
	v1[2] += 16i64;
	v42 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v42, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 32i64;
	sub_140058710((__int64)v1, (unsigned __int64*)"SolarSystem", 0xBui64);
	v43 = v1[2];
	*(_QWORD*)v43 = 0x4018000000000000i64;
	*(_DWORD*)(v43 + 8) = 3;
	v1[2] += 16i64;
	v44 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v44, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 32i64;
	sub_14005EA50((__int64)v1, (__int64*)(v1[2] - 48i64), (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 48i64;
	v45 = v1[4];
	v46 = (int* (__fastcall*)(__int64, __int64, _QWORD*, __int64, __int64))sub_140062650(
		(__int64)v1,
		(unsigned __int64*)"Apollo.Window",
		0xDui64);
	v47 = v1[2];
	v58 = v46;
	LODWORD(v59) = 4;
	sub_14005E8E0((__int64)v1, v45 + 160, (int*)&v58, v47);
	v1[2] += 16i64;
	v48 = v1[2];
	v49 = *(_DWORD*)(v48 - 8);
	v50 = v48 - 16;
	v51 = v49 - 2;
	if (v51)
	{
		v52 = v51 - 3;
		if (!v52)
			goto LABEL_36;
		v53 = v52 - 1;
		if (!v53)
			goto LABEL_36;
		v54 = v53 - 1;
		if (v54)
		{
			if (v54 != 1)
			{
			LABEL_32:
				v55 = 0i64;
				goto LABEL_37;
			}
			goto LABEL_36;
		}
	}
	v56 = *(_DWORD*)(v50 + 8);
	if (v56 == 2)
	{
	LABEL_36:
		v55 = *(_QWORD*)v50;
		goto LABEL_37;
	}
	if (v56 != 7)
		goto LABEL_32;
	v55 = *(_QWORD*)v50 + 48i64;
LABEL_37:
	v1[2] = v50;
	sub_1400ED720(a1, v13, v55);
	v58 = sub_140538000;
	v57 = sub_140001B30;
	if (!sub_140538000)
		v57 = 0i64;
	v59 = v57;
	sub_1400F85D0(a1 + 2688, (int*)L"ZoneMapWindow", &v58);
}
// 140B13C30: using guessed type wchar_t aZonemapwindow_0[14];
// 140B720B8: using guessed type __int64 qword_140B720B8;
// 140C56A80: using guessed type char *off_140C56A80;
// 140C59F40: using guessed type char *off_140C59F40;

