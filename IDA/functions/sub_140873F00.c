#include "../winhttp.h"

//----- (0000000140873F00) ----------------------------------------------------
_QWORD* __fastcall sub_140873F00(__int64* a1, unsigned __int64 a2)
{
	__int64 v2; // r10
	int v3; // r9d
	int v5; // r8d
	int v6; // eax
	unsigned __int64 v7; // rdx
	_QWORD* result; // rax

	v2 = *a1;
	v3 = 0;
	v5 = ((a1[1] - *a1) >> 4) - 1;
	if (v5 >= 0)
	{
		do
		{
			v6 = v3 + (v5 - v3) / 2;
			v7 = *(_QWORD*)(v2 + 16i64 * v6);
			if (a2 >= v7)
			{
				if (a2 <= v7)
					return (_QWORD*)(v2 + 16i64 * v6);
				v3 = v6 + 1;
			}
			else
			{
				v5 = v6 - 1;
			}
		} while (v3 <= v5);
	}
	if (v2 && v2 + 16i64 * v3)
		result = (_QWORD*)sub_140874610((__int64)a1, (16i64 * v3) >> 4);
	else
		result = (_QWORD*)sub_1408741B0((__int64)a1);
	if (result)
		*result = a2;
	return result;
}

