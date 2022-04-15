#include "../winhttp.h"

//----- (0000000140056EB0) ----------------------------------------------------
__int64 __fastcall sub_140056EB0(__int64 a1, unsigned __int64* a2)
{
	unsigned __int64 v3; // r8
	__int64 v4; // rcx
	__int64 v5; // rbx
	_QWORD* v6; // rax
	unsigned __int64 v7; // rcx
	_QWORD* v9; // rax
	__int64 v10; // rcx

	if (a2)
	{
		v3 = -1i64;
		do
			++v3;
		while (*((_BYTE*)a2 + v3));
		sub_140058710(a1, a2, v3);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	v4 = *(_QWORD*)(a1 + 16);
	v5 = v4 - 16;
	v6 = sub_14005C450(*(_QWORD*)(v4 - 32), (int*)(v4 - 16));
	*(_QWORD*)v5 = *v6;
	*(_DWORD*)(v5 + 8) = *((_DWORD*)v6 + 2);
	v7 = *(_QWORD*)(a1 + 16);
	if ((_DWORD*)(v7 - 16) == dword_140A12138 || *(_DWORD*)(v7 - 16 + 8))
	{
		v9 = (_QWORD*)(v7 - 16);
		if (v7 - 16 < v7)
		{
			do
			{
				v10 = *v9;
				v9 += 2;
				*(v9 - 4) = v10;
				*((_DWORD*)v9 - 6) = *((_DWORD*)v9 - 2);
			} while ((unsigned __int64)v9 < *(_QWORD*)(a1 + 16));
		}
		*(_QWORD*)(a1 + 16) -= 16i64;
		return 1i64;
	}
	else
	{
		*(_QWORD*)(a1 + 16) = v7 - 32;
		return 0i64;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

