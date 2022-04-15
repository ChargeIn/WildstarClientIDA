#include "../winhttp.h"

//----- (0000000140892320) ----------------------------------------------------
__int64 __fastcall sub_140892320(__int64* a1)
{
	__int64 v1; // rbx
	__int64 v2; // rdi
	__int64 v4; // rdx
	__int64 result; // rax

	v1 = *a1;
	v2 = a1[1];
	if (*a1 == v2)
	{
		a1[1] = v1;
	}
	else
	{
		do
		{
			v4 = *(_QWORD*)(v1 + 8);
			if (v4)
				sub_140881720(dword_140C10F20, v4);
			v1 += 16i64;
		} while (v1 != v2);
		result = *a1;
		a1[1] = *a1;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

