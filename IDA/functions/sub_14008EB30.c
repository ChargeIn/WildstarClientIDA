#include "../winhttp.h"

//----- (000000014008EB30) ----------------------------------------------------
__int64 __fastcall sub_14008EB30(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	int v7; // ebx
	__int64 v8; // rax
	__int64 v9; // rsi
	unsigned int v10; // edi
	__int64 v11; // rax
	__int64 v12; // r14
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // rdi

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, a3, 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v8 = sub_1403374E0(a2, 8i64 * *a3);
	*((_QWORD*)a3 + 1) = v8;
	if (!v8)
		return 2147500037i64;
	v9 = 0i64;
	v10 = 0;
	if (*a3)
	{
		do
		{
			v11 = *((_QWORD*)a3 + 1);
			v12 = v11 + 8i64 * v10;
			if (!v12)
				return (unsigned int)-2147467259;
			v7 = sub_14006C090(a1, (_DWORD*)(v11 + 8i64 * v10), 0xEui64);
			if (v7 >= 0)
				v7 = sub_14006C090(a1, (_DWORD*)(v12 + 4), 0x20ui64);
			if (v7 < 0)
				return (unsigned int)v7;
		} while (++v10 < *a3);
	}
	v7 = sub_14006C090(a1, a3 + 4, 0x20ui64);
	if (v7 >= 0)
	{
		v13 = sub_1403374E0(a2, 8i64 * a3[4]);
		*((_QWORD*)a3 + 3) = v13;
		if (!v13)
			return 2147500037i64;
		if (a3[4])
		{
			while (1)
			{
				v14 = *((_QWORD*)a3 + 3);
				v15 = v14 + 8 * v9;
				if (!v15)
					break;
				v7 = sub_14006C090(a1, (_DWORD*)(v14 + 8 * v9), 0xEui64);
				if (v7 >= 0)
					v7 = sub_14006C090(a1, (_DWORD*)(v15 + 4), 0x20ui64);
				if (v7 >= 0)
				{
					v9 = (unsigned int)(v9 + 1);
					if ((unsigned int)v9 < a3[4])
						continue;
				}
				return (unsigned int)v7;
			}
			return (unsigned int)-2147467259;
		}
	}
	return (unsigned int)v7;
}

