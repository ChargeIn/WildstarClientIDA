//----- (00000001405F48B0) ----------------------------------------------------
__m128* __fastcall sub_1405F48B0(__int64 a1, float* a2)
{
	_QWORD* v2; // rax
	float v3; // xmm6_4
	__m128* v4; // rbp
	_QWORD* v5; // rdi
	_QWORD* v8; // rsi
	__int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // r8
	__m128* v12; // rax
	__m128 v13; // xmm1
	__m128 v14; // xmm2
	float v15; // xmm2_4
	__int64 v16; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v19; // rax
	_QWORD* k; // rax
	__int64 m; // rcx
	__m128* result; // rax

	v2 = *(_QWORD**)(a1 + 96);
	v3 = 3.4028235e38;
	v4 = 0i64;
	v5 = (_QWORD*)v2[2];
	if (v5 != v2)
	{
		do
		{
			v8 = (_QWORD*)v5[5];
			if ((*(unsigned int(__fastcall**)(_QWORD*))(*v8 + 56i64))(v8) == 1
				&& (*(_DWORD*)((*(__int64(__fastcall**)(_QWORD*))(*v8 + 328i64))(v8) + 8) & 0x2000) != 0)
			{
				v9 = v8[20];
				v10 = *(_QWORD*)(v9 + 16);
				if (v10 != v9)
				{
					v11 = qword_140C65898;
					do
					{
						v12 = (__m128*)sub_1403D90D0(v11, *(_DWORD*)(v10 + 32));
						v11 = qword_140C65898;
						if (v12)
						{
							v13 = _mm_sub_ps(v12[286], *(__m128*)(*(_QWORD*)(qword_140C65898 + 25744) + 4576i64));
							v14 = _mm_mul_ps(v13, v13);
							v15 = (float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0])
								+ _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
							if (v15 < v3)
							{
								v4 = v12;
								v3 = v15;
							}
						}
						v16 = *(_QWORD*)(v10 + 24);
						if (v16)
						{
							v10 = *(_QWORD*)(v10 + 24);
							for (i = *(_QWORD*)(v16 + 16); i; i = *(_QWORD*)(i + 16))
								v10 = i;
						}
						else
						{
							for (j = *(_QWORD*)(v10 + 8); v10 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
								v10 = j;
							if (*(_QWORD*)(v10 + 24) != j)
								v10 = j;
						}
					} while (v10 != v8[20]);
				}
			}
			v19 = v5[3];
			if (v19)
			{
				v5 = (_QWORD*)v5[3];
				for (k = *(_QWORD**)(v19 + 16); k; k = (_QWORD*)k[2])
					v5 = k;
			}
			else
			{
				for (m = v5[1]; v5 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v5 = (_QWORD*)m;
				if (v5[3] != m)
					v5 = (_QWORD*)m;
			}
		} while (v5 != *(_QWORD**)(a1 + 96));
	}
	result = v4;
	if (a2)
		*a2 = v3;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

