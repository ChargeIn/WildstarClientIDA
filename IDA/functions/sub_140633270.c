#include "../winhttp.h"

//----- (0000000140633270) ----------------------------------------------------
__int64 __fastcall sub_140633270(__int64* a1, _QWORD* a2)
{
	__int64 i; // rdi
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 result; // rax
	__int64* v8; // rax
	__int64 v9; // rcx

	for (i = *a1; *a1 != *a2; i = *a1)
	{
		v5 = *(_QWORD*)(i + 24);
		if (v5)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
		v6 = *(_QWORD*)(i + 16);
		if (v6)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
		*a1 += 32i64;
		result = *a1;
		if (*a1 == a1[2])
		{
			v8 = (__int64*)(a1[3] + 8);
			a1[3] = (__int64)v8;
			v9 = *v8;
			a1[1] = *v8;
			*a1 = v9;
			result = v9 + 480;
			a1[2] = v9 + 480;
		}
	}
	return result;
}

