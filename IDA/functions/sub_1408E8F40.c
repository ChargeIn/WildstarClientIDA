//----- (00000001408E8F40) ----------------------------------------------------
__int64 __fastcall sub_1408E8F40(int a1, int a2, __int64 a3, unsigned __int64* a4)
{
	int v4; // edi
	__int64 v6; // rbx
	unsigned __int64 v7; // r10
	__int64 v8; // rbp
	double v9; // xmm7_8
	double v10; // xmm6_8
	float v11; // xmm1_4
	float v12; // xmm1_4
	__int64 v13; // rbp
	double v14; // xmm7_8
	double v15; // xmm6_8
	float v16; // xmm1_4
	float v17; // xmm1_4

	v4 = 0;
	v6 = 0i64;
	v7 = (8i64 * (a1 - 1) + 111) & 0xFFFFFFFFFFFFFFF0ui64;
	if (a3 && *a4 >= v7)
		v6 = a3;
	*a4 = v7;
	if (v6)
	{
		*(_DWORD*)v6 = a1;
		*(_DWORD*)(v6 + 4) = a2;
		*(_QWORD*)(v6 + 72) = a3 + 96;
		if (a2)
		{
			if (a1 > 0)
			{
				v8 = 0i64;
				v9 = 1.0 / (double)a1;
				do
				{
					v10 = (double)v4 * 6.283185307179586 * v9;
					v11 = sub_1408FE750(v10);
					*(float*)(*(_QWORD*)(v6 + 72) + v8) = v11;
					++v4;
					v8 += 8i64;
					v12 = sub_1408FEBE0(v10);
					*(float*)(*(_QWORD*)(v6 + 72) + v8 - 4) = v12;
				} while (v4 < a1);
			}
		}
		else if (a1 > 0)
		{
			v13 = 0i64;
			v14 = 1.0 / (double)a1;
			do
			{
				v15 = (double)v4 * -6.283185307179586 * v14;
				v16 = sub_1408FE750(v15);
				*(float*)(*(_QWORD*)(v6 + 72) + v13) = v16;
				++v4;
				v13 += 8i64;
				v17 = sub_1408FEBE0(v15);
				*(float*)(*(_QWORD*)(v6 + 72) + v13 - 4) = v17;
			} while (v4 < a1);
		}
		sub_1408E9B50(a1, (int*)(v6 + 8));
	}
	return v6;
}

