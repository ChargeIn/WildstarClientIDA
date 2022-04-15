#include "../winhttp.h"

//----- (0000000140862590) ----------------------------------------------------
__int64 __fastcall sub_140862590(_QWORD* a1, int a2, _QWORD* a3, _DWORD* a4)
{
	_DWORD* v4; // rax
	_DWORD* v5; // r10
	_DWORD* v8; // rax
	__int64 result; // rax

	v4 = (_DWORD*)a1[2];
	v5 = (_DWORD*)a1[3];
	if (v4 == v5)
		goto LABEL_6;
	do
	{
		if (*v4 == a2)
			break;
		v4 += 8;
	} while (v4 != v5);
	if (v4 == v5 || (v8 = v4 + 2) == 0i64)
	{
	LABEL_6:
		sub_14085E910(a1[5]);
		result = 0i64;
		*a3 = 0i64;
		*a4 = 0;
	}
	else
	{
		*a4 = v8[2];
		result = *(_QWORD*)v8;
		*a3 = result;
	}
	return result;
}

