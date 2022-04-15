#include "../winhttp.h"

//----- (000000014088F5A0) ----------------------------------------------------
__int64 __fastcall sub_14088F5A0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // [rsp+30h] [rbp-18h]
	__int64 v8; // [rsp+38h] [rbp-10h]

	sub_140894FE0(a1 + 104, a2);
	result = *(_QWORD*)(a1 + 200);
	v5 = 0i64;
	while (result)
	{
		if (*(_QWORD*)(result + 8) == a2)
		{
			v6 = *(_QWORD*)(result + 24);
			v8 = v5;
			v7 = v6;
			if (result == *(_QWORD*)(a1 + 200))
				*(_QWORD*)(a1 + 200) = v6;
			else
				*(_QWORD*)(v5 + 24) = v6;
			sub_140881720(dword_140C10F20, result);
			v5 = v8;
			result = v7;
		}
		else
		{
			v5 = result;
			result = *(_QWORD*)(result + 24);
		}
	}
	return result;
}
// 14088F600: conditional instruction was optimized away because rax.8!=0
// 140C10F20: using guessed type int dword_140C10F20;

