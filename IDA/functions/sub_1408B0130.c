//----- (00000001408B0130) ----------------------------------------------------
__int64 __fastcall sub_1408B0130(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	unsigned int v4; // r10d
	unsigned int v5; // r8d
	__int64 result; // rax
	unsigned int v9; // ebx
	__int64 v10; // r9
	__int64 v11; // rcx
	unsigned int v12; // eax
	__int64 v13; // rdx
	float v14; // xmm0_4
	float v15; // xmm1_4
	float v16; // xmm1_4
	float v17; // xmm0_4
	float v18; // xmm1_4
	unsigned int v19; // ebx
	__int64 v20; // rcx
	float v21; // xmm0_4
	__int64 v22; // rbx
	__int64 v23; // r9
	unsigned int v24; // edx
	__int64 v25; // rcx
	unsigned int v26; // eax

	v4 = *(_DWORD*)(a1 + 8);
	v5 = 0;
	result = 0i64;
	v9 = v4 >> 1;
	if (v4 >> 1 >= 4)
	{
		v10 = a4 - a2;
		v11 = a2 + 4;
		v12 = ((v9 - 4) >> 2) + 1;
		v13 = v12;
		v5 = 4 * v12;
		result = 4i64 * v12;
		do
		{
			v14 = *(float*)(v10 + v11 - 4);
			v15 = *(float*)(v10 + v11);
			v11 += 16i64;
			v16 = v15 * *(float*)(v11 - 16);
			*(float*)(v11 - 20) = v14 * *(float*)(v11 - 20);
			v17 = *(float*)(v10 + v11 - 12);
			*(float*)(v11 - 16) = v16;
			v18 = *(float*)(v10 + v11 - 8) * *(float*)(v11 - 8);
			*(float*)(v11 - 12) = v17 * *(float*)(v11 - 12);
			*(float*)(v11 - 8) = v18;
			--v13;
		} while (v13);
	}
	if (v5 < v9)
	{
		v19 = v9 - v5;
		result = a2 + 4 * result;
		v5 += v19;
		v20 = v19;
		do
		{
			v21 = *(float*)(result + a4 - a2);
			result += 4i64;
			*(float*)(result - 4) = v21 * *(float*)(result - 4);
			--v20;
		} while (v20);
	}
	v22 = v5;
	if (v5 < v4)
	{
		result = v4 - v5;
		if ((int)result >= 4)
		{
			v23 = a2 + 8 + 4i64 * v5;
			v22 = v5 + 4i64 * (((v4 - 3 - v5 - 1) >> 2) + 1);
			do
			{
				v23 += 16i64;
				v24 = v4 - v5;
				v5 += 4;
				*(float*)(v23 - 24) = *(float*)(a4 + 4i64 * (v24 - 1)) * *(float*)(v23 - 24);
				*(float*)(v23 - 20) = *(float*)(a4 + 4i64 * (v24 - 2)) * *(float*)(v23 - 20);
				result = v24 - 4;
				*(float*)(v23 - 16) = *(float*)(a4 + 4i64 * (v24 - 3)) * *(float*)(v23 - 16);
				*(float*)(v23 - 12) = *(float*)(a4 + 4 * result) * *(float*)(v23 - 12);
			} while (v5 < v4 - 3);
		}
		if (v5 < v4)
		{
			v25 = a2 + 4 * v22;
			do
			{
				v25 += 4i64;
				v26 = v4 - v5++;
				result = v26 - 1;
				*(float*)(v25 - 4) = *(float*)(a4 + 4 * result) * *(float*)(v25 - 4);
			} while (v5 < v4);
		}
	}
	return result;
}

