#include "../winhttp.h"

//----- (0000000140751F40) ----------------------------------------------------
__int64 __fastcall sub_140751F40(__int64 a1)
{
	_DWORD* v1; // rdx
	int v2; // eax
	__int64 v3; // rax
	__int64 v4; // rcx

	v1 = &unk_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(_DWORD**)(a1 + 24);
	v2 = v1[2];
	if (v2 == 2)
	{
		v3 = *(_QWORD*)v1;
	}
	else
	{
		if (v2 != 7)
			return 0i64;
		v3 = *(_QWORD*)v1 + 48i64;
	}
	if (v3)
	{
		v4 = *(_QWORD*)(v3 + 64);
		if (v4)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 168i64))(v4);
	}
	return 0i64;
}

