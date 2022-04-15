#include "../winhttp.h"

//----- (0000000140506EA0) ----------------------------------------------------
__int64 __fastcall sub_140506EA0(_QWORD* a1)
{
	__int64 result; // rax
	_DWORD* v3; // rax
	__int64 v4; // rax
	const char* v5; // r9
	const char* v6; // rax

	result = sub_1400D66A0(a1, 1u);
	if (result && (*(_DWORD*)(result + 432) & 0x40000i64) == 0)
	{
		v3 = sub_1400580E0((__int64)a1, 1);
		if (v3 == dword_140A12138 || (v4 = (int)v3[2], (_DWORD)v4 == -1))
			v5 = aNoValue;
		else
			v5 = off_140A123B0[v4];
		v6 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", "Window", v5);
		sub_140056570(a1, 1u, v6);
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

