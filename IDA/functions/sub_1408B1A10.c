//----- (00000001408B1A10) ----------------------------------------------------
__int64 __fastcall sub_1408B1A10(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	float v3; // xmm11_4
	float v4; // xmm12_4
	float v5; // xmm8_4
	float v6; // xmm7_4
	__int64 result; // rax
	__int64 v8; // [rsp+80h] [rbp+8h]
	__int64 v9; // [rsp+90h] [rbp+18h]

	v2 = *(_QWORD*)(a2 + 72);
	v3 = *(float*)(v2 + 6148);
	v4 = *(float*)(v2 + 2052);
	v5 = COERCE_FLOAT(*(_QWORD*)a1);
	LODWORD(v6) = HIDWORD(*(_QWORD*)a1);
	v8 = *(_QWORD*)(a1 + 8);
	v9 = *(_QWORD*)(a1 + 16);
	result = *(_QWORD*)(a1 + 24);
	*(float*)a1 = (float)((float)(*(float*)&v8 + v5) + *(float*)&v9) + *(float*)&result;
	*(float*)(a1 + 4) = (float)((float)(*((float*)&v8 + 1) + v6) + *((float*)&v9 + 1)) + *((float*)&result + 1);
	*(float*)(a1 + 8) = (float)((float)(v5 - (float)(*((float*)&v8 + 1) * v4)) - *(float*)&v9)
		- (float)(*((float*)&result + 1) * v3);
	*(float*)(a1 + 12) = (float)((float)((float)(*(float*)&v8 * v4) + v6) - *((float*)&v9 + 1))
		+ (float)(*(float*)&result * v3);
	*(float*)(a1 + 20) = (float)((float)(v6 - *((float*)&v8 + 1)) + *((float*)&v9 + 1)) - *((float*)&result + 1);
	*(float*)(a1 + 24) = (float)((float)(v5 - (float)(*((float*)&v8 + 1) * v3)) - *(float*)&v9)
		- (float)(*((float*)&result + 1) * v4);
	*(float*)(a1 + 16) = (float)((float)(v5 - *(float*)&v8) + *(float*)&v9) - *(float*)&result;
	*(float*)(a1 + 28) = (float)((float)((float)(*(float*)&v8 * v3) + v6) - *((float*)&v9 + 1))
		+ (float)(*(float*)&result * v4);
	return result;
}

