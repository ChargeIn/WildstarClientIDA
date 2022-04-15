#include "../winhttp.h"

//----- (00000001408A1D50) ----------------------------------------------------
__int64 __fastcall sub_1408A1D50(__int64 a1)
{
	int v1; // eax
	__int64 v2; // rdi
	unsigned int i; // r8d
	__int64 result; // rax
	int v6; // ecx
	__int64 v7; // rsi
	unsigned __int64 v8; // rbp

	v1 = *(_DWORD*)(a1 + 8);
	v2 = 0i64;
	for (i = 0; v1; v1 &= v1 - 1)
		++i;
	result = *(unsigned __int16*)(a1 + 18);
	v6 = *(unsigned __int16*)(a1 + 16) - (_DWORD)result;
	if (v6)
	{
		if (i)
		{
			v7 = i;
			v8 = (unsigned int)(4 * v6);
			do
			{
				sub_1407E4830(
					(int*)(*(_QWORD*)a1 + 4 * (*(unsigned __int16*)(a1 + 18) + v2 * *(unsigned __int16*)(a1 + 16))),
					0i64,
					v8);
				++v2;
				--v7;
			} while (v7);
		}
		result = *(unsigned __int16*)(a1 + 16);
		*(_WORD*)(a1 + 18) = result;
	}
	return result;
}

