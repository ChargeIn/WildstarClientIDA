#include "../winhttp.h"

//----- (000000014083C3D0) ----------------------------------------------------
__int64 __fastcall sub_14083C3D0(__int64 a1)
{
	__int64 v2; // rcx

	v2 = *(_QWORD*)(a1 + 48);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 48) = 0i64;
	}
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_DWORD*)(a1 + 16) = 0;
	return 1i64;
}

