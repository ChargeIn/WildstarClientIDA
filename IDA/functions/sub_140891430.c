#include "../winhttp.h"

//----- (0000000140891430) ----------------------------------------------------
__int64 __fastcall sub_140891430(__int64 a1, _DWORD* a2, unsigned int a3)
{
	_QWORD* v6; // rcx
	int v7; // ebx
	__int64 v8; // rax
	_DWORD* v10; // rax

	if (a3)
	{
		v6 = *(_QWORD**)(a1 + 216);
		v7 = 0;
		if (v6)
		{
			v6[1] = *v6;
		}
		else
		{
			v8 = sub_1408819F0(dword_140C10F20, 24i64);
			if (v8)
			{
				*(_QWORD*)v8 = 0i64;
				*(_QWORD*)(v8 + 8) = 0i64;
				*(_DWORD*)(v8 + 16) = 0;
			}
			else
			{
				v8 = 0i64;
			}
			*(_QWORD*)(a1 + 216) = v8;
			if (!v8 || (unsigned int)sub_140891220(v8, a3) != 1)
				return 2i64;
		}
		if (!a3)
			return 1i64;
		while (1)
		{
			v10 = (_DWORD*)sub_140890B10(*(_QWORD*)(a1 + 216));
			if (v10)
			{
				*v10 = *a2;
				v10[1] = a2[1];
				v10[2] = a2[2];
				v10[3] = a2[3];
				v10[4] = a2[4];
				v10[5] = a2[5];
			}
			a2 += 6;
			if (!v10)
				break;
			if (++v7 >= a3)
				return 1i64;
		}
		return 2i64;
	}
	sub_140890CF0(a1);
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

