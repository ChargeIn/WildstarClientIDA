//----- (00000001405B3CF0) ----------------------------------------------------
__int64 __fastcall sub_1405B3CF0(__int64 a1, unsigned int a2)
{
	unsigned int v3; // edi
	__m128 v4; // xmm6
	int* v5; // rax
	int* v6; // rsi
	unsigned int v7; // eax
	unsigned int v8; // eax
	int v9; // eax
	int v10; // eax
	unsigned int v11; // edx
	unsigned int v12; // r8d
	unsigned int v13; // edx
	int v14; // ebx
	int v15; // eax
	int v17; // [rsp+30h] [rbp-48h] BYREF
	__int64 v18; // [rsp+34h] [rbp-44h]
	int* v19; // [rsp+40h] [rbp-38h]
	unsigned int v20; // [rsp+80h] [rbp+8h] BYREF
	__int16 v21; // [rsp+84h] [rbp+Ch]
	unsigned int v22; // [rsp+88h] [rbp+10h] BYREF

	v22 = a2;
	v3 = 0;
	v4 = *(__m128*)(a1 + 3936);
	v18 = 8i64;
	v5 = sub_14018C320(0i64, 0x240ui64, 8u);
	*v5 = 2;
	v6 = v5;
	v19 = v5;
	v5[2] = v4.m128_i32[0];
	v5[3] = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
	*((_QWORD*)v5 + 2) = _mm_shuffle_ps(v4, v4, 170).m128_u32[0];
	sub_1401C9800(&v20, (__m128i*)(a1 + 4080));
	v7 = v20;
	v6[18] = 8;
	v6[20] = v7;
	*((_WORD*)v6 + 42) = v21;
	v6[22] = 0;
	sub_1401C9800(&v20, (__m128i*)(a1 + 4144));
	v8 = v20;
	v6[36] = 11;
	v6[38] = v8;
	*((_WORD*)v6 + 78) = v21;
	v6[40] = 0;
	v9 = *(_DWORD*)(a1 + 4208);
	v6[54] = 24;
	v6[56] = v9;
	v10 = *(_DWORD*)(a1 + 4232);
	v6[72] = 27;
	v6[74] = v10;
	v6[90] = 14;
	v6[92] = *(_DWORD*)(a1 + 4256);
	v6[93] = *(_DWORD*)(a1 + 4260);
	*((_QWORD*)v6 + 47) = *(unsigned int*)(a1 + 4264);
	v20 = *(_DWORD*)(a1 + 4320);
	v11 = v20 & 0x7FFFFFFF;
	v12 = HIWORD(v20) & 0x8000;
	if ((v20 & 0x7FFFFFFF) >= 0x33800000)
	{
		if (v11 > 0x387FEFFF)
		{
			if (v11 > 0x47FFEFFF)
				LOWORD(v13) = 17407;
			else
				v13 = (v11 - 939520000) >> 13;
		}
		else
		{
			v13 = (((v20 & 0x7FFFFF | 0x800000) >> (113 - (v11 >> 23))) + 4096) >> 13;
		}
	}
	else
	{
		LOWORD(v13) = 0;
	}
	v6[108] = 22;
	v17 = 7;
	*((_WORD*)v6 + 220) = v12 | v13;
	v6[111] = 0;
	v14 = 0;
	while (1)
	{
		v15 = sub_1405B4AB0(a1, &v22, (unsigned int*)&v6[18 * v14], 0i64, 0i64);
		if (v15 < 0)
			break;
		if ((unsigned int)++v14 >= 7)
			goto LABEL_13;
	}
	v3 = v15;
LABEL_13:
	sub_14079A4F0((__int64)&v17);
	sub_14018B900((__int64)v19, 0);
	return v3;
}

