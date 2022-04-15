#include "../winhttp.h"

//----- (00000001406C36B0) ----------------------------------------------------
__int64 __fastcall sub_1406C36B0(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rbx
	__int64 v3; // rcx

	v1 = sub_1406C3560(a1);
	v2 = v1;
	if (v1)
	{
		v3 = *(_QWORD*)(v1 + 1072);
		if (v3)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			*(_QWORD*)(v2 + 1072) = 0i64;
		}
		*(_BYTE*)(v2 + 1084) = 1;
		sub_1406C2FC0(v2, 0);
	}
	return 0i64;
}

