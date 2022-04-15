#include "../winhttp.h"

//----- (00000001408A7440) ----------------------------------------------------
__int64 __fastcall sub_1408A7440(__int64 a1, __int64 a2)
{
	unsigned int v2; // esi
	__int64 v5; // rdi
	unsigned int i; // ebp
	__int64 result; // rax
	__int64 v8; // rdi

	v2 = 0;
	v5 = a2 + 12;
	for (i = 0; i < 3; ++i)
	{
		if (*(_BYTE*)(v5 + 5))
		{
			sub_1408A7FC0(
				a1 + 32,
				i,
				*(_DWORD*)(a1 + 280),
				*(_DWORD*)(v5 - 12),
				*(_DWORD*)(v5 - 4),
				*(float*)(v5 - 8),
				*(float*)v5);
			result = sub_1408A8090(a1 + 32, i, *(_BYTE*)(v5 + 4));
		}
		v5 += 20i64;
	}
	v8 = a2 + 72;
	do
	{
		if (*(_BYTE*)(v8 + 5))
		{
			sub_1408A7FC0(
				a1 + 56,
				v2,
				*(_DWORD*)(a1 + 280),
				*(_DWORD*)(v8 - 12),
				*(_DWORD*)(v8 - 4),
				*(float*)(v8 - 8),
				*(float*)v8);
			result = sub_1408A8090(a1 + 56, v2, *(_BYTE*)(v8 + 4));
		}
		++v2;
		v8 += 20i64;
	} while (v2 < 3);
	return result;
}

