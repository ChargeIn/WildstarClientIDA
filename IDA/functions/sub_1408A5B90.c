//----- (00000001408A5B90) ----------------------------------------------------
float* __fastcall sub_1408A5B90(int a1, __int64 a2, __int64 a3)
{
	unsigned int v3; // r15d
	int v6; // ebx
	int i; // esi
	int v8; // ecx
	int v9; // ecx
	int v10; // ecx
	unsigned int v11; // ecx
	unsigned int j; // ebx
	__int64 v13; // rbx
	__int64 v14; // rbp
	unsigned int v15; // ecx
	unsigned int v16; // ebx
	__int64 v17; // rcx
	float* result; // rax
	__int64 v19; // rcx
	unsigned int v20; // eax
	__int64 v21; // rdx
	float v22; // xmm0_4
	float v23; // xmm1_4
	float v24; // xmm0_4
	__int64 v25; // rcx
	float v26; // xmm0_4

	v3 = 0;
	v6 = a1;
	for (i = 0; a1; a1 &= a1 - 1)
		++i;
	sub_1407E4830((int*)a3, 0i64, 4i64 * (unsigned int)i);
	v8 = *(_DWORD*)(a2 + 8);
	if (v8)
	{
		v9 = v8 - 1;
		if (!v9)
		{
			if ((v6 & 0x10) == 0)
				goto LABEL_29;
			v16 = (v6 & 4 | 8u) >> 2;
			*(_DWORD*)(a3 + 4i64 * v16) = *(_DWORD*)(a2 + 4);
			v17 = v16 + 1;
			goto LABEL_28;
		}
		v10 = v9 - 1;
		if (v10)
		{
			if (v10 == 1)
			{
				v11 = 0;
				for (j = v6 & 0xFFFFFFF7; j; j &= j - 1)
					++v11;
				if (v11 > 1)
				{
					v13 = a3 + 4;
					v14 = v11 - 1;
					do
					{
						v13 += 4i64;
						*(float*)(v13 - 4) = (float)((double)(int)sub_1407DDB28() * 0.00003051850947599719) * *(float*)(a2 + 4);
						--v14;
					} while (v14);
				}
			}
			goto LABEL_29;
		}
		if ((v6 & 0x30) != 0)
		{
			v15 = 2;
			*(float*)(a3 + 4) = *(float*)(a2 + 4) * 0.5;
			if ((v6 & 4) != 0)
			{
				v15 = 3;
				*(float*)(a3 + 8) = *(float*)(a2 + 4) * 0.25;
			}
			*(float*)(a3 + 4i64 * v15) = *(float*)(a2 + 4) * 0.5;
			goto LABEL_27;
		}
		if ((v6 & 3) != 0)
		{
			*(_DWORD*)(a3 + 4) = *(_DWORD*)(a2 + 4);
			if ((v6 & 4) != 0)
				*(float*)(a3 + 8) = *(float*)(a2 + 4) * 0.5;
		}
	}
	else
	{
		v15 = 0;
		if ((v6 & 2) != 0)
		{
			v15 = 2;
			*(_DWORD*)(a3 + 4) = *(_DWORD*)(a2 + 4);
			if ((v6 & 4) != 0)
			{
				v15 = 3;
				*(float*)(a3 + 8) = *(float*)(a2 + 4) * 0.5;
			}
		}
		if ((v6 & 0x10) != 0)
		{
			*(_DWORD*)(a3 + 4i64 * v15) = 0;
		LABEL_27:
			v17 = v15 + 1;
		LABEL_28:
			*(_DWORD*)(a3 + 4 * v17) = *(_DWORD*)(a2 + 4);
		}
	}
LABEL_29:
	result = 0i64;
	if (i >= 4)
	{
		v19 = a3 + 8;
		v20 = ((unsigned int)(i - 4) >> 2) + 1;
		v21 = v20;
		v3 = 4 * v20;
		result = (float*)(4i64 * v20);
		do
		{
			v22 = *(float*)(v19 - 8);
			v23 = *(float*)(v19 - 4);
			v19 += 16i64;
			*(float*)(v19 - 24) = v22 + *(float*)a2;
			v24 = *(float*)(v19 - 16);
			*(float*)(v19 - 20) = v23 + *(float*)a2;
			*(float*)(v19 - 16) = v24 + *(float*)a2;
			*(float*)(v19 - 12) = *(float*)a2 + *(float*)(v19 - 12);
			--v21;
		} while (v21);
	}
	if (v3 < i)
	{
		result = (float*)(a3 + 4i64 * (_QWORD)result);
		v25 = i - v3;
		do
		{
			v26 = *result++;
			*(result - 1) = v26 + *(float*)a2;
			--v25;
		} while (v25);
	}
	return result;
}

