#include "../winhttp.h"

//----- (0000000140559130) ----------------------------------------------------
__int64 __fastcall sub_140559130(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rcx

	v2 = *(_QWORD*)(a1 + 136);
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 136) = 0i64;
	}
	v4 = *(_QWORD*)(a1 + 144);
	if (v4)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 144) = 0i64;
	}
	return result;
}

