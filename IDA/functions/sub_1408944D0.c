#include "../winhttp.h"

//----- (00000001408944D0) ----------------------------------------------------
__int64 __fastcall sub_1408944D0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rbx
	__int64 v4; // rsi
	int v5; // ebp

	*(_DWORD*)(a1 + 216) = 0;
	result = *(_QWORD*)(a1 + 224);
	*(_QWORD*)(a1 + 232) = result;
	v3 = *(_QWORD*)(a1 + 168);
	if (v3 == *(_QWORD*)(a1 + 176))
	{
		*(_QWORD*)(a1 + 176) = v3;
	}
	else
	{
		do
		{
			v4 = *(_QWORD*)(v3 + 8);
			v5 = dword_140C10F20;
			if (v4)
			{
				sub_1408562D0(*(_QWORD*)(v3 + 8));
				sub_140881720(v5, v4);
			}
			v3 += 16i64;
		} while (v3 != *(_QWORD*)(a1 + 176));
		result = *(_QWORD*)(a1 + 168);
		*(_QWORD*)(a1 + 176) = result;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

