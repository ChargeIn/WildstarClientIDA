#include "../winhttp.h"

//----- (00000001400F1570) ----------------------------------------------------
_DWORD* __fastcall sub_1400F1570(__int64 a1, __int64 a2, int a3, _QWORD* a4)
{
	_DWORD* result; // rax
	int v7; // r10d
	__int64 v8; // r11
	_DWORD* v9; // rax
	__int64 v10; // r11
	__int64 v11; // rcx

	result = sub_1400580E0(a2, a3);
	if (result != dword_140A12138 && result[2] == 5)
	{
		v9 = sub_1400580E0(v8, a3);
		v11 = *(_QWORD*)(v10 + 16);
		*(_QWORD*)v11 = *(_QWORD*)v9;
		*(_DWORD*)(v11 + 8) = v9[2];
		*(_QWORD*)(v10 + 16) += 16i64;
		result = (_DWORD*)sub_1400578C0(v10);
		v7 = (int)result;
	}
	*a4 += 8i64;
	**(_DWORD**)(*a4 - 8i64) = v7;
	return result;
}
// 1400F15AB: variable 'v8' is possibly undefined
// 1400F15B0: variable 'v10' is possibly undefined
// 1400F15E4: variable 'v7' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

