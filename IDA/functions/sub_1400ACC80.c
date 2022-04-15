#include "../winhttp.h"

//----- (00000001400ACC80) ----------------------------------------------------
__int64 __fastcall sub_1400ACC80(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	int v7; // ebx
	__int64 v8; // rax
	__int64 v9; // rsi
	__int64 v10; // rdi

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, a3, 0x20ui64);
	if (v7 >= 0)
	{
		v8 = sub_1403374E0(a2, 96i64 * *a3);
		*((_QWORD*)a3 + 1) = v8;
		if (!v8)
			return 2147500037i64;
		v9 = 0i64;
		if (*a3)
		{
			while (1)
			{
				v10 = *((_QWORD*)a3 + 1) + 96 * v9;
				if (!v10)
					break;
				v7 = sub_1400AC130(a1, a2, *((_QWORD*)a3 + 1) + 96 * v9);
				if (v7 >= 0)
					v7 = sub_14006C090(a1, (_DWORD*)(v10 + 88), 1ui64);
				if (v7 >= 0)
				{
					v9 = (unsigned int)(v9 + 1);
					if ((unsigned int)v9 < *a3)
						continue;
				}
				return (unsigned int)v7;
			}
			return (unsigned int)-2147467259;
		}
	}
	return (unsigned int)v7;
}

