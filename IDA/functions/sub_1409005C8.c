//----- (00000001409005C8) ----------------------------------------------------
void __fastcall sub_1409005C8(double a1)
{
	double v1; // xmm6_8
	unsigned __int64 v2; // rcx
	int v3; // r8d
	double v4; // xmm1_8
	BOOL v5; // ebx
	int v6; // r8d
	double v7; // xmm3_8
	double v8; // xmm2_8
	double v9; // xmm6_8
	unsigned __int64 v10; // rdx
	double v11; // xmm1_8
	double v12; // xmm1_8
	int v13; // r8d
	double v14; // xmm6_8
	int v15; // [rsp+70h] [rbp+8h] BYREF
	double v16; // [rsp+78h] [rbp+10h] BYREF
	double v17; // [rsp+80h] [rbp+18h] BYREF
	double v18; // [rsp+88h] [rbp+20h]

	v18 = a1;
	v1 = a1;
	v2 = *(_QWORD*)&a1 & 0x7FFFFFFFFFFFFFFFi64;
	if ((*(_QWORD*)&a1 & 0x7FFFFFFFFFFFFFFFui64) > 0x3FE921FB54442D18i64)
	{
		if ((*(_QWORD*)&a1 & 0x7FF0000000000000i64) == 0x7FF0000000000000i64)
		{
			if ((*(_QWORD*)&a1 & 0xFFFFFFFFFFFFFi64) != 0)
				sub_1407EFC20((__int64)"tan", 32, *(_QWORD*)&a1 | 0x8000000000000i64, 1, 0, 0x21u, *(__int64*)&a1, 0i64, 1);
			else
				sub_1407EFC20((__int64)"tan", 32, 0xFFF8000000000000ui64, 1, 8, 0x21u, *(__int64*)&a1, 0i64, 1);
			return;
		}
		v5 = v2 != *(_QWORD*)&a1;
		if (v2 != *(_QWORD*)&a1)
			v1 = -a1;
		if (v1 >= 500000.0)
		{
			sub_140903F70(v1, &v16, &v17, &v15);
			LOBYTE(v13) = v15;
			a1 = v16;
			v14 = v17;
		}
		else
		{
			if (v2 > 0x400F6A7A2955385Ei64)
			{
				if (v2 > 0x401C463ABECCB2BBi64)
					v6 = (int)(v1 * 0.6366197723675814 + 0.5);
				else
					v6 = (v2 > 0x4015FDBBE9BBA775i64) + 3;
			}
			else
			{
				v6 = (v2 > 0x4002D97C7F3321D2i64) + 1;
			}
			v7 = (double)v6;
			v8 = (double)v6 * 6.077100506506192e-11;
			v9 = v1 - (double)v6 * 1.570796326734126;
			v18 = v9;
			v10 = (v2 >> 52) - ((*(_QWORD*)&v9 >> 52) & 0x7FFi64);
			if (v10 > 0xF)
			{
				v11 = v9;
				v9 = v9 - v7 * 6.077100506303966e-11;
				v8 = v7 * 2.022266248795951e-21 - (v11 - v9 - v7 * 6.077100506303966e-11);
				if (v10 > 0x30)
				{
					v12 = v9;
					v9 = v9 - v7 * 2.022266248711166e-21;
					v8 = v7 * 8.4784276603689e-32 - (v12 - v9 - v7 * 2.022266248711166e-21);
				}
			}
			v13 = v6 & 3;
			a1 = v9 - v8;
			v15 = v13;
			v16 = v9 - v8;
			v14 = v9 - (v9 - v8) - v8;
			v17 = v14;
		}
		v3 = v13 & 1;
		v4 = v14;
		if (v5)
		{
			sub_140900894(a1, v14, v3);
			return;
		}
	LABEL_8:
		sub_140900894(a1, v4, v3);
		return;
	}
	if (v2 >= 0x3F20000000000000i64)
	{
		v3 = 0;
		v4 = 0.0;
		goto LABEL_8;
	}
	if (v2 < 0x3E40000000000000i64)
	{
		if (v2)
			sub_1407F662C(32);
	}
}

