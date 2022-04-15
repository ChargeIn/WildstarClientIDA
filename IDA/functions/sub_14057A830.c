#include "../winhttp.h"

//----- (000000014057A830) ----------------------------------------------------
__int64 __fastcall sub_14057A830(__int64 a1, int* a2, double a3)
{
	__int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // r9
	__int64 result; // rax
	int v8; // ebp
	__int64 v9; // rdi
	__int64 i; // rbx
	__int64 v11; // [rsp+58h] [rbp+10h] BYREF

	v4 = sub_1403D90D0(a1, *a2);
	v5 = v4;
	if (v4)
	{
		if (*(_DWORD*)(v4 + 3408))
		{
			return 0i64;
		}
		else
		{
			v8 = dword_140C636A8;
			v9 = 0i64;
			*(_DWORD*)(v4 + 3416) = a2[3];
			LODWORD(v11) = v8;
			if (a2[2])
			{
				sub_1405B3CF0(v4, v8);
				*(_DWORD*)(v5 + 3420) = 0;
			}
			sub_14079AB90(v5 + 3420, a2[1], v8);
			if ((unsigned int)(*(_DWORD*)(v5 + 3572) - 2) <= 1)
				sub_14079AAA0((_QWORD*)(v5 + 3568));
			if (a2[4])
			{
				while (1)
				{
					result = sub_1405B4AB0(
						v5,
						(unsigned int*)&v11,
						(unsigned int*)(*((_QWORD*)a2 + 3) + 72 * v9),
						v5 + 3420,
						(_DWORD*)(v5 + 3568));
					if ((int)result < 0)
						break;
					v9 = (unsigned int)(v9 + 1);
					if ((unsigned int)v9 >= a2[4])
						goto LABEL_12;
				}
			}
			else
			{
			LABEL_12:
				if (*(_QWORD*)(v5 + 3712))
				{
					*(_DWORD*)(v5 + 3572) = 1;
				}
				else
				{
					*(_DWORD*)(v5 + 3572) = 2;
					if (*(_QWORD*)(v5 + 3656) || *(_QWORD*)(v5 + 3664))
						sub_140195960(v5 + 3576, *(_DWORD*)(v5 + 3568) != 0 ? 0x96 : 0, v5 + 3648, 4);
				}
				sub_1405B4F50(v5, v8);
				sub_1405B5070(v5, v8);
				sub_1405B82A0(v5, v8, a3);
				for (i = *(_QWORD*)(v5 + 3848); i; i = *(_QWORD*)(i + 3864))
					sub_1405B4EF0(i, v8, a3);
				return 0i64;
			}
		}
	}
	else
	{
		v6 = (unsigned int)*a2;
		v11 = 0x141E19560i64;
		sub_1401A3130(5, 2, &v11, v6);
		return 1i64;
	}
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;

