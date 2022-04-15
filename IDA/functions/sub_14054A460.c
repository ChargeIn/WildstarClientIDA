//----- (000000014054A460) ----------------------------------------------------
__int64 __fastcall sub_14054A460(__m128* a1)
{
	int v1; // eax
	int* v2; // r10
	int v4; // r9d
	int v5; // eax
	int v6; // ecx
	int v7; // ecx
	int v8; // ecx
	__int64 result; // rax
	int v10; // eax
	int v11; // ecx
	int v12; // ecx
	int v13; // ecx
	int v14; // eax
	int v15; // ecx
	int v16; // ecx
	int v17; // ecx
	int v18; // eax
	int v19; // ecx
	int v20; // ecx
	int v21; // ecx
	int v22; // eax
	int v23; // ecx
	int v24; // ecx
	int v25; // ecx
	int v26; // eax
	int v27; // ecx
	int v28; // ecx
	int v29; // ecx

	v1 = dword_140C4CE40;
	v2 = (int*)qword_140C63750;
	v4 = *(_DWORD*)qword_140C63750;
	if (*(_DWORD*)qword_140C63750 < dword_140C4CE40)
		v1 = *(_DWORD*)qword_140C63750;
	switch (*((_DWORD*)&qword_140C4CE50 + v1))
	{
	case 1:
		v26 = dword_140C4BFA0;
		if (v4 < dword_140C4BFA0)
			v26 = *(_DWORD*)qword_140C63750;
		a1->m128_f32[0] = (float)dword_140C4BFB0[v26];
		v27 = dword_140C4C060;
		if (*v2 < dword_140C4C060)
			v27 = *v2;
		a1->m128_f32[1] = (float)dword_140C4C070[v27];
		v28 = dword_140C4C120;
		if (*v2 < dword_140C4C120)
			v28 = *v2;
		a1->m128_f32[2] = (float)dword_140C4C130[v28];
		v29 = dword_140C4C1E0;
		if (*v2 < dword_140C4C1E0)
			v29 = *v2;
		result = (unsigned int)dword_140C4C1F0[v29];
		break;
	case 2:
		v22 = dword_140C4C2A0;
		if (v4 < dword_140C4C2A0)
			v22 = *(_DWORD*)qword_140C63750;
		a1->m128_f32[0] = (float)dword_140C4C2B0[v22];
		v23 = dword_140C4C360;
		if (*v2 < dword_140C4C360)
			v23 = *v2;
		a1->m128_f32[1] = (float)dword_140C4C370[v23];
		v24 = dword_140C4C420;
		if (*v2 < dword_140C4C420)
			v24 = *v2;
		a1->m128_f32[2] = (float)dword_140C4C430[v24];
		v25 = dword_140C4C4E0;
		if (*v2 < dword_140C4C4E0)
			v25 = *v2;
		result = (unsigned int)dword_140C4C4F0[v25];
		break;
	case 3:
		v18 = dword_140C4C5A0;
		if (v4 < dword_140C4C5A0)
			v18 = *(_DWORD*)qword_140C63750;
		a1->m128_f32[0] = (float)dword_140C4C5B0[v18];
		v19 = dword_140C4C660;
		if (*v2 < dword_140C4C660)
			v19 = *v2;
		a1->m128_f32[1] = (float)dword_140C4C670[v19];
		v20 = dword_140C4C720;
		if (*v2 < dword_140C4C720)
			v20 = *v2;
		a1->m128_f32[2] = (float)dword_140C4C730[v20];
		v21 = dword_140C4C7E0;
		if (*v2 < dword_140C4C7E0)
			v21 = *v2;
		result = (unsigned int)dword_140C4C7F0[v21];
		break;
	case 4:
		v14 = dword_140C4C8A0;
		if (v4 < dword_140C4C8A0)
			v14 = *(_DWORD*)qword_140C63750;
		a1->m128_f32[0] = (float)dword_140C4C8B0[v14];
		v15 = dword_140C4C960;
		if (*v2 < dword_140C4C960)
			v15 = *v2;
		a1->m128_f32[1] = (float)dword_140C4C970[v15];
		v16 = dword_140C4CA20;
		if (*v2 < dword_140C4CA20)
			v16 = *v2;
		a1->m128_f32[2] = (float)dword_140C4CA30[v16];
		v17 = dword_140C4CAE0;
		if (*v2 < dword_140C4CAE0)
			v17 = *v2;
		result = (unsigned int)dword_140C4CAF0[v17];
		break;
	case 5:
		v10 = dword_140C4CBA0;
		if (v4 < dword_140C4CBA0)
			v10 = *(_DWORD*)qword_140C63750;
		a1->m128_f32[0] = (float)dword_140C4CBB0[v10];
		v11 = dword_140C4CC60;
		if (*v2 < dword_140C4CC60)
			v11 = *v2;
		a1->m128_f32[1] = (float)dword_140C4CC70[v11];
		v12 = dword_140C4CD20;
		if (*v2 < dword_140C4CD20)
			v12 = *v2;
		a1->m128_f32[2] = (float)dword_140C4CD30[v12];
		v13 = dword_140C4CDE0;
		if (*v2 < dword_140C4CDE0)
			v13 = *v2;
		result = (unsigned int)dword_140C4CDF0[v13];
		break;
	default:
		v5 = dword_140C4BCA0;
		if (v4 < dword_140C4BCA0)
			v5 = *(_DWORD*)qword_140C63750;
		a1->m128_f32[0] = (float)dword_140C4BCB0[v5];
		v6 = dword_140C4BD60;
		if (*v2 < dword_140C4BD60)
			v6 = *v2;
		a1->m128_f32[1] = (float)dword_140C4BD70[v6];
		v7 = dword_140C4BE20;
		if (*v2 < dword_140C4BE20)
			v7 = *v2;
		a1->m128_f32[2] = (float)dword_140C4BE30[v7];
		v8 = dword_140C4BEE0;
		if (*v2 < dword_140C4BEE0)
			v8 = *v2;
		result = (unsigned int)dword_140C4BEF0[v8];
		break;
	}
	a1->m128_f32[3] = (float)(int)result;
	*a1 = _mm_mul_ps(*a1, (__m128)xmmword_140B7AB90);
	return result;
}
// 140B7AB90: using guessed type __int128 xmmword_140B7AB90;
// 140C4BCA0: using guessed type int dword_140C4BCA0;
// 140C4BCB0: using guessed type int dword_140C4BCB0[];
// 140C4BD60: using guessed type int dword_140C4BD60;
// 140C4BD70: using guessed type int dword_140C4BD70[];
// 140C4BE20: using guessed type int dword_140C4BE20;
// 140C4BE30: using guessed type int dword_140C4BE30[];
// 140C4BEE0: using guessed type int dword_140C4BEE0;
// 140C4BEF0: using guessed type int dword_140C4BEF0[];
// 140C4BFA0: using guessed type int dword_140C4BFA0;
// 140C4BFB0: using guessed type int dword_140C4BFB0[];
// 140C4C060: using guessed type int dword_140C4C060;
// 140C4C070: using guessed type int dword_140C4C070[];
// 140C4C120: using guessed type int dword_140C4C120;
// 140C4C130: using guessed type int dword_140C4C130[];
// 140C4C1E0: using guessed type int dword_140C4C1E0;
// 140C4C1F0: using guessed type int dword_140C4C1F0[];
// 140C4C2A0: using guessed type int dword_140C4C2A0;
// 140C4C2B0: using guessed type int dword_140C4C2B0[];
// 140C4C360: using guessed type int dword_140C4C360;
// 140C4C370: using guessed type int dword_140C4C370[];
// 140C4C420: using guessed type int dword_140C4C420;
// 140C4C430: using guessed type int dword_140C4C430[];
// 140C4C4E0: using guessed type int dword_140C4C4E0;
// 140C4C4F0: using guessed type int dword_140C4C4F0[];
// 140C4C5A0: using guessed type int dword_140C4C5A0;
// 140C4C5B0: using guessed type int dword_140C4C5B0[];
// 140C4C660: using guessed type int dword_140C4C660;
// 140C4C670: using guessed type int dword_140C4C670[];
// 140C4C720: using guessed type int dword_140C4C720;
// 140C4C730: using guessed type int dword_140C4C730[];
// 140C4C7E0: using guessed type int dword_140C4C7E0;
// 140C4C7F0: using guessed type int dword_140C4C7F0[];
// 140C4C8A0: using guessed type int dword_140C4C8A0;
// 140C4C8B0: using guessed type int dword_140C4C8B0[];
// 140C4C960: using guessed type int dword_140C4C960;
// 140C4C970: using guessed type int dword_140C4C970[];
// 140C4CA20: using guessed type int dword_140C4CA20;
// 140C4CA30: using guessed type int dword_140C4CA30[];
// 140C4CAE0: using guessed type int dword_140C4CAE0;
// 140C4CAF0: using guessed type int dword_140C4CAF0[];
// 140C4CBA0: using guessed type int dword_140C4CBA0;
// 140C4CBB0: using guessed type int dword_140C4CBB0[];
// 140C4CC60: using guessed type int dword_140C4CC60;
// 140C4CC70: using guessed type int dword_140C4CC70[];
// 140C4CD20: using guessed type int dword_140C4CD20;
// 140C4CD30: using guessed type int dword_140C4CD30[];
// 140C4CDE0: using guessed type int dword_140C4CDE0;
// 140C4CDF0: using guessed type int dword_140C4CDF0[];
// 140C4CE40: using guessed type int dword_140C4CE40;
// 140C4CE50: using guessed type __int64 qword_140C4CE50;
// 140C63750: using guessed type __int64 qword_140C63750;

