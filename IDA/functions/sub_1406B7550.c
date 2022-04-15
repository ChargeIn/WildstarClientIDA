#include "../winhttp.h"

//----- (00000001406B7550) ----------------------------------------------------
__int64 __fastcall sub_1406B7550(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	int* v4; // rdi
	_DWORD* v5; // rax
	unsigned int v6; // ecx
	int v7; // edx
	__int64 v8; // rcx
	unsigned int v9; // ecx
	unsigned int v10; // ecx
	__int64 v11; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (!v2
		|| (v3 = *(_QWORD*)(v2 + 8)) == 0
		|| (v4 = sub_1403A8810(qword_140C65898, *(_DWORD*)(v3 + 8), *(_DWORD*)(v3 + 12))) == 0i64)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		goto LABEL_22;
	}
	v5 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v5 >= a1[2]
		|| v5 == dword_140A12138
		|| *(int*)(a1[3] + 24i64) <= 0
		|| (v6 = sub_140056D60(a1, 2u), v6 >= 4))
	{
		v11 = a1[2];
		*(_QWORD*)v11 = 0i64;
		*(_DWORD*)(v11 + 8) = 3;
		goto LABEL_22;
	}
	v7 = 0;
	if ((unsigned int)(*v4 - 1) <= 1)
	{
		if (v6)
		{
			v9 = v6 - 1;
			if (v9)
			{
				v10 = v9 - 1;
				if (v10)
				{
					if (v10 == 1)
						v7 = 69;
				}
				else
				{
					v7 = 68;
				}
			}
			else
			{
				v7 = 67;
			}
			goto LABEL_12;
		}
	}
	else if (*v4 || v6)
	{
		goto LABEL_12;
	}
	v7 = 66;
LABEL_12:
	v8 = a1[2];
	*(_DWORD*)(v8 + 8) = 3;
	*(double*)v8 = (double)v7;
LABEL_22:
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

