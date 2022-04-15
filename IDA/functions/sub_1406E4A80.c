//----- (00000001406E4A80) ----------------------------------------------------
void __fastcall sub_1406E4A80(__m128* a1, unsigned int a2, unsigned __int64 a3, __int64 a4, _BYTE* a5)
{
	float v5; // xmm0_4
	__m128* v6; // rax
	__int128 v7; // xmm0
	__int128 v8; // xmm1
	unsigned __int64 v9; // [rsp+30h] [rbp-71h]
	__int128 v10; // [rsp+40h] [rbp-61h]
	unsigned __int64 v11; // [rsp+50h] [rbp-51h]
	__int128 v12; // [rsp+60h] [rbp-41h]
	__int128 v13[6]; // [rsp+70h] [rbp-31h] BYREF

	if (*a5 || a2 != 256)
	{
	LABEL_13:
		sub_1400D1AF0((char*)a1, a2, a3, a4, a5);
	}
	else
	{
		switch (a3)
		{
		case '#':
			goto LABEL_8;
		case '$':
			*((_QWORD*)&v12 + 1) = a1 + 69;
			LODWORD(v12) = 0;
			v8 = v12;
			a1[69] = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(
						_mm_cvtsi32_si128((a1[45].m128_i32[1] + a1[44].m128_i32[3]) >> 1),
						_mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(
						_mm_cvtsi32_si128((a1[45].m128_i32[2] + a1[45].m128_i32[0]) >> 1),
						_mm_cvtsi32_si128(0))));
			LODWORD(v11) = a1[71].m128_i32[0];
			v7 = v11;
			goto LABEL_7;
		case '%':
			v6 = a1 + 69;
			a1[69].m128_f32[0] = a1[69].m128_f32[0] - 10.0;
			goto LABEL_6;
		case '&':
			v5 = a1[69].m128_f32[1] - 10.0;
			goto LABEL_5;
		case '\'':
			v6 = a1 + 69;
			a1[69].m128_f32[0] = a1[69].m128_f32[0] + 10.0;
			goto LABEL_6;
		case '(':
			v5 = a1[69].m128_f32[1] + 10.0;
		LABEL_5:
			a1[69].m128_f32[1] = v5;
			v6 = a1 + 69;
		LABEL_6:
			*((_QWORD*)&v10 + 1) = v6;
			LODWORD(v9) = a1[71].m128_i32[0];
			LODWORD(v10) = 0;
			v7 = v9;
			v8 = v10;
		LABEL_7:
			v13[0] = v7;
			v13[1] = v8;
			sub_1401B0840((int*)v13, (__int64)&a1[65]);
		LABEL_8:
			*a5 = 1;
			break;
		default:
			goto LABEL_13;
		}
	}
}
// 1406E4B1B: variable 'v9' is possibly undefined
// 1406E4B1F: variable 'v10' is possibly undefined
// 1406E4BF9: variable 'v12' is possibly undefined
// 1406E4C0E: variable 'v11' is possibly undefined

