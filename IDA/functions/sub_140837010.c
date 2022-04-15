//----- (0000000140837010) ----------------------------------------------------
double __fastcall sub_140837010(float a1, float a2, double a3, int a4)
{
	double v4; // xmm5_8
	double result; // xmm0_8
	double v6; // xmm1_8
	float v7; // xmm4_4
	double v8; // xmm2_8
	double v9; // xmm2_8
	float v10; // xmm5_4
	float v11; // xmm4_4
	float v12; // xmm3_4

	v4 = a3;
	switch (a4)
	{
	case 0:
		HIDWORD(result) = 0;
		*(float*)&result = (float)((float)((float)((float)(1.0 - a1) * (float)(1.0 - a1)) * (float)(1.0 - a1))
			* (float)(a2 - *(float*)&a3))
			+ *(float*)&a3;
		break;
	case 1:
		v7 = a1 * 1.5707964;
		HIDWORD(v8) = 0;
		*(float*)&v8 = (float)((float)((float)((float)((float)((float)((float)(0.0083063254
			- (float)((float)(v7 * v7) * 0.00018363654))
			* (float)(v7 * v7))
			- 0.16664828)
			* (float)(v7 * v7))
			+ 0.9999966)
			* v7)
			* (float)(*(float*)&v4 - a2))
			+ a2;
		result = v8;
		break;
	case 2:
		*(float*)&result = (float)((float)((float)((float)(a1 - 3.0) * a1) * 0.5) * (float)(a2 - *(float*)&a3)) + a2;
		break;
	case 3:
		HIDWORD(v9) = 0;
		v10 = *(float*)&v4 - a2;
		if (a1 > 0.5)
		{
			v12 = 3.1415927 - (float)(a1 * 3.1415927);
			HIDWORD(result) = 0;
			*(float*)&result = (float)((float)(1.0
				- (float)((float)((float)((float)((float)((float)(0.0041531627
					- (float)((float)(v12 * v12)
						* 0.00009181827))
					* (float)(v12 * v12))
					- 0.083324142)
					* (float)(v12 * v12))
					+ 0.4999983)
					* v12))
				* v10)
				+ a2;
		}
		else
		{
			v11 = a1 * 3.1415927;
			*(float*)&v9 = (float)((float)((float)((float)((float)((float)((float)(0.0041531627
				- (float)((float)(v11 * v11)
					* 0.00009181827))
				* (float)(v11 * v11))
				- 0.083324142)
				* (float)(v11 * v11))
				+ 0.4999983)
				* v11)
				* v10)
				+ a2;
			result = v9;
		}
		break;
	case 4:
		*(float*)&v4 = (float)((float)(*(float*)&a3 - a2) * a1) + a2;
		result = v4;
		break;
	case 5:
		*(float*)&result = (float)((float)((float)((float)((float)((float)((float)((float)((float)(a1 * 3.1415927)
			* (float)(a1 * 3.1415927))
			* 0.00048483399)
			- 0.01961384)
			* (float)((float)(a1 * 3.1415927)
				* (float)(a1 * 3.1415927)))
			+ 0.24767479)
			* (float)((float)(a1 * 3.1415927) * (float)(a1 * 3.1415927)))
			+ 0.00069670216)
			* (float)(*(float*)&a3 - a2))
			+ a2;
		break;
	case 6:
		*(float*)&result = (float)((float)((float)((float)(a1 + 1.0) * a1) * 0.5) * (float)(*(float*)&a3 - a2)) + a2;
		break;
	case 7:
		HIDWORD(v6) = 0;
		*(float*)&v6 = (float)((float)((float)((float)((float)((float)(0.04148775
			- (float)((float)((float)(a1 * 1.5707964)
				* (float)(a1 * 1.5707964))
				* 0.0012712094))
			* (float)((float)(a1 * 1.5707964) * (float)(a1 * 1.5707964)))
			- 0.49991244)
			* (float)((float)(a1 * 1.5707964) * (float)(a1 * 1.5707964)))
			+ 0.99999332)
			* (float)(a2 - *(float*)&a3))
			+ *(float*)&a3;
		result = v6;
		break;
	case 8:
		*(float*)&result = (float)((float)((float)(a1 * a1) * a1) * (float)(*(float*)&a3 - a2)) + a2;
		break;
	default:
		result = 0.0;
		break;
	}
	return result;
}

