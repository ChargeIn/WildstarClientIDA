//----- (00000001408F2E70) ----------------------------------------------------
__int64 __fastcall sub_1408F2E70(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	__m128 v5; // xmm2
	int v6; // ecx
	float v7; // xmm6_4
	float v8; // xmm0_4
	__int64 v9; // rcx
	float v10; // xmm8_4
	float v11; // xmm0_4
	__int64 v12; // rcx
	float v13; // xmm7_4

	v2 = *(_QWORD*)(a1 + 8);
	v5 = (__m128) * (unsigned int*)(v2 + 140);
	v5.m128_f32[0] = (float)(v5.m128_f32[0] * 2.0) / (float)(*(float*)(a1 + 48) * 2.0);
	v6 = (int)v5.m128_f32[0];
	if ((int)v5.m128_f32[0] != 0x80000000 && (float)v6 != v5.m128_f32[0])
		v5.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v5, v5)) & 1) + v6);
	v7 = 0.0;
	if (*(_BYTE*)(v2 + 208))
		v8 = sub_140835CA0((_DWORD*)(v2 + 8), 0.0, *(_DWORD*)(a1 + 68), (_DWORD*)(a1 + 68));
	else
		v8 = 0.0;
	sub_1408F4DF0(a1 + 96, v8);
	v9 = *(_QWORD*)(a1 + 8);
	v10 = *(float*)(a1 + 164);
	if (*(_BYTE*)(v9 + 210))
		v11 = sub_140835CA0((_DWORD*)(v9 + 40), 0.0, *(_DWORD*)(a1 + 76), (_DWORD*)(a1 + 76));
	else
		v11 = 0.0;
	sub_1408F4E60(a1 + 96, v11);
	v12 = *(_QWORD*)(a1 + 8);
	v13 = *(float*)(a1 + 172);
	if (*(_BYTE*)(v12 + 211))
		v7 = sub_140835CA0((_DWORD*)(v12 + 56), 0.0, *(_DWORD*)(a1 + 80), (_DWORD*)(a1 + 80));
	sub_1408F4EA0(a1 + 96, v7);
	return sub_1408F4230(
		a1 + 304,
		v10,
		v13,
		*(float*)(a1 + 176),
		*(float*)(a1 + 48),
		a2,
		(int)v5.m128_f32[0],
		0x40000000);
}

