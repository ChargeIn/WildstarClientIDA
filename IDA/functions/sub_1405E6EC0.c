//----- (00000001405E6EC0) ----------------------------------------------------
__int64 __fastcall sub_1405E6EC0(__int64 a1, int a2)
{
	unsigned int v2; // ecx
	unsigned __int64 v3; // r9
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v7; // rbx
	int v8; // eax
	__int64 v9; // rax
	int v10; // xmm0_4
	__int64 v11; // rax
	int v12; // xmm0_4
	__int64 v13; // rax
	int v14; // xmm0_4
	__int64 v15; // rax
	float v16; // xmm6_4
	__m128 v17; // xmm0
	int v18; // ecx

	v2 = 0;
	v3 = *(_QWORD*)(qword_140C65898 + 5792);
	if (!v3)
		return 0i64;
	v4 = *(_QWORD*)(qword_140C65898 + 5784);
	v5 = 0i64;
	while (*(_DWORD*)(*(_QWORD*)(v4 + 8 * v5) + 8i64) != a2)
	{
		v5 = ++v2;
		if (v2 >= v3)
			return 0i64;
	}
	v7 = *(_QWORD*)(v4 + 8i64 * v2);
	if (!v7 || *(_DWORD*)(v7 + 12) || !*(_DWORD*)(v7 + 84))
		return 0i64;
	v8 = dword_140DC3550;
	if ((dword_140DC3550 & 1) == 0)
	{
		dword_140DC3550 |= 1u;
		v9 = sub_140200220(0x42Fu);
		if (v9)
			v10 = *(_DWORD*)(v9 + 24);
		else
			v10 = 1082549862;
		v8 = dword_140DC3550;
		dword_140DC3554 = v10;
	}
	if ((v8 & 2) == 0)
	{
		dword_140DC3550 = v8 | 2;
		v11 = sub_140200220(0x42Fu);
		if (v11)
			v12 = *(_DWORD*)(v11 + 28);
		else
			v12 = 1060320051;
		v8 = dword_140DC3550;
		dword_140DC3558 = v12;
	}
	if ((v8 & 4) == 0)
	{
		dword_140DC3550 = v8 | 4;
		v13 = sub_140200220(0x42Fu);
		if (v13)
			v14 = *(_DWORD*)(v13 + 32);
		else
			v14 = 1061997773;
		v8 = dword_140DC3550;
		dword_140DC355C = v14;
	}
	if ((v8 & 8) != 0)
	{
		v16 = *(float*)&dword_140DC3560;
	}
	else
	{
		dword_140DC3550 = v8 | 8;
		v15 = sub_140200220(0x42Fu);
		if (v15)
		{
			v16 = *(float*)(v15 + 36);
			dword_140DC3560 = LODWORD(v16);
		}
		else
		{
			v16 = -2.9000001;
			dword_140DC3560 = -1069966950;
		}
	}
	v17 = 0i64;
	v17.m128_f32[0] = (float)*(int*)(v7 + 84) + *(float*)&dword_140DC3558;
	*(double*)v17.m128_u64 = sub_1408FBFC0(*(double*)v17.m128_u64, *(float*)&dword_140DC355C);
	v17.m128_f32[0] = (float)(v17.m128_f32[0] * *(float*)&dword_140DC3554) + v16;
	v18 = (int)v17.m128_f32[0];
	if ((int)v17.m128_f32[0] != 0x80000000 && (float)v18 != v17.m128_f32[0])
		v17.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v17, v17)) & 1) + v18);
	return (unsigned int)(int)v17.m128_f32[0];
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC3550: using guessed type int dword_140DC3550;
// 140DC3554: using guessed type int dword_140DC3554;
// 140DC3558: using guessed type int dword_140DC3558;
// 140DC355C: using guessed type int dword_140DC355C;
// 140DC3560: using guessed type int dword_140DC3560;

