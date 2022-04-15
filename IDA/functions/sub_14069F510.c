#include "../winhttp.h"

//----- (000000014069F510) ----------------------------------------------------
__int64 __fastcall sub_14069F510(_QWORD* a1)
{
	__int64 result; // rax
	__int64* v3; // rbp
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned int v7; // esi
	__int64 v8; // rbp
	_QWORD* v9; // rax
	_QWORD* v10; // rbx
	__int64 v11; // rax
	__m128i v12; // xmm0
	__int64 v13; // rax

	result = sub_140056AB0(a1, 1u);
	v3 = (__int64*)result;
	if (result)
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v4 = a1[2];
		v5 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v4 + 8) = 5;
		v7 = 1;
		*(_QWORD*)v4 = v5;
		a1[2] += 16i64;
		v8 = *v3;
		v9 = *(_QWORD**)(v8 + 32);
		v10 = (_QWORD*)*v9;
		if ((_QWORD*)*v9 != v9)
		{
			do
			{
				v11 = a1[2];
				v12 = _mm_cvtsi32_si128(v7++);
				*(_DWORD*)(v11 + 8) = 3;
				*(_QWORD*)v11 = *(_OWORD*)&_mm_cvtepi32_pd(v12);
				a1[2] += 16i64;
				v13 = sub_1407242B0(v6, *((_DWORD*)v10 + 4));
				sub_14072D5B0(a1, v13);
				sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 32i64;
				v10 = (_QWORD*)*v10;
			} while (v10 != *(_QWORD**)(v8 + 32));
		}
		return 1i64;
	}
	return result;
}
// 14069F5B7: variable 'v6' is possibly undefined

