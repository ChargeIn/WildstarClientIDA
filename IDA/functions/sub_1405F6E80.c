#include "../winhttp.h"

//----- (00000001405F6E80) ----------------------------------------------------
__int64 __fastcall sub_1405F6E80(_QWORD* a1, __int64 a2, int a3)
{
	__int64 v3; // rsi
	unsigned __int64 i; // rbp
	__int64 v7; // rbx
	__int64 v8; // rcx

	v3 = 0i64;
	for (i = 0i64; i < a1[1]; ++i)
	{
		v7 = a1[2] + 8 * i;
		while (*(_QWORD*)v7)
		{
			v8 = *(_QWORD*)v7;
			if (*(_DWORD*)(*(_QWORD*)v7 + 20i64) == a3)
			{
				*(_QWORD*)v7 = *(_QWORD*)(v8 + 8);
				sub_14018B900(v8, 0);
				--* a1;
				++v3;
			}
			else
			{
				v7 = v8 + 8;
			}
		}
	}
	return v3;
}

