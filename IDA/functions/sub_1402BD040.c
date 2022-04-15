//----- (00000001402BD040) ----------------------------------------------------
__int64 __fastcall sub_1402BD040(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 result; // rax
	__int64 v9; // rbx
	_BYTE* v10; // rdx
	__int64 v11; // r8
	__int16* v12; // rcx
	int v13; // eax
	int v14; // eax
	__int16* v15; // rcx
	__int64 v16; // rdx
	__int16 v17; // ax
	__int16 v18; // ax
	__int16* v19; // rcx
	__int64 v20; // rdx
	__int16 v21; // ax
	__int16 v22; // ax
	_BYTE* v23; // rcx
	__int16* v24; // rdx
	int v25; // eax
	int v26; // eax
	__int64 v27; // rcx
	__m128i v28[8]; // [rsp+20h] [rbp-E0h] BYREF
	_WORD v29[64]; // [rsp+A0h] [rbp-60h] BYREF
	__m128i v30[8]; // [rsp+120h] [rbp+20h] BYREF

	result = sub_1402C0070(a2, v29, 0i64, 0);
	if ((int)result >= 0)
	{
		sub_1402BCA70((__int64)v30, a4, (__int64)v29);
		sub_1402BD690(v28, v30);
		v9 = 32i64;
		v10 = (_BYTE*)(a1 + 1);
		v11 = 32i64;
		v12 = &v28[0].m128i_i16[1];
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
		result = sub_1402C0070(a2, v29, 1i64, 1);
		if ((int)result >= 0)
		{
			sub_1402BCA70((__int64)v30, a4 + 256, (__int64)v29);
			sub_1402BD690(v28, v30);
			v15 = (__int16*)(a1 + 66);
			v16 = 32i64;
			do
			{
				v17 = *(__int16*)((char*)v15 + (_QWORD)v28 - a1 - 66);
				if (v17 >= -256)
				{
					if (v17 > 255)
						v17 = 255;
				}
				else
				{
					v17 = -256;
				}
				*(v15 - 1) = v17;
				v18 = *(__int16*)((char*)v15 + (_QWORD)&v28[-4] - a1);
				if (v18 >= -256)
				{
					if (v18 > 255)
						v18 = 255;
				}
				else
				{
					v18 = -256;
				}
				*v15 = v18;
				v15 += 2;
				--v16;
			} while (v16);
			result = sub_1402C0070(a2, v29, 2i64, 1);
			if ((int)result >= 0)
			{
				sub_1402BCA70((__int64)v30, a4 + 512, (__int64)v29);
				sub_1402BD690(v28, v30);
				v19 = (__int16*)(a1 + 194);
				v20 = 32i64;
				do
				{
					v21 = *(_WORD*)((char*)&v28[-12] + (_QWORD)v19 - a1 - 2);
					if (v21 >= -256)
					{
						if (v21 > 255)
							v21 = 255;
					}
					else
					{
						v21 = -256;
					}
					*(v19 - 1) = v21;
					v22 = *(__int16*)((char*)v28[-12].m128i_i16 + (_QWORD)v19 - a1);
					if (v22 >= -256)
					{
						if (v22 > 255)
							v22 = 255;
					}
					else
					{
						v22 = -256;
					}
					*v19 = v22;
					v19 += 2;
					--v20;
				} while (v20);
				if (*(_BYTE*)(a3 + 50))
				{
					v27 = a1 + 321;
					do
					{
						v27 += 2i64;
						*(_BYTE*)(v27 - 3) = *(_BYTE*)(a3 + 51);
						*(_BYTE*)(v27 - 2) = *(_BYTE*)(a3 + 51);
						--v9;
					} while (v9);
				}
				else
				{
					result = sub_1402C0070(a2, v29, 3i64, 2);
					if ((int)result < 0)
						return result;
					sub_1402BCA70((__int64)v30, a4 + 768, (__int64)v29);
					sub_1402BD690(v28, v30);
					v23 = (_BYTE*)(a1 + 321);
					v24 = &v28[0].m128i_i16[1];
					do
					{
						v25 = *(v24 - 1) + 128;
						if (v25 >= 0)
						{
							if (v25 > 255)
								LOBYTE(v25) = -1;
						}
						else
						{
							LOBYTE(v25) = 0;
						}
						*(v23 - 1) = v25;
						v26 = *v24 + 128;
						if (v26 >= 0)
						{
							if (v26 > 255)
								LOBYTE(v26) = -1;
						}
						else
						{
							LOBYTE(v26) = 0;
						}
						*v23 = v26;
						v23 += 2;
						v24 += 2;
						--v9;
					} while (v9);
				}
				return 0i64;
			}
		}
	}
	return result;
}
// 1402BD040: using guessed type _WORD var_140[64];
// 1402BD040: using guessed type __m128i var_C0[8];

