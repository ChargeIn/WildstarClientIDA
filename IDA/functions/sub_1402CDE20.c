#include "../winhttp.h"

//----- (00000001402CDE20) ----------------------------------------------------
__int64 __fastcall sub_1402CDE20(
	__int64* a1,
	__m128* a2,
	__m128* a3,
	int* a4,
	int a5,
	_DWORD* a6,
	int a7,
	__int64 a8,
	int a9)
{
	__int64 v13; // rax
	int v15; // xmm0_4
	int v16; // xmm1_4
	unsigned int v17; // ebp
	unsigned __int64 v18; // rdi
	__int64 v19; // r12
	int v20; // r13d
	__int64 v21; // rsi
	__int64 v22; // rax
	int v23[4]; // [rsp+40h] [rbp-38h] BYREF
	int v24; // [rsp+80h] [rbp+8h] BYREF
	int v25; // [rsp+84h] [rbp+Ch]

	if (a9)
	{
		v13 = *a1;
		v23[0] = -1;
		(*(void(__fastcall**)(__int64*, int*, __int64))(v13 + 64))(a1, v23, 5i64);
	}
	if (*((_DWORD*)a1 + 14) != 5)
		return 0i64;
	v15 = *a4;
	v16 = a4[1];
	v17 = 0;
	v18 = 0i64;
	v24 = v15;
	v25 = v16;
	if (a1[32])
	{
		v19 = a8;
		v20 = a7;
		v21 = 0i64;
		do
		{
			v22 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v21 + a1[31]) + 112i64))(v21 + a1[31]);
			if ((unsigned int)sub_1401C9B90(v22, a2, a3, 0i64)
				&& (*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, int*, int, int*, int, __int64))(*(_QWORD*)(v21 + a1[31]) + 184i64))(
					v21 + a1[31],
					a2,
					a3,
					&v24,
					a5,
					&a9,
					v20,
					v19))
			{
				v17 = 1;
				v25 = a9;
			}
			++v18;
			v21 += 416i64;
		} while (v18 < a1[32]);
		if (v17)
		{
			if (a6)
				*a6 = v25;
		}
	}
	return v17;
}
// 1402CDE20: using guessed type int var_38[4];

