#include "../winhttp.h"

//----- (00000001408BE2E0) ----------------------------------------------------
__int64 __fastcall sub_1408BE2E0(__int64 a1, __int64 a2)
{
	int i; // r8d
	__int64 v5; // rax
	__int64 v6; // rsi
	unsigned int* v7; // rdx
	float v8; // xmm0_4
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 result; // rax

	for (i = *(_DWORD*)(a2 + 8); i; i &= i - 1)
		;
	v5 = *(_QWORD*)(a1 + 16);
	v6 = 0i64;
	v7 = (unsigned int*)(v5 + 8);
	if (!v5)
		v7 = 0i64;
	LODWORD(v8) = sub_1408BE390(a2, v7, 0i64).m128_u32[0];
	v9 = *(_QWORD*)(a1 + 16);
	if (v9)
		v6 = v9 + 8;
	sub_1408BE760(v8, *(unsigned __int16*)(a2 + 16), v6, a1 + 48);
	if (*(_DWORD*)(a2 + 12) == 17 && *(float*)(*(_QWORD*)(a1 + 16) + 16i64) < *(float*)(a1 + 60))
	{
		sub_1408A1D50(a2);
		*(_DWORD*)(a2 + 12) = 45;
	}
	v10 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 96) = *(_DWORD*)(v10 + 16);
	result = *(unsigned int*)(v10 + 32);
	*(_DWORD*)(a1 + 100) = result;
	return result;
}

