//----- (0000000140308160) ----------------------------------------------------
unsigned __int64 __fastcall sub_140308160(__int64 a1, char* a2, __int64 a3)
{
	__int64 v6; // rdi
	__int64 v7; // r15
	unsigned __int64 result; // rax
	float* v9; // rbp
	unsigned int v10; // edx
	__m128 v11; // xmm3
	__m128 v12; // xmm3
	__m128 v13; // [rsp+30h] [rbp-58h]
	__m128 v14; // [rsp+40h] [rbp-48h]
	int v15; // [rsp+90h] [rbp+8h] BYREF
	unsigned int v16; // [rsp+A8h] [rbp+20h]

	if (*(_DWORD*)a1 <= 1u)
	{
		if (*(_DWORD*)a1)
		{
			result = *(_QWORD*)(a1 + 16);
			*(_DWORD*)a2 = *(_DWORD*)result;
		}
		else
		{
			result = 0i64;
			*(_DWORD*)a2 = 0;
		}
	}
	else
	{
		v6 = (unsigned int)(*(_DWORD*)(a3 + 104) - 1);
		v7 = 4 * v6;
		result = sub_14030A000(a1, *(_DWORD*)(a3 + 24 * v6 + 8), a2);
		if ((_DWORD)v6)
		{
			v9 = (float*)(a3 + 24 * v6 + 12);
			do
			{
				v10 = *((_DWORD*)v9 - 7);
				v9 -= 6;
				v7 -= 4i64;
				sub_14030A000(a1, v10, &v15);
				v11 = (__m128)0x3F800000u;
				v11.m128_f32[0] = 1.0 - *v9;
				v14.m128_f32[0] = (float)*a2;
				v14.m128_f32[1] = (float)a2[1];
				v14.m128_f32[2] = (float)a2[2];
				v14.m128_f32[3] = (float)a2[3];
				v13.m128_f32[0] = (float)(char)v15;
				v13.m128_f32[1] = (float)SBYTE1(v15);
				v13.m128_f32[2] = (float)SBYTE2(v15);
				v13.m128_f32[3] = (float)SHIBYTE(v15);
				v12 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), _mm_sub_ps(v14, v13)), v13);
				LOBYTE(v16) = (int)v12.m128_f32[0];
				BYTE1(v16) = (int)_mm_shuffle_ps(v12, v12, 85).m128_f32[0];
				BYTE2(v16) = (int)_mm_shuffle_ps(v12, v12, 170).m128_f32[0];
				HIBYTE(v16) = (int)_mm_shuffle_ps(v12, v12, 255).m128_f32[0];
				result = v16;
				*(_DWORD*)a2 = v16;
				LODWORD(v6) = v6 - 1;
			} while ((_DWORD)v6);
		}
	}
	return result;
}

