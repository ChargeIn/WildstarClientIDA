#include "../winhttp.h"

//----- (00000001408A6E90) ----------------------------------------------------
__int64 __fastcall sub_1408A6E90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD* a5)
{
	int v7; // ecx
	int i; // r8d
	unsigned __int16 v9; // r8
	__int64 result; // rax

	*(_QWORD*)(a1 + 16) = a2;
	*(_QWORD*)(a1 + 8) = a4;
	v7 = 0;
	for (i = a5[1] & 0x3FFFF; i; i &= i - 1)
		++v7;
	*(_DWORD*)(a1 + 276) = v7;
	v9 = *(_WORD*)(a1 + 276);
	*(_DWORD*)(a1 + 280) = *a5;
	result = sub_1408A7E60(a1 + 32, a2, v9, 3u);
	if ((_DWORD)result == 1)
	{
		result = sub_1408A7E60(a1 + 56, a2, *(_WORD*)(a1 + 276), 3u);
		if ((_DWORD)result == 1)
		{
			result = sub_1408A7380(a1, a2);
			if ((_DWORD)result == 1)
			{
				sub_1408A7D80(*(_BYTE**)(a1 + 8), (int*)(a1 + 128));
				sub_1408A7440(a1, a1 + 128);
				sub_1408A9150(a1 + 80, *(_DWORD*)(a1 + 248), *(float*)(a1 + 252), *(float*)(a1 + 256), 1);
				sub_1408AA9A0(a1 + 108, *(float*)(a1 + 260), 1);
				*(_DWORD*)(a1 + 284) = *(_DWORD*)(a1 + 268);
				*(_DWORD*)(a1 + 288) = *(_DWORD*)(a1 + 272);
				return 1i64;
			}
		}
	}
	return result;
}

