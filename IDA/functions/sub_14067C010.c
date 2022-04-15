#include "../winhttp.h"

//----- (000000014067C010) ----------------------------------------------------
__int64 __fastcall sub_14067C010(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	int v4; // ecx
	__int64 v5; // rax

	v2 = sub_14067B760(a1);
	if (v2 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2)
	{
		v3 = sub_140200220(0x17Au);
		if (v3)
			v4 = *(_DWORD*)(v3 + 4);
		else
			v4 = 50;
		v5 = a1[2];
		*(double*)v5 = (double)v4;
	}
	else
	{
		v5 = a1[2];
		*(_QWORD*)v5 = 0i64;
	}
	*(_DWORD*)(v5 + 8) = 3;
	a1[2] += 16i64;
	return 1i64;
}

