#include "../winhttp.h"

//----- (0000000140844840) ----------------------------------------------------
__int64 __fastcall sub_140844840(int** a1, __int64 a2)
{
	__int64 v2; // rbx
	int* v5; // rdi
	unsigned int v6; // edx
	__int64 v7; // rax
	unsigned int v8; // ecx
	int v9; // r10d
	int v10; // ebx
	int v11; // ecx
	int v12; // [rsp+40h] [rbp-28h] BYREF
	_BYTE v13[12]; // [rsp+44h] [rbp-24h]
	unsigned int v14; // [rsp+50h] [rbp-18h]

	v2 = *(_QWORD*)(a2 + 48);
	if (!v2)
		return 2i64;
	v5 = (int*)sub_140856330(*a1);
	*a1 = v5;
	if (!v5)
		return 52i64;
	v6 = *(_DWORD*)(v2 + 4);
	v7 = v2 + 8;
	v8 = 0;
	if (!v6)
	{
	LABEL_12:
		v10 = dword_140C10F20;
		sub_1408562D0((__int64)v5);
		sub_140881720(v10, (__int64)v5);
		return 2i64;
	}
	while (1)
	{
		if (v5[1] != *(_DWORD*)v7)
			goto LABEL_11;
		v9 = (*(_DWORD*)(v7 + 4) << 16) + 1;
		if (*(_QWORD*)(v7 + 8))
			break;
		if (*(_DWORD*)(v7 + 24) && *(_QWORD*)(v7 + 16))
		{
			v12 = *v5;
			*(_DWORD*)&v13[8] = *(_DWORD*)(v7 + 24);
			*(_QWORD*)v13 = 0xFFFFFFFFi64;
			v14 = v14 & 0xFFFFF800 | 0x18C;
			sub_140856640((__int64)v5, v9, *(_QWORD*)(v7 + 16), &v12);
			return 1i64;
		}
		if (*(_DWORD*)(v7 + 28))
		{
			v11 = *v5;
			*(_QWORD*)&v13[4] = 0i64;
			v12 = v11;
			*(_DWORD*)v13 = *(_DWORD*)(v7 + 28);
			v14 = v14 & 0xFFFFF800 | 0x104;
			sub_1408566F0((__int64)v5, v9, &v12);
			return 1i64;
		}
	LABEL_11:
		++v8;
		v7 += 32i64;
		if (v8 >= v6)
			goto LABEL_12;
	}
	sub_140856540((__int64)v5, *v5, v9, *(char**)(v7 + 8), -1, (v5[4] & 0x200) != 0, 1);
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

