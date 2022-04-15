//----- (00000001405918A0) ----------------------------------------------------
__int64 __fastcall sub_1405918A0(__int64 a1)
{
	unsigned int v2; // esi
	__int64 v3; // rax
	unsigned int v4; // edx
	int v5; // eax
	float v6; // xmm1_4
	int v7; // edx
	int v8; // ecx
	int v9; // eax
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rax
	int v13; // edx
	int v14; // r8d
	float* v15; // rbx
	unsigned int v16; // ecx
	float v17; // xmm0_4
	float v18; // xmm2_4
	float v19; // xmm0_4
	float v20; // xmm1_4
	float v21; // xmm0_4
	float v22; // xmm2_4

	v2 = 0;
	*(_DWORD*)(a1 + 876) = sub_140591E40(a1);
	if (dword_140C7DF1C)
	{
		v4 = dword_140C7DF18;
	}
	else
	{
		dword_140C7DF1C = 1;
		v3 = sub_140200220(0x4CDu);
		if (v3)
		{
			v4 = *(_DWORD*)(v3 + 4);
			dword_140C7DF18 = v4;
		}
		else
		{
			v4 = 0;
			dword_140C7DF18 = 0;
		}
	}
	v5 = 1;
	v6 = 0.0;
	v7 = v4 >> *(_DWORD*)(a1 + 412);
	v8 = *(_DWORD*)(a1 + 428);
	if (v7 > 1)
		v5 = v7;
	*(_DWORD*)(a1 + 872) = v5;
	v9 = 1 << v8;
	v10 = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 856) = v9;
	if (v10)
		v6 = fabs(*(float*)(v10 + 376));
	*(float*)(a1 + 852) = (float)(v6 * 2.0) / (float)v9;
	*(float*)(a1 + 868) = sub_140591D80(a1);
	sub_140591F30((float*)a1);
	v11 = *(_QWORD*)(a1 + 24);
	if (!v11)
		goto LABEL_19;
	*(_QWORD*)(a1 + 776) = sub_14020A7E0(*(_DWORD*)(v11 + 360));
	v12 = sub_14020AC20(*(_DWORD*)(*(_QWORD*)(a1 + 24) + 364i64));
	*(_QWORD*)(a1 + 784) = v12;
	if (!*(_QWORD*)(a1 + 776))
		goto LABEL_19;
	if (!v12)
		goto LABEL_19;
	sub_1405917B0(a1);
	v13 = *(_DWORD*)(a1 + 408);
	v14 = *(_DWORD*)(a1 + 380);
	v15 = (float*)(a1 + 812);
	*(_DWORD*)(a1 + 72) = *(_DWORD*)(a1 + 392);
	*(_DWORD*)(a1 + 76) = v13;
	*(_QWORD*)(a1 + 88) = a1 + 440;
	*(_DWORD*)(a1 + 80) = v14;
	*(_QWORD*)(a1 + 96) = a1 + 396;
	if (!(unsigned int)sub_14040C310(a1 + 8, a1 + 464, *(_QWORD*)a1, 0i64, a1 + 812, a1 + 792))
	{
		v16 = 0;
		v17 = (float)((float)((float)(*v15 + *(float*)(a1 + 816)) + *(float*)(a1 + 820)) + *(float*)(a1 + 824))
			+ *(float*)(a1 + 828);
		if (v17 < 0.0)
			v16 = 0x80000000;
		if ((int)abs32(v16 - LODWORD(v17)) <= 84)
			v17 = 1.0;
		v18 = 1.0 / v17;
		v2 = 1;
		v19 = (float)(1.0 / v17) * *(float*)(a1 + 816);
		*(float*)(a1 + 832) = *v15 * v18;
		v20 = v18 * *(float*)(a1 + 820);
		*(float*)(a1 + 836) = v19;
		v21 = v18 * *(float*)(a1 + 824);
		v22 = v18 * *(float*)(a1 + 828);
		*(float*)(a1 + 840) = v20;
		*(float*)(a1 + 844) = v21;
		*(float*)(a1 + 848) = v22;
	}
	else
	{
	LABEL_19:
		sub_1407E4830((int*)(a1 + 464), 0i64, 0x138ui64);
		sub_1407E4830((int*)(a1 + 612), 0i64, 0x90ui64);
		*(_QWORD*)(a1 + 612) = 0xC5000000C5i64;
		*(_QWORD*)(a1 + 620) = 0xC5000000C5i64;
		*(_QWORD*)(a1 + 628) = 0xC5000000C5i64;
		*(_QWORD*)(a1 + 636) = 0xC5000000C5i64;
		*(_QWORD*)(a1 + 644) = 0xC5000000C5i64;
		*(_QWORD*)(a1 + 652) = 0xC5000000C5i64;
		*(_QWORD*)(a1 + 660) = 0xC5000000C5i64;
		*(_DWORD*)(a1 + 668) = 197;
		*(_QWORD*)(a1 + 776) = 0i64;
		*(_QWORD*)(a1 + 784) = 0i64;
		*(_QWORD*)(a1 + 792) = 0i64;
		*(_QWORD*)(a1 + 800) = 0i64;
		*(_QWORD*)(a1 + 808) = 0i64;
		*(_QWORD*)(a1 + 816) = 0i64;
		*(_QWORD*)(a1 + 824) = 0i64;
		*(_QWORD*)(a1 + 832) = 0i64;
		*(_QWORD*)(a1 + 840) = 0i64;
		*(_DWORD*)(a1 + 848) = 0;
	}
	*(_DWORD*)(a1 + 880) = sub_140592020(a1).m128_u32[0];
	sub_140592140(a1);
	*(_DWORD*)(a1 + 892) = sub_140592380(a1);
	return v2;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C7DF18: using guessed type int dword_140C7DF18;
// 140C7DF1C: using guessed type int dword_140C7DF1C;

