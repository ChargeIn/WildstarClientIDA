#include "../winhttp.h"

//----- (000000014055BDC0) ----------------------------------------------------
__int64 __fastcall sub_14055BDC0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
	int v10; // ecx
	__int64 v11; // rax
	int v12; // edx
	__int64 v13; // rbx
	__int64 v14; // rax
	int v15; // edx
	int v16; // eax
	int v17; // ebx
	__int64 v18; // rax
	unsigned int v19; // ecx
	int v20; // eax
	__int64 v21; // rax
	int v22; // xmm0_4
	int v23; // eax
	int v24; // ebp
	__int64 v25; // r14
	float v26; // xmm6_4
	__m128 v27; // xmm2
	double v28; // xmm3_8
	__m128 v29; // xmm1
	double v30; // xmm2_8

	if (!a2 || !a3)
		return 0i64;
	if ((*(_BYTE*)(a1 + 31648) & 1) != 0
		&& (v10 = *(_DWORD*)(*(_QWORD*)(a3 + 112) + 268i64), (v10 & 0x4000000) != 0)
		&& (v10 & 0x10000000) != 0)
	{
		v11 = *(_QWORD*)(a1 + 25744);
		if (v11)
			v12 = *(_DWORD*)(v11 + 264);
		else
			v12 = 0;
		v13 = sub_1403D90D0(a1, v12);
		if (!v13
			|| ((v14 = *(_QWORD*)(a1 + 25744)) != 0 ? (v15 = *(_DWORD*)(v14 + 264)) : (v15 = 0),
				((unsigned int)sub_14045A950(a2, v15) != 2
					|| (*(_BYTE*)(v13 + 36) & 1) != 0
					|| *(_QWORD*)(v13 + 24) && !sub_140466B90(a2, v13))
				&& ((v16 = sub_1403B44B0(
					*(_QWORD*)(v13 + 24),
					**(_DWORD**)(a3 + 112),
					*(_DWORD*)(*(_QWORD*)(a3 + 112) + 296i64),
					v13,
					*(_QWORD*)(v13 + 24),
					a2),
					!*(_DWORD*)(*(_QWORD*)(a3 + 112) + 296i64))
					|| v16)))
		{
			v13 = a2;
		}
		v17 = *(_DWORD*)(v13 + 8);
	}
	else
	{
		v18 = *(_QWORD*)(a3 + 112);
		if (*(_DWORD*)(v18 + 24) == 3)
		{
		LABEL_27:
			v17 = 0;
		}
		else
		{
			switch (*(_DWORD*)(v18 + 124))
			{
			case 0:
			case 2:
			case 6:
			case 7:
				v17 = *(_DWORD*)(a2 + 8);
				break;
			case 1:
			case 3:
			case 5:
			case 8:
				v17 = a5;
				if (!a5)
					v17 = *(_DWORD*)(a2 + 264);
				break;
			default:
				goto LABEL_27;
			}
		}
	}
	if (!a4 && !v17)
	{
		v19 = *(_DWORD*)(*(_QWORD*)(a3 + 112) + 124i64);
		if (v19 <= 8)
		{
			v20 = 298;
			if (_bittest(&v20, v19))
			{
				if ((dword_140DC33D0 & 1) != 0)
				{
					v22 = dword_140DC33D4;
				}
				else
				{
					dword_140DC33D0 |= 1u;
					v21 = sub_140200220(0x145u);
					if (v21)
					{
						v22 = *(_DWORD*)(v21 + 24);
						dword_140DC33D4 = v22;
					}
					else
					{
						v22 = 1084227584;
						dword_140DC33D4 = 1084227584;
					}
				}
				v23 = sub_14055A5F0((_QWORD*)a1, 1, 1, 0, 0, 1, 0, *(float*)&v22);
				v24 = v23;
				if (v23)
				{
					v25 = sub_1403D90D0(a1, v23);
					if (v25)
					{
						v26 = *(float*)((*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a2 + 5872) + 80i64))(
							*(_QWORD*)(a2 + 5872),
							1i64)
							+ 48);
						*(_QWORD*)&v28 = *(unsigned int*)((*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v25 + 5872)
							+ 80i64))(
								*(_QWORD*)(v25 + 5872),
								1i64)
							+ 48);
						v27 = _mm_sub_ps(*(__m128*)(a2 + 4576), *(__m128*)(v25 + 4576));
						*(float*)&v28 = *(float*)&v28 + v26;
						v29 = _mm_mul_ps(v27, v27);
						*(_QWORD*)&v30 = _mm_shuffle_ps(v29, v29, 170).m128_u64[0];
						if ((float)(fsqrt((float)(v29.m128_f32[0] + _mm_shuffle_ps(v29, v29, 85).m128_f32[0]) + *(float*)&v30)
							- *(float*)&v28) < 4.0)
						{
							v17 = *(_DWORD*)(v25 + 8);
							if (v17)
								sub_14055B0E0(a1, v24, v30, v28);
						}
					}
				}
			}
		}
	}
	return sub_1403D90D0(a1, v17);
}
// 140DC33D0: using guessed type int dword_140DC33D0;
// 140DC33D4: using guessed type int dword_140DC33D4;

