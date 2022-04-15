//----- (0000000140650300) ----------------------------------------------------
__int64 __fastcall sub_140650300(_QWORD* a1)
{
	__m128d v1; // xmm0
	int* v3; // rax
	unsigned int* v4; // rdi
	_DWORD* v5; // rax
	int v6; // ecx
	unsigned int v7; // r8d
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rcx
	float v11; // xmm0_4
	__int64 v12; // rcx
	double v13; // xmm0_8
	__int64 v14; // r9
	__int64 v15; // rax

	v3 = (int*)sub_1406622C0((__int64)a1, 1);
	if (v3 && (v4 = (unsigned int*)sub_1403D90D0(qword_140C65898, *v3)) != 0i64)
	{
		v5 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v1 = (__m128d)0xBFF0000000000000ui64;
		else
			v1.m128d_f64[0] = sub_140056C40(a1, 2u);
		v6 = (int)v1.m128d_f64[0];
		if ((double)v6 != v1.m128d_f64[0])
			v1.m128d_f64[0] = (double)(v6 - (_mm_movemask_pd(_mm_unpacklo_pd(v1, v1)) & 1));
		v7 = (int)v1.m128d_f64[0];
		if ((unsigned int)(int)v1.m128d_f64[0] > 0xA)
		{
			v15 = a1[2];
			*(_QWORD*)v15 = 0i64;
			*(_DWORD*)(v15 + 8) = 3;
		}
		else
		{
			v8 = *(_QWORD*)(qword_140C65898 + 120);
			if (v8 && v4[2] == *(_DWORD*)(v8 + 8))
			{
				v9 = *(_QWORD*)(qword_140C65898 + 28048);
				if (v9)
				{
					v11 = (*(float(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v9 + 56i64))(v9, v7);
					v12 = a1[2];
					*(_DWORD*)(v12 + 8) = 3;
					*(double*)v12 = (double)(int)v11;
				}
				else
				{
					v10 = a1[2];
					*(_QWORD*)v10 = 0i64;
					*(_DWORD*)(v10 + 8) = 3;
				}
			}
			else
			{
				v13 = sub_140466360(v4, v7);
				*(_DWORD*)(v14 + 8) = 3;
				*(double*)v14 = (double)(int)*(float*)&v13;
			}
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140650386: conditional instruction was optimized away because rcx.8<100000000u
// 140650396: variable 'v1' is possibly undefined
// 140650430: variable 'v14' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

