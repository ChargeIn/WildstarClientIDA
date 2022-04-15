#include "../winhttp.h"

//----- (0000000140897CD0) ----------------------------------------------------
_QWORD* __fastcall sub_140897CD0(_QWORD* a1, __int64 a2, __int64 a3)
{
	_QWORD* v3; // rax
	_QWORD* v4; // r9
	_QWORD* v7; // rbx
	_QWORD* result; // rax
	_QWORD* v9; // rax

	v3 = (_QWORD*)*a1;
	v4 = (_QWORD*)a1[1];
	if ((_QWORD*)*a1 != v4)
	{
		do
		{
			if (*v3 == a2)
				break;
			v3 += 2;
		} while (v3 != v4);
	}
	if (v3 == v4)
	{
		v7 = 0i64;
	}
	else
	{
		v7 = v3 + 1;
		if (v3 != (_QWORD*)-8i64)
		{
			*v7 = a3;
			return v7;
		}
	}
	v9 = (_QWORD*)sub_1408458B0((__int64)a1);
	if (!v9)
		return v7;
	*v9 = a2;
	result = v9 + 1;
	*result = a3;
	return result;
}

