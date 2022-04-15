#include "../winhttp.h"

//----- (0000000140091C10) ----------------------------------------------------
__int64 __fastcall sub_140091C10(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	int v7; // ebx
	__int64 v8; // rax
	unsigned int v9; // ebp
	unsigned int v10; // esi
	__int64 v11; // rax
	unsigned int v12; // esi
	__int64 v13; // rax
	__int64 v14; // r8
	__int64 v15; // rsi

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, a3, 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, a3 + 1, 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v8 = sub_1403374E0(a2, 664i64 * *a3);
	*((_QWORD*)a3 + 1) = v8;
	if (!v8)
		return 2147500037i64;
	v9 = 0;
	v10 = 0;
	if (*a3)
	{
		do
		{
			v7 = sub_140090840(a1, a2, *((_QWORD*)a3 + 1) + 664i64 * v10);
			if (v7 < 0)
				return (unsigned int)v7;
		} while (++v10 < *a3);
	}
	v11 = sub_1403374E0(a2, 80i64 * *a3);
	*((_QWORD*)a3 + 2) = v11;
	if (!v11)
		return 2147500037i64;
	v12 = 0;
	if (*a3)
	{
		do
		{
			v7 = sub_140090590(a1, a2, *((_QWORD*)a3 + 2) + 80i64 * v12);
			if (v7 < 0)
				return (unsigned int)v7;
		} while (++v12 < *a3);
	}
	v13 = sub_1403374E0(a2, 56i64 * *a3);
	*((_QWORD*)a3 + 3) = v13;
	if (!v13)
		return 2147500037i64;
	if (*a3)
	{
		while (1)
		{
			v15 = *((_QWORD*)a3 + 3) + 56i64 * v9;
			if (!v15)
				break;
			v7 = sub_14006C120(a1, (__int64*)v15, v14);
			if (v7 >= 0)
			{
				v7 = sub_140337160(a1, (_BYTE*)(v15 + 8), 40i64);
				if (v7 >= 0)
					v7 = sub_14006C120(a1, (__int64*)(v15 + 48), v14);
			}
			if (v7 >= 0 && ++v9 < *a3)
				continue;
			return (unsigned int)v7;
		}
		return (unsigned int)-2147467259;
	}
	return (unsigned int)v7;
}
// 140091D62: variable 'v14' is possibly undefined

