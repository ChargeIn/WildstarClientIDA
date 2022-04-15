#include "../winhttp.h"

//----- (0000000140189520) ----------------------------------------------------
__int64 __fastcall sub_140189520(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v4; // r10
	__int64 v5; // r11
	bool i; // zf
	__int64 v8; // r11
	__int64 v9; // r11
	__int64 j; // r8
	__int64 v11; // rdx
	__int64 v12; // r11
	__int64 v13; // r11
	__int64 result; // rax

	v4 = 2 * a2 + 2;
	v5 = a2;
	for (i = v4 == a3; v4 < a3; i = v4 == a3)
	{
		if (*(float*)(32 * v4 + a1 - 16) > *(float*)(32 * v4 + a1 + 16))
			--v4;
		v8 = 32 * v5;
		*(_OWORD*)(v8 + a1) = *(_OWORD*)(32 * v4 + a1);
		*(_DWORD*)(v8 + a1 + 16) = *(_DWORD*)(32 * v4 + a1 + 16);
		v5 = v4;
		v4 = 2 * v4 + 2;
	}
	if (i)
	{
		v9 = 32 * v5;
		*(_OWORD*)(v9 + a1) = *(_OWORD*)(32 * v4 + a1 - 32);
		*(_DWORD*)(v9 + a1 + 16) = *(_DWORD*)(32 * v4 + a1 - 16);
		v5 = v4 - 1;
	}
	for (j = (v5 - 1) / 2; v5 > a2; j = (j - 1) / 2)
	{
		v11 = 32 * j;
		if (*(float*)(a4 + 16) <= *(float*)(32 * j + a1 + 16))
			break;
		v12 = 32 * v5;
		*(_OWORD*)(v12 + a1) = *(_OWORD*)(v11 + a1);
		*(_DWORD*)(v12 + a1 + 16) = *(_DWORD*)(v11 + a1 + 16);
		v5 = j;
	}
	v13 = 32 * v5;
	*(_OWORD*)(v13 + a1) = *(_OWORD*)a4;
	result = *(unsigned int*)(a4 + 16);
	*(_DWORD*)(v13 + a1 + 16) = result;
	return result;
}

