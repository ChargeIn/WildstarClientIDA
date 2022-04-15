#include "../winhttp.h"

//----- (0000000140336980) ----------------------------------------------------
__int64 __fastcall sub_140336980(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax
	__int64 v7; // rbx
	_BYTE* v8; // rax
	_BYTE* v9; // rdi
	__int64 v10; // [rsp+48h] [rbp+20h] BYREF

	result = sub_140336C60(a1, &v10, 1ui64);
	if ((int)result >= 0)
	{
		if ((_BYTE)v10)
		{
			result = sub_140336C60(a1, &v10, 0xFui64);
			if ((int)result < 0)
				return result;
			v7 = (unsigned __int16)v10;
		}
		else
		{
			result = sub_140336C60(a1, &v10, 7ui64);
			if ((int)result < 0)
				return result;
			v7 = (unsigned __int8)v10;
		}
		v8 = (_BYTE*)sub_1403374E0(a2, v7 + 1);
		v9 = v8;
		if (v8)
		{
			result = sub_140337160(a1, v8, v7);
			v9[v7] = 0;
			*a3 = v9;
		}
		else
		{
			return 2147500037i64;
		}
	}
	return result;
}

