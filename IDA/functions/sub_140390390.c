#include "../winhttp.h"

//----- (0000000140390390) ----------------------------------------------------
__int64 __fastcall sub_140390390(__int64 a1, int a2, __int64 a3, __int64 a4)
{
	__int64 v4; // rdi
	__int64 v8; // rbx
	__int64 v9; // rax
	bool v10; // zf

	v4 = 0i64;
	if ((dword_140DC2130 & 1) == 0)
	{
		qword_140DC2140 = 0i64;
		dword_140DC2130 |= 1u;
		qword_140DC2138 = 0i64;
		sub_1407DD89C(sub_14094F7B0);
	}
	v8 = a1 + 24;
	qword_140DC2140 = 0i64;
	v9 = a1;
	if (*(_QWORD*)(a1 + 24))
	{
		do
		{
			sub_140391870(a1, (_QWORD*)(v9 + 8));
			v9 = *(_QWORD*)v8;
			v10 = *(_QWORD*)(*(_QWORD*)v8 + 24i64) == 0i64;
			v8 = *(_QWORD*)v8 + 24i64;
		} while (!v10);
		v4 = qword_140DC2140;
	}
	return (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, int, int, __int64))(*(_QWORD*)qword_140C65688
		+ 120i64))(
			qword_140C65688,
			*(_QWORD*)(a1 + 16) + 32i64,
			qword_140DC2138,
			v4,
			a2,
			128,
			a4);
}
// 1403903F9: variable 'a1' is possibly undefined
// 140C65688: using guessed type __int64 qword_140C65688;
// 140DC2130: using guessed type int dword_140DC2130;
// 140DC2138: using guessed type __int64 qword_140DC2138;
// 140DC2140: using guessed type __int64 qword_140DC2140;

