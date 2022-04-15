#include "../winhttp.h"

//----- (0000000140336A40) ----------------------------------------------------
__int64 __fastcall sub_140336A40(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rsi
	_BYTE* v9; // rax
	_BYTE* v10; // rbx
	__int64 v11; // [rsp+48h] [rbp+20h] BYREF

	result = sub_140336C60(a1, &v11, 1ui64);
	if ((int)result >= 0)
	{
		if ((_BYTE)v11)
		{
			result = sub_140336C60(a1, &v11, 0xFui64);
			if ((int)result < 0)
				return result;
			v7 = (unsigned __int16)v11;
		}
		else
		{
			result = sub_140336C60(a1, &v11, 7ui64);
			if ((int)result < 0)
				return result;
			v7 = (unsigned __int8)v11;
		}
		v8 = 2 * v7;
		v9 = (_BYTE*)sub_1403374E0(a2, 2 * v7 + 2);
		v10 = v9;
		if (v9)
		{
			result = sub_140337160(a1, v9, v8);
			*(_WORD*)&v10[v8] = 0;
			*a3 = v10;
		}
		else
		{
			return 2147500037i64;
		}
	}
	return result;
}

