#include "../winhttp.h"

//----- (0000000140397CE0) ----------------------------------------------------
void __fastcall sub_140397CE0(__int64 a1)
{
	__int64 v1; // rax
	int v3; // edi
	__int64 v4; // rax
	__int64 v5; // rbp
	__int64 v6; // rax
	unsigned int v7; // ecx
	__int64 v8; // rax
	unsigned int v9; // edi
	__int64 v10; // rsi
	__int64 v11; // rax
	__int64 v12; // rcx
	int v13; // eax
	__int64 v14; // rax
	int v15; // ecx
	__int64 v16; // r8
	int v17; // edx
	int v18; // eax
	__int64 v19; // rcx
	int v20; // edi
	__int64 v21; // rbx
	float v22; // xmm6_4
	int v23; // eax
	int v24; // eax
	int v25; // ebp
	__int64 v26; // [rsp+40h] [rbp-118h] BYREF
	__int64 v27; // [rsp+48h] [rbp-110h]
	__int128 v28; // [rsp+50h] [rbp-108h]
	int v29[52]; // [rsp+60h] [rbp-F8h] BYREF
	int v30; // [rsp+160h] [rbp+8h] BYREF

	v1 = *(_QWORD*)(a1 + 25744);
	if (!v1 || !*(_DWORD*)(v1 + 684))
	{
		v3 = 0;
		if (v1)
			v3 = *(_DWORD*)(v1 + 264);
		v4 = sub_1403D90D0(a1, v3);
		v5 = v4;
		if (v4)
		{
			if (*(_DWORD*)(v4 + 128) == 20
				&& *(_DWORD*)(v4 + 592)
				&& (unsigned int)sub_14045A950(*(_QWORD*)(a1 + 120), v3))
			{
				v6 = *(_QWORD*)(a1 + 120);
				v7 = v6 ? *(_DWORD*)(v6 + 220) : 23;
				v8 = sub_1401F31E0(v7);
				if (v8)
				{
					v9 = *(_DWORD*)(v8 + 84);
					v10 = sub_1403ACD90(qword_140C65B70, v9, *(_QWORD*)(a1 + 120));
					if (v10)
					{
						if (*(_DWORD*)(*(_QWORD*)(a1 + 25744) + 460i64))
						{
							sub_1403A2550(a1);
							*(_DWORD*)(a1 + 26184) = 8;
							LODWORD(v26) = 0;
							v11 = sub_14001C280(a1);
							v12 = *(_QWORD*)(a1 + 25744);
							*((_QWORD*)&v28 + 1) = 0i64;
							v27 = v11;
							*(_QWORD*)&v28 = sub_14039EA90;
							v13 = sub_1404720D0(v12);
							sub_140195960(a1 + 26200, v13, (__int64)&v26, 4);
							return;
						}
						sub_1407E4830(v29, 0i64, 0xC8ui64);
						v14 = *(_QWORD*)(v10 + 112);
						v29[0] = v9;
						v15 = *(_DWORD*)(v14 + 24);
						v29[22] = 1;
						v30 = 0;
						if (((v15 - 2) & 0xFFFFFFFA) != 0
							|| v15 == 3
							|| (v10 = sub_1403BFD60(a1, (unsigned int*)v29, &v30, 0)) != 0 && (!v30 || v30 == 317))
						{
							v16 = *(_QWORD*)(a1 + 120);
							v17 = **(_DWORD**)(v10 + 112);
							v26 = 0i64;
							*(_QWORD*)((char*)&v28 + 4) = 0i64;
							LODWORD(v28) = 0;
							HIDWORD(v28) = 96;
							v27 = 0i64;
							v18 = sub_1403986F0((__int64)&v26, v17, v16, v5, 0i64, 0i64, (__int64)&v26, 1);
							v20 = v18;
							if (v18 == 105)
							{
								v21 = a1 + 28848;
								v22 = fmaxf(0.1, *(float*)(*(_QWORD*)(v10 + 112) + 112i64));
								v23 = dword_140C4D2A0;
								if (*(_DWORD*)qword_140C63750 < dword_140C4D2A0)
									v23 = *(_DWORD*)qword_140C63750;
								if (*((_BYTE*)&dword_140C4D2B0 + v23) && *(_QWORD*)(qword_140C65898 + 25744))
								{
									sub_1405598D0(v21);
									*(_DWORD*)(v21 + 4) = 2;
									v24 = *(_DWORD*)(v5 + 8);
									*(float*)(v21 + 60) = v22;
									*(_DWORD*)(v21 + 12) = v24;
									*(_DWORD*)(v21 + 84) = 3;
									sub_140559920(v21);
								}
								goto LABEL_39;
							}
							if (!v18 || v18 == 317)
							{
								v25 = sub_1403986F0(v19, **(_DWORD**)(v10 + 112), *(_QWORD*)(a1 + 120), v5, 0i64, 0i64, 0i64, 1);
								if (sub_14047BFD0(*(_QWORD*)(a1 + 120)) && ((v25 - 67) & 0xFFFFFFFD) == 0)
								{
									*(_DWORD*)(a1 + 26184) = 8;
									sub_14039E400(a1);
								LABEL_39:
									if (v26)
										(*(void(__fastcall**)(__int64))(*(_QWORD*)(v26 - 16) + 8i64))(v26 - 16);
									return;
								}
								if (*(_DWORD*)(a1 + 28856))
									sub_1405598D0(a1 + 28848);
							}
							if (!v20 || v20 == 317)
							{
								LOBYTE(v30) = 0;
								sub_1403F4900(a1, 0xE4u, (__int64)&v30);
								if (v20 != 317)
									sub_14046AFC0(*(_QWORD*)(a1 + 120), v10, 0i64);
							}
							else
							{
								sub_1403A12A0(a1, v20, v10, 0);
							}
							goto LABEL_39;
						}
					}
				}
			}
		}
	}
}
// 140397FB3: variable 'v19' is possibly undefined
// 14039EA90: using guessed type __int64 __fastcall sub_14039EA90();
// 140559920: using guessed type __int64 __fastcall sub_140559920(_QWORD);
// 140C4D2A0: using guessed type int dword_140C4D2A0;
// 140C4D2B0: using guessed type int dword_140C4D2B0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

