#include "../winhttp.h"

//----- (0000000140865A40) ----------------------------------------------------
__int64 __fastcall sub_140865A40(_QWORD* a1, __int64 a2)
{
	__int64 v4; // rbx
	_QWORD** v5; // rsi
	__int64 result; // rax
	__int64 i; // rbx

	if (a1[8])
	{
		v4 = a1[4];
		if (v4 != a1[5])
		{
			v5 = (_QWORD**)(v4 + 16);
			do
			{
				if (*v5)
				{
					result = sub_14084D390(*v5, (__int64)a1);
					*v5 = 0i64;
				}
				v4 += 40i64;
				v5 += 5;
			} while (v4 != a1[5]);
		}
	}
	a1[8] = a2;
	if (a2)
	{
		for (i = a1[4]; i != a1[5]; i += 40i64)
			result = sub_140865CE0(i + 8, (__int64)a1);
	}
	return result;
}

