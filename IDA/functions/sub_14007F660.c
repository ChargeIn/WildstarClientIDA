#include "../winhttp.h"

//----- (000000014007F660) ----------------------------------------------------
__int64 __fastcall sub_14007F660(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rbx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0x20ui64);
	if ((int)result >= 0)
	{
		v7 = sub_1403374E0(a2, 48i64 * *a3);
		*((_QWORD*)a3 + 1) = v7;
		if (!v7)
			return 2147500037i64;
		v8 = 0i64;
		if (*a3)
		{
			while (1)
			{
				result = sub_14007F410(a1, a2, *((_QWORD*)a3 + 1) + 48 * v8);
				if ((int)result < 0)
					break;
				v8 = (unsigned int)(v8 + 1);
				if ((unsigned int)v8 >= *a3)
					return sub_14006C090(a1, a3 + 4, 2ui64);
			}
		}
		else
		{
			return sub_14006C090(a1, a3 + 4, 2ui64);
		}
	}
	return result;
}

