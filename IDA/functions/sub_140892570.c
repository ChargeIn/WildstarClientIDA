#include "../winhttp.h"

//----- (0000000140892570) ----------------------------------------------------
__int64 __fastcall sub_140892570(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v3; // rbx
	__int64 v4; // rdi
	__int64 v6; // rax
	unsigned int v7; // r9d
	__int64 v8; // r10
	__int64 v9; // rdx
	unsigned int v10; // eax
	__int64 v11; // r8
	_QWORD* v12; // rcx
	__int64 v13; // rcx
	double v15; // xmm1_8
	double v16; // xmm0_8
	_QWORD* v17; // rcx
	__int64 v18; // rcx
	double v19; // xmm1_8
	double v20; // xmm0_8
	_QWORD* v21; // rcx
	__int64 v22; // rcx
	double v23; // xmm1_8
	double v24; // xmm0_8
	_QWORD* v25; // rcx
	__int64 v26; // rcx
	double v27; // xmm1_8
	double v28; // xmm0_8
	__int64 v29; // r8
	__int64 v30; // rdx
	_QWORD* v31; // rcx
	__int64 v32; // rcx
	double v33; // xmm0_8
	double v34; // xmm1_8

	v3 = a1 + 224;
	v4 = a3;
	if (*(_QWORD*)(a1 + 224))
	{
		sub_140892320((__int64*)(a1 + 224));
		sub_140881720(dword_140C10F20, *(_QWORD*)v3);
		*(_QWORD*)v3 = 0i64;
		*(_QWORD*)(v3 + 8) = 0i64;
		*(_DWORD*)(v3 + 16) = 0;
	}
	if ((_DWORD)v4)
	{
		v6 = sub_1408819F0(dword_140C10F20, 16 * v4);
		*(_QWORD*)v3 = v6;
		*(_QWORD*)(v3 + 8) = v6;
		if (!v6)
			return 2i64;
		*(_DWORD*)(v3 + 16) = v4;
	}
	v7 = 0;
	v8 = 0i64;
	if ((int)v4 >= 4)
	{
		v9 = a2 + 16;
		v10 = ((unsigned int)(v4 - 4) >> 2) + 1;
		v11 = v10;
		v7 = 4 * v10;
		v8 = 4i64 * v10;
		do
		{
			v12 = *(_QWORD**)(v3 + 8);
			if ((unsigned int)(((__int64)v12 - *(_QWORD*)v3) >> 4) >= *(_DWORD*)(v3 + 16))
			{
				v13 = 0i64;
			}
			else
			{
				if (v12)
				{
					*v12 = 0i64;
					v12[1] = 0i64;
				}
				v13 = *(_QWORD*)(v3 + 8);
				*(_QWORD*)(v3 + 8) = v13 + 16;
			}
			*(_DWORD*)v13 = *(_DWORD*)(v9 - 16);
			v15 = (double)dword_140C110B4 * *(double*)(v9 - 8) * 0.001;
			if (v15 <= 0.0)
				v16 = -0.5;
			else
				v16 = 0.5;
			*(_DWORD*)(v13 + 4) = (int)(v16 + v15);
			*(_QWORD*)(v13 + 8) = *(_QWORD*)v9;
			v17 = *(_QWORD**)(v3 + 8);
			if ((unsigned int)(((__int64)v17 - *(_QWORD*)v3) >> 4) >= *(_DWORD*)(v3 + 16))
			{
				v18 = 0i64;
			}
			else
			{
				if (v17)
				{
					*v17 = 0i64;
					v17[1] = 0i64;
				}
				v18 = *(_QWORD*)(v3 + 8);
				*(_QWORD*)(v3 + 8) = v18 + 16;
			}
			*(_DWORD*)v18 = *(_DWORD*)(v9 + 8);
			v19 = (double)dword_140C110B4 * *(double*)(v9 + 16) * 0.001;
			if (v19 <= 0.0)
				v20 = -0.5;
			else
				v20 = 0.5;
			*(_DWORD*)(v18 + 4) = (int)(v20 + v19);
			*(_QWORD*)(v18 + 8) = *(_QWORD*)(v9 + 24);
			v21 = *(_QWORD**)(v3 + 8);
			if ((unsigned int)(((__int64)v21 - *(_QWORD*)v3) >> 4) >= *(_DWORD*)(v3 + 16))
			{
				v22 = 0i64;
			}
			else
			{
				if (v21)
				{
					*v21 = 0i64;
					v21[1] = 0i64;
				}
				v22 = *(_QWORD*)(v3 + 8);
				*(_QWORD*)(v3 + 8) = v22 + 16;
			}
			*(_DWORD*)v22 = *(_DWORD*)(v9 + 32);
			v23 = (double)dword_140C110B4 * *(double*)(v9 + 40) * 0.001;
			if (v23 <= 0.0)
				v24 = -0.5;
			else
				v24 = 0.5;
			*(_DWORD*)(v22 + 4) = (int)(v24 + v23);
			*(_QWORD*)(v22 + 8) = *(_QWORD*)(v9 + 48);
			v25 = *(_QWORD**)(v3 + 8);
			if ((unsigned int)(((__int64)v25 - *(_QWORD*)v3) >> 4) >= *(_DWORD*)(v3 + 16))
			{
				v26 = 0i64;
			}
			else
			{
				if (v25)
				{
					*v25 = 0i64;
					v25[1] = 0i64;
				}
				v26 = *(_QWORD*)(v3 + 8);
				*(_QWORD*)(v3 + 8) = v26 + 16;
			}
			*(_DWORD*)v26 = *(_DWORD*)(v9 + 56);
			v27 = (double)dword_140C110B4 * *(double*)(v9 + 64) * 0.001;
			if (v27 <= 0.0)
				v28 = -0.5;
			else
				v28 = 0.5;
			v9 += 96i64;
			*(_DWORD*)(v26 + 4) = (int)(v28 + v27);
			*(_QWORD*)(v26 + 8) = *(_QWORD*)(v9 - 24);
			--v11;
		} while (v11);
	}
	if (v7 < (unsigned int)v4)
	{
		v29 = (unsigned int)v4 - v7;
		v30 = a2 + 8 * (v8 + 2 * (v8 + 1));
		do
		{
			v31 = *(_QWORD**)(v3 + 8);
			if ((unsigned int)(((__int64)v31 - *(_QWORD*)v3) >> 4) >= *(_DWORD*)(v3 + 16))
			{
				v32 = 0i64;
			}
			else
			{
				if (v31)
				{
					*v31 = 0i64;
					v31[1] = 0i64;
				}
				v32 = *(_QWORD*)(v3 + 8);
				*(_QWORD*)(v3 + 8) = v32 + 16;
			}
			*(_DWORD*)v32 = *(_DWORD*)(v30 - 16);
			v33 = (double)dword_140C110B4 * *(double*)(v30 - 8) * 0.001;
			if (v33 <= 0.0)
				v34 = -0.5;
			else
				v34 = 0.5;
			v30 += 24i64;
			*(_DWORD*)(v32 + 4) = (int)(v34 + v33);
			*(_QWORD*)(v32 + 8) = *(_QWORD*)(v30 - 24);
			--v29;
		} while (v29);
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C110B4: using guessed type int dword_140C110B4;

