#include "../winhttp.h"

//----- (00000001405E7EF0) ----------------------------------------------------
__int64 __fastcall sub_1405E7EF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	__int64 v6; // rbx
	__int64 v7; // rsi
	__int64 result; // rax

	v6 = 0i64;
	v7 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64))(*(_QWORD*)a1 + 24i64))(
		a1,
		a2,
		*(_QWORD*)(qword_140C65898 + 120),
		a5);
	while (1)
	{
		result = sub_1403B3320(v6, v7, a3);
		if ((_DWORD)result)
		{
			if ((_DWORD)result != 317)
				break;
		}
		if ((unsigned __int64)++v6 >= 2)
			return 0i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

