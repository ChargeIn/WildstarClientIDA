#include "../winhttp.h"

//----- (00000001408C8E10) ----------------------------------------------------
__int64 __fastcall sub_1408C8E10(__int64 a1)
{
	__int64 v1; // rax
	unsigned int v3; // edi
	int v4; // eax
	int v5; // eax
	int v6; // eax
	__int64 v7; // rsi
	__int64 v8; // rax
	__int64 v10; // rdi
	__m128* v11; // rcx

	v1 = *(_QWORD*)(a1 + 328);
	v3 = 0;
	if (*(_BYTE*)(v1 + 152))
	{
		*(_BYTE*)(a1 + 297) = 0;
		v4 = *(_DWORD*)(v1 + 128);
		if (v4 == 1)
		{
			v3 = *(unsigned __int8*)(a1 + 300);
		}
		else if ((unsigned int)(v4 - 2) <= 1)
		{
			v3 = 1;
		}
		*(_BYTE*)(a1 + 298) = v3;
		v5 = *(_DWORD*)(*(_QWORD*)(a1 + 328) + 136i64);
		if (v5 == 1)
		{
			v3 += *(unsigned __int8*)(a1 + 300);
		}
		else if ((unsigned int)(v5 - 2) <= 1)
		{
			++v3;
		}
		*(_BYTE*)(a1 + 299) = v3;
		v6 = *(_DWORD*)(*(_QWORD*)(a1 + 328) + 144i64);
		if (v6 == 1)
		{
			v3 += *(unsigned __int8*)(a1 + 300);
		}
		else if ((unsigned int)(v6 - 2) <= 1)
		{
			++v3;
		}
	}
	*(_BYTE*)(a1 + 296) = v3;
	if (v3)
	{
		v7 = v3;
		v8 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 336) + 8i64))(
			*(_QWORD*)(a1 + 336),
			192i64 * v3);
		*(_QWORD*)(a1 + 312) = v8;
		if (!v8)
			return 52i64;
		v10 = 0i64;
		do
		{
			v11 = (__m128*)(v10 + *(_QWORD*)(a1 + 312));
			if (v11)
			{
				v11[10].m128_u64[0] = 0i64;
				v11[10].m128_u64[1] = 0i64;
				sub_1408A8E90(v11, 1.0, 0.0, 0.0, 0.0, 0.0);
			}
			v10 += 192i64;
			--v7;
		} while (v7);
	}
	sub_1408C4920(a1);
	sub_1408C4A80(a1);
	sub_1408C4BE0(a1);
	return 1i64;
}
// 1408C8EFF: conditional instruction was optimized away because edi.4!=0
// 140B79ED0: using guessed type int dword_140B79ED0;

