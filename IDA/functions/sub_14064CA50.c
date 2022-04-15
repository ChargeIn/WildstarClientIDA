//----- (000000014064CA50) ----------------------------------------------------
__int64 __fastcall sub_14064CA50(__int64 a1)
{
	__int64 v2; // rax
	float v4; // xmm6_4
	__int64 v5; // rax
	float v6; // xmm0_4
	__int64 v7; // rax

	v2 = sub_1406499E0(a1);
	if (v2)
	{
		v4 = *(float*)(v2 + 1764);
		v5 = sub_140200220(0x4F2u);
		if (v5)
			v6 = *(float*)(v5 + 28);
		else
			v6 = 0.25;
		v7 = *(_QWORD*)(a1 + 16);
		*(double*)v7 = (float)(v4 * v6);
		*(_DWORD*)(v7 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}

