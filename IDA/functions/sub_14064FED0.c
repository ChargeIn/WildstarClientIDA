//----- (000000014064FED0) ----------------------------------------------------
__int64 __fastcall sub_14064FED0(_QWORD* a1)
{
	__m128d v1; // xmm0
	int* v3; // rax
	__int64 v4; // r9
	__int64 v5; // rdx
	__int64 v6; // r8
	_DWORD* v7; // rax
	__int64 v8; // rcx
	int v9; // r8d
	float v10; // xmm0_4
	__int64 v11; // rcx
	__int64 result; // rax
	__int64 v13; // rax

	v3 = (int*)sub_1406622C0((__int64)a1, 1);
	if (v3 && (v4 = sub_1403D90D0(qword_140C65898, *v3)) != 0)
	{
		v5 = qword_140C65898;
		v6 = *(_QWORD*)(qword_140C65898 + 120);
		if (v6
			&& *(_DWORD*)(v4 + 8) == *(_DWORD*)(v6 + 8)
			&& ((v7 = (_DWORD*)(a1[3] + 16i64), (unsigned __int64)v7 >= a1[2])
				|| v7 == dword_140A12138
				|| *(int*)(a1[3] + 24i64) <= 0
				? (__int64)(v1 = (__m128d)0xBFF0000000000000ui64)
				: (v1.m128d_f64[0] = sub_140056C40(a1, 2u), v5 = qword_140C65898),
				(v8 = *(_QWORD*)(v5 + 28048)) != 0))
		{
			v9 = (int)v1.m128d_f64[0];
			if ((double)v9 != v1.m128d_f64[0])
				v1.m128d_f64[0] = (double)(v9 - (_mm_movemask_pd(_mm_unpacklo_pd(v1, v1)) & 1));
			v10 = (*(float(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v8 + 64i64))(v8, (unsigned int)(int)v1.m128d_f64[0]);
			v11 = a1[2];
			result = 1i64;
			*(_DWORD*)(v11 + 8) = 3;
			*(double*)v11 = v10;
			a1[2] += 16i64;
		}
		else
		{
			v13 = a1[2];
			*(_QWORD*)v13 = 0i64;
			*(_DWORD*)(v13 + 8) = 3;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 14064FF91: conditional instruction was optimized away because r8.8<100000000u
// 14064FFA1: variable 'v1' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

