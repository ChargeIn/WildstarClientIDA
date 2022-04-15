#include "../winhttp.h"

//----- (00000001402EF410) ----------------------------------------------------
__int64 __fastcall sub_1402EF410(__int64 a1, __int64 a2, int a3, _DWORD* a4)
{
	_QWORD* v4; // r10
	__int64 v5; // rax

	v4 = (_QWORD*)(a2 + 72);
	*(_QWORD*)a1 = &off_140B64078;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 8) = a2;
	if (!*(_QWORD*)(a1 + 16))
	{
		*(_QWORD*)(a1 + 16) = v4;
		*(_QWORD*)(a1 + 24) = *v4;
		*v4 = a1;
		v5 = *(_QWORD*)(a1 + 24);
		if (v5)
			*(_QWORD*)(v5 + 16) = a1 + 24;
	}
	*(_QWORD*)a1 = off_140B64058;
	*(_DWORD*)(a1 + 64) = 0;
	*(_DWORD*)(a1 + 32) = a3;
	*(_DWORD*)(a1 + 36) = *a4;
	*(_DWORD*)(a1 + 40) = a4[1];
	*(_DWORD*)(a1 + 44) = a4[2];
	*(_DWORD*)(a1 + 48) = a4[3];
	*(_DWORD*)(a1 + 52) = a4[4];
	*(_DWORD*)(a1 + 56) = a4[5];
	*(_DWORD*)(a1 + 60) = a4[6];
	*(_DWORD*)(a1 + 64) = a4[7];
	return a1;
}
// 140B64058: using guessed type __int64 (__fastcall *off_140B64058[5])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();

