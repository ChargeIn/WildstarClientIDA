#include "../winhttp.h"

//----- (000000014008CD00) ----------------------------------------------------
__int64 __fastcall sub_14008CD00(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rdx
	__int64 v9; // r8
	unsigned int v10; // ebx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0x20ui64);
	if ((int)result >= 0)
	{
		v7 = sub_1403374E0(a2, 52i64 * *a3);
		*((_QWORD*)a3 + 1) = v7;
		if (!v7)
			return 2147500037i64;
		v10 = 0;
		if (*a3)
		{
			while (1)
			{
				result = sub_14008C9D0(a1, v8, (_DWORD*)(*((_QWORD*)a3 + 1) + 52i64 * v10));
				if ((int)result < 0)
					break;
				if (++v10 >= *a3)
					return sub_14006C120(a1, (__int64*)a3 + 2, v9);
			}
		}
		else
		{
			return sub_14006C120(a1, (__int64*)a3 + 2, v9);
		}
	}
	return result;
}
// 14008CD6F: variable 'v8' is possibly undefined
// 14008CD85: variable 'v9' is possibly undefined

