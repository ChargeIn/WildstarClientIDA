#include "../winhttp.h"

//----- (00000001404D6D00) ----------------------------------------------------
__int64 __fastcall sub_1404D6D00(__int64 a1, _DWORD* a2, _DWORD* a3)
{
	int v3; // edi
	wchar_t** v7; // r14
	int v8; // ebx
	__int64 v9; // rax
	_WORD* v10; // rax
	__int64 result; // rax

	v3 = 0;
	*a2 = 0;
	v7 = off_140B0A750;
	*a3 = 0;
	v8 = 1;
	do
	{
		v9 = sub_1401A6B80(a1, *v7);
		if (v9)
		{
			v10 = (_WORD*)sub_1401A4F40(v9 + 32);
			if (v10)
			{
				*a3 |= v8;
				if (*v10 == 84)
					*a2 |= v8;
			}
		}
		v8 = __ROL4__(v8, 1);
		++v3;
		++v7;
		result = v3;
	} while ((unsigned __int64)v3 < 0xD);
	return result;
}
// 140B0A750: using guessed type wchar_t *off_140B0A750[13];

