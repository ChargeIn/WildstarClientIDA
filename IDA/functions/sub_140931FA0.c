#include "../winhttp.h"

//----- (0000000140931FA0) ----------------------------------------------------
__int64 __fastcall sub_140931FA0(unsigned int* a1, int a2, __int64 a3)
{
	__int64 result; // rax
	char* v5; // rax
	__int64 v6; // rdi
	_BYTE* v7; // rax
	_BYTE* v8; // rax

	result = *a1;
	if (!(_DWORD)result)
	{
		if (a2 == 267)
		{
			a3 += 48i64;
			goto LABEL_4;
		}
		if (a2)
		{
			if (a2 > 12)
			{
			LABEL_4:
				a1[26] = 1;
				v5 = sub_14092D140((__int64)a1, 1, 0, 0i64, a2, a3);
				if (!v5)
					return *a1;
				*v5 = -113;
				return 0i64;
			}
		}
		else
		{
			a2 = 12;
		}
		v6 = a2;
		if (byte_1409D00E0[a2] >= 8u)
		{
			v8 = sub_14092D610((__int64)a1, 3i64);
			if (v8)
			{
				*v8 = 2;
				*((_QWORD*)a1 + 11) += 2i64;
				v8[1] = 65;
				v8[2] = byte_1409D00E0[v6 + 16] + 88;
				return 0i64;
			}
		}
		else
		{
			v7 = sub_14092D610((__int64)a1, 2i64);
			if (v7)
			{
				*v7 = 1;
				++* ((_QWORD*)a1 + 11);
				v7[1] = byte_1409D00E0[v6 + 16] + 88;
				return 0i64;
			}
		}
		return *a1;
	}
	return result;
}
// 1409D00E0: using guessed type _BYTE byte_1409D00E0[32];

