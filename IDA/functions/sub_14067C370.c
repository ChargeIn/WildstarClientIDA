#include "../winhttp.h"

//----- (000000014067C370) ----------------------------------------------------
__int64 __fastcall sub_14067C370(_QWORD* a1)
{
	__int64 v2; // rax
	__int64** v3; // rdi
	int v4; // eax
	__int64 v5; // rcx
	__int64 v6; // rax

	v2 = sub_14067B760(a1);
	v3 = (__int64**)v2;
	if (v2 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2)
	{
		v4 = sub_14056D0D0(v3);
		v5 = a1[2];
		*(_DWORD*)(v5 + 8) = 3;
		*(double*)v5 = (double)v4;
	}
	else
	{
		v6 = a1[2];
		*(_QWORD*)v6 = 0i64;
		*(_DWORD*)(v6 + 8) = 3;
	}
	a1[2] += 16i64;
	return 1i64;
}

