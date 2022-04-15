#include "../winhttp.h"

//----- (0000000140878840) ----------------------------------------------------
__int64 __fastcall sub_140878840(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 56);
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 144i64))(v2);
		*(_QWORD*)(a1 + 56) = 0i64;
	}
	*(_DWORD*)(a1 + 72) = 0;
	*(_DWORD*)(a1 + 144) = 0;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	return result;
}

