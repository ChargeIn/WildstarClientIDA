#include "../winhttp.h"

//----- (0000000140094BF0) ----------------------------------------------------
__int64 __fastcall sub_140094BF0(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // ebx
	__int64 v8; // rax
	__int64 i; // rdi
	__int64 v10; // rax
	__int64 v11; // rdx
	unsigned __int8 v12; // di
	__int64 v13; // rax
	__int64 v14; // rdx
	unsigned __int8 j; // di

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
	v7 = sub_14006C090(a1, (_DWORD*)(a3 + 12), 0x12ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, (_DWORD*)(a3 + 16), 1ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, (_DWORD*)(a3 + 20), 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v8 = sub_1403374E0(a2, 24i64 * *(unsigned int*)(a3 + 20));
	*(_QWORD*)(a3 + 24) = v8;
	if (!v8)
		return 2147500037i64;
	for (i = 0i64; (unsigned int)i < *(_DWORD*)(a3 + 20); i = (unsigned int)(i + 1))
	{
		v7 = sub_140094AA0(a1, a2, *(_QWORD*)(a3 + 24) + 24 * i);
		if (v7 < 0)
			return (unsigned int)v7;
	}
	v7 = sub_14006BE30(a1, (_BYTE*)(a3 + 32), 8ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v10 = sub_1403374E0(a2, 28i64 * *(unsigned __int8*)(a3 + 32));
	*(_QWORD*)(a3 + 40) = v10;
	if (!v10)
		return 2147500037i64;
	v12 = 0;
	if (*(_BYTE*)(a3 + 32))
	{
		do
		{
			v7 = sub_140094970(a1, v11, *(_QWORD*)(a3 + 40) + 28i64 * v12);
			if (v7 < 0)
				return (unsigned int)v7;
		} while (++v12 < *(_BYTE*)(a3 + 32));
	}
	v7 = sub_14006BE30(a1, (_BYTE*)(a3 + 48), 8ui64);
	if (v7 >= 0)
	{
		v13 = sub_1403374E0(a2, 32i64 * *(unsigned __int8*)(a3 + 48));
		*(_QWORD*)(a3 + 56) = v13;
		if (!v13)
			return 2147500037i64;
		for (j = 0; j < *(_BYTE*)(a3 + 48); ++j)
		{
			v7 = sub_140094A00(a1, v14, *(_QWORD*)(a3 + 56) + 32i64 * j);
			if (v7 < 0)
				break;
		}
	}
	return (unsigned int)v7;
}
// 140094D6F: variable 'v11' is possibly undefined
// 140094DDF: variable 'v14' is possibly undefined

