#include "../winhttp.h"

//----- (00000001401C5450) ----------------------------------------------------
void sub_1401C5450()
{
	unsigned __int64 v0; // rbp
	__int64 v1; // r14
	unsigned __int64 v2; // rdi
	_QWORD* i; // rsi
	__int64 v4; // rbx
	__int64 v5; // rcx

	v0 = 0i64;
	if (qword_140C78560)
	{
		v1 = 0i64;
		do
		{
			v2 = 0i64;
			for (i = (_QWORD*)(v1 + *((_QWORD*)&xmmword_140C785A0 + 1)); v2 < i[1]; ++v2)
			{
				v4 = i[2];
				while (*(_QWORD*)(v4 + 8 * v2))
				{
					v5 = *(_QWORD*)(v4 + 8 * v2);
					*(_QWORD*)(v4 + 8 * v2) = *(_QWORD*)(v5 + 8);
					sub_14018B900(v5, 0);
				}
			}
			++v0;
			*i = 0i64;
			v1 += 40i64;
		} while (v0 < qword_140C78560);
	}
}
// 140C78560: using guessed type __int64 qword_140C78560;
// 140C785A0: using guessed type __int128 xmmword_140C785A0;

