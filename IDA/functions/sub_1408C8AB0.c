//----- (00000001408C8AB0) ----------------------------------------------------
__int64 __fastcall sub_1408C8AB0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 result; // rax
	unsigned int v6; // ebx
	unsigned int i; // ecx
	__int64 v8; // rax
	int v9; // r8d
	__m128 v10; // xmm0
	__int64 v11; // rsi
	__int64 v12; // r8
	__int64 v13; // r9
	unsigned int v14; // r10d
	int* v15; // r11
	char* v16; // rdx
	__int64 v17; // rbp
	int v18; // eax
	__int64 v19; // rax
	int v20; // ecx
	int v21; // ecx
	__int64 v22; // rcx
	__int64 v23; // rdx
	float v24; // xmm1_4
	float v25; // xmm0_4
	int j; // esi
	__int64 v27; // r14
	int v28[32]; // [rsp+30h] [rbp-398h] BYREF
	int v29[64]; // [rsp+B0h] [rbp-318h] BYREF
	char v30[264]; // [rsp+1B0h] [rbp-218h] BYREF
	char v31; // [rsp+2B8h] [rbp-110h] BYREF

	v4 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 168i64 * *(unsigned int*)(a1 + 288));
	*(_QWORD*)(a1 + 304) = v4;
	if (!v4)
		return 52i64;
	v6 = 0;
	for (i = 0; i < *(_DWORD*)(a1 + 288); ++i)
	{
		v8 = *(_QWORD*)(a1 + 304) + 168i64 * i;
		if (v8)
		{
			*(_DWORD*)v8 = 0;
			*(_QWORD*)(v8 + 8) = 0i64;
			*(_DWORD*)(v8 + 16) = 0;
			*(_DWORD*)(v8 + 24) = 0;
			*(_QWORD*)(v8 + 32) = 0i64;
			*(_DWORD*)(v8 + 40) = 0;
			*(_DWORD*)(v8 + 48) = 0;
			*(_QWORD*)(v8 + 56) = 0i64;
			*(_DWORD*)(v8 + 64) = 0;
			*(_DWORD*)(v8 + 72) = 0;
			*(_QWORD*)(v8 + 80) = 0i64;
			*(_DWORD*)(v8 + 88) = 0;
			*(_QWORD*)(v8 + 96) = 0i64;
			*(_QWORD*)(v8 + 104) = 0i64;
			*(_QWORD*)(v8 + 112) = 0i64;
			*(_QWORD*)(v8 + 120) = 0i64;
			*(_QWORD*)(v8 + 128) = 0i64;
			*(_QWORD*)(v8 + 136) = 0i64;
			*(_DWORD*)(v8 + 144) = 0;
			*(_QWORD*)(v8 + 152) = 0i64;
			*(_DWORD*)(v8 + 160) = 0;
		}
	}
	v9 = *(_DWORD*)(a1 + 288);
	*(_DWORD*)(a1 + 284) = 1065353216;
	if ((unsigned int)v9 > 1)
	{
		v10 = 0i64;
		v10.m128_f32[0] = (float)v9;
		*(float*)(a1 + 284) = 1.0 / _mm_sqrt_ps(v10).m128_f32[0];
	}
	sub_1408C7BF0(
		*(float*)(*(_QWORD*)(a1 + 328) + 108i64),
		*(float*)(*(_QWORD*)(a1 + 328) + 112i64),
		4 * v9,
		(float*)(*(_QWORD*)(a1 + 328) + 156i64),
		(unsigned __int64)v30);
	sub_1408C8350((__int64)v30, *(_DWORD*)(a1 + 292), 4 * *(_DWORD*)(a1 + 288), v29);
	v11 = *(unsigned int*)(a1 + 288);
	if ((_DWORD)v11)
	{
		v12 = (unsigned int)(3 * v11);
		v13 = (unsigned int)(2 * v11);
		v14 = *(_DWORD*)(a1 + 288);
		v15 = v29;
		v16 = &v31;
		v17 = (unsigned int)v11;
		do
		{
			v18 = *v15;
			v16 += 16;
			++v15;
			*((_DWORD*)v16 - 6) = v18;
			v19 = v14++;
			*((_DWORD*)v16 - 5) = v29[v19];
			v20 = v29[v13];
			v13 = (unsigned int)(v13 + 1);
			*((_DWORD*)v16 - 4) = v20;
			v21 = v29[v12];
			v12 = (unsigned int)(v12 + 1);
			*((_DWORD*)v16 - 3) = v21;
			--v17;
		} while (v17);
	}
	sub_1408C7EE0(v11, *(_QWORD*)(a1 + 328) + 156i64, (__int64)v28);
	if ((_DWORD)v11)
	{
		v22 = 0i64;
		v23 = v11;
		v24 = (float)*(int*)(a1 + 292);
		do
		{
			v25 = *(float*)&v28[v22++];
			v28[v22 + 15] = (int)(float)((float)(v25 * 0.001) * v24);
			--v23;
		} while (v23);
	}
	if (!(_DWORD)v11)
		return 1i64;
	for (j = 0; ; j += 4)
	{
		v27 = 168i64 * v6;
		result = sub_1408CAD10(
			v27 + *(_QWORD*)(a1 + 304),
			a2,
			(__int64)&v30[4 * j + 256],
			*(float*)(*(_QWORD*)(a1 + 328) + 8i64),
			*(float*)(*(_QWORD*)(a1 + 328) + 12i64),
			*(_DWORD*)(a1 + 292));
		if ((_DWORD)result != 1)
			break;
		result = sub_1408CAA70(v27 + *(_QWORD*)(a1 + 304) + 144i64, a2, v28[v6 + 16]);
		if ((_DWORD)result != 1)
			break;
		if (++v6 >= *(_DWORD*)(a1 + 288))
			return 1i64;
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 1408C8AB0: using guessed type int var_318[64];

