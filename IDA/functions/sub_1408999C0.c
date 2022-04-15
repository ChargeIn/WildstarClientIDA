#include "../winhttp.h"

//----- (00000001408999C0) ----------------------------------------------------
__int64 __fastcall sub_1408999C0(_QWORD* a1, __int64 a2)
{
	__int64 v4; // rax
	__int64* v5; // rcx
	char v7; // [rsp+50h] [rbp+18h] BYREF

	v4 = sub_1408819F0(dword_140C10F20, 80i64);
	if (!v4)
		return 2i64;
	*(_QWORD*)v4 = 0i64;
	*(_QWORD*)(v4 + 8) = a2;
	if (a2)
		++* (_DWORD*)(a2 + 80);
	*(_QWORD*)(v4 + 16) = 0i64;
	*(_BYTE*)(v4 + 24) = 0;
	*(_BYTE*)(v4 + 72) &= 0xF8u;
	*(_QWORD*)v4 = 0i64;
	v5 = (__int64*)a1[21];
	if (v5)
		*v5 = v4;
	else
		a1[20] = v4;
	a1[21] = v4;
	a1[22] = a1[20];
	(*(void(__fastcall**)(_QWORD*, _QWORD, _QWORD, _QWORD, char*, _DWORD))(*a1 + 88i64))(a1, 0i64, 0i64, 0i64, &v7, 0);
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

