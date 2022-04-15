#include "../winhttp.h"

//----- (00000001402DDF50) ----------------------------------------------------
__int64 __fastcall sub_1402DDF50(int a1, _DWORD* a2, int** a3)
{
	int* v7; // rbx
	int v8; // esi

	if (!a3)
		return 2147942487i64;
	v7 = sub_14018B280(56i64, 1u);
	if (!v7)
		return 2147942414i64;
	v7[2] = 1;
	*((_QWORD*)v7 + 6) = 0i64;
	*(_QWORD*)v7 = off_140B62E50;
	v8 = sub_1402DDD20((__int64)v7, a1, a2);
	if (v8 >= 0)
	{
		*a3 = v7;
		return 0i64;
	}
	else
	{
		sub_1402DDE00(v7);
		return (unsigned int)v8;
	}
}
// 140B62E50: using guessed type __int64 (__fastcall *off_140B62E50[49])();

