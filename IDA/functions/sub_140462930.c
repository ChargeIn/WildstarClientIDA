//----- (0000000140462930) ----------------------------------------------------
__m128 __fastcall sub_140462930(__int64 a1)
{
	__int128 v1; // xmm6
	__int64 v2; // rax

	v1 = *(unsigned int*)(a1 + 1756);
	v2 = sub_140200220(0x4F2u);
	if (v2)
		*(float*)&v1 = *(float*)&v1 * *(float*)(v2 + 24);
	else
		*(float*)&v1 = *(float*)&v1 * 0.25;
	return (__m128)v1;
}

