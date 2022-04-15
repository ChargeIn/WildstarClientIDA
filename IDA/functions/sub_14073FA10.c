#include "../winhttp.h"

//----- (000000014073FA10) ----------------------------------------------------
void __fastcall sub_14073FA10(unsigned int* a1)
{
	bool v1; // zf
	_DWORD* v2; // rbx
	__int64 v3; // r8
	__int64 v4; // r11
	__int64 v5; // r11
	unsigned int v6; // r9d
	_DWORD* v7; // r8
	unsigned int* v8; // r10
	unsigned int v9; // edx
	unsigned int* v10; // rax

	v1 = a1[3] == 0;
	v2 = a1 + 56;
	a1[56] = 0;
	if (!v1)
	{
		v3 = a1[2];
		if ((unsigned int)v3 < 5)
		{
			v4 = 8 * v3 + 283;
			goto LABEL_7;
		}
	LABEL_5:
		v5 = 0i64;
		goto LABEL_8;
	}
	v3 = (int)a1[2];
	if ((unsigned int)v3 > 0xB)
		goto LABEL_5;
	v4 = 8 * v3 + 175;
LABEL_7:
	v5 = qword_140C65898 + 8 * (v3 + v4);
LABEL_8:
	if (v5)
	{
		if (*(_DWORD*)(v5 + 56) != a1[13])
		{
			*v2 = 1;
			return;
		}
	}
	else if ((_DWORD)v3 != -1)
	{
		return;
	}
	v6 = 0;
	v7 = (_DWORD*)v5;
	v8 = a1 + 14;
LABEL_11:
	if (!v5 || *v7 == *(_DWORD*)((char*)v7 + (_QWORD)((char*)a1 - v5 + 24)))
	{
		v9 = 0;
		v10 = v8;
		while (v10[21] == *v10)
		{
			++v9;
			++v10;
			if (v9 >= 3)
			{
				++v6;
				++v7;
				v8 += 3;
				if (v6 < 7)
					goto LABEL_11;
				return;
			}
		}
	}
	*v2 = 1;
}
// 140C65898: using guessed type __int64 qword_140C65898;

