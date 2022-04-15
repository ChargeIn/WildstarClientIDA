//----- (0000000140509D30) ----------------------------------------------------
__int64 __fastcall sub_140509D30(__int64 a1)
{
	__int64 v1; // rbx
	__int64 result; // rax
	__int64 v4; // rcx
	float v5; // xmm3_4
	float v6; // xmm5_4
	int v7; // ecx
	float v8; // xmm6_4
	int v9; // ecx
	float v10; // xmm1_4
	float v11; // xmm8_4
	float v12; // xmm2_4
	float v13; // xmm4_4
	bool v14; // zf
	int v15[8]; // [rsp+20h] [rbp-58h] BYREF

	v1 = a1 + 1152;
	v15[0] = 0;
	if (*(_DWORD*)(a1 + 1216) == 2)
	{
		result = (*(__int64(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 1632) + 32i64))(*(_QWORD*)(a1 + 1632), v15);
		if (!(_DWORD)result)
			return result;
		result = (*(__int64(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v1 + 440) + 32i64))(*(_QWORD*)(v1 + 440), v15);
		if (!(_DWORD)result)
			return result;
		result = (*(__int64(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v1 + 456) + 32i64))(*(_QWORD*)(v1 + 456), v15);
		if (!(_DWORD)result)
			return result;
		result = (*(__int64(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v1 + 448) + 32i64))(*(_QWORD*)(v1 + 448), v15);
		if (!(_DWORD)result)
			return result;
		v4 = *(_QWORD*)(v1 + 464);
		if (v4)
		{
			result = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v4 + 32i64))(v4, v15);
			if (!(_DWORD)result)
				return result;
		}
		sub_140002470(v1);
		*(_DWORD*)(v1 + 64) = 3;
	}
	result = *(_QWORD*)(v1 + 96);
	v5 = 0.0;
	v6 = 0.0;
	if (result)
		v7 = *(_DWORD*)result;
	else
		v7 = *(_DWORD*)(v1 + 472);
	v8 = (float)v7;
	if (result)
		v9 = *(_DWORD*)(result + 4);
	else
		v9 = *(_DWORD*)(v1 + 476);
	v10 = (float)v9 - 1.0;
	if (v8 > 0.0000099999997 && v10 > 0.0000099999997)
	{
		v11 = (float)*(int*)(a1 + 1080);
		result = *(unsigned int*)(a1 + 1084);
		v12 = v11 / v8;
		v13 = (float)(int)result / v10;
		if (*(_DWORD*)(a1 + 1068))
		{
			if (v12 >= v13)
			{
				v12 = (float)(int)result / v10;
				v5 = (float)(v11 - (float)(v13 * v8)) * 0.5;
			}
			else
			{
				v13 = v11 / v8;
				v6 = (float)((float)(int)result - (float)(v12 * v10)) * 0.5;
			}
		}
		v14 = *(_DWORD*)(v1 + 64) == 5;
		*(float*)v15 = v5;
		*(float*)&v15[1] = v6;
		*(float*)&v15[4] = (float)(v12 * v8) + v5;
		*(float*)&v15[5] = (float)((float)(v10 + 1.0) * v13) + v6;
		if (!v14)
			return sub_140002ED0(v1, (__int64)v15);
	}
	return result;
}

