//----- (0000000140162F00) ----------------------------------------------------
void __fastcall sub_140162F00(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, _BYTE* a5)
{
	_BYTE* v5; // rbx
	unsigned int v8; // r14d
	__int64 v10; // r15
	__m128 v11; // xmm6
	__m128* v12; // rax
	__m128 v13; // xmm7
	__int64 v14; // rcx
	unsigned __int64 v15; // r8
	int v16[4]; // [rsp+30h] [rbp-88h] BYREF
	__m128 v17[4]; // [rsp+40h] [rbp-78h] BYREF

	v5 = a5;
	v8 = a2;
	if (*a5)
	{
		sub_1400D1AF0((char*)a1, a2, a3, a4, a5);
		return;
	}
	v10 = *(_QWORD*)(a1 + 32);
	if (!v10 || *(_QWORD*)(v10 + 2880) != a1)
		goto LABEL_12;
	if (a2 >= 0x200 && sub_1400E6570(*(_DWORD**)(a1 + 32), a2, a3, v16, &a5) && a2 == 1)
	{
		v11 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(**(_DWORD**)(v10 + 2832)), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(v10 + 2832) + 4i64)), _mm_cvtsi32_si128(0))));
		v12 = sub_1400C96C0(a1, v17);
		v13 = _mm_add_ps(
			(__m128)xmmword_140B7A490,
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v11, v11, 85), v12[1]),
					_mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), *v12)),
				v12[3]));
		LODWORD(a5) = (int)v13.m128_f32[0];
		HIDWORD(a5) = (int)_mm_shuffle_ps(v13, v13, 85).m128_f32[0];
		if (!sub_140001D30(a1, (int*)&a5))
		{
			v14 = *(_QWORD*)(a1 + 32);
			if (v14)
			{
				if (*(_QWORD*)(v14 + 2880) == a1)
					sub_1400E8BF0(v14);
			}
		}
	LABEL_12:
		a2 = v8;
	LABEL_13:
		v15 = a3;
		goto LABEL_14;
	}
	if (a2 != 256)
	{
		if (a2 == 257)
		{
			if (a3 == 192)
			{
				v15 = 192i64;
			LABEL_14:
				sub_1400D1AF0((char*)a1, a2, v15, a4, v5);
				return;
			}
		}
		else
		{
			if (a2 != 258)
				goto LABEL_12;
			switch (a3)
			{
			case 9ui64:
				a2 = 258;
				v15 = 9i64;
				goto LABEL_14;
			case 0xDui64:
				a2 = 258;
				v15 = 13i64;
				goto LABEL_14;
			case 0x1Bui64:
				a2 = 258;
				v15 = 27i64;
				goto LABEL_14;
			case 0x60ui64:
				v15 = 96i64;
				goto LABEL_14;
			}
		}
	LABEL_25:
		*v5 = 1;
		return;
	}
	switch (a3)
	{
	case 0x1Bui64:
		sub_1400E8BF0(v10);
		*v5 = 1;
		a2 = 256;
		goto LABEL_13;
	case 0x23ui64:
		sub_140162E10(a1);
		*v5 = 1;
		break;
	case 0x24ui64:
		sub_140162D20(a1);
		*v5 = 1;
		break;
	case 0x25ui64:
		sub_140162B40(a1);
		*v5 = 1;
		break;
	case 0x26ui64:
		sub_140162980(a1);
		*v5 = 1;
		break;
	case 0x27ui64:
		sub_140162C30(a1);
		*v5 = 1;
		break;
	case 0x28ui64:
		sub_140162A60(a1);
		goto LABEL_25;
	case 0xC0ui64:
		a2 = 256;
		goto LABEL_13;
	default:
		goto LABEL_25;
	}
}
// 140162F90: variable 'a2' is possibly undefined
// 140B7A490: using guessed type __int128 xmmword_140B7A490;
// 140162F00: using guessed type int var_88[4];
// 140162F00: using guessed type __m128 var_78[4];

