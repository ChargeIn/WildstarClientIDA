#include "../winhttp.h"

//----- (00000001407E1990) ----------------------------------------------------
__int64 __fastcall sub_1407E1990(__int64 a1)
{
	__int64* v1; // rax
	__int64 v2; // rcx
	char v3; // dl
	__int64 v4; // rdx
	unsigned __int64 v5; // rdx
	unsigned __int64 v6; // rdx
	unsigned __int64 v7; // rdx
	unsigned int v8; // edx

	v1 = (__int64*)a1;
	v2 = -a1;
	if (((unsigned __int8)v1 & 7) == 0)
		goto LABEL_4;
	do
	{
		v3 = *(_BYTE*)v1;
		v1 = (__int64*)((char*)v1 + 1);
		if (!v3)
			return (__int64)v1 + v2 - 1;
	} while (((unsigned __int8)v1 & 7) != 0);
	while (1)
	{
		do
			LABEL_4:
		v4 = *v1++;
		while ((((v4 + 0x7EFEFEFEFEFEFEFFi64) ^ ~v4) & 0x8101010101010100ui64) == 0);
		v5 = *(v1 - 1);
		if (!(_BYTE)v5)
			break;
		if (!BYTE1(v5))
			return (__int64)v1 + v2 - 7;
		v6 = v5 >> 16;
		if (!(_BYTE)v6)
			return (__int64)v1 + v2 - 6;
		if (!BYTE1(v6))
			return (__int64)v1 + v2 - 5;
		v7 = v6 >> 16;
		if (!(_BYTE)v7)
			return (__int64)v1 + v2 - 4;
		if (!BYTE1(v7))
			return (__int64)v1 + v2 - 3;
		v8 = WORD1(v7);
		if (!(_BYTE)v8)
			return (__int64)v1 + v2 - 2;
		if (!BYTE1(v8))
			return (__int64)v1 + v2 - 1;
	}
	return (__int64)v1 + v2 - 8;
}

