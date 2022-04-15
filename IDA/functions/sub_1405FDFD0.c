#include "../winhttp.h"

//----- (00000001405FDFD0) ----------------------------------------------------
__int64 __fastcall sub_1405FDFD0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rsi
	__int64 v6; // rax
	int v7; // edi
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 i; // rax
	__int64 j; // rax

	if ((dword_140DC3580 & 1) == 0)
	{
		dword_140DC358C = 0;
		dword_140DC3580 |= 1u;
	}
	v2 = *(_QWORD*)(a1 + 40);
	v3 = *(_QWORD*)(v2 + 16);
	if (v3 == v2)
		return 0i64;
	while (1)
	{
		if ((v4 = *(_QWORD*)(qword_140C65898 + 29272)) != 0 && *(_DWORD*)(v4 + 20)
			|| (v5 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v3 + 44))) != 0
			&& (dword_140DC358C
				? (v7 = dword_140DC3588)
				: (dword_140DC358C = 1, (v6 = sub_140200220(0x453u)) == 0)
				? (v7 = 0, dword_140DC3588 = 0)
				: (v7 = *(_DWORD*)(v6 + 4), dword_140DC3588 = v7),
				(*(int(__fastcall**)(__int64))(*(_QWORD*)v5 + 16i64))(v5) >= v7))
		{
			v8 = *(_QWORD*)(v3 + 88);
			if (!v8 || (*(_BYTE*)(v8 + 8) & 1) == 0)
				break;
		}
		v9 = *(_QWORD*)(v3 + 24);
		if (v9)
		{
			v3 = *(_QWORD*)(v3 + 24);
			for (i = *(_QWORD*)(v9 + 16); i; i = *(_QWORD*)(i + 16))
				v3 = i;
		}
		else
		{
			for (j = *(_QWORD*)(v3 + 8); v3 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				v3 = j;
			if (*(_QWORD*)(v3 + 24) != j)
				v3 = j;
		}
		if (v3 == *(_QWORD*)(a1 + 40))
			return 0i64;
	}
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC3580: using guessed type int dword_140DC3580;
// 140DC3588: using guessed type int dword_140DC3588;
// 140DC358C: using guessed type int dword_140DC358C;

