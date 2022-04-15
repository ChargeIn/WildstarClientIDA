//----- (00000001407D13D0) ----------------------------------------------------
void __fastcall sub_1407D13D0(unsigned int a1, __int64 a2, __m128* a3)
{
	__m128 v3; // xmm2
	unsigned int v4; // edi
	__int64 v6; // r9
	unsigned int v7; // r10d
	__int64 v8; // rcx
	__int64 v9; // rax
	__m128* v10; // rax
	__int64 v11; // r14
	int v12; // edi
	__int64 v13; // r10
	__int64 v14; // rcx
	__m128 v15; // xmm2
	__m128* v16; // rax

	v4 = *(_DWORD*)a2;
	if (*(_DWORD*)a2 && a3)
	{
		v6 = 0i64;
		v7 = *(_DWORD*)a2;
		if (v4)
		{
			do
			{
				v8 = (unsigned int)v6 + ((v7 - (unsigned int)v6) >> 1);
				if (a1 >= *(_DWORD*)(*(_QWORD*)(a2 + 8) + 4 * v8))
					v6 = (unsigned int)(v8 + 1);
				else
					v7 = v6 + ((v7 - (unsigned int)v6) >> 1);
			} while ((unsigned int)v6 < v7);
		}
		v9 = (unsigned int)(v6 - 1);
		if ((_DWORD)v6)
		{
			if (v4 == (_DWORD)v6 || (v11 = *(_QWORD*)(a2 + 8), v12 = *(_DWORD*)(4 * v9 + v11), a1 == v12))
			{
				v16 = (__m128*)(*(_QWORD*)(a2 + 16) + 32 * v9);
				*a3 = *v16;
				a3[1] = v16[1];
			}
			else
			{
				v13 = 32i64 * (unsigned int)v9;
				v14 = 32i64 * (unsigned int)v6;
				v3.m128_f32[0] = (float)(int)(a1 - v12) / (float)(*(_DWORD*)(v11 + 4 * v6) - v12);
				v15 = _mm_add_ps(
					_mm_mul_ps(
						_mm_shuffle_ps(v3, v3, 0),
						_mm_sub_ps(*(__m128*)(v14 + *(_QWORD*)(a2 + 16)), *(__m128*)(*(_QWORD*)(a2 + 16) + v13))),
					*(__m128*)(*(_QWORD*)(a2 + 16) + v13));
				*a3 = v15;
				v15.m128_f32[0] = (float)(int)(a1 - *(_DWORD*)(*(_QWORD*)(a2 + 8) + 4 * v9))
					/ (float)(*(_DWORD*)(*(_QWORD*)(a2 + 8) + 4 * v6) - *(_DWORD*)(*(_QWORD*)(a2 + 8) + 4 * v9));
				a3[1] = _mm_add_ps(
					_mm_mul_ps(
						_mm_shuffle_ps(v15, v15, 0),
						_mm_sub_ps(
							*(__m128*)(v14 + *(_QWORD*)(a2 + 16) + 16),
							*(__m128*)(*(_QWORD*)(a2 + 16) + v13 + 16))),
					*(__m128*)(*(_QWORD*)(a2 + 16) + v13 + 16));
			}
		}
		else
		{
			v10 = *(__m128**)(a2 + 16);
			*a3 = *v10;
			a3[1] = v10[1];
		}
	}
}
// 1407D14B6: variable 'v3' is possibly undefined

