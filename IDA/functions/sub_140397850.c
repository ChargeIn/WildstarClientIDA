#include "../winhttp.h"

//----- (0000000140397850) ----------------------------------------------------
void __fastcall sub_140397850(__int64 a1, int a2, __int64 a3)
{
	__int64 v3; // rax
	int v7; // edx
	__int64 v8; // rax
	__int64 v9; // r15
	__int64 v10; // rcx
	unsigned int v11; // ecx
	__int64 v12; // rax
	__int64 v13; // rsi
	__int64 v14; // rax
	__int64 v15; // r8
	__int64 v16; // rax
	unsigned int v17; // esi
	__int64 v18; // r14
	int v19; // ecx
	__int64 v20; // rax
	int v21; // ecx
	__int64 v22; // rax
	__int64 v23; // rcx
	int v24; // eax
	__int64 v25; // r8
	int v26; // edx
	int v27; // eax
	int v28; // esi
	__int64 v29; // rbx
	float v30; // xmm6_4
	int v31; // eax
	int v32; // eax
	__int64 v33; // rcx
	int v34; // eax
	__int64 v35; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v36; // [rsp+48h] [rbp-B8h]
	__int128 v37; // [rsp+50h] [rbp-B0h]
	int v38[52]; // [rsp+60h] [rbp-A0h] BYREF
	int v39; // [rsp+180h] [rbp+80h] BYREF
	int v40; // [rsp+198h] [rbp+98h] BYREF
	int v41; // [rsp+19Ch] [rbp+9Ch]

	v3 = *(_QWORD*)(a1 + 25744);
	v39 = 0;
	v7 = 0;
	if (v3)
		v7 = *(_DWORD*)(v3 + 264);
	v8 = sub_1403D90D0(a1, v7);
	v9 = v8;
	if (v8)
	{
		v10 = *(_QWORD*)(v8 + 24);
		if (v10)
		{
			v11 = *(_DWORD*)(v10 + 168);
			if (v11)
			{
				v12 = sub_140244B00(v11);
				v13 = v12;
				if (v12)
				{
					v14 = sub_140246480(*(_DWORD*)(v12 + 4));
					if (v14)
					{
						if (*(_DWORD*)(v14 + 4) != 20)
						{
							v15 = *(unsigned int*)(v13 + 8);
							if ((_DWORD)v15
								&& !(*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _DWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 32i64))(
									qword_140C659A0,
									*(_QWORD*)(a1 + 120),
									v15,
									0i64,
									0,
									0))
							{
								return;
							}
							v40 = 0;
							v41 = 6;
							v16 = sub_1403AC780(a1 + 160, &v40);
							if (v16)
							{
								sub_1403998E0(qword_140C65898, v16 + 32, 0i64, 0i64);
								return;
							}
						}
					}
				}
			}
		}
		v17 = sub_140397740(a1);
		v18 = sub_1403ACD90(qword_140C65B70, v17, *(_QWORD*)(a1 + 120));
		if (!v18)
			return;
		v19 = dword_140C45E40;
		if (*(_DWORD*)qword_140C63750 < dword_140C45E40)
			v19 = *(_DWORD*)qword_140C63750;
		if (*((_BYTE*)&dword_140C45E50 + v19))
		{
			if (a2 == 2)
			{
				*(_DWORD*)(a1 + 25444) = v17;
			}
			else if (a3 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a3 + 168i64))(a3) == 2)
			{
				*(_DWORD*)(a1 + 25444) = 0;
				return;
			}
		}
		sub_1407E4830(v38, 0i64, 0xC8ui64);
		v20 = *(_QWORD*)(v18 + 112);
		v38[0] = v17;
		v21 = *(_DWORD*)(v20 + 24);
		v38[22] = 1;
		if (((v21 - 2) & 0xFFFFFFFA) != 0
			|| v21 == 3
			|| (v18 = sub_1403BFD60(a1, (unsigned int*)v38, &v39, 0)) != 0 && (!v39 || v39 == 317))
		{
			if (*(_DWORD*)(*(_QWORD*)(a1 + 25744) + 460i64))
			{
				sub_1403A2550(a1);
				*(_DWORD*)(a1 + 26184) = 7;
				LODWORD(v35) = 0;
				v22 = sub_14001C280(a1);
				v23 = *(_QWORD*)(a1 + 25744);
				*((_QWORD*)&v37 + 1) = 0i64;
				v36 = v22;
				*(_QWORD*)&v37 = sub_14039EA90;
				v24 = sub_1404720D0(v23);
				sub_140195960(a1 + 26200, v24, (__int64)&v35, 4);
				return;
			}
			v25 = *(_QWORD*)(a1 + 120);
			v26 = **(_DWORD**)(v18 + 112);
			v35 = 0i64;
			*(_QWORD*)((char*)&v37 + 4) = 0i64;
			LODWORD(v37) = 0;
			HIDWORD(v37) = 96;
			v36 = 0i64;
			v27 = sub_1403986F0((__int64)&v35, v26, v25, v9, 0i64, 0i64, (__int64)&v35, 1);
			v28 = v27;
			if (v27 == 105)
			{
				v29 = a1 + 28848;
				v30 = fmaxf(1.0, *(float*)(*(_QWORD*)(v18 + 112) + 112i64) - 1.0);
				v31 = dword_140C4D2A0;
				if (*(_DWORD*)qword_140C63750 < dword_140C4D2A0)
					v31 = *(_DWORD*)qword_140C63750;
				if (*((_BYTE*)&dword_140C4D2B0 + v31) && *(_QWORD*)(qword_140C65898 + 25744))
				{
					sub_1405598D0(v29);
					*(_DWORD*)(v29 + 4) = 2;
					v32 = *(_DWORD*)(v9 + 8);
					*(float*)(v29 + 60) = v30;
					*(_DWORD*)(v29 + 12) = v32;
					*(_DWORD*)(v29 + 84) = 1;
					sub_140559920(v29);
				}
				goto LABEL_53;
			}
			if (!v27 || v27 == 317)
			{
				if (sub_14047BFD0(*(_QWORD*)(a1 + 120))
					&& (((unsigned int)sub_1403986F0(
						v33,
						**(_DWORD**)(v18 + 112),
						*(_QWORD*)(a1 + 120),
						v9,
						0i64,
						0i64,
						0i64,
						1)
						- 67) & 0xFFFFFFFD) == 0)
				{
					*(_DWORD*)(a1 + 26184) = 7;
					sub_14039E400(a1);
				LABEL_53:
					if (v35)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v35 - 16) + 8i64))(v35 - 16);
					return;
				}
				if (*(_DWORD*)(a1 + 28856))
					sub_1405598D0(a1 + 28848);
				if (v28 != 317)
					sub_14046AFC0(*(_QWORD*)(a1 + 120), v18, 0i64);
			}
			if (!v28 || v28 == 317)
			{
				v39 = 0;
				v34 = dword_140C45E80;
				if (*(_DWORD*)qword_140C63750 < dword_140C45E80)
					v34 = *(_DWORD*)qword_140C63750;
				if (!*((_BYTE*)&dword_140C45E90 + v34) || (v39 = 0, *(_DWORD*)(a1 + 25444)))
					v39 = 1;
				sub_1403F4900(a1, 0xE3u, (__int64)&v39);
			}
			goto LABEL_53;
		}
	}
}
// 140397BF1: variable 'v33' is possibly undefined
// 1403998E0: using guessed type __int64 __fastcall sub_1403998E0(_QWORD, _QWORD, _QWORD, _QWORD);
// 14039EA90: using guessed type __int64 __fastcall sub_14039EA90();
// 140559920: using guessed type __int64 __fastcall sub_140559920(_QWORD);
// 140C45E40: using guessed type int dword_140C45E40;
// 140C45E50: using guessed type int dword_140C45E50;
// 140C45E80: using guessed type int dword_140C45E80;
// 140C45E90: using guessed type int dword_140C45E90;
// 140C4D2A0: using guessed type int dword_140C4D2A0;
// 140C4D2B0: using guessed type int dword_140C4D2B0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B70: using guessed type __int64 qword_140C65B70;

