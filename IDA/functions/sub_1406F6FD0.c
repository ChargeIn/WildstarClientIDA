#include "../winhttp.h"

//----- (00000001406F6FD0) ----------------------------------------------------
__int64 __fastcall sub_1406F6FD0(__int64 a1)
{
	int v1; // ebx
	__int64 v3; // rcx
	int v4; // edx
	_DWORD* v5; // rcx
	__int64 result; // rax

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C65898 + 28048);
	v4 = 0;
	if (v3)
		v4 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v3 + 40i64))(v3, 0i64);
	v5 = *(_DWORD**)(a1 + 16);
	result = 1i64;
	LOBYTE(v1) = v4 != 0;
	v5[2] = 1;
	*v5 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

