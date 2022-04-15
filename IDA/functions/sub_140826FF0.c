#include "../winhttp.h"

//----- (0000000140826FF0) ----------------------------------------------------
__int64 __fastcall sub_140826FF0(__int64 a1)
{
	_QWORD* v1; // rdx
	unsigned int v2; // ebp
	_QWORD* v3; // rbx
	unsigned __int64 v5; // r14
	__int64 v6; // rdi
	__int64 v7; // rdx
	unsigned __int64 v8; // rsi
	unsigned __int64 v9; // rcx
	__int64 v10; // rax
	__int64 result; // rax

	v1 = (_QWORD*)qword_140C61BE8;
	v2 = dword_140C61BF0;
	v3 = 0i64;
	v5 = (unsigned int)((qword_140C61BE8 - qword_140C61BE0) >> 3);
	if (v5 >= (unsigned int)dword_140C61BF0)
	{
		v2 = dword_140C61BF0 + 1;
		v6 = sub_1408819F0(dword_140C10F20, 8i64 * (unsigned int)(dword_140C61BF0 + 1));
		if (!v6)
			goto LABEL_11;
		v7 = qword_140C61BE0;
		v8 = (unsigned int)((qword_140C61BE8 - qword_140C61BE0) >> 3);
		if (qword_140C61BE0)
		{
			v9 = 0i64;
			if ((unsigned int)((qword_140C61BE8 - qword_140C61BE0) >> 3))
			{
				do
				{
					v10 = *(_QWORD*)(v7 + 8 * v9++);
					*(_QWORD*)(v6 + 8 * v9 - 8) = v10;
					v7 = qword_140C61BE0;
				} while (v9 < v8);
			}
			sub_140881720(dword_140C10F20, v7);
		}
		v1 = (_QWORD*)(v6 + 8 * v8);
		qword_140C61BE0 = v6;
		qword_140C61BE8 = (__int64)v1;
		dword_140C61BF0 = v2;
	}
	if (v5 < v2)
	{
		v3 = v1;
		qword_140C61BE8 = (__int64)(v1 + 1);
		if (v1)
			*v1 = a1;
	}
LABEL_11:
	result = 52i64;
	if (v3)
		return 1i64;
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61BE0: using guessed type __int64 qword_140C61BE0;
// 140C61BE8: using guessed type __int64 qword_140C61BE8;
// 140C61BF0: using guessed type int dword_140C61BF0;

