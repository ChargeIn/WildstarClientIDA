#include "../winhttp.h"

//----- (0000000140403E00) ----------------------------------------------------
__int64 __fastcall sub_140403E00(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rdi
	unsigned __int64 v4; // rax
	__int64 v5; // r9

	v2 = (_QWORD*)qword_140C658A0;
	v4 = sub_140407590((__int64*)qword_140C658A0, (int*)a2);
	if (v4 < v2[1])
	{
		v5 = *(_QWORD*)(*v2 + 8 * v4);
		if (**(_DWORD**)(v5 + 8) == *(_DWORD*)a2 && *(_QWORD*)(v5 + 16) == *(_QWORD*)(a2 + 8) && v5)
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChatAction", "HiSS");
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

