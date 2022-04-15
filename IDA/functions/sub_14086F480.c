#include "../winhttp.h"

//----- (000000014086F480) ----------------------------------------------------
_QWORD* __fastcall sub_14086F480(int a1)
{
	_QWORD* result; // rax
	__int64 v3; // rbx
	unsigned int v4; // eax
	int v5; // ecx
	bool v6; // al

	result = (_QWORD*)sub_1408819F0(dword_140C10F20, 192i64);
	v3 = (__int64)result;
	if (result)
	{
		sub_14086FC30(result, a1);
		*(_QWORD*)v3 = off_1409A5B60;
		*(_QWORD*)(v3 + 168) = 0i64;
		*(_QWORD*)(v3 + 176) = 0i64;
		*(_DWORD*)(v3 + 184) = 0;
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 112i64))(v3);
		v6 = 0;
		if (v4 <= 0xC)
		{
			v5 = 5121;
			if (_bittest(&v5, v4))
				v6 = 1;
		}
		*(_BYTE*)(v3 + 91) &= ~2u;
		*(_BYTE*)(v3 + 91) |= 2 * v6;
		sub_140851A00(v3);
		return (_QWORD*)v3;
	}
	return result;
}
// 1409A5B60: using guessed type __int64 (__fastcall *off_1409A5B60[4])();
// 140C10F20: using guessed type int dword_140C10F20;

