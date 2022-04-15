//----- (00000001408A70B0) ----------------------------------------------------
__int64 __fastcall sub_1408A70B0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	int v5; // r12d
	unsigned int v6; // edi
	__int64 v7; // r15
	__int64 v8; // rbp
	unsigned int v9; // ebx
	unsigned __int64 v10; // r13
	unsigned int v11; // edi
	float v12; // xmm7_4
	float v13; // xmm6_4
	unsigned int v14; // r13d
	double v15; // xmm3_8
	double v16; // xmm2_8
	float v17; // xmm1_4
	float* v18; // rdi
	unsigned int v19; // [rsp+B0h] [rbp+8h]

	sub_1408A7D80(*(_BYTE**)(a1 + 8), (int*)(a1 + 128));
	result = sub_1408A7440(a1, a1 + 128);
	if (*(_BYTE*)(a1 + 264))
	{
		sub_1408A9150(a1 + 80, *(_DWORD*)(a1 + 248), *(float*)(a1 + 252), *(float*)(a1 + 256), 0);
		result = sub_1408AA9A0(a1 + 108, *(float*)(a1 + 260), 0);
	}
	if (*(_WORD*)(a2 + 18))
	{
		sub_1408A1D50(a2);
		v5 = *(unsigned __int16*)(a2 + 16);
		v6 = *(unsigned __int16*)(a2 + 18);
		v19 = v6;
		result = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 8i64))(
			*(_QWORD*)(a1 + 16),
			4i64 * (unsigned int)(v5 * *(_DWORD*)(a1 + 276)));
		v7 = result;
		if (result)
		{
			v8 = 0i64;
			v9 = 0;
			if (*(_DWORD*)(a1 + 276))
			{
				v10 = 4 * v6;
				v11 = 0;
				do
				{
					sub_1407DB590(
						(int*)(v7 + 4i64 * v11),
						(int*)(*(_QWORD*)a2 + 4 * v9++ * (unsigned __int64)*(unsigned __int16*)(a2 + 16)),
						v10);
					v11 += v5;
				} while (v9 < *(_DWORD*)(a1 + 276));
			}
			sub_1408A80C0((__int64*)(a1 + 32), a2);
			sub_1408A91D0(a1 + 80, a2);
			sub_1408AAA10((_DWORD*)(a1 + 108), a2);
			sub_1408A80C0((__int64*)(a1 + 56), a2);
			v12 = (float)(100.0 - *(float*)(a1 + 288)) * 0.0099999998;
			v13 = (float)(100.0 - *(float*)(a1 + 272)) * 0.0099999998;
			if (*(_DWORD*)(a1 + 276))
			{
				v14 = 0;
				do
				{
					*(_QWORD*)&v15 = *(unsigned int*)(a1 + 268);
					*(_QWORD*)&v16 = *(unsigned int*)(a1 + 284);
					v17 = *(float*)&v15;
					*(float*)&v15 = *(float*)&v15 * (float)(1.0 - v13);
					*(float*)&v16 = *(float*)&v16 * (float)(1.0 - v12);
					v18 = (float*)(*(_QWORD*)a2 + 4 * (unsigned int)v8 * (unsigned __int64)*(unsigned __int16*)(a2 + 16));
					sub_1408A6050(v18, (__m128*)(v7 + 4i64 * v14), v16, v15, *(float*)(a1 + 284) * v12, v17 * v13, v19);
					sub_1408AAD50((float*)(*(_QWORD*)(a1 + 24) + 12 * v8), v18, v19);
					v8 = (unsigned int)(v8 + 1);
					v14 += v5;
				} while ((unsigned int)v8 < *(_DWORD*)(a1 + 276));
			}
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 16i64))(*(_QWORD*)(a1 + 16), v7);
			*(_DWORD*)(a1 + 284) = *(_DWORD*)(a1 + 268);
			result = *(unsigned int*)(a1 + 272);
			*(_DWORD*)(a1 + 288) = result;
		}
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

