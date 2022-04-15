#include "../winhttp.h"

//----- (0000000140520710) ----------------------------------------------------
char __fastcall sub_140520710(__int64 a1)
{
	int v2; // ebx
	int v3; // ebx
	int v4; // eax
	__int64 v5; // rax
	unsigned int v6; // edx
	__int64 v7; // rdi
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rdi
	__int64 v12; // rcx
	int v13; // eax
	__int64 v15; // [rsp+40h] [rbp+8h] BYREF

	v2 = 330;
	if (!(unsigned int)sub_1404ADFE0(a1, *(_DWORD*)(a1 + 16)))
		return sub_1400D4040(
			*(_QWORD*)(a1 + 8),
			"RapidTransportResult",
			*(char**)(a1 + 8),
			"ii",
			*(_DWORD*)(a1 + 16),
			v2);
	v3 = 0;
	v15 = 0i64;
	LODWORD(v15) = *(_DWORD*)(a1 + 16);
	v4 = dword_140DC32C8;
	if ((dword_140DC32C8 & 1) == 0)
	{
		v4 = dword_140DC32C8 | 1;
		dword_140DC32D4 = 0;
		dword_140DC32C8 |= 1u;
	}
	if ((v4 & 2) == 0)
	{
		dword_140DC32DC = 0;
		dword_140DC32C8 = v4 | 2;
	}
	if (dword_140DC32D4)
	{
		v6 = dword_140DC32D0;
	}
	else
	{
		dword_140DC32D4 = 1;
		v5 = sub_140200220(0x51Bu);
		if (v5)
		{
			v6 = *(_DWORD*)(v5 + 4);
			dword_140DC32D0 = v6;
		}
		else
		{
			v6 = 0;
			dword_140DC32D0 = 0;
		}
	}
	v7 = *(_QWORD*)(qword_140C65898 + 120);
	v8 = *(_QWORD*)(v7 + 5640);
	if (v8)
	{
		while (*(_DWORD*)(v8 + 8) != v6)
		{
			v8 = *(_QWORD*)(v8 + 136);
			if (!v8)
				goto LABEL_14;
		}
		if (dword_140DC32DC)
		{
			v3 = dword_140DC32D8;
		}
		else
		{
			dword_140DC32DC = 1;
			v10 = sub_140200220(0x51Bu);
			if (v10)
				v3 = *(_DWORD*)(v10 + 8);
			dword_140DC32D8 = v3;
		}
		goto LABEL_23;
	}
LABEL_14:
	if (!dword_140DC32D4)
	{
		dword_140DC32D4 = 1;
		v9 = sub_140200220(0x51Bu);
		if (!v9)
		{
			dword_140DC32D0 = 0;
		LABEL_23:
			v6 = v3;
			goto LABEL_24;
		}
		v6 = *(_DWORD*)(v9 + 4);
		dword_140DC32D0 = v6;
	}
LABEL_24:
	v11 = sub_1403ACD90(qword_140C65B70, v6, v7);
	v13 = sub_1403993C0(v12, v11, &v15);
	v2 = v13;
	if (v13 && v13 != 317)
		sub_1403A12A0(qword_140C65898, v13, v11, 0);
	return sub_1400D4040(*(_QWORD*)(a1 + 8), "RapidTransportResult", *(char**)(a1 + 8), "ii", *(_DWORD*)(a1 + 16), v2);
}
// 140520859: variable 'v12' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140DC32C8: using guessed type int dword_140DC32C8;
// 140DC32D0: using guessed type int dword_140DC32D0;
// 140DC32D4: using guessed type int dword_140DC32D4;
// 140DC32D8: using guessed type int dword_140DC32D8;
// 140DC32DC: using guessed type int dword_140DC32DC;

