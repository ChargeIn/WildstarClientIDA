//----- (000000014064D660) ----------------------------------------------------
__int64 __fastcall sub_14064D660(__int64 a1)
{
	float* v2; // rax
	float v4; // xmm6_4
	float v5; // xmm0_4
	__int64 v6; // rax

	v2 = (float*)sub_1406499E0(a1);
	if (v2)
	{
		v4 = v2[571];
		v5 = sub_140463340(v2).m128_f32[0];
		v6 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v6 + 8) = 3;
		*(double*)v6 = (float)((float)(v5 - v4) * 100.0);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}

