#include "../winhttp.h"

//----- (00000001406EFFE0) ----------------------------------------------------
__int64 __fastcall sub_1406EFFE0(_QWORD* a1)
{
	_QWORD* v2; // rax
	__int64 v4; // rax
	__int64 v5; // rsi
	__int64 v6; // rbp
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // eax
	__int64 v12; // rcx
	int v13; // ebx
	_QWORD* v14; // rax
	__int64 v15; // rdx
	int v16; // r10d
	float v17; // xmm2_4
	_QWORD* v18; // rax
	__int64 v19; // r10
	__int64 v20; // rdx
	__int64 v21; // rcx
	_QWORD* v22; // rax
	__int64 v23; // rdx
	unsigned __int16* v24; // r10
	_QWORD* v25; // rax
	__int64 v26; // rdx
	__int64(__fastcall * *v27)(); // [rsp+20h] [rbp-28h] BYREF
	int v28; // [rsp+28h] [rbp-20h]
	_QWORD* v29; // [rsp+30h] [rbp-18h]
	int v30; // [rsp+38h] [rbp-10h]

	if (qword_140C65970 && qword_140C65898)
	{
		v2 = sub_1405744F0((__int64)a1, *(_DWORD*)(qword_140C65898 + 29008), *(_QWORD*)(qword_140C65898 + 120));
		if (v2)
		{
			v4 = sub_140618780((__int64)v2);
			v5 = v4;
			if (v4)
			{
				v6 = sub_1404804A0(qword_140C65970, **(_DWORD**)(v4 + 8), 21);
				if (v6)
				{
					v7 = a1[4];
					v27 = off_140B569F0;
					v8 = *(_QWORD*)(v7 + 112);
					v29 = a1;
					v30 = 1;
					if (*(_QWORD*)(v7 + 120) >= v8)
						sub_14005E2C0((__int64)a1);
					v9 = a1[2];
					v10 = sub_14005C1B0((__int64)a1, 0, 0);
					*(_DWORD*)(v9 + 8) = 5;
					*(_QWORD*)v9 = v10;
					a1[2] += 16i64;
					v11 = sub_1400578C0((__int64)a1);
					v12 = *(_QWORD*)(a1[4] + 160i64);
					v13 = v11;
					v28 = v11;
					v14 = sub_14005C3C0(v12, v11);
					v15 = a1[2];
					*(_QWORD*)v15 = *v14;
					*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v15, L"eState", v16);
					a1[2] -= 16i64;
					v17 = *(float*)(v5 + 20);
					v18 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
					*(_QWORD*)v19 = *v18;
					*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v20, L"nPercent", (int)v17);
					a1[2] -= 16i64;
					sub_14034BDD0(v21, *(_DWORD*)(*(_QWORD*)(v5 + 8) + 12i64));
					v22 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
					v23 = a1[2];
					*(_QWORD*)v23 = *v22;
					*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
					a1[2] += 16i64;
					sub_1400F0870((__int64)a1, v23, L"strObjective", v24);
					a1[2] -= 16i64;
					if ((unsigned int)sub_140432AC0(a1, *(_QWORD*)(v6 + 48)))
					{
						sub_1400FB540((__int64)&v27);
						a1[2] -= 16i64;
					}
					v25 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
					v26 = a1[2];
					*(_QWORD*)v26 = *v25;
					*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
					a1[2] += 16i64;
					sub_1400579E0((__int64)a1, v26, v13);
					return 1i64;
				}
				else
				{
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
		}
		else
		{
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
}
// 1406F0143: variable 'v16' is possibly undefined
// 1406F0177: variable 'v19' is possibly undefined
// 1406F0189: variable 'v20' is possibly undefined
// 1406F019A: variable 'v21' is possibly undefined
// 1406F01D6: variable 'v24' is possibly undefined
// 140B3FF18: using guessed type wchar_t aStrobjective_1[13];
// 140B3FF38: using guessed type wchar_t aNpercent[9];
// 140B3FF50: using guessed type wchar_t aEstate_3[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

