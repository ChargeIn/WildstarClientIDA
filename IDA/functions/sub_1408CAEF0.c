//----- (00000001408CAEF0) ----------------------------------------------------
void** __fastcall sub_1408CAEF0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	void** result; // rax
	unsigned int v5; // ebx
	unsigned int v6; // edi
	unsigned int v7; // esi
	float v8; // xmm6_4
	float v9; // xmm7_4
	float v10; // xmm8_4
	unsigned int v11; // ebp
	float v14; // xmm9_4
	__int64 v16; // r12
	__int64 v17; // rcx
	__int64 v18; // rdx
	__int64 v19; // r8
	__int64 v20; // r9
	__int64 v21; // r10
	float v22; // xmm2_4
	float v23; // xmm0_4
	void* retaddr; // [rsp+78h] [rbp+0h] BYREF

	result = &retaddr;
	v5 = *(_DWORD*)(a1 + 16);
	v6 = *(_DWORD*)(a1 + 40);
	v7 = *(_DWORD*)(a1 + 64);
	v8 = *(float*)(a1 + 96);
	v9 = *(float*)(a1 + 108);
	v10 = *(float*)(a1 + 120);
	v11 = *(_DWORD*)(a1 + 88);
	v14 = *(float*)(a1 + 132);
	if (a4)
	{
		v16 = a4;
		do
		{
			v17 = *(_QWORD*)(a1 + 8);
			v18 = v5;
			v19 = v6;
			v20 = v7;
			++v5;
			v21 = v11;
			a3 += 4i64;
			a2 += 4i64;
			v8 = (float)(*(float*)(v17 + 4 * v18) * *(float*)(a1 + 100)) - (float)(v8 * *(float*)(a1 + 104));
			v9 = (float)(*(float*)(*(_QWORD*)(a1 + 32) + 4i64 * v6) * *(float*)(a1 + 112))
				- (float)(v9 * *(float*)(a1 + 116));
			v10 = (float)(*(float*)(*(_QWORD*)(a1 + 56) + 4i64 * v7) * *(float*)(a1 + 124))
				- (float)(v10 * *(float*)(a1 + 128));
			v14 = (float)(*(float*)(*(_QWORD*)(a1 + 80) + 4i64 * v11) * *(float*)(a1 + 136))
				- (float)(v14 * *(float*)(a1 + 140));
			v22 = (float)((float)((float)(v9 + v8) + v10) + v14) * -0.5;
			*(float*)(a3 - 4) = (float)((float)((float)(v8 - v9) + v10) - v14) + *(float*)(a3 - 4);
			v23 = *(float*)(a2 - 4);
			*(float*)(v17 + 4 * v18) = (float)(v9 + v22) + v23;
			if (v5 == *(_DWORD*)a1)
				v5 = 0;
			++v6;
			*(float*)(*(_QWORD*)(a1 + 32) + 4 * v19) = (float)(v10 + v22) + v23;
			if (v6 == *(_DWORD*)(a1 + 24))
				v6 = 0;
			++v7;
			*(float*)(*(_QWORD*)(a1 + 56) + 4 * v20) = (float)(v14 + v22) + v23;
			result = *(void***)(a1 + 80);
			if (v7 == *(_DWORD*)(a1 + 48))
				v7 = 0;
			++v11;
			*((float*)result + v21) = (float)(v8 + v22) + v23;
			if (v11 == *(_DWORD*)(a1 + 72))
				v11 = 0;
			--v16;
		} while (v16);
	}
	*(float*)(a1 + 96) = v8;
	*(float*)(a1 + 108) = v9;
	*(_DWORD*)(a1 + 16) = v5;
	*(float*)(a1 + 120) = v10;
	*(float*)(a1 + 132) = v14;
	*(_DWORD*)(a1 + 40) = v6;
	*(_DWORD*)(a1 + 64) = v7;
	*(_DWORD*)(a1 + 88) = v11;
	return result;
}

