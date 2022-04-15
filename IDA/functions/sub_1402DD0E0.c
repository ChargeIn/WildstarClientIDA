#include "../winhttp.h"

//----- (00000001402DD0E0) ----------------------------------------------------
__int64 __fastcall sub_1402DD0E0(__int64 a1, _DWORD* a2, int a3, _QWORD* a4, int a5)
{
	int* v10; // rax
	int v11; // edi
	__int64 v12; // r10

	if (!a4)
		return 2147942487i64;
	v10 = sub_14018B280(64i64, 1u);
	if (!v10)
		return 2147942414i64;
	*(_QWORD*)v10 = off_140B63100;
	*((_QWORD*)v10 + 6) = 0i64;
	*((_QWORD*)v10 + 7) = 0i64;
	v10[4] = 1;
	*((_QWORD*)v10 + 1) = 0i64;
	v11 = sub_1402E29B0((__int64)v10, a1, a2, a3, a5);
	if (v11 >= 0)
	{
		*a4 = v12;
		return 0i64;
	}
	else
	{
		(*(void (**)(void))(*(_QWORD*)v12 + 8i64))();
		return (unsigned int)v11;
	}
}
// 1402DD160: variable 'v12' is possibly undefined
// 140B63100: using guessed type __int64 (__fastcall *off_140B63100[11])();

