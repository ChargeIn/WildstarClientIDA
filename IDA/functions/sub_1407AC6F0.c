//----- (00000001407AC6F0) ----------------------------------------------------
__int64 __fastcall sub_1407AC6F0(__m128* a1, unsigned int a2, __int64 a3, HRAWINPUT a4)
{
	unsigned int v4; // r14d
	int v7; // edi
	int v8; // r15d
	unsigned __int64 v9; // rax
	unsigned int v10; // r10d
	__int32 v11; // eax
	__int32 v12; // eax
	unsigned int v13; // r10d
	unsigned int v14; // r10d
	__int32 v15; // eax
	unsigned __int64 v16; // rax
	unsigned int v17; // edx
	unsigned int v18; // edx
	int v19; // eax
	__int64 v20; // rbp
	unsigned int v21; // eax
	__int64 v22; // rbp
	unsigned int v24; // [rsp+30h] [rbp-78h]
	unsigned int v25; // [rsp+34h] [rbp-74h]
	unsigned int pcbSize; // [rsp+38h] [rbp-70h] BYREF
	int pData[6]; // [rsp+40h] [rbp-68h] BYREF
	char v28; // [rsp+58h] [rbp-50h]
	unsigned int v29; // [rsp+64h] [rbp-44h]
	unsigned int v30; // [rsp+68h] [rbp-40h]

	v4 = 0;
	v7 = 0;
	if (a2 > 0x200)
	{
		switch (a2)
		{
		case 0x201u:
		case 0x203u:
			if ((unsigned int)sub_1407AAF60((__int64)a1, 0, 1))
				v7 = 1;
			break;
		case 0x202u:
			v17 = 0;
			goto LABEL_62;
		case 0x204u:
		case 0x206u:
			if ((unsigned int)sub_1407AAF60((__int64)a1, 1u, 1))
				v7 = 1;
			break;
		case 0x205u:
			if ((unsigned int)sub_1407AB3A0(a1, 1u))
				v7 = 1;
			break;
		case 0x207u:
		case 0x209u:
			if ((unsigned int)sub_1407AAF60((__int64)a1, 2u, 1))
				v7 = 1;
			break;
		case 0x208u:
			v17 = 2;
			goto LABEL_62;
		case 0x20Au:
			if (SWORD1(a3) <= 0)
			{
				v21 = 1;
				if ((int)(((unsigned int)(((unsigned __int64)(2004318071i64 * SWORD1(a3)) >> 32) - SWORD1(a3)) >> 31)
					+ ((int)(((unsigned __int64)(2004318071i64 * SWORD1(a3)) >> 32) - SWORD1(a3)) >> 6)) > 1)
					v21 = ((unsigned int)(((unsigned __int64)(2004318071i64 * SWORD1(a3)) >> 32) - SWORD1(a3)) >> 31)
					+ ((int)(((unsigned __int64)(2004318071i64 * SWORD1(a3)) >> 32) - SWORD1(a3)) >> 6);
				v22 = v21;
				do
				{
					if ((unsigned int)sub_1407AAF60((__int64)a1, 6u, 0))
						v7 = 1;
					--v22;
				} while (v22);
			}
			else
			{
				v19 = 1;
				if (SWORD1(a3) / 120 > 1)
					v19 = SWORD1(a3) / 120;
				if (v19 > 0)
				{
					v20 = (unsigned int)v19;
					do
					{
						if ((unsigned int)sub_1407AAF60((__int64)a1, 5u, 0))
							v7 = 1;
						--v20;
					} while (v20);
				}
			}
			break;
		case 0x20Bu:
		case 0x20Du:
			if (WORD1(a3) == 1)
			{
				v18 = 3;
			}
			else
			{
				if (WORD1(a3) != 2)
					break;
				v18 = 4;
			}
			if ((unsigned int)sub_1407AAF60((__int64)a1, v18, 1))
				v7 = 1;
			break;
		case 0x20Cu:
			if (WORD1(a3) == 1)
			{
				v17 = 3;
			}
			else
			{
				if (WORD1(a3) != 2)
					break;
				v17 = 4;
			}
		LABEL_62:
			if ((unsigned int)sub_1407AB3A0(a1, v17))
				v7 = 1;
			break;
		default:
			break;
		}
	}
	else if (a2 == 512)
	{
		a1[27260].m128_i32[0] = (__int16)a4;
		a1[27260].m128_i32[1] = SWORD1(a4);
	}
	else
	{
		switch (a2)
		{
		case 0x1Cu:
			v8 = (*(__int64 (**)(void))(a1->m128_u64[0] + 184))();
			if (a3)
			{
				a1[6].m128_i32[0] = 0;
				a1[5].m128_i32[2] = 1;
			}
			else
			{
				v9 = a1->m128_u64[0];
				a1[5].m128_i32[2] = 0;
				(*(void(__fastcall**)(__m128*, _QWORD))(v9 + 120))(a1, 0i64);
			}
			if (v8 != (*(unsigned int(__fastcall**)(__m128*))(a1->m128_u64[0] + 184))(a1))
				sub_1407AC000((__int64)a1);
			break;
		case 0x7Eu:
			(*(void(__fastcall**)(__m128*, _QWORD, _QWORD))(a1->m128_u64[0] + 40))(a1, (unsigned __int16)a4, WORD1(a4));
			break;
		case 0xFFu:
			pcbSize = 48;
			if (GetRawInputData(a4, 0x10000003u, pData, &pcbSize, 0x18u) != -1 && !pData[0])
			{
				v24 = v29;
				v25 = v30;
				v16 = a1->m128_u64[0];
				if ((v28 & 1) != 0)
				{
					if ((*(unsigned int(__fastcall**)(__m128*))(v16 + 184))(a1))
						a1[27262] = _mm_add_ps(
							a1[27262],
							_mm_mul_ps(
								a1[27270],
								_mm_cvtepi32_ps(
									_mm_unpacklo_epi32(
										_mm_unpacklo_epi32(
											_mm_cvtsi32_si128(v24 - a1[27260].m128_i32[2]),
											_mm_cvtsi32_si128(0)),
										_mm_unpacklo_epi32(
											_mm_cvtsi32_si128(v25 - a1[27260].m128_i32[3]),
											_mm_cvtsi32_si128(0))))));
					a1[27260].m128_i32[2] = v24;
					a1[27260].m128_i32[3] = v25;
				}
				else if ((*(unsigned int(__fastcall**)(__m128*))(v16 + 184))(a1))
				{
					a1[27262] = _mm_add_ps(
						a1[27262],
						_mm_mul_ps(
							_mm_shuffle_ps((__m128)a1[27271].m128_u32[0], (__m128)a1[27271].m128_u32[0], 0),
							_mm_cvtepi32_ps(
								_mm_unpacklo_epi32(
									_mm_unpacklo_epi32(_mm_cvtsi32_si128(v24), _mm_cvtsi32_si128(0)),
									_mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), _mm_cvtsi32_si128(0))))));
				}
			}
			break;
		case 0x100u:
			if (((unsigned int)a4 & 0x40000000) == 0)
			{
				v14 = ((unsigned int)a4 >> 16) & 0x1FF;
				if (v14 == 284)
					v14 = 28;
				if ((unsigned int)sub_1407AB6B0((__int64)a1, v14))
					v7 = 1;
				if (a3 == 16)
					goto LABEL_17;
				if (a3 != 17)
				{
					if (a3 == 18)
						a1[6].m128_i32[0] |= 4u;
					goto LABEL_20;
				}
				v15 = a1[6].m128_i32[1];
				a1[6].m128_i32[0] |= 2u;
				a1[6].m128_i32[0] &= v15;
				sub_1407A8190((__int64)a1);
			}
			break;
		case 0x101u:
			v13 = ((unsigned int)a4 >> 16) & 0x1FF;
			if (v13 == 284)
				v13 = 28;
			if (a3 == 16)
				goto LABEL_25;
			if (a3 == 17)
				goto LABEL_27;
			if (a3 != 18)
				goto LABEL_28;
			goto LABEL_47;
		case 0x104u:
			if (((unsigned int)a4 & 0x40000000) == 0)
			{
				v10 = ((unsigned int)a4 >> 16) & 0x1FF;
				if (v10 == 284)
					v10 = 28;
				if ((unsigned int)sub_1407AB6B0((__int64)a1, v10))
					v7 = 1;
				if (a3 == 18)
				{
					v11 = a1[6].m128_i32[1];
					a1[6].m128_i32[0] |= 4u;
					a1[6].m128_i32[0] &= v11;
					sub_1407A8190((__int64)a1);
				}
				else if (a3 == 16)
				{
				LABEL_17:
					v12 = a1[6].m128_i32[1];
					a1[6].m128_i32[0] |= 1u;
					a1[6].m128_i32[0] &= v12;
					sub_1407A8190((__int64)a1);
				}
				else
				{
					if (a3 == 17)
						a1[6].m128_i32[0] |= 2u;
				LABEL_20:
					a1[6].m128_i32[0] &= a1[6].m128_u32[1];
					sub_1407A8190((__int64)a1);
				}
			}
			break;
		case 0x105u:
			v13 = ((unsigned int)a4 >> 16) & 0x1FF;
			if (v13 == 284)
				v13 = 28;
			switch (a3)
			{
			case 18i64:
			LABEL_47:
				a1[6].m128_i32[0] &= ~4u;
				break;
			case 16i64:
			LABEL_25:
				a1[6].m128_i32[0] &= ~1u;
				break;
			case 17i64:
			LABEL_27:
				a1[6].m128_i32[0] &= ~2u;
				break;
			}
		LABEL_28:
			if ((unsigned int)sub_1407ABA80((__int64)a1, v13))
				v7 = 1;
			sub_1407A8190((__int64)a1);
			break;
		default:
			break;
		}
	}
	LOBYTE(v4) = v7 != 0;
	return v4;
}
// 1407ACC67: conditional instruction was optimized away because eax.4>=1
// 1407AC6F0: using guessed type int pData[6];

