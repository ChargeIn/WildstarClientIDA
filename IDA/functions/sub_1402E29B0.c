#include "../winhttp.h"

//----- (00000001402E29B0) ----------------------------------------------------
__int64 __fastcall sub_1402E29B0(__int64 a1, __int64 a2, _DWORD* a3, int a4, int a5)
{
	_QWORD* v5; // r8
	bool v6; // zf
	__int64 v7; // rax

	if (*a3 < dword_140C41D70 || a3[2] > dword_140C41D78 || a3[1] < dword_140C41D74 || a3[3] > dword_140C41D7C)
		return 2147942487i64;
	*(_QWORD*)(a1 + 8) = a2;
	_InterlockedIncrement((volatile signed __int32*)(a2 + 12));
	*(_DWORD*)(a1 + 24) = *a3;
	*(_DWORD*)(a1 + 28) = a3[1];
	*(_DWORD*)(a1 + 32) = a3[2];
	*(_DWORD*)(a1 + 36) = a3[3];
	v5 = (_QWORD*)(*(_QWORD*)(a1 + 8) + 1824i64);
	v6 = *(_QWORD*)(a1 + 48) == 0i64;
	*(_DWORD*)(a1 + 40) = a4;
	*(_DWORD*)(a1 + 20) = a5;
	if (v6)
	{
		*(_QWORD*)(a1 + 48) = v5;
		*(_QWORD*)(a1 + 56) = *v5;
		*v5 = a1;
		v7 = *(_QWORD*)(a1 + 56);
		if (v7)
			*(_QWORD*)(v7 + 48) = a1 + 56;
	}
	return 0i64;
}
// 140C41D70: using guessed type int dword_140C41D70;
// 140C41D74: using guessed type int dword_140C41D74;
// 140C41D78: using guessed type int dword_140C41D78;
// 140C41D7C: using guessed type int dword_140C41D7C;

