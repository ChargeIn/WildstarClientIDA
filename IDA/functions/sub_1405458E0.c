#include "../winhttp.h"

//----- (00000001405458E0) ----------------------------------------------------
char __fastcall sub_1405458E0(__int64 a1, __int64 a2)
{
	__m128 v2; // xmm0
	__int64 i; // rax
	int v6; // ecx
	__m128* v7; // rbp
	int v8; // edx
	int v9; // ecx
	__int64 v10; // rbx
	int v11; // eax
	__int64 v12; // rax
	int v13; // edx
	__int64 v14; // rcx
	int v15; // eax
	__int64 v16; // rax
	int v17; // ecx
	int v18; // edx
	__int64 v19; // rax
	__int64 v20; // rdx
	float v21; // xmm6_4
	__m128* v22; // rax
	int v23; // r9d
	float v24; // xmm6_4
	__m128* v25; // rax
	int v26; // edx
	__int64 j; // rbx
	int v28; // r14d
	__int64 v29; // rbp
	int v30; // r9d
	int v31; // edx
	int v32; // r9d
	int v33; // edx
	int v34; // r9d
	int v35; // edx
	int v37; // [rsp+30h] [rbp-58h]
	__m128 v38; // [rsp+40h] [rbp-48h] BYREF
	__m128 v39; // [rsp+50h] [rbp-38h] BYREF

	LODWORD(i) = *(_DWORD*)(a2 + 4) - 1;
	if ((unsigned int)i > 2)
		return i;
	v6 = *(_DWORD*)(a2 + 216);
	if (v6 != -1)
	{
		LODWORD(i) = *(_DWORD*)(a1 + 432);
		if (!_bittest(&v6, i))
			return i;
	}
	LODWORD(i) = *(_DWORD*)(a2 + 12);
	v7 = 0i64;
	if ((_DWORD)i)
	{
		if ((_DWORD)i != 1)
			goto LABEL_9;
		v8 = *(_DWORD*)(a1 + 344);
	}
	else
	{
		v8 = *(_DWORD*)(a1 + 340);
	}
	i = sub_1403D90D0(qword_140C65898, v8);
	v7 = (__m128*)i;
LABEL_9:
	v9 = *(_DWORD*)(a2 + 80);
	if ((v9 & 0x1000) != 0)
	{
		i = *(_QWORD*)(a1 + 888);
		v10 = *(_QWORD*)(i + 16);
		if (v10 != i)
		{
			do
			{
				if ((*(_BYTE*)(v10 + 48) & *(_BYTE*)(a2 + 16)) != 0)
				{
					if (v7)
					{
						v11 = *(_DWORD*)(a2 + 220);
						if (!v11 || v11 == *(_DWORD*)(v10 + 40))
						{
							v12 = sub_140241C40(*(_DWORD*)(v10 + 40));
							if (v12)
							{
								if ((v13 = *(_DWORD*)(v12 + 76), v13 == -1)
									|| (v14 = *(_QWORD*)(a1 + 312), v15 = *(_DWORD*)(*(_QWORD*)(v14 + 112) + 24i64), v15 != 8)
									&& (((v15 - 1) & 0xFFFFFFFD) != 0
										|| (v16 = *(_QWORD*)(v14 + 80)) == 0
										|| (*(_DWORD*)(v16 + 12) & 1) == 0)
									|| (v17 = *(_DWORD*)(a1 + 432), v17 == -1)
									|| (v13 & (1 << v17)) != 0)
								{
									v18 = v7->m128_i32[2];
									v37 = *(_DWORD*)(v10 + 68);
									v38 = _mm_unpacklo_ps(
										_mm_unpacklo_ps((__m128) * (unsigned int*)(v10 + 52), (__m128) * (unsigned int*)(v10 + 60)),
										_mm_unpacklo_ps((__m128) * (unsigned int*)(v10 + 56), (__m128)0i64));
									sub_140545D40(a1, v18, (unsigned int*)&v7[286], 0, (__int128*)&v38, (int*)a2, v37);
								}
							}
						}
					}
				}
				v19 = *(_QWORD*)(v10 + 24);
				if (v19)
				{
					v10 = *(_QWORD*)(v10 + 24);
					for (i = *(_QWORD*)(v19 + 16); i; i = *(_QWORD*)(i + 16))
						v10 = i;
				}
				else
				{
					for (i = *(_QWORD*)(v10 + 8); v10 == *(_QWORD*)(i + 24); i = *(_QWORD*)(i + 8))
						v10 = i;
					if (*(_QWORD*)(v10 + 24) != i)
						v10 = i;
				}
			} while (v10 != *(_QWORD*)(a1 + 888));
		}
	}
	else if ((v9 & 0x400) != 0)
	{
		i = *(_QWORD*)(a1 + 312);
		v20 = *(_QWORD*)(i + 72);
		if (v20 && v7)
		{
			if ((*(_BYTE*)(a2 + 16) & 1) != 0)
			{
				v21 = *(float*)(v20 + 4);
				v22 = sub_1405B44A0((__int64)v7, &v39);
				v23 = v7->m128_i32[2];
				v2.m128_f32[0] = v21;
				v38 = _mm_add_ps(v7[291], _mm_mul_ps(*v22, _mm_shuffle_ps(v2, v2, 0)));
				LOBYTE(i) = sub_140545D40(a1, 0, (unsigned int*)&v38, v23, (__int128*)&v7[291], (int*)a2, 0);
			}
			else if ((v9 & 0x40) == 0 || (LODWORD(i) = sub_140545760(a1, a2, (__int64)v7, 0), !(_DWORD)i))
			{
				v24 = *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 72i64) + 4i64);
				v25 = sub_1405B44A0((__int64)v7, &v39);
				v26 = v7->m128_i32[2];
				v2.m128_f32[0] = v24;
				v38 = _mm_add_ps(v7[291], _mm_mul_ps(*v25, _mm_shuffle_ps(v2, v2, 0)));
				LOBYTE(i) = sub_140545D40(a1, v26, (unsigned int*)&v7[286], 0, (__int128*)&v38, (int*)a2, 0);
			}
		}
	}
	else if (*(_DWORD*)(a2 + 12) < 2u)
	{
		if (v7)
		{
			if ((*(_BYTE*)(a2 + 16) & 1) != 0)
			{
				v34 = *(_DWORD*)(a1 + 340);
				v35 = v7->m128_i32[2];
				v39 = v7[286];
				sub_140545D40(a1, v35, (unsigned int*)&v7[286], v34, (__int128*)&v39, (int*)a2, 0);
			}
			LOBYTE(i) = sub_140545760(a1, a2, (__int64)v7, 1);
		}
	}
	else
	{
		for (j = *(_QWORD*)(a1 + 72); j; j = *(_QWORD*)(j + 40))
		{
			v28 = *(_DWORD*)(j + 64);
			i = sub_1403D90D0(qword_140C65898, v28);
			v29 = i;
			if (i && v28 != *(_DWORD*)(a1 + 344))
			{
				if ((*(_BYTE*)(a2 + 16) & 1) != 0)
				{
					i = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 340));
					if (i)
					{
						v30 = *(_DWORD*)(a1 + 340);
						v31 = *(_DWORD*)(v29 + 8);
						v38 = *(__m128*)(i + 4576);
						LOBYTE(i) = sub_140545D40(a1, v31, (unsigned int*)(v29 + 4576), v30, (__int128*)&v38, (int*)a2, 0);
					}
				}
				if ((*(_BYTE*)(a2 + 16) & 2) != 0)
				{
					i = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 344));
					if (i)
					{
						v32 = *(_DWORD*)(a1 + 344);
						v33 = *(_DWORD*)(v29 + 8);
						v39 = *(__m128*)(i + 4576);
						LOBYTE(i) = sub_140545D40(a1, v33, (unsigned int*)(v29 + 4576), v32, (__int128*)&v39, (int*)a2, 0);
					}
				}
			}
		}
	}
	return i;
}
// 140545B00: variable 'v2' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

