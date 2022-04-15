#include "../winhttp.h"

//----- (0000000140659CE0) ----------------------------------------------------
__int64 __fastcall sub_140659CE0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	_QWORD* v6; // rax
	__int64 v7; // rcx
	int v8; // r9d
	__int64 v9; // rdx
	_QWORD* v10; // rax
	int v11; // r9d
	__int64 v12; // r11
	__int64 v13; // rdx
	_QWORD* v14; // rax
	int v15; // r9d
	__int64 v16; // r11
	__int64 v17; // rdx
	_QWORD* v18; // rax
	__int64 v19; // r10
	__int64 v20; // rdx
	int v22[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2
		&& (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0
		&& *(_QWORD*)(v3 + 5864)
		&& (unsigned int)sub_1404775F0(v3, v22))
	{
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v4 = *(_QWORD*)(a1 + 16);
		v5 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v4 + 8) = 5;
		*(_QWORD*)v4 = v5;
		*(_QWORD*)(a1 + 16) += 16i64;
		LODWORD(v4) = sub_1400578C0(a1);
		v6 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
		v7 = *(_QWORD*)(a1 + 16);
		v8 = v22[0];
		*(_QWORD*)v7 = *v6;
		*(_DWORD*)(v7 + 8) = *((_DWORD*)v6 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v9, (unsigned __int16*)"x", v8);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
		v11 = v22[1];
		*(_QWORD*)v12 = *v10;
		*(_DWORD*)(v12 + 8) = *((_DWORD*)v10 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v13, (unsigned __int16*)"y", v11);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
		v15 = v22[2];
		*(_QWORD*)v16 = *v14;
		*(_DWORD*)(v16 + 8) = *((_DWORD*)v14 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v17, (unsigned __int16*)"z", v15);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
		*(_QWORD*)v19 = *v18;
		*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400579E0(a1, v20, v4);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 140659DB5: variable 'v9' is possibly undefined
// 140659DEA: variable 'v12' is possibly undefined
// 140659DFA: variable 'v13' is possibly undefined
// 140659E2F: variable 'v16' is possibly undefined
// 140659E3F: variable 'v17' is possibly undefined
// 140659E65: variable 'v19' is possibly undefined
// 140659E77: variable 'v20' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

