//----- (00000001400D9590) ----------------------------------------------------
__int64 __fastcall sub_1400D9590(_QWORD* a1)
{
	__int64 v2; // rdi
	double v3; // xmm0_8
	__int64 v4; // rbx
	float v5; // xmm1_4

	v2 = sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v3 = sub_140056C40(a1, 2u);
		v4 = *(_QWORD*)(v2 + 448);
		if (v4)
		{
			if (*(_QWORD*)(v4 + 48))
			{
				v5 = v3;
				*(float*)(v4 + 28) = v5;
				*(_DWORD*)(v4 + 32) = -1082130432;
				*(_DWORD*)(v4 + 16) = 1;
				*(_QWORD*)(v4 + 20) = 0i64;
				sub_140151FE0(v4, 0.0);
				sub_1400D4070(*(_QWORD*)(v4 + 48), 0x4Cu, *(char**)(v4 + 48), "s", *(_QWORD*)(*(_QWORD*)(v4 + 40) + 16i64));
			}
		}
	}
	return 0i64;
}

