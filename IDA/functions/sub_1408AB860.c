#include "../winhttp.h"

//----- (00000001408AB860) ----------------------------------------------------
__int64 __fastcall sub_1408AB860(__int64 a1)
{
	unsigned int v2; // edi
	__int64 v3; // rbx
	__int64 result; // rax
	int v5; // edx

	v2 = 0;
	v3 = a1 + 2300;
	do
	{
		if (*(_BYTE*)(v3 + 12))
		{
			result = sub_1408AD3E0(
				944i64 * v2 + a1 + 24,
				*(_QWORD*)(a1 + 16),
				*(_DWORD*)(a1 + 2448),
				*(_DWORD*)(a1 + 2460),
				*(_DWORD*)(a1 + 2356),
				0);
			if ((_DWORD)result != 1)
				return result;
			v5 = *(_DWORD*)(v3 - 12);
			if (v5)
				sub_1408ADE90(
					(float*)(116i64 * v2 + a1 + 1912),
					v5 - 1,
					*(_DWORD*)(a1 + 2460),
					COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(v3 - 4)),
					*(float*)(v3 - 8),
					*(float*)v3);
		}
		++v2;
		v3 += 28i64;
	} while (v2 < 2);
	return 1i64;
}

