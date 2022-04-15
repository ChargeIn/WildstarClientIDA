//----- (00000001408D0FF0) ----------------------------------------------------
float* __fastcall sub_1408D0FF0(__int64 a1, int a2, float* a3)
{
	float v3; // xmm7_4
	float* result; // rax
	float v8; // xmm6_4
	double v9; // xmm0_8
	double v10; // xmm0_8
	__int64 v11; // rdx
	int v12; // xmm3_4
	int v13; // xmm4_4
	__int64 v14; // rcx
	float v15; // xmm0_4
	int v16; // eax
	float v17; // xmm0_4
	int v18; // [rsp+60h] [rbp+8h] BYREF
	int v19; // [rsp+70h] [rbp+18h] BYREF

	v3 = a3[2];
	if (v3 == 0.0)
	{
		result = sub_1408A5980(0, 0.0, 0, (float*)&v19, (float*)&v18);
	}
	else
	{
		v8 = (float)a2 * 0.5;
		HIDWORD(v9) = 0;
		*(float*)&v9 = v8 / a3[1];
		v10 = sub_1408FE170(v9);
		*(float*)&v10 = *(float*)&v10 * v3;
		*(_QWORD*)&v10 ^= 0x8000000080000000ui64;
		*(float*)&v10 = sub_1408FC7F0(v10) * v8;
		result = sub_1408A5980(1, v10, a2, (float*)&v19, (float*)&v18);
	}
	v11 = 0i64;
	if (*(_DWORD*)(a1 + 144))
	{
		v12 = v18;
		v13 = v19;
		while (1)
		{
			v14 = 3 * v11;
			v15 = (float)(1.0 / (float)a2) * a3[1];
			*(float*)(a1 + 24 * v11 + 16) = v15;
			if (!*(_DWORD*)a3)
				*(float*)(a1 + 24 * v11 + 16) = v15 * 6.2831855;
			*(_DWORD*)(a1 + 24 * v11 + 4) = v13;
			*(_DWORD*)(a1 + 24 * v11 + 8) = v12;
			v16 = *(_DWORD*)(a1 + 24 * v11 + 20);
			if (v16 == *(_DWORD*)a3)
				goto LABEL_14;
			if (!v16)
				break;
			if (!*(_DWORD*)a3)
			{
				v17 = *(float*)(a1 + 24 * v11 + 12) * 6.2831855;
				goto LABEL_13;
			}
		LABEL_14:
			result = (float*)*(unsigned int*)a3;
			v11 = (unsigned int)(v11 + 1);
			*(_DWORD*)(a1 + 8 * v14 + 20) = (_DWORD)result;
			if ((unsigned int)v11 >= *(_DWORD*)(a1 + 144))
				return result;
		}
		v17 = *(float*)(a1 + 24 * v11 + 12) * 0.15915494;
	LABEL_13:
		*(float*)(a1 + 24 * v11 + 12) = v17;
		goto LABEL_14;
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

