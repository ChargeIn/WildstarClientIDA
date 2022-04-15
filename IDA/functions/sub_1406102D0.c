#include "../winhttp.h"

//----- (00000001406102D0) ----------------------------------------------------
void __fastcall sub_1406102D0(int* a1)
{
	__int64 v2; // rcx
	_QWORD* v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rbx
	__int64 v6; // rax
	unsigned int v7; // eax
	int v8; // edx
	unsigned int v9; // ebx
	__int64 v10; // rax
	__int64 v11; // rax
	int v12; // edx
	_QWORD* v13; // rax
	__int64 v14; // rdx
	int v15; // r10d
	_QWORD* v16; // rax
	__int64 v17; // r10
	__int64 v18; // rdx
	int v19; // r11d
	_QWORD* v20; // rax
	__int64 v21; // r10
	__int64 v22; // rdx
	int v23; // r11d
	_QWORD* v24; // rax
	__int64 v25; // r10
	__int64 v26; // rdx
	int v27; // r11d
	__int64 v28; // rcx
	__int64 v29; // rdx
	__int64(__fastcall * *v30)(); // [rsp+20h] [rbp-28h] BYREF
	__int64 v31; // [rsp+28h] [rbp-20h]
	_QWORD* v32; // [rsp+30h] [rbp-18h]
	__int64 v33; // [rsp+38h] [rbp-10h]

	if (a1[4] || a1[5] || a1[6] || a1[7])
	{
		v2 = *(_QWORD*)(qword_140C65898 + 29504);
		LODWORD(v33) = 1;
		v3 = *(_QWORD**)(v2 + 400);
		v30 = off_140B569F0;
		v4 = v3[4];
		v32 = v3;
		if (*(_QWORD*)(v4 + 120) >= *(_QWORD*)(v4 + 112))
			sub_14005E2C0((__int64)v3);
		v5 = v3[2];
		v6 = sub_14005C1B0((__int64)v3, 0, 0);
		*(_DWORD*)(v5 + 8) = 5;
		*(_QWORD*)v5 = v6;
		v3[2] += 16i64;
		v7 = sub_1400578C0((__int64)v3);
		v8 = a1[2];
		v9 = v7;
		LODWORD(v31) = v7;
		if ((unsigned int)sub_140649870(v3, v8))
		{
			sub_1400FB540((__int64)&v30);
			v3[2] -= 16i64;
		}
		v10 = sub_1403D90D0(qword_140C65898, a1[2]);
		if (v10)
		{
			v11 = sub_14047DCA0(v10);
			if (v11)
			{
				v12 = *(_DWORD*)(v11 + 8);
				if (v12 != a1[2])
				{
					if ((unsigned int)sub_140649870(v3, v12))
					{
						sub_1400FB540((__int64)&v30);
						v3[2] -= 16i64;
					}
				}
			}
		}
		v13 = sub_14005C3C0(*(_QWORD*)(v3[4] + 160i64), v9);
		v14 = v3[2];
		*(_QWORD*)v14 = *v13;
		*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
		v3[2] += 16i64;
		sub_1400F06F0((__int64)v3, v14, L"nXP", v15);
		v3[2] -= 16i64;
		v16 = sub_14005C3C0(*(_QWORD*)(v3[4] + 160i64), v9);
		*(_QWORD*)v17 = *v16;
		*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
		v3[2] += 16i64;
		sub_1400F06F0((__int64)v3, v18, L"nRestXP", v19);
		v3[2] -= 16i64;
		v20 = sub_14005C3C0(*(_QWORD*)(v3[4] + 160i64), v9);
		*(_QWORD*)v21 = *v20;
		*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
		v3[2] += 16i64;
		sub_1400F06F0((__int64)v3, v22, L"nElderPoints", v23);
		v3[2] -= 16i64;
		v24 = sub_14005C3C0(*(_QWORD*)(v3[4] + 160i64), v9);
		*(_QWORD*)v25 = *v24;
		*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
		v3[2] += 16i64;
		sub_1400F06F0((__int64)v3, v26, L"nRestEP", v27);
		v28 = qword_140C65898;
		v3[2] -= 16i64;
		sub_1400EA3E0(*(_QWORD*)(v28 + 29504), "CombatLogExperience", "T", v9, v30, v31, v32, v33);
		sub_1400579E0((__int64)v3, v29, v9);
	}
}
// 140610419: variable 'v15' is possibly undefined
// 14061044A: variable 'v17' is possibly undefined
// 14061045C: variable 'v18' is possibly undefined
// 14061045C: variable 'v19' is possibly undefined
// 14061048D: variable 'v21' is possibly undefined
// 14061049F: variable 'v22' is possibly undefined
// 14061049F: variable 'v23' is possibly undefined
// 1406104D0: variable 'v25' is possibly undefined
// 1406104E2: variable 'v26' is possibly undefined
// 1406104E2: variable 'v27' is possibly undefined
// 140610516: variable 'v29' is possibly undefined
// 140B26CD8: using guessed type wchar_t aNxp_2[4];
// 140B26EF0: using guessed type wchar_t aNrestep[8];
// 140B26F18: using guessed type wchar_t aNrestxp[8];
// 140B26F28: using guessed type wchar_t aNelderpoints[13];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

