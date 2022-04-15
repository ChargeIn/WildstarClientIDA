#include "../winhttp.h"

//----- (00000001402BC050) ----------------------------------------------------
__int64 __fastcall sub_1402BC050(__int64 a1, __int64 a2)
{
	_QWORD* v2; // r8
	__int64 v3; // rax

	v2 = (_QWORD*)(a2 + 104);
	*(_QWORD*)a1 = off_140B623E0;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = a2;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 56) = 0;
	if (!*(_QWORD*)(a1 + 72))
	{
		*(_QWORD*)(a1 + 72) = v2;
		*(_QWORD*)(a1 + 80) = *v2;
		*v2 = a1;
		v3 = *(_QWORD*)(a1 + 80);
		if (v3)
			*(_QWORD*)(v3 + 72) = a1 + 80;
	}
	return a1;
}
// 140B623E0: using guessed type __int64 (__fastcall *off_140B623E0[17])();

