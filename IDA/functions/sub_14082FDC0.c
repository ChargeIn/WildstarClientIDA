#include "../winhttp.h"

//----- (000000014082FDC0) ----------------------------------------------------
__int64 __fastcall sub_14082FDC0(int a1, int a2, __int64 a3, __int64 a4)
{
	_DWORD* v6; // rax
	int v7; // edi
	__int64 v8; // rcx
	int i; // edi
	__int64 j; // rax
	_QWORD* v12; // rbx
	unsigned int v13; // edx
	unsigned __int64 v14; // rsi

	v6 = (_DWORD*)qword_140C61C20;
	v7 = a1 + (a2 << 12);
	v8 = qword_140C61C28;
	for (i = 16 * v7 + 1; v6 != (_DWORD*)qword_140C61C28; v6 += 6)
	{
		if (*v6 == i)
			break;
	}
	if (v6 != (_DWORD*)qword_140C61C28 && v6 != (_DWORD*)-8i64)
		return 2i64;
	if (a3 && a4)
	{
		for (j = qword_140C61C20; j != qword_140C61C28; j += 24i64)
		{
			if (*(_DWORD*)j == i)
				break;
		}
		if (j == qword_140C61C28)
		{
			v12 = 0i64;
		}
		else
		{
			v12 = (_QWORD*)(j + 8);
			if (j != -8)
			{
				*v12 = a3;
				*(_QWORD*)(j + 16) = a4;
				return 2 - (unsigned int)(v12 != 0i64);
			}
		}
		v13 = dword_140C61C30;
		v14 = (unsigned int)(((int)qword_140C61C28 - (int)qword_140C61C20) / 24);
		if (v14 >= (unsigned int)dword_140C61C30)
		{
			if (!sub_14082FCD0(&qword_140C61C20, 2))
				return 2 - (unsigned int)(v12 != 0i64);
			v13 = dword_140C61C30;
			v8 = qword_140C61C28;
		}
		if (v14 < v13)
		{
			qword_140C61C28 = v8 + 24;
			if (v8)
			{
				v12 = (_QWORD*)(v8 + 8);
				*(_DWORD*)v8 = i;
				*(_QWORD*)(v8 + 8) = a3;
				*(_QWORD*)(v8 + 16) = a4;
			}
		}
		return 2 - (unsigned int)(v12 != 0i64);
	}
	return 31i64;
}
// 140C61C20: using guessed type __int64 qword_140C61C20;
// 140C61C28: using guessed type __int64 qword_140C61C28;
// 140C61C30: using guessed type int dword_140C61C30;

