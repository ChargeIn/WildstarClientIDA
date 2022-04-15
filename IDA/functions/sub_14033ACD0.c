#include "../winhttp.h"

//----- (000000014033ACD0) ----------------------------------------------------
__int64 __fastcall sub_14033ACD0(__int64 a1, int a2, __int64 a3)
{
	__int64 v4; // rcx
	__int64 result; // rax

	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_DWORD*)(a1 + 32) = a2;
	*(_QWORD*)(a1 + 40) = a3;
	*(_QWORD*)(a1 + 200) = 0i64;
	v4 = *(_QWORD*)(a1 + 192);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 192) = 0i64;
	}
	*(_DWORD*)(a1 + 48) = 0;
	result = 0i64;
	memset((void*)(a1 + 56), 0, 0x80ui64);
	return result;
}

