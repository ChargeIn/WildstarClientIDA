#include "../winhttp.h"

//----- (0000000140094E10) ----------------------------------------------------
__int64 __fastcall sub_140094E10(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // ebx
	__int64 v8; // rdx
	__int64 v9; // rax
	__int64 v10; // rdx
	unsigned __int8 v11; // di
	__int64 v12; // rax
	__int64 v13; // rdx
	unsigned __int8 i; // di

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_1400A8A30(a1, v8, (_DWORD*)(a3 + 12));
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C1C0(a1, (_DWORD*)(a3 + 24));
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006BE30(a1, (_BYTE*)(a3 + 28), 8ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v9 = sub_1403374E0(a2, 28i64 * *(unsigned __int8*)(a3 + 28));
	*(_QWORD*)(a3 + 32) = v9;
	if (!v9)
		return 2147500037i64;
	v11 = 0;
	if (*(_BYTE*)(a3 + 28))
	{
		do
		{
			v7 = sub_140094970(a1, v10, *(_QWORD*)(a3 + 32) + 28i64 * v11);
			if (v7 < 0)
				return (unsigned int)v7;
		} while (++v11 < *(_BYTE*)(a3 + 28));
	}
	v7 = sub_14006BE30(a1, (_BYTE*)(a3 + 40), 8ui64);
	if (v7 >= 0)
	{
		v12 = sub_1403374E0(a2, 32i64 * *(unsigned __int8*)(a3 + 40));
		*(_QWORD*)(a3 + 48) = v12;
		if (!v12)
			return 2147500037i64;
		for (i = 0; i < *(_BYTE*)(a3 + 40); ++i)
		{
			v7 = sub_140094A00(a1, v13, *(_QWORD*)(a3 + 48) + 32i64 * i);
			if (v7 < 0)
				break;
		}
	}
	return (unsigned int)v7;
}
// 140094E9B: variable 'v8' is possibly undefined
// 140094F0F: variable 'v10' is possibly undefined
// 140094F7F: variable 'v13' is possibly undefined

