#include "../winhttp.h"

//----- (00000001405598D0) ----------------------------------------------------
__int64 __fastcall sub_1405598D0(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // rcx

	result = 0i64;
	*(_DWORD*)(a1 + 4) = -1;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)(a1 + 64) = 0;
	*(_DWORD*)(a1 + 16) = 0;
	*(_DWORD*)(a1 + 72) = 300;
	*(_QWORD*)(a1 + 76) = -1i64;
	*(_DWORD*)(a1 + 84) = -1;
	*(_DWORD*)(a1 + 128) = 0;
	v2 = *(_QWORD*)(a1 + 144);
	if (v2)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 152i64))(v2);
	return result;
}

