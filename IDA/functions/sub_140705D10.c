#include "../winhttp.h"

//----- (0000000140705D10) ----------------------------------------------------
__int64 __fastcall sub_140705D10(_QWORD* a1, int a2)
{
	_DWORD* v2; // rax
	int v5; // ebx
	int v6; // eax
	unsigned int v7; // eax
	int v8; // ecx
	int v9; // ecx
	int v10; // ecx
	int v11; // ecx
	__int64 v12; // rcx
	__int64 result; // rax
	int v14; // [rsp+40h] [rbp+8h] BYREF
	unsigned int v15; // [rsp+44h] [rbp+Ch]
	int v16; // [rsp+50h] [rbp+18h] BYREF
	int v17; // [rsp+54h] [rbp+1Ch]

	v2 = (_DWORD*)a1[3];
	v5 = 5;
	v16 = 300;
	v17 = -1;
	v14 = 300;
	v15 = -1;
	if ((unsigned __int64)v2 >= a1[2] || v2 == dword_140A12138 || (int)v2[2] <= 0)
		v6 = 0;
	else
		v6 = sub_140056D60(a1, 1u);
	v7 = v6 - 1;
	if (v7 < *(_DWORD*)(qword_140C65898 + 196))
	{
		v14 = 1;
		v15 = v7;
		v8 = sub_140399DE0(qword_140C65898, &v14, &v16, 0, a2);
		if (v8)
		{
			v9 = v8 - 14;
			if (v9)
			{
				v10 = v9 - 12;
				if (v10)
				{
					v11 = v10 - 292;
					if (v11)
					{
						if (v11 == 1)
							v5 = 3;
					}
					else
					{
						v5 = 4;
					}
				}
				else
				{
					v5 = 2;
				}
			}
			else
			{
				v5 = 1;
			}
		}
		else
		{
			v5 = 0;
		}
	}
	v12 = a1[2];
	*(_DWORD*)(v12 + 8) = 3;
	result = 1i64;
	*(double*)v12 = (double)v5;
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

