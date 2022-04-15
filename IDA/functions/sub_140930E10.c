#include "../winhttp.h"

//----- (0000000140930E10) ----------------------------------------------------
__int64 __fastcall sub_140930E10(__int64 a1, int a2)
{
	unsigned int* v2; // rbx
	__int64 v3; // rsi
	__int64 result; // rax
	__int64 v6; // rdi
	__int64 v7; // r8
	char* v8; // rax
	_QWORD* v9; // rdi

	v2 = *(unsigned int**)a1;
	v3 = a2;
	result = sub_140932A90(*(unsigned int**)a1, 27, 1, 0i64, 262, 16i64, 512, 2i64);
	if ((int)v3 >= 8)
	{
		sub_1409337F0(v2, 2, 0i64, *(int*)(a1 + 36) - 8i64);
		if (!*v2)
		{
			v2[26] = 0;
			if ((unsigned __int64)(v3 + 0x80000000i64) > 0xFFFFFFFF)
			{
				sub_14092A980(v2, 3, v3);
			}
			else
			{
				v8 = sub_14092D140((__int64)v2, 1, 512, v3, 3, 0i64);
				if (v8)
					*v8 = -57;
			}
		}
		v9 = sub_140932570((__int64)v2);
		sub_140932690(v2, 14, 258, 8i64, 1, 0i64);
		sub_140932A90(v2, 539, 3, 0i64, 3, 0i64, 512, 1i64);
		result = (__int64)sub_140932450((__int64)v2, 1);
		if (result && v9)
		{
			*(_QWORD*)(result + 16) &= ~2ui64;
			*(_QWORD*)(result + 16) |= 1ui64;
			*(_QWORD*)(result + 24) = v9;
		}
	}
	else if ((int)v3 > 0)
	{
		v6 = 48i64;
		v3 = (unsigned int)v3;
		do
		{
			if (!*v2)
			{
				v7 = v6 + *(int*)(a1 + 36);
				v2[26] = 0;
				result = sub_14092AA10(v2, 267, v7, 1, 0i64);
			}
			v6 += 8i64;
			--v3;
		} while (v3);
	}
	return result;
}

