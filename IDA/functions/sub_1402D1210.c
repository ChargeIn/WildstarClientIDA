#include "../winhttp.h"

//----- (00000001402D1210) ----------------------------------------------------
__int64 __fastcall sub_1402D1210(__int64 a1, int a2)
{
	__int64 v3; // rdi
	__int64 result; // rax
	int v5; // ecx
	__int64 v6; // rdi
	int v7[6]; // [rsp+20h] [rbp-18h] BYREF

	*(_DWORD*)(a1 + 40) = a2;
	*(_DWORD*)(a1 + 48) = 0;
	if (!a2)
	{
		v3 = *(_QWORD*)(a1 + 24);
		result = *(_QWORD*)(v3 + 16);
		v5 = *(_DWORD*)(result + 24);
		if (!v5)
		{
			v6 = *(_QWORD*)(v3 + 32);
			v7[0] = -1;
			if (*(_DWORD*)(v6 + 24) != 3)
				sub_1402C9AE0(v6, (__int64)v7, 3);
			result = *(_QWORD*)(v6 + 64);
			v5 = *(_DWORD*)(result + 28);
		}
		*(_DWORD*)(a1 + 40) = v5;
		*(_DWORD*)(a1 + 48) = 1;
	}
	return result;
}
// 1402D1210: using guessed type int var_18[6];

