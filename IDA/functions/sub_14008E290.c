#include "../winhttp.h"

//----- (000000014008E290) ----------------------------------------------------
__int64 __fastcall sub_14008E290(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	_BYTE* v7; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006BE30(a1, (_BYTE*)a3, 3ui64);
	if ((int)result >= 0)
	{
		result = sub_14006BE30(a1, (_BYTE*)(a3 + 1), 7ui64);
		if ((int)result >= 0)
		{
			v7 = (_BYTE*)sub_1403374E0(a2, 2i64 * *(unsigned __int8*)(a3 + 1));
			*(_QWORD*)(a3 + 8) = v7;
			if (v7)
				return sub_140337160(a1, v7, 2i64 * *(unsigned __int8*)(a3 + 1));
			else
				return 2147500037i64;
		}
	}
	return result;
}

