#include "../winhttp.h"

//----- (00000001403CBA60) ----------------------------------------------------
__int64 __fastcall sub_1403CBA60(__int64 a1, _DWORD* a2)
{
	__int64 v3; // rcx
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // eax
	int* v7; // rax
	__int64 v8; // r8

	v3 = *(_QWORD*)(a1 + 28800);
	if (*a2)
	{
		v4 = 0i64;
		if (v3)
		{
			sub_1403B7290(v3);
			*(_QWORD*)(a1 + 28800) = 0i64;
		}
		if ((dword_140DC2320 & 1) == 0)
		{
			dword_140DC2320 |= 1u;
			v5 = sub_140200220(0x20Bu);
			if (v5)
				v6 = *(_DWORD*)(v5 + 4);
			else
				v6 = 10000;
			dword_140DC2324 = v6;
		}
		v7 = sub_14018B280(96i64, 0);
		if (v7)
			v4 = sub_1406077D0((__int64)v7, dword_140DC2324, v8, 626092);
	}
	else
	{
		if (v3)
			sub_1403B7290(v3);
		v4 = 0i64;
	}
	*(_QWORD*)(a1 + 28800) = v4;
	return 0i64;
}
// 1403CBADC: variable 'v8' is possibly undefined
// 140DC2320: using guessed type int dword_140DC2320;
// 140DC2324: using guessed type int dword_140DC2324;

