#include "../winhttp.h"

//----- (00000001401429A0) ----------------------------------------------------
void __fastcall sub_1401429A0(__int64 a1, unsigned int a2)
{
	__int64 v4; // rcx
	__int64 v5; // rsi
	int v6; // edx
	__int64 v7; // rax
	__m128i v8; // xmm1
	__m128i v9; // xmm1
	int v10; // r12d
	unsigned __int64 v11; // r14
	_QWORD* v12; // rbx
	unsigned int* v13; // rbx
	__int64 v14; // rdx
	__int64 v15; // r15
	unsigned __int64 v16; // r14
	_QWORD* v17; // rbx
	_DWORD* v18; // rbx
	__int64 v19; // r8
	unsigned int v20; // ecx
	int v21; // [rsp+58h] [rbp+10h] BYREF

	if ((unsigned __int64)a2 < *(_QWORD*)(a1 + 48))
	{
		v4 = *(_QWORD*)(a1 + 40);
		v5 = 32i64 * a2;
		v6 = *(_DWORD*)(v4 + v5 + 16);
		if ((unsigned int)(v6 - 1) <= 0xFFFFFFFD)
		{
			*(_DWORD*)(v4 + v5 + 16) = v6 - 1;
			v7 = *(_QWORD*)(a1 + 40);
			if (!*(_DWORD*)(v7 + v5 + 16))
			{
				v8 = _mm_shuffle_epi32(
					_mm_cvttps_epi32(
						_mm_add_ps(
							_mm_mul_ps(
								_mm_min_ps(_mm_max_ps((__m128)0i64, *(__m128*)(v7 + v5)), (__m128)xmmword_140B7B240),
								(__m128)xmmword_140B7B470),
							(__m128)xmmword_140B7AC50)),
					198);
				v9 = _mm_packus_epi16(v8, v8);
				v10 = _mm_cvtsi128_si32(_mm_packus_epi16(v9, v9));
				v21 = v10;
				v11 = (*(__int64(__fastcall**)(int*))(a1 + 24))(&v21);
				v12 = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 8 * (v11 % *(_QWORD*)(a1 + 8)));
				if (v12)
				{
					while (v11 != *v12 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 32))(&v21, v12 + 2))
					{
						v12 = (_QWORD*)v12[1];
						if (!v12)
							goto LABEL_25;
					}
					v13 = (unsigned int*)v12 + 5;
					if (v13)
					{
						v14 = *v13;
						if ((_DWORD)v14 == a2)
						{
							v15 = *(_QWORD*)(a1 + 40);
							v21 = v10;
							if (*(_DWORD*)(v15 + v5 + 20) == -1)
							{
								sub_1400B6120(a1, (__int64)&v21);
							}
							else
							{
								v16 = (*(__int64(__fastcall**)(int*))(a1 + 24))(&v21);
								v17 = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 8 * (v16 % *(_QWORD*)(a1 + 8)));
								if (v17)
								{
									while (v16 != *v17 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 32))(&v21, v17 + 2))
									{
										v17 = (_QWORD*)v17[1];
										if (!v17)
											goto LABEL_25;
									}
									v18 = (_DWORD*)v17 + 5;
									if (v18)
										*v18 = *(_DWORD*)(v15 + v5 + 20);
								}
							}
						}
						else
						{
							v19 = *(_QWORD*)(a1 + 40);
							v20 = *(_DWORD*)(32 * v14 + v19 + 20);
							if (v20 != -1)
							{
								while (v20 != a2)
								{
									LODWORD(v14) = v20;
									v20 = *(_DWORD*)(32i64 * v20 + v19 + 20);
									if (v20 == -1)
										goto LABEL_25;
								}
								*(_DWORD*)(32i64 * (unsigned int)v14 + v19 + 20) = *(_DWORD*)(v19 + v5 + 20);
							}
						}
					}
				}
			LABEL_25:
				*(_DWORD*)(*(_QWORD*)(a1 + 40) + v5 + 20) = -1;
				if (a2 < *(_DWORD*)(a1 + 56))
					*(_DWORD*)(a1 + 56) = a2;
			}
		}
	}
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;

