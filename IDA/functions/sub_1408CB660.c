//----- (00000001408CB660) ----------------------------------------------------
void __fastcall sub_1408CB660(int* a1, float a2, float a3, int a4)
{
	float v6; // xmm0_4

	LODWORD(v6) = sub_1408CB710(a1[18], a2, a3, a4).m128_u32[0];
	sub_1408CB7F0((__int64)(a1 + 24), a2, v6, a4, *a1);
	sub_1408CB7F0((__int64)(a1 + 27), a2, v6, a4, a1[6]);
	sub_1408CB7F0((__int64)(a1 + 30), a2, v6, a4, a1[12]);
	sub_1408CB7F0((__int64)(a1 + 33), a2, v6, a4, a1[18]);
}

