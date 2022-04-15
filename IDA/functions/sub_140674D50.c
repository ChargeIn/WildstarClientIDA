#include "../winhttp.h"

//----- (0000000140674D50) ----------------------------------------------------
void __fastcall sub_140674D50(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rax
	int v7; // edx
	unsigned int* i; // rcx
	unsigned int v9; // eax
	float v10; // xmm6_4
	float v11; // xmm7_4
	float v12; // xmm8_4
	__int64 v13; // rax
	__int64 v14; // rax
	float* v15; // rcx
	__int64 v16; // r8
	__int64 v17; // rdi
	__int64 v18; // rbx
	__int64 v19; // rax
	int v20; // esi
	_QWORD* v21; // rax
	__int64 v22; // rdx
	int v23; // r10d
	_QWORD* v24; // rax
	__int64 v25; // r10
	__int64 v26; // rdx
	int v27; // r11d
	_QWORD* v28; // rax
	__int64 v29; // r10
	unsigned __int64* v30; // rdx
	unsigned __int64 v31; // rbx
	unsigned __int64 v32; // r8
	__int64 v33; // rax
	__int64* v34; // rax
	_QWORD* v35; // rax
	__int64 v36; // r10
	unsigned __int64* v37; // rdx
	unsigned __int64 v38; // r8
	__int64 v39; // rax
	__int64* v40; // rax
	_QWORD* v41; // rax
	__int64 v42; // r10
	unsigned __int64* v43; // rdx
	__int64 v44; // rax
	__int64* v45; // rax
	__int64 v46; // rdx
	__int64 v47; // [rsp+20h] [rbp-58h] BYREF
	__int64 v48; // [rsp+28h] [rbp-50h]

	if (*(_DWORD*)(a1 + 1344))
	{
		v4 = *(_QWORD*)(a1 + 168);
		if (v4)
		{
			if (sub_140244280(*(_DWORD*)(v4 + 452)))
			{
				v5 = *(_DWORD*)(a1 + 1344) ? *(_QWORD*)(a1 + 168) : 0i64;
				v6 = sub_140244280(*(_DWORD*)(v5 + 452));
				if (v6)
				{
					v7 = 0;
					for (i = (unsigned int*)(v6 + 12); ; ++i)
					{
						v9 = *i;
						if (*i > 0xA && v9 != 14 && v9 < 0x11)
							break;
						if ((unsigned int)++v7 >= 5)
							return;
					}
					v10 = 1.0;
					v11 = 1.0;
					v12 = 1.0;
					if (*(_DWORD*)(a1 + 1344))
						v13 = *(_QWORD*)(a1 + 168);
					else
						v13 = 0i64;
					v14 = sub_140244280(*(_DWORD*)(v13 + 452));
					if (v14)
					{
						v15 = (float*)(v14 + 32);
						v16 = 5i64;
						do
						{
							switch (*((_DWORD*)v15 - 5))
							{
							case 0xB:
								v11 = v11 * *v15;
								break;
							case 0xC:
								v10 = v10 * *v15;
								break;
							case 0xD:
								v12 = v12 * *v15;
								break;
							}
							++v15;
							--v16;
						} while (v16);
					}
					v17 = *(_QWORD*)a1;
					if (*(_QWORD*)(*(_QWORD*)(v17 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v17 + 32) + 112i64))
						sub_14005E2C0(v17);
					v18 = *(_QWORD*)(v17 + 16);
					v19 = sub_14005C1B0(v17, 0, 0);
					*(_DWORD*)(v18 + 8) = 5;
					*(_QWORD*)v18 = v19;
					*(_QWORD*)(v17 + 16) += 16i64;
					v20 = sub_1400578C0(v17);
					v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v17 + 32) + 160i64), v20);
					v22 = *(_QWORD*)(v17 + 16);
					*(_QWORD*)v22 = *v21;
					*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
					*(_QWORD*)(v17 + 16) += 16i64;
					sub_1400F06F0(v17, v22, L"eTradeskill", v23);
					*(_QWORD*)(v17 + 16) -= 16i64;
					v24 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v17 + 32) + 160i64), v20);
					*(_QWORD*)v25 = *v24;
					*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
					*(_QWORD*)(v17 + 16) += 16i64;
					sub_1400F06F0(v17, v26, L"nTier", v27);
					*(_QWORD*)(v17 + 16) -= 16i64;
					v28 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v17 + 32) + 160i64), v20);
					*(_QWORD*)v29 = *v28;
					*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
					*(_QWORD*)(v17 + 16) += 16i64;
					v30 = (unsigned __int64*)sub_14018F0E0(&v47, L"nCraftMultiplier")[1];
					v31 = -1i64;
					if (v30)
					{
						v32 = -1i64;
						do
							++v32;
						while (*((_BYTE*)v30 + v32));
						sub_140058710(v17, v30, v32);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v17 + 16) + 8i64) = 0;
						*(_QWORD*)(v17 + 16) += 16i64;
					}
					if (v48)
						sub_14018B900(v48, 0);
					v33 = *(_QWORD*)(v17 + 16);
					*(_DWORD*)(v33 + 8) = 3;
					*(double*)v33 = v10;
					*(_QWORD*)(v17 + 16) += 16i64;
					v34 = (__int64*)sub_1400580E0(v17, -3);
					sub_14005EA50(
						v17,
						v34,
						(int*)(*(_QWORD*)(v17 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(v17 + 16) - 16i64));
					*(_QWORD*)(v17 + 16) -= 48i64;
					v35 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v17 + 32) + 160i64), v20);
					*(_QWORD*)v36 = *v35;
					*(_DWORD*)(v36 + 8) = *((_DWORD*)v35 + 2);
					*(_QWORD*)(v17 + 16) += 16i64;
					v37 = (unsigned __int64*)sub_14018F0E0(&v47, L"nCritMultiplier")[1];
					if (v37)
					{
						v38 = -1i64;
						do
							++v38;
						while (*((_BYTE*)v37 + v38));
						sub_140058710(v17, v37, v38);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v17 + 16) + 8i64) = 0;
						*(_QWORD*)(v17 + 16) += 16i64;
					}
					if (v48)
						sub_14018B900(v48, 0);
					v39 = *(_QWORD*)(v17 + 16);
					*(_DWORD*)(v39 + 8) = 3;
					*(double*)v39 = v11;
					*(_QWORD*)(v17 + 16) += 16i64;
					v40 = (__int64*)sub_1400580E0(v17, -3);
					sub_14005EA50(
						v17,
						v40,
						(int*)(*(_QWORD*)(v17 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(v17 + 16) - 16i64));
					*(_QWORD*)(v17 + 16) -= 48i64;
					v41 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v17 + 32) + 160i64), v20);
					*(_QWORD*)v42 = *v41;
					*(_DWORD*)(v42 + 8) = *((_DWORD*)v41 + 2);
					*(_QWORD*)(v17 + 16) += 16i64;
					v43 = (unsigned __int64*)sub_14018F0E0(&v47, L"nDiscoveryMultiplier")[1];
					if (v43)
					{
						do
							++v31;
						while (*((_BYTE*)v43 + v31));
						sub_140058710(v17, v43, v31);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v17 + 16) + 8i64) = 0;
						*(_QWORD*)(v17 + 16) += 16i64;
					}
					if (v48)
						sub_14018B900(v48, 0);
					v44 = *(_QWORD*)(v17 + 16);
					*(_DWORD*)(v44 + 8) = 3;
					*(double*)v44 = v12;
					*(_QWORD*)(v17 + 16) += 16i64;
					v45 = (__int64*)sub_1400580E0(v17, -3);
					sub_14005EA50(
						v17,
						v45,
						(int*)(*(_QWORD*)(v17 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(v17 + 16) - 16i64));
					*(_QWORD*)(v17 + 16) -= 48i64;
					sub_1400FB2A0(a2, (__int64)L"tCatalyst", v20);
					sub_1400579E0(v17, v46, v20);
				}
			}
		}
	}
}
// 140674EF5: variable 'v23' is possibly undefined
// 140674F26: variable 'v25' is possibly undefined
// 140674F38: variable 'v26' is possibly undefined
// 140674F38: variable 'v27' is possibly undefined
// 140674F62: variable 'v29' is possibly undefined
// 140675027: variable 'v36' is possibly undefined
// 1406750E7: variable 'v42' is possibly undefined
// 1406751AA: variable 'v46' is possibly undefined
// 140B2FE20: using guessed type wchar_t aNcritmultiplie[16];
// 140B2FE40: using guessed type wchar_t aNdiscoverymult[21];
// 140B2FE70: using guessed type wchar_t aNtier_5[6];
// 140B2FE80: using guessed type wchar_t aNcraftmultipli[17];
// 140B2FEC0: using guessed type wchar_t aEtradeskill_0[12];
// 140B30120: using guessed type wchar_t aTcatalyst[10];

