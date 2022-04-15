#include "../winhttp.h"

//----- (0000000140001420) ----------------------------------------------------
__int64 __fastcall sub_140001420(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rbx
	__int64 v3; // rcx

	v1 = sub_140001320(a1);
	v2 = v1;
	if (v1)
	{
		v3 = *(_QWORD*)(v1 + 1056);
		if (v3)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			*(_QWORD*)(v2 + 1056) = 0i64;
		}
		*(_BYTE*)(v2 + 1068) = 1;
		sub_140001070(v2);
	}
	return 0i64;
}

