#include "../winhttp.h"

//----- (00000001403DA490) ----------------------------------------------------
__int64 __fastcall sub_1403DA490(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v4; // r15
	unsigned int v5; // esi
	int* v6; // rdi
	unsigned int v7; // ebp
	__int64 v8; // rax

	result = sub_1403D90D0(a1, *(_DWORD*)a2);
	v4 = result;
	if (result)
	{
		v5 = 0;
		if (*(_DWORD*)(a2 + 4))
		{
			while (1)
			{
				v6 = (int*)(*(_QWORD*)(a2 + 8) + 16i64 * v5);
				v7 = v6[2];
				if (qword_140C63840)
				{
					v8 = qword_140C63840(off_140A6AD70, v7, qword_140C63858);
				}
				else if (dword_140C63DA4)
				{
					v8 = 0i64;
				}
				else
				{
					v8 = (int)sub_14020B680() >= 0
						? (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64BA8 + 24i64))(qword_140C64BA8, v7)
						: 0i64;
				}
				sub_1401DC0D0(v8);
				result = sub_140466D20(v4, *v6);
				if ((int)result < 0)
					break;
				if (++v5 >= *(_DWORD*)(a2 + 4))
					return 0i64;
			}
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}
// 140A6AD70: using guessed type wchar_t *off_140A6AD70[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63DA4: using guessed type int dword_140C63DA4;
// 140C64BA8: using guessed type __int64 qword_140C64BA8;

