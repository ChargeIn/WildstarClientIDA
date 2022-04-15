//----- (0000000140894580) ----------------------------------------------------
__int64 __fastcall sub_140894580(__int64 a1, int a2, int a3, int* a4, signed int a5)
{
	_QWORD* v5; // rbx
	unsigned int v7; // esi
	__int64 v8; // rdx
	__int64 v12; // r9
	__int64 v13; // rcx
	unsigned int v14; // eax
	__int64 v15; // r8
	double v16; // xmm1_8
	double v17; // xmm0_8
	double v18; // xmm1_8
	double v19; // xmm0_8
	double v20; // xmm1_8
	double v21; // xmm0_8
	double v22; // xmm1_8
	double v23; // xmm0_8
	__int64 v24; // rcx
	__int64 v25; // r8
	double v26; // xmm1_8
	double v27; // xmm0_8

	v5 = (_QWORD*)(a1 + 8);
	v7 = 0;
	v8 = *(_QWORD*)(a1 + 8);
	if (v8)
	{
		sub_140881720(dword_140C10F20, v8);
		*v5 = 0i64;
	}
	v5[1] = 0i64;
	*(_DWORD*)a1 = a2;
	*(_DWORD*)(a1 + 4) = a3;
	if (a5 && (unsigned int)sub_140837E30((__int64)v5, a4, a5, 0) == 1)
	{
		v12 = 0i64;
		if (a5 >= 4)
		{
			v13 = 0i64;
			v14 = ((unsigned int)(a5 - 4) >> 2) + 1;
			v15 = v14;
			v7 = 4 * v14;
			v12 = 4i64 * v14;
			do
			{
				v16 = *(float*)(v13 + *v5) * (double)dword_140C110B4;
				if (v16 <= 0.0)
					v17 = -0.5;
				else
					v17 = 0.5;
				*(float*)(v13 + *v5) = (float)(int)(v17 + v16);
				v18 = (double)dword_140C110B4 * *(float*)(v13 + *v5 + 12);
				if (v18 <= 0.0)
					v19 = -0.5;
				else
					v19 = 0.5;
				*(float*)(v13 + *v5 + 12) = (float)(int)(v19 + v18);
				v20 = *(float*)(v13 + *v5 + 24) * (double)dword_140C110B4;
				if (v20 <= 0.0)
					v21 = -0.5;
				else
					v21 = 0.5;
				*(float*)(v13 + *v5 + 24) = (float)(int)(v21 + v20);
				v22 = *(float*)(v13 + *v5 + 36) * (double)dword_140C110B4;
				if (v22 <= 0.0)
					v23 = -0.5;
				else
					v23 = 0.5;
				v13 += 48i64;
				*(float*)(v13 + *v5 - 12) = (float)(int)(v23 + v22);
				--v15;
			} while (v15);
		}
		if (v7 < a5)
		{
			v24 = 12 * v12;
			v25 = a5 - v7;
			do
			{
				v26 = (double)dword_140C110B4 * *(float*)(v24 + *v5);
				if (v26 <= 0.0)
					v27 = -0.5;
				else
					v27 = 0.5;
				v24 += 12i64;
				*(float*)(v24 + *v5 - 12) = (float)(int)(v27 + v26);
				--v25;
			} while (v25);
		}
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C110B4: using guessed type int dword_140C110B4;

