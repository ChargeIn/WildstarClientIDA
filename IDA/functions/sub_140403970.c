#include "../winhttp.h"

//----- (0000000140403970) ----------------------------------------------------
__int64 __fastcall sub_140403970(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	bool v4; // zf
	unsigned int v5; // edx
	__int64 v6; // rax

	v2 = qword_140C658A0;
	v4 = *(_DWORD*)(a2 + 8) == 0;
	v5 = 6;
	if (!v4)
		v5 = 34;
	v6 = sub_140401220((__int64*)qword_140C658A0, v5, 0i64);
	if (v6)
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChatTellFailed", "HS", v6, *(_QWORD*)a2);
	sub_140405E00(v2, *(_WORD*)(a2 + 12));
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

