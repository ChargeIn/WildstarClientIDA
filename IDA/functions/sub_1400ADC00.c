#include "../winhttp.h"

//----- (00000001400ADC00) ----------------------------------------------------
__int64 __fastcall sub_1400ADC00(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 i; // rbx
	__int64 v9; // rax
	__int64 v10; // rsi

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0xAui64);
	if ((int)result >= 0)
	{
		v7 = sub_1403374E0(a2, 12i64 * *a3);
		*((_QWORD*)a3 + 1) = v7;
		if (!v7)
			return 2147500037i64;
		for (i = 0i64; (unsigned int)i < *a3; i = (unsigned int)(i + 1))
		{
			v9 = *((_QWORD*)a3 + 1);
			v10 = v9 + 12 * i;
			if (!v10)
				return 2147500037i64;
			result = sub_14006C1C0(a1, (_DWORD*)(v9 + 12 * i));
			if ((int)result < 0)
				return result;
			result = sub_14006C1C0(a1, (_DWORD*)(v10 + 4));
			if ((int)result < 0)
				return result;
			result = sub_14006C1C0(a1, (_DWORD*)(v10 + 8));
			if ((int)result < 0)
				return result;
		}
		if (a3 == (unsigned int*)-16i64)
			return 2147500037i64;
		result = sub_14006BF60(a1, (_WORD*)a3 + 8, 0x10ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, a3 + 5, 2ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, a3 + 6, 4ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, a3 + 7, 0x20ui64);
					if ((int)result >= 0)
						return sub_14006C090(a1, a3 + 8, 1ui64);
				}
			}
		}
	}
	return result;
}

