//----- (0000000140650480) ----------------------------------------------------
__int64 __fastcall sub_140650480(_QWORD* a1)
{
	__m128d v1; // xmm0
	int* v3; // rax
	__int64 v4; // rdi
	_DWORD* v5; // rax
	int v6; // ecx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rcx
	float v10; // xmm0_4
	__int64 v11; // rcx
	__int64 v12; // rax

	v3 = (int*)sub_1406622C0((__int64)a1, 1);
	if (v3 && (v4 = sub_1403D90D0(qword_140C65898, *v3)) != 0)
	{
		v5 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v1 = (__m128d)0xBFF0000000000000ui64;
		else
			v1.m128d_f64[0] = sub_140056C40(a1, 2u);
		v6 = (int)v1.m128d_f64[0];
		if ((double)v6 != v1.m128d_f64[0])
			v1.m128d_f64[0] = (double)(v6 - (_mm_movemask_pd(_mm_unpacklo_pd(v1, v1)) & 1));
		if ((unsigned int)(int)v1.m128d_f64[0] <= 0xA
			&& (v7 = *(_QWORD*)(qword_140C65898 + 120)) != 0
			&& *(_DWORD*)(v4 + 8) == *(_DWORD*)(v7 + 8))
		{
			v8 = *(_QWORD*)(qword_140C65898 + 28048);
			if (v8)
			{
				v10 = (*(float(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v8 + 48i64))(v8, (unsigned int)(int)v1.m128d_f64[0]);
				v11 = a1[2];
				*(_DWORD*)(v11 + 8) = 3;
				*(double*)v11 = (double)(int)v10;
			}
			else
			{
				v9 = a1[2];
				*(_QWORD*)v9 = 0i64;
				*(_DWORD*)(v9 + 8) = 3;
			}
		}
		else
		{
			v12 = a1[2];
			*(_QWORD*)v12 = 0i64;
			*(_DWORD*)(v12 + 8) = 3;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140650506: conditional instruction was optimized away because rcx.8<100000000u
// 140650516: variable 'v1' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

