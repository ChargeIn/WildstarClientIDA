#include "../winhttp.h"

//----- (000000014062D5C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_14062D5C0(__int64 a1, int a2, int a3, float a4)
{
	bool v4; // zf
	unsigned __int64 result; // rax
	__int64 v7; // rdx
	__int64 v8; // r8
	int v9; // eax
	unsigned __int64 v10; // r12
	unsigned __int64 v11; // r9
	unsigned __int64 v12; // rbp
	_BOOL8 v13; // r13
	__int64 v14; // rdi
	__int64 v15; // rbx
	int v16; // eax
	int v17; // eax
	__int64 v18; // r8
	unsigned int v19; // r10d
	float v20; // xmm6_4
	unsigned int* v21; // rax
	float v22; // xmm2_4
	__int64 v23; // r8
	__int64 v24; // rdx
	int v25; // eax
	void* v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rcx

	v4 = *(_QWORD*)(a1 + 32) == 0i64;
	*(_DWORD*)(a1 + 40) = a2;
	*(_DWORD*)(a1 + 44) = a3;
	if (v4)
	{
		result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65848 + 40i64))(
			qword_140C65848,
			a1 + 32,
			0i64);
		if ((result & 0x80000000) != 0i64)
		{
			*(_QWORD*)(a1 + 48) = 0i64;
			return result;
		}
	}
	sub_14001FEC0(
		(__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_14062D3A0,
		*(__int64**)(a1 + 16),
		*(_QWORD*)(a1 + 24),
		a1);
	v9 = dword_140C4EB00;
	v10 = *(_QWORD*)(a1 + 24);
	v11 = 0x140000000ui64;
	if (*(_DWORD*)qword_140C63750 < dword_140C4EB00)
		v9 = *(_DWORD*)qword_140C63750;
	v12 = 0i64;
	result = (unsigned int)dword_140C4EB10[v9];
	v13 = *(_QWORD*)(a1 + 48) >= result;
	if (v10)
	{
		while (1)
		{
			v14 = *(_QWORD*)a1;
			v15 = 5i64 * *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v12);
			v16 = dword_140C4EB90;
			if (*(_DWORD*)qword_140C63750 < dword_140C4EB90)
				v16 = *(_DWORD*)qword_140C63750;
			result = (unsigned int)dword_140C4EBA0[v16];
			if (v12 >= result || !v13)
			{
				v28 = *(_QWORD*)(v14 + 40i64 * *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v12) + 32);
				if (v28)
				{
					result = (*(__int64(__fastcall**)(__int64, __int64, __int64, unsigned __int64))(*(_QWORD*)v28 + 8i64))(
						v28,
						v7,
						v8,
						0x140000000ui64);
					*(_QWORD*)(v14 + 8 * v15 + 32) = 0i64;
				}
				*(_QWORD*)(v14 + 8 * v15 + 16) = 0i64;
				*(_QWORD*)(v14 + 8 * v15 + 24) = 0i64;
				*(_DWORD*)(v14 + 8 * v15 + 12) = 0;
				goto LABEL_63;
			}
			v17 = *(_DWORD*)(v14 + 40i64 * *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v12) + 12);
			v18 = *(_QWORD*)(v14 + 40i64 * *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v12));
			*(_DWORD*)(v14 + 40i64 * *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v12) + 12) = 0;
			v19 = *(_DWORD*)(v18 + 4);
			v20 = (float)v17;
			if (!v19)
			{
				*(float*)(v14 + 8 * v15 + 16) = v20;
				*(float*)(v14 + 8 * v15 + 24) = v20;
				goto LABEL_18;
			}
			if (*(_QWORD*)(v14 + 32 + 8 * v15))
				break;
			result = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD**)(a1 + 32) + 32i64))(
				*(_QWORD*)(a1 + 32),
				v14 + 32 + 8 * v15,
				v19,
				*(unsigned int*)(v18 + 8));
			if ((result & 0x80000000) == 0i64)
			{
				*(float*)(v14 + 8 * v15 + 16) = v20;
				*(float*)(v14 + 8 * v15 + 24) = v20;
				v11 = 0x140000000ui64;
				goto LABEL_18;
			}
		LABEL_63:
			++v12;
			v11 = 0x140000000ui64;
			if (v12 >= v10)
				goto LABEL_64;
		}
		if (v20 != *(float*)(v14 + 8 * v15 + 20))
		{
			*(_QWORD*)(v14 + 8 * v15 + 24) = *(unsigned int*)(v14 + 8 * v15 + 16);
		LABEL_18:
			*(float*)(v14 + 8 * v15 + 20) = v20;
		}
		v21 = (unsigned int*)qword_140C63750;
		v22 = a4 + *(float*)(v14 + 8 * v15 + 28);
		*(float*)(v14 + 8 * v15 + 28) = v22;
		v23 = *v21;
		v24 = (unsigned int)dword_140C4EC20;
		v25 = dword_140C4EC20;
		if ((int)v23 < dword_140C4EC20)
			v25 = v23;
		if (v22 >= dword_140C4EC30[v25])
		{
			*(_DWORD*)(v14 + 8 * v15 + 16) = *(_DWORD*)(v14 + 8 * v15 + 20);
		}
		else
		{
			if ((int)v23 < dword_140C4EC20)
				v24 = (unsigned int)v23;
			*(float*)(v14 + 8 * v15 + 16) = (float)((float)(v22 / dword_140C4EC30[(int)v24])
				* (float)(*(float*)(v14 + 8 * v15 + 20) - *(float*)(v14 + 8 * v15 + 24)))
				+ *(float*)(v14 + 8 * v15 + 24);
		}
		if (v12)
		{
			switch (v12)
			{
			case 1ui64:
				if ((dword_140DC3E68 & 4) == 0)
				{
					dword_140DC3E68 |= 4u;
					sub_1401AD620((__int64)&unk_140DC40B0, L"Combat Loop 2 SoundEvent");
				}
				sub_1401ADA40((__int64)&unk_140DC40B0, *(_DWORD*)(*(_QWORD*)(v14 + 8 * v15) + 4i64));
				if ((dword_140DC3E68 & 8) == 0)
				{
					dword_140DC3E68 |= 8u;
					sub_1401AD510((__int64)&unk_140DC41D0, L"Combat Loop 2 RTPC");
				}
				v26 = &unk_140DC41D0;
				break;
			case 2ui64:
				if ((dword_140DC3E68 & 0x10) == 0)
				{
					dword_140DC3E68 |= 0x10u;
					sub_1401AD620((__int64)&unk_140DC42F0, L"Combat Loop 3 SoundEvent");
				}
				sub_1401ADA40((__int64)&unk_140DC42F0, *(_DWORD*)(*(_QWORD*)(v14 + 8 * v15) + 4i64));
				if ((dword_140DC3E68 & 0x20) == 0)
				{
					dword_140DC3E68 |= 0x20u;
					sub_1401AD510((__int64)&unk_140DC4410, L"Combat Loop 3 RTPC");
				}
				v26 = &unk_140DC4410;
				break;
			case 3ui64:
				if ((dword_140DC3E68 & 0x40) == 0)
				{
					dword_140DC3E68 |= 0x40u;
					sub_1401AD620((__int64)&unk_140DC4530, L"Combat Loop 4 SoundEvent");
				}
				sub_1401ADA40((__int64)&unk_140DC4530, *(_DWORD*)(*(_QWORD*)(v14 + 8 * v15) + 4i64));
				if ((dword_140DC3E68 & 0x80u) == 0)
				{
					dword_140DC3E68 |= 0x80u;
					sub_1401AD510((__int64)&unk_140DC4650, L"Combat Loop 4 RTPC");
				}
				v26 = &unk_140DC4650;
				break;
			case 4ui64:
				if ((dword_140DC3E68 & 0x100) == 0)
				{
					dword_140DC3E68 |= 0x100u;
					sub_1401AD620((__int64)&unk_140DC4770, L"Combat Loop 5 SoundEvent");
				}
				sub_1401ADA40((__int64)&unk_140DC4770, *(_DWORD*)(*(_QWORD*)(v14 + 8 * v15) + 4i64));
				if ((dword_140DC3E68 & 0x200) == 0)
				{
					dword_140DC3E68 |= 0x200u;
					sub_1401AD510((__int64)&unk_140DC4890, L"Combat Loop 5 RTPC");
				}
				v26 = &unk_140DC4890;
				break;
			default:
			LABEL_57:
				v27 = *(_QWORD*)(v14 + 8 * v15 + 32);
				if (v27)
					(*(void(__fastcall**)(__int64, __int64, __int64, unsigned __int64))(*(_QWORD*)v27 + 64i64))(
						v27,
						v24,
						v23,
						v11);
				result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, unsigned __int64))(**(_QWORD**)(a1 + 32) + 80i64))(
					*(_QWORD*)(a1 + 32),
					*(unsigned int*)(v14 + 8 * v15 + 8),
					v23,
					v11);
				goto LABEL_63;
			}
		}
		else
		{
			if ((dword_140DC3E68 & 1) == 0)
			{
				dword_140DC3E68 |= 1u;
				sub_1401AD620((__int64)&unk_140DC3E70, L"Combat Loop 1 SoundEvent");
			}
			sub_1401ADA40((__int64)&unk_140DC3E70, *(_DWORD*)(*(_QWORD*)(v14 + 8 * v15) + 4i64));
			if ((dword_140DC3E68 & 2) == 0)
			{
				dword_140DC3E68 |= 2u;
				sub_1401AD510((__int64)&unk_140DC3F90, L"Combat Loop 1 RTPC");
			}
			v26 = &unk_140DC3F90;
		}
		sub_1401AD8F0((__int64)v26, *(float*)(v14 + 8 * v15 + 16));
		goto LABEL_57;
	}
