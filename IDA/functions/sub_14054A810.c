//----- (000000014054A810) ----------------------------------------------------
__int64 __fastcall sub_14054A810(__m128* a1)
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
		v26 = dword_140C4BF40;
		if (v4 < dword_140C4BF40)
			v26 = *(_DWORD*)qword_140C63750;
		a1->m128_f32[0] = (float)dword_140C4BF50[v26];
		v27 = dword_140C4C000;
		if (*v2 < dword_140C4C000)
			v27 = *v2;
		a1->m128_f32[1] = (float)dword_140C4C010[v27];
		v28 = dword_140C4C0C0;
		if (*v2 < dword_140C4C0C0)
			v28 = *v2;
		a1->m128_f32[2] = (float)dword_140C4C0D0[v28];
		v29 = dword_140C4C180;
		if (*v2 < dword_140C4C180)
			v29 = *v2;
		result = (unsigned int)dword_140C4C190[v29];
		break;
	case 2:
		v22 = dword_140C4C240;
		if (v4 < dword_140C4C240)
			v22 = *(_DWORD*)qword_140C63750;
		a1->m128_f32[0] = (float)dword_140C4C250[v22];
		v23 = dword_140C4C300;
		if (*v2 < dword_140C4C300)
			v23 = *v2;
		a1->m128_f32[1] = (float)dword_140C4C310[v23];
		v24 = dword_140C4C3C0;
		if (*v2 < dword_140C4C3C0)
			v24 = *v2;
		a1->m128_f32[2] = (float)dword_140C4C3D0[v24];
		v25 = dword_140C4C480;
		if (*v2 < dword_140C4C480)
			v25 = *v2;
		result = (unsigned int)dword_140C4C490[v25];
		break;
	case 3:
		v18 = dword_140C4C540;
		if (v4 < dword_140C4C540)
			v18 = *(_DWORD*)qword_140C63750;
		a1->m128_f32[0] = (float)dword_140C4C550[v18];
		v19 = dword_140C4C600;
		if (*v2 < dword_140C4C600)
			v19 = *v2;
		a1->m128_f32[1] = (float)dword_140C4C610[v19];
		v20 = dword_140C4C6C0;
		if (*v2 < dword_140C4C6C0)
			v20 = *v2;
		a1->m128_f32[2] = (float)dword_140C4C6D0[v20];
		v21 = dword_140C4C780;
		if (*v2 < dword_140C4C780)
			v21 = *v2;
		result = (unsigned int)dword_140C4C790[v21];
		break;
	case 4:
		v14 = dword_140C4C840;
		if (v4 < dword_140C4C840)
			v14 = *(_DWORD*)qword_140C63750;
		a1->m128_f32[0] = (float)dword_140C4C850[v14];
		v15 = dword_140C4C900;
		if (*v2 < dword_140C4C900)
			v15 = *v2;
		a1->m128_f32[1] = (float)dword_140C4C910[v15];
		v16 = dword_140C4C9C0;
		if (*v2 < dword_140C4C9C0)
			v16 = *v2;
		a1->m128_f32[2] = (float)dword_140C4C9D0[v16];
		v17 = dword_140C4CA80;
		if (*v2 < dword_140C4CA80)
			v17 = *v2;
		result = (unsigned int)dword_140C4CA90[v17];
		break;
	case 5:
		v10 = dword_140C4CB40;
		if (v4 < dword_140C4CB40)
			v10 = *(_DWORD*)qword_140C63750;
		a1->m128_f32[0] = (float)dword_140C4CB50[v10];
		v11 = dword_140C4CC00;
		if (*v2 < dword_140C4CC00)
			v11 = *v2;
		a1->m128_f32[1] = (float)dword_140C4CC10[v11];
		v12 = dword_140C4CCC0;
		if (*v2 < dword_140C4CCC0)
			v12 = *v2;
		a1->m128_f32[2] = (float)dword_140C4CCD0[v12];
		v13 = dword_140C4CD80;
		if (*v2 < dword_140C4CD80)
			v13 = *v2;
		result = (unsigned int)dword_140C4CD90[v13];
		break;
	default:
		v5 = dword_140C4BC40;
		if (v4 < dword_140C4BC40)
			v5 = *(_DWORD*)qword_140C63750;
		a1->m128_f32[0] = (float)dword_140C4BC50[v5];
		v6 = dword_140C4BD00;
		if (*v2 < dword_140C4BD00)
			v6 = *v2;
		a1->m128_f32[1] = (float)dword_140C4BD10[v6];
		v7 = dword_140C4BDC0;
		if (*v2 < dword_140C4BDC0)
			v7 = *v2;
		a1->m128_f32[2] = (float)dword_140C4BDD0[v7];
		v8 = dword_140C4BE80;
		if (*v2 < dword_140C4BE80)
			v8 = *v2;
		result = (unsigned int)dword_140C4BE90[v8];
		break;
	}
	a1->m128_f32[3] = (float)(int)result;
	*a1 = _mm_mul_ps(*a1, (__m128)xmmword_140B7AB90);
	return result;
}
// 140B7AB90: using guessed type __int128 xmmword_140B7AB90;
// 140C4BC40: using guessed type int dword_140C4BC40;
// 140C4BC50: using guessed type int dword_140C4BC50[];
// 140C4BD00: using guessed type int dword_140C4BD00;
// 140C4BD10: using guessed type int dword_140C4BD10[];
// 140C4BDC0: using guessed type int dword_140C4BDC0;
// 140C4BDD0: using guessed type int dword_140C4BDD0[];
// 140C4BE80: using guessed type int dword_140C4BE80;
// 140C4BE90: using guessed type int dword_140C4BE90[];
// 140C4BF40: using guessed type int dword_140C4BF40;
// 140C4BF50: using guessed type int dword_140C4BF50[];
// 140C4C000: using guessed type int dword_140C4C000;
// 140C4C010: using guessed type int dword_140C4C010[];
// 140C4C0C0: using guessed type int dword_140C4C0C0;
// 140C4C0D0: using guessed type int dword_140C4C0D0[];
// 140C4C180: using guessed type int dword_140C4C180;
// 140C4C190: using guessed type int dword_140C4C190[];
// 140C4C240: using guessed type int dword_140C4C240;
// 140C4C250: using guessed type int dword_140C4C250[];
// 140C4C300: using guessed type int dword_140C4C300;
// 140C4C310: using guessed type int dword_140C4C310[];
// 140C4C3C0: using guessed type int dword_140C4C3C0;
// 140C4C3D0: using guessed type int dword_140C4C3D0[];
// 140C4C480: using guessed type int dword_140C4C480;
// 140C4C490: using guessed type int dword_140C4C490[];
// 140C4C540: using guessed type int dword_140C4C540;
// 140C4C550: using guessed type int dword_140C4C550[];
// 140C4C600: using guessed type int dword_140C4C600;
// 140C4C610: using guessed type int dword_140C4C610[];
// 140C4C6C0: using guessed type int dword_140C4C6C0;
// 140C4C6D0: using guessed type int dword_140C4C6D0[];
// 140C4C780: using guessed type int dword_140C4C780;
// 140C4C790: using guessed type int dword_140C4C790[];
// 140C4C840: using guessed type int dword_140C4C840;
// 140C4C850: using guessed type int dword_140C4C850[];
// 140C4C900: using guessed type int dword_140C4C900;
// 140C4C910: using guessed type int dword_140C4C910[];
// 140C4C9C0: using guessed type int dword_140C4C9C0;
// 140C4C9D0: using guessed type int dword_140C4C9D0[];
// 140C4CA80: using guessed type int dword_140C4CA80;
// 140C4CA90: using guessed type int dword_140C4CA90[];
// 140C4CB40: using guessed type int dword_140C4CB40;
// 140C4CB50: using guessed type int dword_140C4CB50[];
// 140C4CC00: using guessed type int dword_140C4CC00;
// 140C4CC10: using guessed type int dword_140C4CC10[];
// 140C4CCC0: using guessed type int dword_140C4CCC0;
// 140C4CCD0: using guessed type int dword_140C4CCD0[];
// 140C4CD80: using guessed type int dword_140C4CD80;
// 140C4CD90: using guessed type int dword_140C4CD90[];
// 140C4CE40: using guessed type int dword_140C4CE40;
// 140C4CE50: using guessed type __int64 qword_140C4CE50;
// 140C63750: using guessed type __int64 qword_140C63750;

