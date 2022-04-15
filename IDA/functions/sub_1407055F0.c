#include "../winhttp.h"

//----- (00000001407055F0) ----------------------------------------------------
__int64 __fastcall sub_1407055F0(_QWORD* a1)
{
	unsigned int v2; // eax
	__int64 v3; // rcx
	int v4; // ebx
	__int64 v5; // rax
	int* v6; // rcx
	int v7; // eax
	int v8; // ecx
	__int64 v9; // rcx
	__int64 result; // rax

	v2 = sub_140056D60(a1, 1u);
	v4 = 0;
	if (qword_140C658F8)
	{
		v5 = sub_140448420(v3, v2);
		if (v5)
		{
			v6 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 168i64))(v5);
			v7 = *v6;
			if (*v6)
			{
				v8 = v6[1];
				if (v8)
				{
					if (v7 == v8)
					{
						v4 = 100;
					}
					else
					{
						v4 = (int)(float)((float)((float)v7 / (float)v8) * 100.0);
						if (v4)
						{
							if ((unsigned int)v4 > 0x63)
								v4 = 99;
						}
						else
						{
							v4 = 1;
						}
					}
				}
			}
		}
	}
	v9 = a1[2];
	*(_DWORD*)(v9 + 8) = 3;
	result = 1i64;
	*(double*)v9 = (double)v4;
	a1[2] += 16i64;
	return result;
}
// 140705614: variable 'v3' is possibly undefined
// 140C658F8: using guessed type __int64 qword_140C658F8;

