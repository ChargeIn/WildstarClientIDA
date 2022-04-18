#include "../winhttp.h"

//----- (000000014060FCC0) ----------------------------------------------------
void __fastcall sub_14060FCC0(__int64 a1)
{
	_QWORD* v2; // rdi
	__int64 v3; // rdx
	__int64 v4; // rbx
	__int64 v5; // rax
	unsigned int v6; // eax
	int v7; // edx
	unsigned int v8; // ebp
	__int64 v9; // rax
	__int64 v10; // rax
	int v11; // edx
	int v12; // esi
	_QWORD* v13; // rax
	__int64 v14; // rdx
	int v15; // ebx
	unsigned __int64* v16; // rdx
	unsigned __int64 v17; // r8
	_DWORD* v18; // rax
	__int64* v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rdx
	__int64(__fastcall * *v22)(); // [rsp+20h] [rbp-28h] BYREF
	__int64 v23; // [rsp+28h] [rbp-20h]
	_QWORD* v24; // [rsp+30h] [rbp-18h]
	int v25; // [rsp+38h] [rbp-10h]

	v25 = 1;
	v2 = *(_QWORD**)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
	v22 = off_140B569F0;
	v3 = v2[4];
	v24 = v2;
	if (*(_QWORD*)(v3 + 120) >= *(_QWORD*)(v3 + 112))
		sub_14005E2C0((__int64)v2);
	v4 = v2[2];
	v5 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	v2[2] += 16i64;
	v6 = sub_1400578C0((__int64)v2);
	v7 = *(_DWORD*)(a1 + 8);
	v8 = v6;
	LODWORD(v23) = v6;
	if ((unsigned int)sub_140649870(v2, v7))
	{
		sub_1400FB540((__int64)&v22);
		v2[2] -= 16i64;
	}
	v9 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 8));
	if (v9)
	{
		v10 = sub_14047DCA0(v9);
		if (v10)
		{
			v11 = *(_DWORD*)(v10 + 8);
			if (v11 != *(_DWORD*)(a1 + 8))
			{
				if ((unsigned int)sub_140649870(v2, v11))
				{
					sub_1400FB540((__int64)&v22);
					v2[2] -= 16i64;
				}
			}
		}
	}
	v12 = *(_DWORD*)(a1 + 16);
	v13 = sub_14005C3C0(*(_QWORD*)(v2[4] + 160i64), v8);
	v14 = v2[2];
	*(_QWORD*)v14 = *v13;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
	v2[2] += 16i64;
	v15 = 0;
	v16 = (unsigned __int64*)sub_14018F0E0(&v22, L"bExiting")[1];
	if (v16)
	{
		v17 = -1i64;
		do
			++v17;
		while (*((_BYTE*)v16 + v17));
		sub_140058710((__int64)v2, v16, v17);
	}
	else
	{
		*(_DWORD*)(v2[2] + 8i64) = 0;
		v2[2] += 16i64;
	}
	if (v23)
		sub_14018B900(v23, 0);
	v18 = (_DWORD*)v2[2];
	LOBYTE(v15) = v12 != 0;
	v18[2] = 1;
	*v18 = v15;
	v2[2] += 16i64;
	v19 = (__int64*)sub_1400580E0((__int64)v2, -3);
	sub_14005EA50((__int64)v2, v19, (int*)(v2[2] - 32i64), (unsigned int*)(v2[2] - 16i64));
	v20 = qword_140C65898;
	v2[2] -= 48i64;
	Apollo_LUAEvent(*(_QWORD*)(v20 + 29504), "CombatLogStealth", L"T", v8, v22);
	sub_1400579E0((__int64)v2, v21, v8);
}
// 14060FEB1: variable 'v21' is possibly undefined
// 1409EB42C: using guessed type wchar_t aT_37[2];
// 140B26D30: using guessed type wchar_t aBexiting[9];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

