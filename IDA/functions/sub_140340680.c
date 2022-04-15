#include "../winhttp.h"

//----- (0000000140340680) ----------------------------------------------------
__int64 __fastcall sub_140340680(_DWORD* a1)
{
	double v3; // xmm0_8
	float v4; // xmm6_4
	double v5; // xmm0_8
	unsigned int v6; // eax
	int v7; // edx
	int v8; // ecx
	unsigned int v9; // esi
	int v10; // eax
	int v11; // r8d
	int v12; // eax
	int v13; // ebx
	int v14; // edi
	int v15; // r8d
	int v16; // eax
	__int64 k; // rax
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 m; // rax
	__int64 v21; // rcx
	__int64 i; // rax
	__int64 j; // rax
	int v24; // edx
	int v25; // r8d
	int v26; // eax
	__int64 ii; // rax
	int v28; // eax
	float v29; // xmm1_4
	int v30; // eax
	int v31; // ebx
	__int64 v32; // rcx
	__int64 n; // rax
	__int64 v34; // rcx
	int v35; // eax
	__int64 v36; // rax
	float(__fastcall * v37)(char*, __int64, __int64); // rdx
	__int128 v38[4]; // [rsp+20h] [rbp-68h] BYREF

	if (dword_140C63730)
		return 2147500036i64;
	(*(void (**)(void))(*(_QWORD*)qword_140C65858 + 104i64))();
	sub_140347740();
	v3 = (*(double(__fastcall**)(_DWORD*, __int64))(*(_QWORD*)a1 + 416i64))(a1, 1i64);
	v4 = *(float*)&v3;
	v5 = (*(double(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)a1 + 416i64))(a1, 0i64);
	if ((dword_140DC0E90 & 1) == 0)
	{
		dword_140DC0E90 |= 1u;
		sub_1401AD510((__int64)&unk_140DC0EA0, L"Media Pool");
	}
	sub_1401AD8F0((__int64)&unk_140DC0EA0, v4);
	if ((dword_140DC0E90 & 2) == 0)
	{
		dword_140DC0E90 |= 2u;
		sub_1401AD510((__int64)&unk_140DC0FC0, L"Default Pool");
	}
	sub_1401AD8F0((__int64)&unk_140DC0FC0, *(float*)&v5);
	v6 = sub_14018CDF0();
	v7 = *(_DWORD*)qword_140C63750;
	v8 = dword_140C42D00;
	v9 = v6;
	if (*(_DWORD*)qword_140C63750 < dword_140C42D00)
		v8 = *(_DWORD*)qword_140C63750;
	if (v4 > dword_140C42D10[v8])
	{
		v10 = dword_140C42C70;
		if (v7 < dword_140C42C70)
			v10 = *(_DWORD*)qword_140C63750;
		if (v4 >= *(float*)&dword_140C42C80[v10])
		{
			for (i = sub_140340FB0(); i; i = sub_140340FB0())
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)i + 104i64))(i, 1i64);
			for (j = sub_140340D60(); j; j = sub_140340D60())
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)j + 56i64))(j, 1i64);
		}
		else
		{
			v11 = dword_140C42A90;
			v12 = dword_140C42A90;
			if (v7 < dword_140C42A90)
				v12 = *(_DWORD*)qword_140C63750;
			v13 = 0;
			if (v9 <= dword_140C42AA0[v12])
			{
				v14 = 0;
			}
			else
			{
				if (v7 < dword_140C42A90)
					v11 = *(_DWORD*)qword_140C63750;
				v14 = v9 - dword_140C42AA0[v11];
			}
			v15 = dword_140C42B20;
			v16 = dword_140C42B20;
			if (v7 < dword_140C42B20)
				v16 = *(_DWORD*)qword_140C63750;
			if (v9 > dword_140C42B30[v16])
			{
				if (v7 < dword_140C42B20)
					v15 = *(_DWORD*)qword_140C63750;
				v13 = v9 - dword_140C42B30[v15];
			}
			for (k = sub_140340E70(v16, v14); k; k = sub_140340E70(v19, v14))
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)k + 104i64))(k, 1i64);
			for (m = sub_140340C20(v18, v13); m; m = sub_140340C20(v21, v13))
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)m + 56i64))(m, 1i64);
		}
	}
	v24 = dword_140C42C10;
	v25 = *(_DWORD*)qword_140C63750;
	v26 = dword_140C42C10;
	if (*(_DWORD*)qword_140C63750 < dword_140C42C10)
		v26 = *(_DWORD*)qword_140C63750;
	if (dword_140C65860 <= (unsigned int)dword_140C42C20[v26])
	{
		v28 = dword_140C42C10;
		if (v25 < dword_140C42C10)
			v28 = *(_DWORD*)qword_140C63750;
		v29 = (float)dword_140C42C20[v28];
		v30 = dword_140C42BB0;
		if (v25 < dword_140C42BB0)
			v30 = *(_DWORD*)qword_140C63750;
		if (v25 < dword_140C42C10)
			v24 = *(_DWORD*)qword_140C63750;
		v31 = (int)(float)((float)((float)(v29 - (float)dword_140C65860) * (float)dword_140C42BC0[v30])
			/ (float)dword_140C42C20[v24]);
		if ((dword_140DC0E90 & 4) == 0)
		{
			dword_140DC0E90 |= 4u;
			sub_1401AD620((__int64)&unk_140DC10E0, L"Object Cache Time");
		}
		sub_1401ADA40((__int64)&unk_140DC10E0, v31);
		for (n = sub_1403410C0(v32, v9 - v31); n; n = sub_1403410C0(v34, v9 - dword_140C42BC0[v35]))
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)n + 240i64))(n, 1i64);
			v34 = *(unsigned int*)qword_140C63750;
			v35 = dword_140C42BB0;
			if ((int)v34 < dword_140C42BB0)
				v35 = *(_DWORD*)qword_140C63750;
		}
	}
	else
	{
		for (ii = sub_140341200(); ii; ii = sub_140341200())
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)ii + 240i64))(ii, 1i64);
	}
	v36 = *(_QWORD*)a1;
	v38[0] = xmmword_140C7A030;
	v38[1] = xmmword_140C7A040;
	v38[2] = 0i64;
	v38[3] = xmmword_140C7A060;
	(*(void(__fastcall**)(_DWORD*, __int128*))(v36 + 392))(a1, v38);
	v37 = (float(__fastcall*)(char*, __int64, __int64))sub_14033FC60;
	if ((_mm_movemask_ps(_mm_cmpneq_ps((__m128)xmmword_140C7A050, (__m128)xmmword_140C7A060)) & 7) != 0)
		v37 = (float(__fastcall*)(char*, __int64, __int64))sub_14033FCA0;
	sub_140343380((__int64)&xmmword_140C7A030, v37);
	sub_140348CD0();
	a1[6] = sub_14018CDF0();
	return (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 360i64))(a1);
}
// 140340843: variable 'v19' is possibly undefined
// 14034084F: variable 'v18' is possibly undefined
// 140340872: variable 'v21' is possibly undefined
// 1403409C8: variable 'v32' is possibly undefined
// 140AF4438: using guessed type wchar_t aDefaultPool[13];
// 140AF4458: using guessed type wchar_t aMediaPool[11];
// 140AF4470: using guessed type wchar_t aObjectCacheTim[18];
// 140C42A90: using guessed type int dword_140C42A90;
// 140C42AA0: using guessed type int dword_140C42AA0[28];
// 140C42B20: using guessed type int dword_140C42B20;
// 140C42B30: using guessed type int dword_140C42B30[28];
// 140C42BB0: using guessed type int dword_140C42BB0;
// 140C42BC0: using guessed type int dword_140C42BC0[16];
// 140C42C10: using guessed type int dword_140C42C10;
// 140C42C20: using guessed type int dword_140C42C20[14];
// 140C42C70: using guessed type int dword_140C42C70;
// 140C42C80: using guessed type int dword_140C42C80[];
// 140C42D00: using guessed type int dword_140C42D00;
// 140C42D10: using guessed type float dword_140C42D10[28];
// 140C63730: using guessed type int dword_140C63730;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65858: using guessed type __int64 qword_140C65858;
// 140C65860: using guessed type int dword_140C65860;
// 140C7A030: using guessed type __int128 xmmword_140C7A030;
// 140C7A040: using guessed type __int128 xmmword_140C7A040;
// 140C7A050: using guessed type __int128 xmmword_140C7A050;
// 140C7A060: using guessed type __int128 xmmword_140C7A060;
// 140DC0E90: using guessed type int dword_140DC0E90;

