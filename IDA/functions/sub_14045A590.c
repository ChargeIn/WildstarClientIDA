//----- (000000014045A590) ----------------------------------------------------
__int64 __fastcall sub_14045A590(__m128* a1, double a2)
{
	double v3; // xmm0_8
	unsigned __int64 v4; // rcx

	if ((a1[263].m128_i32[0] & 0x100) != 0)
	{
		HIDWORD(v3) = HIDWORD(a2);
		*(float*)&v3 = (float)(*(float*)&a2 * -0.69314718) * 12.0;
		a1[370].m128_f32[2] = (float)((float)(a1[370].m128_f32[2] - a1[375].m128_f32[1]) * sub_1408FC7F0(v3))
			+ a1[375].m128_f32[1];
	}
	v4 = a1[366].m128_u64[1];
	if (v4 && !a1[367].m128_u64[1])
		(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v4 + 160i64))(v4);
	sub_14046CDC0((__int64)a1, 0, 0);
	sub_14046F1C0(a1, a2);
	sub_140469650((__int64)a1, *(float*)&a2);
	return 0i64;
}

