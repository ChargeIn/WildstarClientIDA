#include "../winhttp.h"

//----- (00000001408A4580) ----------------------------------------------------
__int64 __fastcall sub_1408A4580(__int64 a1, __int64 a2)
{
	int v2; // ebp
	__int64 v4; // rsi
	int v5; // ecx
	unsigned int i; // edi
	bool v7; // r14
	__int64 result; // rax
	__int64 v9; // rbp

	v2 = *(_DWORD*)(a2 + 8);
	if (!*(_BYTE*)(a1 + 110))
		v2 &= ~8u;
	if ((v2 & 7) == 7 && !*(_BYTE*)(a1 + 109))
		v2 &= ~4u;
	v4 = 0i64;
	v5 = v2;
	for (i = 0; v5; v5 &= v5 - 1)
		++i;
	v7 = i != *(_DWORD*)(a1 + 184);
	if (*(_BYTE*)(a1 + 172) == *(_BYTE*)(a1 + 108) && i == *(_DWORD*)(a1 + 184))
		goto LABEL_14;
	if (*(_QWORD*)(a1 + 16))
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 16i64))(*(_QWORD*)(a1 + 32));
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	result = sub_1408A4390(a1, v2);
	if ((_DWORD)result == 1)
	{
	LABEL_14:
		if (*(float*)(a1 + 104) != *(float*)(a1 + 168) || v7)
		{
			sub_1408A4490(a1);
			result = sub_1408A4180(a1, v2);
			if ((_DWORD)result != 1)
				return result;
			if (*(_QWORD*)(a1 + 8) && i)
			{
				v9 = i;
				do
				{
					sub_1408A6490(v4 + *(_QWORD*)(a1 + 8));
					v4 += 56i64;
					--v9;
				} while (v9);
			}
		}
		*(_DWORD*)(a1 + 184) = i;
		return 1i64;
	}
	return result;
}

