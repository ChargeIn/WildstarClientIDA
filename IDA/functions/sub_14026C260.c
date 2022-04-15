#include "../winhttp.h"

//----- (000000014026C260) ----------------------------------------------------
__int64 __fastcall sub_14026C260(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rcx

	*(_DWORD*)(a1 + 7684) = 4;
	*(_DWORD*)(a1 + 7704) = 27;
	v2 = *(_QWORD*)(a1 + 7688);
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 7688) = 0i64;
	}
	v4 = *(_QWORD*)(a1 + 7712);
	if (v4)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
		*(_QWORD*)(a1 + 7712) = 0i64;
	}
	return result;
}

