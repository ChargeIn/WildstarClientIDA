#include "../winhttp.h"

//----- (000000014041AA90) ----------------------------------------------------
__int64 __fastcall sub_14041AA90(_QWORD* a1)
{
	int* v2; // rax
	int* v3; // rbx
	unsigned int v4; // ecx
	__int64 v5; // rax
	unsigned int v6; // ecx
	unsigned int* v7; // rdx
	unsigned int v8; // eax
	__int64 result; // rax
	float v10; // xmm6_4
	float v11; // xmm7_4
	float v12; // xmm8_4
	__int64 v13; // rax
	float* v14; // rcx
	__int64 v15; // r8
	__int64 v16; // rbx
	__int64 v17; // rax
	int v18; // r14d
	_QWORD* v19; // rax
	__int64 v20; // rdx
	int v21; // r10d
	_QWORD* v22; // rax
	__int64 v23; // r10
	__int64 v24; // rdx
	int v25; // r11d
	_QWORD* v26; // rax
	__int64 v27; // r10
	unsigned __int64* v28; // rdx
	unsigned __int64 v29; // rbx
	unsigned __int64 v30; // r8
	__int64 v31; // rax
	__int64* v32; // rax
	_QWORD* v33; // rax
	__int64 v34; // r10
	unsigned __int64* v35; // rdx
	unsigned __int64 v36; // r8
	__int64 v37; // rax
	__int64* v38; // rax
	_QWORD* v39; // rax
	__int64 v40; // r10
	unsigned __int64* v41; // rdx
	__int64 v42; // rax
	__int64* v43; // rax
	_QWORD* v44; // rax
	__int64 v45; // r10
	__int64 v46; // rdx
	__int64 v47; // [rsp+20h] [rbp-58h] BYREF
	__int64 v48; // [rsp+28h] [rbp-50h]

	v2 = sub_140417BF0(a1, 1u);
	v3 = v2;
	if (v2 && (v4 = v2[113]) != 0)
	{
		v5 = sub_140244280(v4);
		if (v5)
		{
			v6 = 0;
			v7 = (unsigned int*)(v5 + 12);
			while (1)
			{
				v8 = *v7;
				if (*v7 > 0xA && v8 != 14 && v8 < 0x11)
					break;
				++v6;
				++v7;
				if (v6 >= 5)
					goto LABEL_9;
			}
			if (sub_140244280(v3[113]))
			{
				v10 = 1.0;
				v11 = 1.0;
				v12 = 1.0;
				v13 = sub_140244280(v3[113]);
				if (v13)
				{
					v14 = (float*)(v13 + 32);
					v15 = 5i64;
					do
					{
						switch (*((_DWORD*)v14 - 5))
						{
						case 0xB:
							v11 = v11 * *v14;
							break;
						case 0xC:
							v10 = v10 * *v14;
							break;
						case 0xD:
							v12 = v12 * *v14;
							break;
						}
						++v14;
						--v15;
					} while (v15);
				}
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v16 = a1[2];
				v17 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v16 + 8) = 5;
				*(_QWORD*)v16 = v17;
				a1[2] += 16i64;
				v18 = sub_1400578C0((__int64)a1);
				v19 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v18);
				v20 = a1[2];
				*(_QWORD*)v20 = *v19;
				*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v20, L"eTradeskillid", v21);
				a1[2] -= 16i64;
				v22 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v18);
				*(_QWORD*)v23 = *v22;
				*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v24, L"nTier", v25);
				a1[2] -= 16i64;
				v26 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v18);
				*(_QWORD*)v27 = *v26;
				*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
				a1[2] += 16i64;
				v28 = (unsigned __int64*)sub_14018F0E0(&v47, L"fCraftMultiplier")[1];
				v29 = -1i64;
				if (v28)
				{
					v30 = -1i64;
					do
						++v30;
					while (*((_BYTE*)v28 + v30));
					sub_140058710((__int64)a1, v28, v30);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v48)
					sub_14018B900(v48, 0);
				v31 = a1[2];
				*(_DWORD*)(v31 + 8) = 3;
				*(double*)v31 = v10;
				a1[2] += 16i64;
				v32 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v32, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v33 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v18);
				*(_QWORD*)v34 = *v33;
				*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
				a1[2] += 16i64;
				v35 = (unsigned __int64*)sub_14018F0E0(&v47, L"fCritMultiplier")[1];
				if (v35)
				{
					v36 = -1i64;
					do
						++v36;
					while (*((_BYTE*)v35 + v36));
					sub_140058710((__int64)a1, v35, v36);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v48)
					sub_14018B900(v48, 0);
				v37 = a1[2];
				*(_DWORD*)(v37 + 8) = 3;
				*(double*)v37 = v11;
				a1[2] += 16i64;
				v38 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v38, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v39 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v18);
				*(_QWORD*)v40 = *v39;
				*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
				a1[2] += 16i64;
				v41 = (unsigned __int64*)sub_14018F0E0(&v47, L"fDiscoveryMultiplier")[1];
				if (v41)
				{
					do
						++v29;
					while (*((_BYTE*)v41 + v29));
					sub_140058710((__int64)a1, v41, v29);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v48)
					sub_14018B900(v48, 0);
				v42 = a1[2];
				*(_DWORD*)(v42 + 8) = 3;
				*(double*)v42 = v12;
				a1[2] += 16i64;
				v43 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v43, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v44 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v18);
				*(_QWORD*)v45 = *v44;
				*(_DWORD*)(v45 + 8) = *((_DWORD*)v44 + 2);
				a1[2] += 16i64;
				sub_1400579E0((__int64)a1, v46, v18);
				return 1i64;
			}
			else
			{
				result = 1i64;
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
		}
		else
		{
		LABEL_9:
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 14041AC43: variable 'v21' is possibly undefined
// 14041AC75: variable 'v23' is possibly undefined
// 14041AC87: variable 'v24' is possibly undefined
// 14041AC87: variable 'v25' is possibly undefined
// 14041ACB2: variable 'v27' is possibly undefined
// 14041AD77: variable 'v34' is possibly undefined
// 14041AE37: variable 'v40' is possibly undefined
// 14041AEF7: variable 'v45' is possibly undefined
// 14041AF09: variable 'v46' is possibly undefined
// 140AF9FF0: using guessed type wchar_t aEtradeskillid_0[14];
// 140AFA060: using guessed type wchar_t aFdiscoverymult[21];
// 140AFA090: using guessed type wchar_t aFcritmultiplie[16];
// 140AFA0B0: using guessed type wchar_t aFcraftmultipli[17];
// 140AFA0D8: using guessed type wchar_t aNtier_2[6];

