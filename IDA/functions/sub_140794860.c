#include "../winhttp.h"

//----- (0000000140794860) ----------------------------------------------------
__int64 __fastcall sub_140794860(_QWORD* a1)
{
	_DWORD* v1; // rbx
	__int64 v3; // rbx
	int v4; // eax
	int v5; // ecx
	unsigned __int64* v6; // rdx
	__int64 result; // rax
	unsigned __int64 v8; // r8

	v1 = dword_140A12138;
	if (a1[3] < a1[2])
		v1 = (_DWORD*)a1[3];
	if (v1[2] != 8 || (v3 = *(_QWORD*)v1) == 0)
		sub_140056570(a1, 1u, aCoroutineExpec);
	if (a1 == (_QWORD*)v3)
	{
		v4 = 0;
	}
	else if (*(_BYTE*)(v3 + 10))
	{
		if (*(_BYTE*)(v3 + 10) == 1)
			v4 = 1;
		else
			v4 = 3;
	}
	else if (*(_QWORD*)(v3 + 40) <= *(_QWORD*)(v3 + 80))
	{
		v5 = 1;
		if (!(unsigned int)((__int64)(*(_QWORD*)(v3 + 16) - *(_QWORD*)(v3 + 24)) >> 4))
			v5 = 3;
		v4 = v5;
	}
	else
	{
		v4 = 2;
	}
	v6 = (unsigned __int64*)off_140B50BC0[v4];
	if (v6)
	{
		v8 = -1i64;
		do
			++v8;
		while (*((_BYTE*)v6 + v8));
		sub_140058710((__int64)a1, v6, v8);
		return 1i64;
	}
	else
	{
		result = 1i64;
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B50BC0: using guessed type char *off_140B50BC0[5];

