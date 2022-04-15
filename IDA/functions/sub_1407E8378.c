#include "../winhttp.h"

//----- (00000001407E8378) ----------------------------------------------------
__int64 __fastcall sub_1407E8378(int a1)
{
	int v1; // r8d
	int v2; // r9d
	__int64 result; // rax
	__int64 v4; // rdx

	v1 = 0;
	v2 = 227;
	while (1)
	{
		result = (unsigned int)((v2 + v1) / 2);
		v4 = 16i64 * (int)result;
		if (a1 == *(_DWORD*)((char*)&unk_140961A60 + v4))
			break;
		if (a1 - *(_DWORD*)((char*)&unk_140961A60 + v4) >= 0)
			v1 = result + 1;
		else
			v2 = result - 1;
		if (v1 > v2)
			return 0xFFFFFFFFi64;
	}
	return result;
}

