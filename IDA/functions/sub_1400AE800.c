#include "../winhttp.h"

//----- (00000001400AE800) ----------------------------------------------------
__int64 __fastcall sub_1400AE800(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	__int64 result; // rax
	_BYTE* v7; // rax
	__int64 v8; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0xAui64);
	if ((int)result >= 0)
	{
		v7 = (_BYTE*)sub_1403374E0(a2, 4i64 * *a3);
		*((_QWORD*)a3 + 1) = v7;
		if (!v7)
			return 2147500037i64;
		result = sub_140337160(a1, v7, 4i64 * *a3);
		if ((int)result < 0)
			return result;
		v8 = sub_1403374E0(a2, 6i64 * *a3);
		*((_QWORD*)a3 + 2) = v8;
		if (!v8)
			return 2147500037i64;
		result = sub_140337160(a1, *((_BYTE**)a3 + 2), 6i64 * *a3);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, a3 + 6, 2ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, a3 + 7, 0x20ui64);
				if ((int)result >= 0)
					return sub_14006C090(a1, a3 + 8, 1ui64);
			}
		}
	}
	return result;
}

