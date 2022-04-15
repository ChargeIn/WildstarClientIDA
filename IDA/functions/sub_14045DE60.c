#include "../winhttp.h"

//----- (000000014045DE60) ----------------------------------------------------
void __fastcall sub_14045DE60(__int64 a1, _DWORD* a2)
{
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rsi
	int v7; // eax
	__int64 v8; // rax
	__int64 v9; // rdx
	int v10; // eax
	int v11; // eax
	__int64 v12; // rax
	int v13; // ecx
	__int64 v14; // rcx
	__int64 v15; // rax
	unsigned int v16; // edx
	__int64 v17; // rax
	int v18; // edi
	__int64 v19; // rcx
	__int64 v20; // rax
	int v21; // xmm0_4
	float v22; // xmm1_4
	int v23; // [rsp+40h] [rbp-28h] BYREF
	__int64 v24; // [rsp+48h] [rbp-20h]
	__int64(__fastcall * v25)(_QWORD); // [rsp+50h] [rbp-18h]
	__int64 v26; // [rsp+58h] [rbp-10h]

	if (a2)
	{
		sub_1400035B0();
		v6 = sub_1404CC920(v4, a2[4]);
		v7 = *(_DWORD*)(a1 + 128);
		if (v7 == 20 || v7 == 23)
		{
			v9 = a1;
		}
		else
		{
			v8 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 688));
			v9 = v8;
			if (!v8 || (v10 = *(_DWORD*)(v8 + 128), v10 != 20) && v10 != 23)
				v9 = 0i64;
		}
		switch (a2[2])
		{
		case 0:
			if (sub_140396880(v5, v9))
				sub_1403A81E0(v19, a2[10]);
			break;
		case 3:
		case 0x18:
			v11 = *(_DWORD*)(a1 + 128);
			if (v11 != 20 && v11 != 23)
			{
				v12 = *(_QWORD*)(a1 + 24);
				if (v12)
				{
					v13 = *(_DWORD*)(v12 + 324);
					if (v13)
					{
						*(_DWORD*)(a1 + 1284) = v13;
						v14 = *(_QWORD*)(a1 + 3264);
						if (v14)
						{
							(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v14 + 80i64))(v14, 20i64, 0i64);
							*(_DWORD*)(a1 + 244) = 1;
							sub_1404718E0(a1, 0, 0, 1, 1);
							sub_140472D80(a1);
						}
					}
				}
			}
			break;
		case 8:
			if ((dword_140DC2910 & 2) != 0)
			{
				v18 = dword_140DC2918;
			}
			else
			{
				dword_140DC2910 |= 2u;
				v17 = sub_140200220(0x266u);
				if (v17)
				{
					v18 = *(_DWORD*)(v17 + 4);
					dword_140DC2918 = v18;
				}
				else
				{
					v18 = 250;
					dword_140DC2918 = 250;
				}
			}
			if (v6)
				v18 = *(_DWORD*)(v6 + 8);
			if (*(_QWORD*)(a1 + 1224))
				sub_140195D70(a1 + 1208);
			if (v18)
			{
				v23 = 0;
				v25 = nullsub_1;
				v24 = a1;
				v26 = 0i64;
				sub_140195960(a1 + 1208, v18, (__int64)&v23, 4);
			}
			break;
		case 0xB:
			if (sub_140396880(v5, v9))
				sub_1403A8080();
			break;
		case 0xF:
			if (sub_140396880(v5, v9))
			{
				if ((dword_140DC2910 & 1) != 0)
				{
					v16 = dword_140DC2914;
				}
				else
				{
					dword_140DC2910 |= 1u;
					v15 = sub_140200220(0x267u);
					if (v15)
					{
						v16 = *(_DWORD*)(v15 + 4);
						dword_140DC2914 = v16;
					}
					else
					{
						v16 = 2;
						dword_140DC2914 = 2;
					}
				}
				if (v6)
					v16 = *(_DWORD*)(v6 + 8);
				*(_DWORD*)(a1 + 1280) = v16;
				if (v16)
					sub_1403EB430(qword_140C65898, v16, a2[10], 0, 0);
			}
			break;
		case 0x14:
			if ((dword_140DC2910 & 4) != 0)
			{
				v21 = dword_140DC291C;
			}
			else
			{
				dword_140DC2910 |= 4u;
				v20 = sub_140200220(0x3DCu);
				if (v20)
				{
					v21 = *(_DWORD*)(v20 + 24);
					dword_140DC291C = v21;
				}
				else
				{
					v21 = 1092616192;
					dword_140DC291C = 1092616192;
				}
			}
			*(_DWORD*)(a1 + 1288) = v21;
			if (v6)
			{
				v22 = *(float*)(v6 + 28);
				if (v22 != 0.0)
					*(float*)(a1 + 1288) = v22;
			}
			break;
		default:
			return;
		}
	}
}
// 14045DEBD: variable 'v4' is possibly undefined
// 14045DFB4: variable 'v5' is possibly undefined
// 14045E100: variable 'v19' is possibly undefined
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC2910: using guessed type int dword_140DC2910;
// 140DC2914: using guessed type int dword_140DC2914;
// 140DC2918: using guessed type int dword_140DC2918;
// 140DC291C: using guessed type int dword_140DC291C;

