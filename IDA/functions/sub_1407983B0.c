#include "../winhttp.h"

//----- (00000001407983B0) ----------------------------------------------------
void __fastcall __noreturn sub_1407983B0(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	__int64 v4; // rcx
	const char* v5; // r9
	const char* v6; // rax

	v1 = (_DWORD*)a1[3];
	v3 = a1[2];
	if ((unsigned __int64)v1 >= v3)
		goto LABEL_8;
	if (v1 != dword_140A12138 && v1[2] == 5)
		sub_140056830(a1, (unsigned __int64*)aSetnIsObsolete);
	if ((unsigned __int64)v1 >= v3 || v1 == dword_140A12138 || (v4 = (int)v1[2], (_DWORD)v4 == -1))
		LABEL_8:
	v5 = aNoValue;
	else
		v5 = off_140A123B0[v4];
	v6 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aTable_0, v5);
	sub_140056570(a1, 1u, v6);
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

