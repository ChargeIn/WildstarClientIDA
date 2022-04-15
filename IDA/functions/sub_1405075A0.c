//----- (00000001405075A0) ----------------------------------------------------
__int64 __fastcall sub_1405075A0(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	unsigned int v4; // ecx
	__int64 v5; // rdx
	__int64 v6; // rcx
	double v7; // xmm0_8

	v2 = sub_140506EA0(a1);
	v3 = a1[2];
	if (!v2)
		goto LABEL_5;
	v4 = 0;
	if ((int)((v3 - a1[3]) >> 4) >= 2)
	{
		v4 = (int)sub_140056C40(a1, 2u);
		if (v4 >= 2)
		{
			v3 = a1[2];
		LABEL_5:
			*(_DWORD*)(v3 + 8) = 0;
			goto LABEL_9;
		}
	}
	v5 = a1[2];
	v6 = *(_QWORD*)(232i64 * v4 + v2 + 1080);
	v7 = (double)(int)v6;
	if (v6 < 0)
		v7 = v7 + 1.844674407370955e19;
	*(double*)v5 = v7;
	*(_DWORD*)(v5 + 8) = 3;
LABEL_9:
	a1[2] += 16i64;
	return 1i64;
}