LABEL_64:
	*(_QWORD*)(a1 + 48) = 0i64;
	return result;
}
// 14062DA0A: variable 'v24' is possibly undefined
// 14062DA0A: variable 'v23' is possibly undefined
// 14062DA0A: variable 'v11' is possibly undefined
// 14062DA30: variable 'v7' is possibly undefined
// 14062DA30: variable 'v8' is possibly undefined
// 140B27B98: using guessed type wchar_t aCombatLoop5Sou[25];
// 140B27C48: using guessed type wchar_t aCombatLoop5Rtp[19];
// 140B27CE8: using guessed type wchar_t aCombatLoop4Sou[25];
// 140B27D88: using guessed type wchar_t aCombatLoop4Rtp[19];
// 140B27E28: using guessed type wchar_t aCombatLoop3Sou[25];
// 140B27EC8: using guessed type wchar_t aCombatLoop3Rtp[19];
// 140B27F68: using guessed type wchar_t aCombatLoop2Sou[25];
// 140B28008: using guessed type wchar_t aCombatLoop2Rtp[19];
// 140B280A8: using guessed type wchar_t aCombatLoop1Sou[25];
// 140B28158: using guessed type wchar_t aCombatLoop1Rtp[19];
// 140C4EB00: using guessed type int dword_140C4EB00;
// 140C4EB10: using guessed type int dword_140C4EB10[28];
// 140C4EB90: using guessed type int dword_140C4EB90;
// 140C4EBA0: using guessed type int dword_140C4EBA0[28];
// 140C4EC20: using guessed type int dword_140C4EC20;
// 140C4EC30: using guessed type float dword_140C4EC30[14];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65848: using guessed type __int64 qword_140C65848;
// 140DC3E68: using guessed type int dword_140DC3E68;

