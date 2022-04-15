//----- (0000000140334900) ----------------------------------------------------
unsigned __int64 __fastcall sub_140334900(__int64 a1, unsigned __int64 a2, __int64 a3)
{
	unsigned __int64 result; // rax
	unsigned int v7; // eax
	unsigned __int64 v8; // r9
	unsigned __int64 v9; // r10
	int v10; // r11d
	char v11; // cl
	unsigned int v12; // ecx
	unsigned __int64* v13; // r10
	const __m128i* v14; // rax
	unsigned int v15; // r9d
	unsigned int v16; // r8d
	__int64 v17; // rbx
	unsigned __int64 v18; // rdx
	unsigned int v19; // r8d
	__m128i v20; // xmm1
	__m128i v21; // xmm0
	__m128i v22; // xmm0
	__int64 v23; // r8

	result = *(unsigned int*)(a1 + 20);
	if (a2 >= result)
	{
		v7 = 32;
		v8 = a2;
		v9 = 0xFFFFFFFFi64;
		v10 = 1;
		v11 = 32;
		do
		{
			if (v8 > v9)
			{
				v10 += v7;
				v8 >>= v11;
			}
			v7 >>= 1;
			v11 = v7;
			v9 >>= v7;
		} while (v7);
		v12 = v10 - *(unsigned __int8*)(a1 + 16);
		v13 = (unsigned __int64*)(a1 + 24);
		if (v12 > 7)
			LOBYTE(v12) = 7;
		v14 = (const __m128i*)(a1 + 24);
		v15 = 1 << v12;
		v16 = 1 << (7 - v12);
		if (v16)
		{
			v17 = v16;
			do
			{
				v18 = 0i64;
				v19 = 0;
				if (v15)
				{
					if (v15 >= 2)
					{
						v20 = 0i64;
						do
						{
							v21 = _mm_loadu_si128(v14);
							v19 += 2;
							*v14++ = 0i64;
							v22 = _mm_add_epi64(v21, v20);
							v20 = v22;
						} while (v19 < (1 << v12) - ((1 << v12) & 1u));
						v18 = _mm_add_epi64(v22, _mm_srli_si128(v22, 8)).m128i_u64[0];
					}
					if (v19 < v15)
					{
						v23 = v15 - v19;
						do
						{
							v18 += v14->m128i_i64[0];
							v14->m128i_i64[0] = 0i64;
							v14 = (const __m128i*)((char*)v14 + 8);
							--v23;
						} while (v23);
					}
				}
				*v13++ = v18;
				--v17;
			} while (v17);
		}
		*(_BYTE*)(a1 + 16) = v10;
		result = (unsigned int)(1 << v10);
		*(_DWORD*)(a1 + 20) = result;
		*(_BYTE*)(a1 + 8) = v10 - 7;
		*(_DWORD*)(a1 + 12) = 1 << (v10 - 7);
	}
	*(_QWORD*)(a1 + 8 * (a2 >> *(_BYTE*)(a1 + 8)) + 24) += a3;
	return result;
}

