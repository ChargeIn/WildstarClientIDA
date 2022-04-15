//----- (000000014014BD90) ----------------------------------------------------
__int64 __fastcall sub_14014BD90(_QWORD* a1)
{
	_OWORD* v2; // rax
	_DWORD* v4; // rax
	__m128 v5; // xmm9
	__m128 v6; // xmm8
	__m128 v7; // xmm6
	__m128 v8; // xmm7
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // r9
	__m128 v12; // xmm8
	__m128 v13; // xmm7
	__m128 v14; // xmm6
	__m128 v15; // xmm2
	__int64 v16; // rbx
	__int64 v17; // rax
	__int64 v18; // r9
	__int64 v19; // [rsp+30h] [rbp-58h] BYREF
	int v20; // [rsp+38h] [rbp-50h]

	if ((unsigned int)sub_14014AE00((__int64)a1, 1))
	{
		v2 = (_OWORD*)sub_140056AB0(a1, 1u);
		return sub_14014AD80(a1, v2);
	}
	else
	{
		v4 = (_DWORD*)a1[3];
		if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || v4[2] != 5)
		{
			v12 = 0i64;
			v12.m128_f32[0] = sub_140056C40(a1, 1u);
			v13 = 0i64;
			v13.m128_f32[0] = sub_140056C40(a1, 2u);
			v14 = 0i64;
			v14.m128_f32[0] = sub_140056C40(a1, 3u);
			v15 = 0i64;
			v15.m128_f32[0] = sub_140056C40(a1, 4u);
			*(__m128*)sub_140059170(a1, 0x10ui64) = _mm_unpacklo_ps(_mm_unpacklo_ps(v12, v14), _mm_unpacklo_ps(v13, v15));
			v16 = a1[4];
			v17 = sub_140062650((__int64)a1, (unsigned __int64*)"Quaternion", 0xAui64);
			v18 = a1[2];
			v19 = v17;
			v20 = 4;
			sub_14005E8E0((__int64)a1, v16 + 160, (int*)&v19, v18);
			a1[2] += 16i64;
			sub_140058BF0((__int64)a1, -2);
		}
		else
		{
			v5 = sub_140144EF0(a1, "Quaternion", 1u, (unsigned __int64*)"w", 4);
			v6 = sub_140144EF0(a1, "Quaternion", 1u, (unsigned __int64*)"z", 3);
			v7 = sub_140144EF0(a1, "Quaternion", 1u, (unsigned __int64*)"y", 2);
			v8 = _mm_unpacklo_ps(
				_mm_unpacklo_ps(sub_140144EF0(a1, "Quaternion", 1u, (unsigned __int64*)"x", 1), v6),
				_mm_unpacklo_ps(v7, v5));
			*(__m128*)sub_140059170(a1, 0x10ui64) = v8;
			v9 = a1[4];
			v10 = sub_140062650((__int64)a1, (unsigned __int64*)"Quaternion", 0xAui64);
			v11 = a1[2];
			v19 = v10;
			v20 = 4;
			sub_14005E8E0((__int64)a1, v9 + 160, (int*)&v19, v11);
			a1[2] += 16i64;
			sub_140058BF0((__int64)a1, -2);
		}
		return 1i64;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

