//----- (00000001408CB140) ----------------------------------------------------
__int64 __fastcall sub_1408CB140(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
	__int64 result; // rax
	unsigned int v6; // ebx
	unsigned int v7; // edi
	float v8; // xmm6_4
	float v9; // xmm7_4
	float v10; // xmm8_4
	unsigned int v11; // esi
	unsigned int v12; // ebp
	float v14; // xmm9_4
	__int64 v18; // r13
	__int64 v19; // rcx
	__int64 v20; // rdx
	__int64 v21; // r8
	__int64 v22; // r9
	float v23; // xmm1_4
	float v24; // xmm3_4
	float v25; // xmm0_4

	result = a5;
	v6 = *(_DWORD*)(a1 + 16);
	v7 = *(_DWORD*)(a1 + 40);
	v8 = *(float*)(a1 + 120);
	v9 = *(float*)(a1 + 132);
	v10 = *(float*)(a1 + 96);
	v11 = *(_DWORD*)(a1 + 64);
	v12 = *(_DWORD*)(a1 + 88);
	v14 = *(float*)(a1 + 108);
	if (a5)
	{
		v18 = a5;
		do
		{
			v19 = *(_QWORD*)(a1 + 8);
			v20 = v6;
			v21 = v7;
			v22 = v11;
			v23 = *(float*)(v19 + 4i64 * v6++) * *(float*)(a1 + 100);
			a3 += 4i64;
			a4 += 4i64;
			a2 += 4i64;
			v10 = v23 - (float)(v10 * *(float*)(a1 + 104));
			v14 = (float)(*(float*)(*(_QWORD*)(a1 + 32) + 4i64 * v7) * *(float*)(a1 + 112))
				- (float)(v14 * *(float*)(a1 + 116));
			v8 = (float)(*(float*)(*(_QWORD*)(a1 + 56) + 4i64 * v11) * *(float*)(a1 + 124))
				- (float)(v8 * *(float*)(a1 + 128));
			v9 = (float)(*(float*)(*(_QWORD*)(a1 + 80) + 4i64 * v12) * *(float*)(a1 + 136))
				- (float)(v9 * *(float*)(a1 + 140));
			*(float*)(a3 - 4) = (float)((float)((float)(v10 - v14) + v8) - v9) + *(float*)(a3 - 4);
			v24 = (float)((float)((float)(v14 + v10) + v8) + v9) * -0.5;
			*(float*)(a4 - 4) = (float)((float)((float)(v14 + v10) - v8) - v9) + *(float*)(a4 - 4);
			v25 = *(float*)(a2 - 4);
			*(float*)(v19 + 4 * v20) = (float)(v14 + v24) + v25;
			if (v6 == *(_DWORD*)a1)
				v6 = 0;
			++v7;
			*(float*)(*(_QWORD*)(a1 + 32) + 4 * v21) = (float)(v8 + v24) + v25;
			if (v7 == *(_DWORD*)(a1 + 24))
				v7 = 0;
			++v11;
			*(float*)(*(_QWORD*)(a1 + 56) + 4 * v22) = (float)(v9 + v24) + v25;
			result = *(_QWORD*)(a1 + 80);
			if (v11 == *(_DWORD*)(a1 + 48))
				v11 = 0;
			*(float*)(result + 4i64 * v12++) = (float)(v10 + v24) + v25;
			if (v12 == *(_DWORD*)(a1 + 72))
				v12 = 0;
			--v18;
		} while (v18);
	}
	*(float*)(a1 + 96) = v10;
	*(float*)(a1 + 108) = v14;
	*(float*)(a1 + 120) = v8;
	*(_DWORD*)(a1 + 16) = v6;
	*(_DWORD*)(a1 + 88) = v12;
	*(_DWORD*)(a1 + 40) = v7;
	*(_DWORD*)(a1 + 64) = v11;
	*(float*)(a1 + 132) = v9;
	return result;
}

