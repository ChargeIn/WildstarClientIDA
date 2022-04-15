//----- (00000001404C19C0) ----------------------------------------------------
void __fastcall sub_1404C19C0(__m128* a1)
{
	unsigned __int64 v1; // rax
	__int32 v3; // ecx
	__int32 v4; // ecx
	__int32 v5; // ecx
	__int64 v6; // rax
	float v7; // xmm6_4
	_QWORD* v8; // rcx
	unsigned __int64* v9; // rax
	unsigned __int64 v10; // rax
	_QWORD* v11; // rcx
	unsigned __int64* v12; // rax
	unsigned __int64 v13; // rax
	__int64 v14; // rax
	__int64* v15; // rcx
	__int64 v16; // rax
	__int64 v17; // rcx
	__m256 v18; // [rsp+30h] [rbp-D0h] BYREF
	__int128 v19; // [rsp+50h] [rbp-B0h]
	__int128 v20; // [rsp+60h] [rbp-A0h]
	__m128 v21[3]; // [rsp+70h] [rbp-90h] BYREF
	float v22; // [rsp+A4h] [rbp-5Ch]
	__m128* v23; // [rsp+B0h] [rbp-50h] BYREF
	__m256* v24; // [rsp+B8h] [rbp-48h]

	v1 = a1->m128_u64[0];
	v18 = ymmword_140C78390;
	v19 = xmmword_140C783B0;
	v20 = xmmword_140C783C0;
	if ((*(unsigned int(__fastcall**)(__m128*, __m256*))(v1 + 272))(a1, &v18))
	{
		if (!a1[19].m128_i32[0]
			|| (v3 = a1[8].m128_i32[0], (unsigned int)(v3 - 1) <= 2)
			|| v3 == 4 && (unsigned int)sub_140724910((__int64)a1))
		{
			(*(void(__fastcall**)(__m128*, __m256*))(a1->m128_u64[0] + 304))(a1, &v18);
		}
		else
		{
			sub_1404C1FF0((__int64)a1, (__int64)&v18);
		}
		if (!a1[19].m128_i32[0])
			goto LABEL_15;
		v23 = a1 + 34;
		v24 = &v18;
		sub_1401AFB10(&v23, v21);
		a1[40].m128_i32[2] = (*(__int64(__fastcall**)(__m128*, __m128*))(a1->m128_u64[0] + 296))(a1, v21) == 0;
		v4 = a1[8].m128_i32[0];
		if (((v4 - 5) & 0xFFFFFFFA) == 0 || v4 == 6)
		{
			v23 = a1 + 34;
			v24 = &v18;
			sub_1401AFB10(&v23, v21);
			a1[40].m128_i32[1] = (*(__int64(__fastcall**)(__m128*, __m128*))(a1->m128_u64[0] + 280))(a1, v21);
			sub_1400EA3E0(
				*(_QWORD*)(qword_140C65898 + 29504),
				"HousingFreePlaceDecorPlaced",
				byte_1409EBD74,
				a1[31].m128_u32[0],
				&a1[34],
				&v18);
		}
		else if (v4 == 7)
		{
			a1[40].m128_i32[1] = 1;
			sub_1400EA3E0(
				*(_QWORD*)(qword_140C65898 + 29504),
				"HousingHookDecorPlaced",
				byte_1409EBE4C,
				a1[31].m128_u32[0],
				&a1[34],
				&v18);
		}
		if (!a1[19].m128_i32[0])
		{
		LABEL_15:
			v5 = a1[8].m128_i32[0];
			if ((unsigned int)(v5 - 1) > 2 && (v5 != 4 || !(unsigned int)sub_140724910((__int64)a1)))
			{
				v6 = sub_140200220(0x44Bu);
				v7 = v6 ? *(float*)(v6 + 24) : -80.0;
				(*(void(__fastcall**)(__m128*, __m128*, _QWORD))(a1->m128_u64[0] + 176))(a1, v21, 0i64);
				if (v22 >= v7 || a1[8].m128_i32[0] == 6)
				{
					v11 = (_QWORD*)a1[4].m128_u64[0];
					if (v11)
					{
						*v11 = a1[4].m128_u64[1];
						v11 = (_QWORD*)a1[4].m128_u64[1];
						if (v11)
							v11[8] = a1[4].m128_u64[0];
						a1[4].m128_u64[0] = 0i64;
						a1[4].m128_u64[1] = 0i64;
					}
					if (!a1[3].m128_u64[0])
					{
						v12 = (unsigned __int64*)sub_1404BCA30((__int64)v11, (_QWORD*)a1[5].m128_u64[0]);
						if (!a1[3].m128_u64[0])
						{
							a1[3].m128_u64[0] = (unsigned __int64)v12;
							a1[3].m128_u64[1] = *v12;
							*v12 = (unsigned __int64)a1;
							v13 = a1[3].m128_u64[1];
							if (v13)
								*(_QWORD*)(v13 + 48) = (char*)a1 + 56;
						}
					}
				}
				else
				{
					v8 = (_QWORD*)a1[3].m128_u64[0];
					if (v8)
					{
						*v8 = a1[3].m128_u64[1];
						v8 = (_QWORD*)a1[3].m128_u64[1];
						if (v8)
							v8[6] = a1[3].m128_u64[0];
						a1[3].m128_u64[0] = 0i64;
						a1[3].m128_u64[1] = 0i64;
					}
					if (!a1[4].m128_u64[0])
					{
						v9 = (unsigned __int64*)sub_1404BC9B0((__int64)v8, (_QWORD*)a1[5].m128_u64[0]);
						if (!a1[4].m128_u64[0])
						{
							a1[4].m128_u64[0] = (unsigned __int64)v9;
							a1[4].m128_u64[1] = *v9;
							*v9 = (unsigned __int64)a1;
							v10 = a1[4].m128_u64[1];
							if (v10)
								*(_QWORD*)(v10 + 64) = (char*)a1 + 72;
						}
					}
				}
				v14 = sub_140203DA0(a1[6].m128_u32[0]);
				if (v14)
				{
					if (*(_DWORD*)(v14 + 32))
					{
						v15 = (__int64*)xmmword_140C7DFC0;
						if ((_QWORD)xmmword_140C7DFC0 != *((_QWORD*)&xmmword_140C7DFC0 + 1))
						{
							while (1)
							{
								v16 = *v15;
								if (*(_DWORD*)(*v15 + 188) == *(_DWORD*)(a1[18].m128_u64[1] + 20))
									break;
								if (++v15 == *((__int64**)&xmmword_140C7DFC0 + 1))
									return;
							}
							v17 = *v15;
							if (v16)
								sub_1405AE1C0(v17, (__int64)a1, 0);
						}
					}
				}
			}
		}
	}
}
// 1409EBD74: using guessed type _BYTE byte_1409EBD74[24];
// 1409EBE4C: using guessed type _BYTE byte_1409EBE4C[24];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;
// 1404C19C0: using guessed type __m128 var_B0[3];

