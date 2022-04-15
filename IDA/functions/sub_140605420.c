#include "../winhttp.h"

//----- (0000000140605420) ----------------------------------------------------
unsigned __int64 __fastcall sub_140605420(__int64 a1, int* a2)
{
	_QWORD* v2; // r8
	unsigned __int64 v4; // r9
	unsigned __int64 result; // rax
	int v6; // r11d
	unsigned __int64 v7; // rdx
	__int64 v8; // rdx

	v2 = *(_QWORD**)(a1 + 64);
	if (!v2)
		return -1i64;
	v4 = v2[12];
	result = 0i64;
	if (!v4)
		return -1i64;
	v6 = *a2;
	while (1)
	{
		v7 = result;
		if (result >= v4)
		{
			v8 = 0i64;
		}
		else if (result)
		{
			if (result <= v2[13])
				v7 = result - 1;
			v8 = *(_QWORD*)(v2[11] + 8 * v7);
		}
		else
		{
			v8 = *(_QWORD*)(v2[11] + 8i64 * v2[13]);
		}
		if (*(_DWORD*)(v8 + 16) == v6 && *(_QWORD*)(v8 + 24) == *((_QWORD*)a2 + 1))
			break;
		if (++result >= v4)
			return -1i64;
	}
	return result;
}

