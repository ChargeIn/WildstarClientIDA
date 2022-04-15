#include "../winhttp.h"

//----- (000000014064A260) ----------------------------------------------------
__int64 __fastcall sub_14064A260(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v6; // rbx
	__int64 v7; // rax
	_QWORD* v8; // rax
	__int64 v9; // rdx
	int v10; // r10d
	_QWORD* v11; // rax
	__int64 v12; // r11
	__int64 v13; // rdx
	unsigned __int16* v14; // r10
	_QWORD* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = *(_QWORD*)(v3 + 24);
		if (v4)
		{
			if (sub_1401F60A0(*(_DWORD*)(v4 + 16)))
			{
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v6 = *(_QWORD*)(a1 + 16);
				v7 = sub_14005C1B0(a1, 0, 0);
				*(_DWORD*)(v6 + 8) = 5;
				*(_QWORD*)v6 = v7;
				*(_QWORD*)(a1 + 16) += 16i64;
				LODWORD(v6) = sub_1400578C0(a1);
				v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v6);
				v9 = *(_QWORD*)(a1 + 16);
				*(_QWORD*)v9 = *v8;
				*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
				*(_QWORD*)(a1 + 16) += 16i64;
				sub_1400F06F0(a1, v9, L"idArchetype", v10);
				*(_QWORD*)(a1 + 16) -= 16i64;
				v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v6);
				*(_QWORD*)v12 = *v11;
				*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
				*(_QWORD*)(a1 + 16) += 16i64;
				sub_1400F0870(a1, v13, L"strIcon", v14);
				*(_QWORD*)(a1 + 16) -= 16i64;
				v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v6);
				*(_QWORD*)v16 = *v15;
				*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
				*(_QWORD*)(a1 + 16) += 16i64;
				sub_1400579E0(a1, v17, v6);
				return 1i64;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
				*(_QWORD*)(a1 + 16) += 16i64;
				return 1i64;
			}
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 14064A365: variable 'v10' is possibly undefined
// 14064A3B6: variable 'v12' is possibly undefined
// 14064A3C8: variable 'v13' is possibly undefined
// 14064A3C8: variable 'v14' is possibly undefined
// 14064A3EE: variable 'v16' is possibly undefined
// 14064A400: variable 'v17' is possibly undefined
// 140B2BD48: using guessed type wchar_t aStricon_7[8];
// 140B2BD70: using guessed type wchar_t aIdarchetype[12];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;

