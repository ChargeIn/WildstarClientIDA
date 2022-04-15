#include "../winhttp.h"

//----- (000000014079FE80) ----------------------------------------------------
__int64 __fastcall sub_14079FE80(__int64 a1, __int64 a2, unsigned __int64 a3)
{
	unsigned __int64 i; // r9
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rsi
	__int64 v8; // rax
	__int64 result; // rax

	for (i = 0i64; i < a3; ++i)
	{
		v5 = *(unsigned int*)(a2 + 4 * i);
		if (v5 < *(_QWORD*)(a1 + 128))
			*(_DWORD*)(96 * v5 + *(_QWORD*)(a1 + 120)) = -1;
	}
	v6 = *(_QWORD*)(a1 + 128);
	if (v6)
	{
		v7 = 96 * v6;
		do
		{
			if (*(_DWORD*)(v7 + *(_QWORD*)(a1 + 120) - 96) == -1)
				sub_14079FFD0(a1 + 120, v6 - 1);
			v7 -= 96i64;
			--v6;
		} while (v6);
	}
	v8 = *(_QWORD*)(a1 + 120);
	*(_DWORD*)(a1 + 76) |= 0xAu;
	*(_QWORD*)(a1 + 104) = v8;
	result = *(unsigned int*)(a1 + 128);
	*(_DWORD*)(a1 + 96) = result;
	return result;
}

