#include "../winhttp.h"

//----- (00000001408A5580) ----------------------------------------------------
__int64 __fastcall sub_1408A5580(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	__int64 result; // rax

	if (a4)
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, a3, a4);
	*(_DWORD*)(a1 + 64) = 1077936128;
	*(_DWORD*)(a1 + 28) = 1065353216;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_DWORD*)(a1 + 24) = 0;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_DWORD*)(a1 + 48) = 0;
	*(_DWORD*)(a1 + 68) = 16777217;
	result = 1i64;
	*(_DWORD*)(a1 + 56) = 1120403456;
	*(_DWORD*)(a1 + 52) = 1065353216;
	*(_BYTE*)(a1 + 60) = 1;
	return result;
}

