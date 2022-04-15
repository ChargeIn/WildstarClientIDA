#include "../winhttp.h"

//----- (0000000140056690) ----------------------------------------------------
void __fastcall __noreturn sub_140056690(_QWORD* a1, unsigned int a2)
{
	_DWORD* v4; // rax
	const char* v5; // r10
	__int64 v6; // rax
	const char* v7; // r9
	const char* v8; // rax

	v4 = sub_1400580E0((__int64)a1, a2);
	if (v4 == dword_140A12138 || (v6 = (int)v4[2], (_DWORD)v6 == -1))
		v7 = aNoValue;
	else
		v7 = off_140A123B0[v6];
	v8 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", v5, v7);
	sub_140056570(a1, a2, v8);
}
// 1400566DD: variable 'v5' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

