#include "../winhttp.h"

//----- (000000014072E930) ----------------------------------------------------
__int64 __fastcall sub_14072E930(_QWORD* a1)
{
	__int64 result; // rax
	_QWORD* v3; // rsi
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // esi
	__int64 v9; // rbp
	_QWORD* v10; // rax
	_QWORD* v11; // rbx
	__int64 v12; // rax
	__m128i v13; // xmm0
	__int64 v14; // rax

	result = sub_140056AB0(a1, 1u);
	v3 = (_QWORD*)result;
	if (result)
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v4 = a1[2];
		v5 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v4 + 8) = 5;
		*(_QWORD*)v4 = v5;
		a1[2] += 16i64;
		v6 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v3 + 208i64))(*v3);
		v8 = 1;
		v9 = v6;
		v10 = *(_QWORD**)(v6 + 8);
		v11 = (_QWORD*)*v10;
		if ((_QWORD*)*v10 != v10)
		{
			do
			{
				v12 = a1[2];
				v13 = _mm_cvtsi32_si128(v8++);
				*(_DWORD*)(v12 + 8) = 3;
				*(_QWORD*)v12 = *(_OWORD*)&_mm_cvtepi32_pd(v13);
				a1[2] += 16i64;
				v14 = sub_1405A9420(v7, *((_DWORD*)v11 + 4));
				sub_14069F380(a1, v14);
				sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 32i64;
				v11 = (_QWORD*)*v11;
			} while (v11 != *(_QWORD**)(v9 + 8));
		}
		return 1i64;
	}
	return result;
}
// 14072E9E2: variable 'v7' is possibly undefined

