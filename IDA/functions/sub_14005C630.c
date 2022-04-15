#include "../winhttp.h"

//----- (000000014005C630) ----------------------------------------------------
_QWORD* __fastcall sub_14005C630(__int64 a1, __int64 a2, __int64 a3)
{
	_QWORD* result; // rax
	__int64 v4; // [rsp+20h] [rbp-18h] BYREF
	int v5; // [rsp+28h] [rbp-10h]

	result = (_QWORD*)(*(_QWORD*)(a2 + 32)
		+ 40 * (*(int*)(a3 + 12) & (unsigned __int64)(int)((1i64 << *(_BYTE*)(a2 + 11)) - 1)));
	while (*((_DWORD*)result + 6) != 4 || result[2] != a3)
	{
		result = (_QWORD*)result[4];
		if (!result)
			goto LABEL_7;
	}
	if (result != (_QWORD*)dword_140A12138)
		return result;
LABEL_7:
	v4 = a3;
	v5 = 4;
	return sub_14005C260(a1, a2, (int*)&v4);
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

