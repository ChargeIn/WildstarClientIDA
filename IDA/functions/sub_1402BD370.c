//----- (00000001402BD370) ----------------------------------------------------
__int64 __fastcall sub_1402BD370(_BYTE* a1, __int64 a2, _BYTE* a3, __int64 a4)
{
	__int64 result; // rax
	__int64 v9; // rbx
	_BYTE* v10; // rdx
	__int64 v11; // r8
	__int16* v12; // rcx
	int v13; // eax
	int v14; // eax
	_BYTE* v15; // rdx
	__int16* v16; // rcx
	__int64 v17; // r8
	int v18; // eax
	int v19; // eax
	_BYTE* v20; // rdx
	__int16* v21; // rcx
	__int64 v22; // r8
	int v23; // eax
	int v24; // eax
	_BYTE* v25; // rdx
	__int64 v26; // r10
	_BYTE* v27; // rcx
	__int16* v28; // rdx
	int v29; // eax
	int v30; // eax
	_BYTE* v31; // rcx
	__m128i v32[8]; // [rsp+20h] [rbp-E0h] BYREF
	_WORD v33[64]; // [rsp+A0h] [rbp-60h] BYREF
	__m128i v34[8]; // [rsp+120h] [rbp+20h] BYREF

	result = sub_1402C0070(a2, v33, 0i64, 3);
	if ((int)result >= 0)
	{
		sub_1402BCA70((__int64)v34, a4, (__int64)v33);
		sub_1402BD690(v32, v34);
		v9 = 32i64;
		v10 = a1 + 1;
		v11 = 32i64;
		v12 = &v32[0].m128i_i16[1];
		do
		{
			v13 = *(v12 - 1) + 128;
			if (v13 >= 0)
			{
				if (v13 > 255)
					LOBYTE(v13) = -1;
			}
			else
			{
				LOBYTE(v13) = 0;
			}
			*(v10 - 1) = v13;
			v14 = *v12 + 128;
			if (v14 >= 0)
			{
				if (v14 > 255)
					LOBYTE(v14) = -1;
			}
			else
			{
				LOBYTE(v14) = 0;
			}
			*v10 = v14;
			v10 += 2;
			v12 += 2;
			--v11;
		} while (v11);
		result = sub_1402C0070(a2, v33, 1i64, 3);
		if ((int)result >= 0)
		{
			sub_1402BCA70((__int64)v34, a4 + 256, (__int64)v33);
			sub_1402BD690(v32, v34);
			v15 = a1 + 65;
			v16 = &v32[0].m128i_i16[1];
			v17 = 32i64;
			do
			{
				v18 = *(v16 - 1) + 128;
				if (v18 >= 0)
				{
					if (v18 > 255)
						LOBYTE(v18) = -1;
				}
				else
				{
					LOBYTE(v18) = 0;
				}
				*(v15 - 1) = v18;
				v19 = *v16 + 128;
				if (v19 >= 0)
				{
					if (v19 > 255)
						LOBYTE(v19) = -1;
				}
				else
				{
					LOBYTE(v19) = 0;
				}
				*v15 = v19;
				v15 += 2;
				v16 += 2;
				--v17;
			} while (v17);
			if (a3[47])
			{
				v25 = a1 + 129;
				v26 = 32i64;
				do
				{
					v25 += 2;
					*(v25 - 3) = a3[48];
					*(v25 - 2) = a3[48];
					--v26;
				} while (v26);
			}
			else
			{
				result = sub_1402C0070(a2, v33, 2i64, 2);
				if ((int)result < 0)
					return result;
				sub_1402BCA70((__int64)v34, a4 + 512, (__int64)v33);
				sub_1402BD690(v32, v34);
				v20 = a1 + 129;
				v21 = &v32[0].m128i_i16[1];
				v22 = 32i64;
				do
				{
					v23 = *(v21 - 1) + 128;
					if (v23 >= 0)
					{
						if (v23 > 255)
							LOBYTE(v23) = -1;
					}
					else
					{
						LOBYTE(v23) = 0;
					}
					*(v20 - 1) = v23;
					v24 = *v21 + 128;
					if (v24 >= 0)
					{
						if (v24 > 255)
							LOBYTE(v24) = -1;
					}
					else
					{
						LOBYTE(v24) = 0;
					}
					*v20 = v24;
					v20 += 2;
					v21 += 2;
					--v22;
				} while (v22);
			}
			if (a3[50])
			{
				v31 = a1 + 193;
				do
				{
					v31 += 2;
					*(v31 - 3) = a3[51];
					*(v31 - 2) = a3[51];
					--v9;
				} while (v9);
			}
			else
			{
				result = sub_1402C0070(a2, v33, 3i64, 2);
				if ((int)result < 0)
					return result;
				sub_1402BCA70((__int64)v34, a4 + 768, (__int64)v33);
				sub_1402BD690(v32, v34);
				v27 = a1 + 193;
				v28 = &v32[0].m128i_i16[1];
				do
				{
					v29 = *(v28 - 1) + 128;
					if (v29 >= 0)
					{
						if (v29 > 255)
							LOBYTE(v29) = -1;
					}
					else
					{
						LOBYTE(v29) = 0;
					}
					*(v27 - 1) = v29;
					v30 = *v28 + 128;
					if (v30 >= 0)
					{
						if (v30 > 255)
							LOBYTE(v30) = -1;
					}
					else
					{
						LOBYTE(v30) = 0;
					}
					*v27 = v30;
					v27 += 2;
					v28 += 2;
					--v9;
				} while (v9);
			}
			return 0i64;
		}
	}
	return result;
}
// 1402BD370: using guessed type _WORD var_140[64];
// 1402BD370: using guessed type __m128i var_C0[8];

