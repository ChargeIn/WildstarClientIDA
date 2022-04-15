//----- (00000001408CCF70) ----------------------------------------------------
__int64 __fastcall sub_1408CCF70(_DWORD* a1, __int64 a2, float* a3, int a4)
{
	__m128 v7; // xmm6
	__m128 v8; // xmm1
	int v9; // ecx
	int v10; // edi
	int v11; // esi
	__int64 v12; // rax
	int v13; // ecx
	__int64 v14; // rax

	a1[100] = a4;
	v7 = 0i64;
	v7.m128_f32[0] = (float)a4;
	v8 = v7;
	v8.m128_f32[0] = (float)a4 * *a3;
	a1[4] = 1;
	v9 = (int)v8.m128_f32[0];
	if ((int)v8.m128_f32[0] != 0x80000000 && (float)v9 != v8.m128_f32[0])
		v8.m128_f32[0] = (float)(v9 - (_mm_movemask_ps(_mm_unpacklo_ps(v8, v8)) & 1));
	v10 = 0;
	a1[3] = 0;
	a1[2] = ((int)v8.m128_f32[0] + 3) & 0xFFFFFFFC;
	if ((((int)v8.m128_f32[0] + 3) & 0xFFFFFFFC) != 0)
	{
		v11 = 0;
		while (1)
		{
			v12 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 4i64 * (unsigned int)a1[2]);
			*(_QWORD*)&a1[2 * v11] = v12;
			if (!v12)
				break;
			if ((unsigned int)++v11 >= a1[4])
				goto LABEL_8;
		}
	}
	else
	{
	LABEL_8:
		v7.m128_f32[0] = v7.m128_f32[0] * a3[1];
		a1[10] = 1;
		v13 = (int)v7.m128_f32[0];
		if ((int)v7.m128_f32[0] != 0x80000000 && (float)v13 != v7.m128_f32[0])
			v7.m128_f32[0] = (float)(v13 - (_mm_movemask_ps(_mm_unpacklo_ps(v7, v7)) & 1));
		a1[9] = 0;
		a1[8] = ((int)v7.m128_f32[0] + 3) & 0xFFFFFFFC;
		if ((((int)v7.m128_f32[0] + 3) & 0xFFFFFFFC) == 0)
			return 1i64;
		while (1)
		{
			v14 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 4i64 * (unsigned int)a1[8]);
			*(_QWORD*)&a1[2 * v10 + 6] = v14;
			if (!v14)
				break;
			if ((unsigned int)++v10 >= a1[10])
				return 1i64;
		}
	}
	return 52i64;
}

