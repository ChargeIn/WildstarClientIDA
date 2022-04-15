#include "../winhttp.h"

//----- (000000014082FF40) ----------------------------------------------------
__int64 __fastcall sub_14082FF40(char a1, int a2, int a3, __int64 a4, __int64 a5)
{
	_DWORD* v6; // rax
	int v7; // ebx
	__int64 i; // rcx
	__int64 j; // rax
	_QWORD* v11; // rdi
	unsigned int v12; // edx
	unsigned __int64 v13; // rbp

	v6 = (_DWORD*)qword_140C61C08;
	v7 = (a1 & 0xF) + 16 * (a2 + (a3 << 12));
	for (i = qword_140C61C10; v6 != (_DWORD*)qword_140C61C10; v6 += 6)
	{
		if (*v6 == v7)
			break;
	}
	if (v6 != (_DWORD*)qword_140C61C10 && v6 != (_DWORD*)-8i64)
		return 2i64;
	if (a4 && a5)
	{
		for (j = qword_140C61C08; j != qword_140C61C10; j += 24i64)
		{
			if (*(_DWORD*)j == v7)
				break;
		}
		if (j == qword_140C61C10)
		{
			v11 = 0i64;
		}
		else
		{
			v11 = (_QWORD*)(j + 8);
			if (j != -8)
			{
				*v11 = a4;
				*(_QWORD*)(j + 16) = a5;
				return 2 - (unsigned int)(v11 != 0i64);
			}
		}
		v12 = dword_140C61C18;
		v13 = (unsigned int)(((int)qword_140C61C10 - (int)qword_140C61C08) / 24);
		if (v13 >= (unsigned int)dword_140C61C18)
		{
			if (!sub_14082FCD0(&qword_140C61C08, 2))
				return 2 - (unsigned int)(v11 != 0i64);
			v12 = dword_140C61C18;
			i = qword_140C61C10;
		}
		if (v13 < v12)
		{
			qword_140C61C10 = i + 24;
			if (i)
			{
				v11 = (_QWORD*)(i + 8);
				*(_DWORD*)i = v7;
				*(_QWORD*)(i + 8) = a4;
				*(_QWORD*)(i + 16) = a5;
			}
		}
		return 2 - (unsigned int)(v11 != 0i64);
	}
	return 31i64;
}
// 140C61C08: using guessed type __int64 qword_140C61C08;
// 140C61C10: using guessed type __int64 qword_140C61C10;
// 140C61C18: using guessed type int dword_140C61C18;

