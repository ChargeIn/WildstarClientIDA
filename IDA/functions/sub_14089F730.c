//----- (000000014089F730) ----------------------------------------------------
__int64 __fastcall sub_14089F730(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5)
{
	float v5; // xmm2_4
	unsigned int v8; // ebx
	int v9; // xmm8_4
	float v10; // xmm9_4
	int i; // ecx
	double v12; // xmm6_8
	int v13; // eax
	float v14; // xmm7_4
	float v15; // xmm0_4
	__int64 v16; // rax
	__int64 result; // rax
	double v18; // xmm0_8
	int v19; // [rsp+34h] [rbp-54h]

	*(_QWORD*)(a1 + 8) = a4;
	v5 = *(float*)(a4 + 16);
	v8 = 0;
	v9 = *(_DWORD*)(a4 + 24);
	v10 = *(float*)(a4 + 20);
	v19 = *(_DWORD*)(a4 + 28);
	*(_BYTE*)(a1 + 72) = v19;
	for (i = a5[1] & 0x3FFFF; i; i &= i - 1)
		++v8;
	HIDWORD(v12) = 0;
	*(_DWORD*)(a1 + 28) = v8;
	v13 = *a5;
	*(float*)(a1 + 56) = v5;
	*(_DWORD*)(a1 + 32) = v13;
	v14 = (float)v13;
	v15 = sub_1408FC7F0(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(-2.2 / (float)((float)v13 * v5))));
	*(float*)(a1 + 64) = v10;
	*(float*)&v12 = -2.2 / (float)(v14 * v10);
	*(float*)(a1 + 60) = v15;
	*(float*)(a1 + 68) = sub_1408FC7F0(v12);
	if (!BYTE1(v19) || v8 == 1)
	{
		*(_QWORD*)(a1 + 16) = sub_14089FA30;
	}
	else
	{
		*(_QWORD*)(a1 + 16) = sub_1408A0480;
		if ((a5[1] & 8) != 0 && !(_BYTE)v19)
			--v8;
	}
	if (BYTE1(v19))
		v8 = 1;
	*(_DWORD*)(a1 + 36) = v8;
	v16 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 8i64 * v8);
	*(_QWORD*)(a1 + 48) = v16;
	if (!v16)
		return 52i64;
	HIDWORD(v18) = 0;
	*(float*)&v18 = -1.0 / (float)((float)*(int*)(a1 + 32) * 0.023220001);
	*(float*)&v18 = sub_1408FC7F0(v18);
	*(_DWORD*)(a1 + 24) = v9;
	result = 1i64;
	*(_DWORD*)(a1 + 40) = LODWORD(v18);
	return result;
}

