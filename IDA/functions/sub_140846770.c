#include "../winhttp.h"

//----- (0000000140846770) ----------------------------------------------------
_QWORD* __fastcall sub_140846770(_QWORD* a1, int a2, __int64 a3)
{
	_DWORD* v3; // rax
	_DWORD* v4; // r9
	_QWORD* v7; // rbx
	_QWORD* result; // rax
	_DWORD* v9; // rax

	v3 = (_DWORD*)*a1;
	v4 = (_DWORD*)a1[1];
	if ((_DWORD*)*a1 != v4)
	{
		do
		{
			if (*v3 == a2)
				break;
			v3 += 4;
		} while (v3 != v4);
	}
	if (v3 == v4)
	{
		v7 = 0i64;
	}
	else
	{
		v7 = v3 + 2;
		if (v3 != (_DWORD*)-8i64)
		{
			*v7 = a3;
			return v7;
		}
	}
	v9 = (_DWORD*)sub_1408458B0((__int64)a1);
	if (!v9)
		return v7;
	*v9 = a2;
	result = v9 + 2;
	*result = a3;
	return result;
}

