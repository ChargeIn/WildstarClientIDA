#include "../winhttp.h"

//----- (00000001400D6340) ----------------------------------------------------
__int64 __fastcall sub_1400D6340(__int64 a1)
{
	_DWORD* v1; // rdx
	int v2; // eax
	__int64 v3; // rax
	void(__fastcall * **v4)(_QWORD, __int64); // rcx

	v1 = &unk_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(_DWORD**)(a1 + 24);
	v2 = v1[2];
	if (v2 == 2)
	{
		v3 = *(_QWORD*)v1;
	}
	else if (v2 == 7)
	{
		v3 = *(_QWORD*)v1 + 48i64;
	}
	else
	{
		v3 = 0i64;
	}
	v4 = *(void(__fastcall****)(_QWORD, __int64))(v3 + 8);
	if (v4)
		(**v4)(v4, 1i64);
	return 0i64;
}

