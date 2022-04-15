#include "../winhttp.h"

//----- (00000001402F0000) ----------------------------------------------------
__int64 __fastcall sub_1402F0000(__int64 a1, __int64 a2, int a3, _OWORD* a4)
{
	_QWORD* v5; // rdx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 result; // rax

	*(_QWORD*)a1 = &off_140B64078;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 8) = a2;
	v5 = (_QWORD*)(a2 + 72);
	if (!*(_QWORD*)(a1 + 16))
	{
		*(_QWORD*)(a1 + 16) = v5;
		v7 = a1 + 24;
		*(_QWORD*)v7 = *v5;
		*v5 = a1;
		if (*(_QWORD*)v7)
			*(_QWORD*)(*(_QWORD*)v7 + 16i64) = v7;
	}
	*(_QWORD*)a1 = off_140B63FB8;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_DWORD*)(a1 + 32) = a3;
	*(_DWORD*)(a1 + 36) = 2;
	v8 = *(_QWORD*)(a1 + 40);
	if (v8)
	{
		(*(void(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)v8 + 8i64))(v8, v5);
		*(_QWORD*)(a1 + 40) = 0i64;
	}
	result = a1;
	*(_OWORD*)(a1 + 64) = *a4;
	*(_OWORD*)(a1 + 80) = a4[1];
	*(_OWORD*)(a1 + 96) = a4[2];
	*(_OWORD*)(a1 + 112) = a4[3];
	return result;
}
// 140B63FB8: using guessed type __int64 (__fastcall *off_140B63FB8[25])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();

