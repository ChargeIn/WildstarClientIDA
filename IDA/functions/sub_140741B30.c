#include "../winhttp.h"

//----- (0000000140741B30) ----------------------------------------------------
__int64 __fastcall sub_140741B30(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	int v5; // ebx
	unsigned int* v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // r8d
	__int64 v9; // rdx
	__int64(__fastcall * **v10)(_QWORD); // rax
	__int64 v11; // rcx
	__int64 v12; // rax
	__m128 v14; // [rsp+40h] [rbp-18h] BYREF
	__int64 v15; // [rsp+68h] [rbp+10h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = sub_14022BFC0(*(_DWORD*)(v3 + 8))) != 0)
	{
		v5 = 0;
		v6 = (unsigned int*)sub_14024B980(*(_DWORD*)(v4 + 4));
		if (v6)
		{
			v8 = v6[11];
			v9 = v6[10];
			v14 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v6[3], (__m128)v6[5]), _mm_unpacklo_ps((__m128)v6[4], (__m128)0i64));
			if (qword_140C658F8)
			{
				v15 = qword_140C77760;
				v10 = (__int64(__fastcall***)(_QWORD))sub_140448BE0(v7, v9, v8, v14.m128_f32, 0i64, 0, &v15);
				if (v10)
					v5 = (**v10)(v10);
			}
		}
		v11 = a1[2];
		*(_DWORD*)(v11 + 8) = 3;
		*(double*)v11 = (double)v5;
	}
	else
	{
		v12 = a1[2];
		*(_QWORD*)v12 = 0i64;
		*(_DWORD*)(v12 + 8) = 3;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140741BE0: variable 'v7' is possibly undefined
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140741B30: using guessed type __m128 var_18;

