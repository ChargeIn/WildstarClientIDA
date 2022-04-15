#include "../winhttp.h"

//----- (00000001406FCED0) ----------------------------------------------------
__int64 __fastcall sub_1406FCED0(_QWORD* a1)
{
	unsigned int v2; // edx
	__int64 v3; // r8
	int* v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rsi
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // ebx
	_QWORD* v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rdx
	unsigned __int16* v13; // r11
	int* v14; // rax
	_QWORD* v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rdx
	int v18; // r11d
	_QWORD* v19; // rax
	__int64 v20; // r10
	__int64 v21; // rdx
	int* v23; // [rsp+38h] [rbp+10h] BYREF

	v2 = sub_140056D60(a1, 1u);
	v3 = *(_QWORD*)(qword_140C658D8 + 8);
	v4 = (int*)v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < v2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = (int*)v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == (int*)v3 || (v23 = v4, v2 < v4[8]))
		v23 = (int*)v3;
	if (v23 == (int*)v3 || (v6 = *((_QWORD*)v23 + 5)) == 0)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v7 = a1[2];
		v8 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v7 + 8) = 5;
		*(_QWORD*)v7 = v8;
		a1[2] += 16i64;
		v9 = sub_1400578C0((__int64)a1);
		sub_140439FC0(v6, &v23);
		v10 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
		v11 = a1[2];
		*(_QWORD*)v11 = *v10;
		*(_DWORD*)(v11 + 8) = *((_DWORD*)v10 + 2);
		a1[2] += 16i64;
		sub_1400F0870((__int64)a1, v12, L"strPopupText", v13);
		v14 = v23;
		a1[2] -= 16i64;
		if (v14)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v14 - 2) + 8i64))(v14 - 4);
		v15 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
		v16 = a1[2];
		*(_QWORD*)v16 = *v15;
		*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v17, L"eAnchor", v18);
		a1[2] -= 16i64;
		v19 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
		*(_QWORD*)v20 = *v19;
		*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v21, v9);
		return 1i64;
	}
}
// 1406FCFDB: variable 'v12' is possibly undefined
// 1406FCFDB: variable 'v13' is possibly undefined
// 1406FD039: variable 'v17' is possibly undefined
// 1406FD039: variable 'v18' is possibly undefined
// 1406FD05F: variable 'v20' is possibly undefined
// 1406FD071: variable 'v21' is possibly undefined
// 140B41790: using guessed type wchar_t aEanchor[8];
// 140B417A0: using guessed type wchar_t aStrpopuptext[13];
// 140C658D8: using guessed type __int64 qword_140C658D8;

