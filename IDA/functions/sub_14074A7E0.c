#include "../winhttp.h"

//----- (000000014074A7E0) ----------------------------------------------------
__int64 __fastcall sub_14074A7E0(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rbx
	unsigned __int64 v5; // rdx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rsi
	unsigned int v9; // r14d
	unsigned __int64 v10; // rdi
	__int64* v11; // rbx
	__int64 v12; // rax
	__m128i v13; // xmm0
	__int64 v14; // rax
	__int64* v15; // rax
	unsigned __int64 v16; // rdx
	_QWORD v18[2]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v19; // [rsp+30h] [rbp-28h]
	__int64 v20; // [rsp+38h] [rbp-20h]
	__int64 v21; // [rsp+40h] [rbp-18h]
	__int64 v22; // [rsp+48h] [rbp-10h]

	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v2 = a1[2];
	v3 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	a1[2] += 16i64;
	v4 = 0i64;
	v19 = 0i64;
	v20 = 0i64;
	v21 = 0i64;
	v22 = 0i64;
	sub_1403FB7C0(v18, v5);
	sub_1405A94B0(v6, v18);
	v8 = v19;
	v9 = 1;
	v10 = (v20 - v19) >> 3;
	if (v10)
	{
		while (!*(_QWORD*)(v19 + 8 * v4))
		{
			if (++v4 >= v10)
				goto LABEL_13;
		}
		v11 = *(__int64**)(v19 + 8 * v4);
		if (v11)
		{
			do
			{
			LABEL_8:
				v12 = a1[2];
				v13 = _mm_cvtsi32_si128(v9++);
				*(_DWORD*)(v12 + 8) = 3;
				*(_QWORD*)v12 = *(_OWORD*)&_mm_cvtepi32_pd(v13);
				a1[2] += 16i64;
				v14 = sub_1405A9420(v7, *((_DWORD*)v11 + 2));
				sub_14069F380(a1, v14);
				sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 32i64;
				v15 = v11;
				v11 = (__int64*)*v11;
			} while (v11);
			v16 = *((unsigned int*)v15 + 2) % v10;
			while (++v16 < v10)
			{
				v11 = *(__int64**)(v8 + 8 * v16);
				if (v11)
					goto LABEL_8;
			}
		}
	}
LABEL_13:
	sub_1403FC230(v18);
	if (v19)
		sub_14018B900(v19, 0);
	return 1i64;
}
// 14074A919: conditional instruction was optimized away because rbx.8==0
// 14074A84B: variable 'v5' is possibly undefined
// 14074A855: variable 'v6' is possibly undefined
// 14074A8C3: variable 'v7' is possibly undefined
// 14074A7E0: using guessed type _QWORD var_38[2];

