#include "../winhttp.h"

//----- (00000001406FDCD0) ----------------------------------------------------
__int64 __fastcall sub_1406FDCD0(_QWORD* a1)
{
	unsigned int v2; // eax
	__int64 result; // rax
	__int64 v4; // rsi
	__int64 v5; // rdi
	__int64 v6; // rax
	int v7; // ebp
	_QWORD* v8; // rax
	__int64 v9; // rdx
	int v10; // r10d
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	int v14; // r11d
	_QWORD* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx
	int v18; // r11d
	int v19; // esi
	_QWORD* v20; // rax
	__int64 v21; // r10
	unsigned __int64* v22; // rdx
	int v23; // edi
	unsigned __int64 v24; // r8
	_DWORD* v25; // rax
	__int64* v26; // rax
	_QWORD* v27; // rax
	__int64 v28; // r10
	__int64 v29; // rdx
	__int64 v30; // [rsp+20h] [rbp-28h] BYREF
	__int64 v31; // [rsp+28h] [rbp-20h]

	v2 = sub_140056D60(a1, 1u);
	result = sub_140246D00(v2);
	v4 = result;
	if (result)
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v5 = a1[2];
		v6 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v5 + 8) = 5;
		*(_QWORD*)v5 = v6;
		a1[2] += 16i64;
		v7 = sub_1400578C0((__int64)a1);
		v8 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
		v9 = a1[2];
		*(_QWORD*)v9 = *v8;
		*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v9, L"eTutorialAnchorOrientation", v10);
		a1[2] -= 16i64;
		v11 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
		*(_QWORD*)v12 = *v11;
		*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v13, L"nHorizOffset", v14);
		a1[2] -= 16i64;
		v15 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
		*(_QWORD*)v16 = *v15;
		*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v17, L"nVertOffset", v18);
		a1[2] -= 16i64;
		v19 = *(_DWORD*)(v4 + 16) & 1;
		v20 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
		*(_QWORD*)v21 = *v20;
		*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
		a1[2] += 16i64;
		v22 = (unsigned __int64*)sub_14018F0E0(&v30, L"bOrientToBottom")[1];
		v23 = 0;
		if (v22)
		{
			v24 = -1i64;
			do
				++v24;
			while (*((_BYTE*)v22 + v24));
			sub_140058710((__int64)a1, v22, v24);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v31)
			sub_14018B900(v31, 0);
		v25 = (_DWORD*)a1[2];
		LOBYTE(v23) = v19 != 0;
		v25[2] = 1;
		*v25 = v23;
		a1[2] += 16i64;
		v26 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v26, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		v27 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
		*(_QWORD*)v28 = *v27;
		*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v29, v7);
		return 1i64;
	}
	return result;
}
// 1406FDD83: variable 'v10' is possibly undefined
// 1406FDDB4: variable 'v12' is possibly undefined
// 1406FDDC6: variable 'v13' is possibly undefined
// 1406FDDC6: variable 'v14' is possibly undefined
// 1406FDDF7: variable 'v16' is possibly undefined
// 1406FDE09: variable 'v17' is possibly undefined
// 1406FDE09: variable 'v18' is possibly undefined
// 1406FDE39: variable 'v21' is possibly undefined
// 1406FDEEF: variable 'v28' is possibly undefined
// 1406FDF01: variable 'v29' is possibly undefined
// 140B416D8: using guessed type wchar_t aBorienttobotto[16];
// 140B416F8: using guessed type wchar_t aNvertoffset[12];
// 140B41710: using guessed type wchar_t aNhorizoffset[13];
// 140B41730: using guessed type wchar_t aEtutorialancho[27];

