//----- (0000000140147CE0) ----------------------------------------------------
__int64 __fastcall sub_140147CE0(_QWORD* a1)
{
	_OWORD* v2; // rax
	_DWORD* v4; // rax
	__m128 v5; // xmm8
	__m128 v6; // xmm6
	__m128 v7; // xmm7
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // r9
	__m128 v11; // xmm7
	__m128 v12; // xmm6
	__m128 v13; // xmm1
	__int64 v14; // rbx
	__int64 v15; // rax
	__int64 v16; // r9
	__int64 v17; // [rsp+30h] [rbp-48h] BYREF
	int v18; // [rsp+38h] [rbp-40h]

	if ((unsigned int)sub_1401470F0((__int64)a1, 1))
	{
		v2 = (_OWORD*)sub_140056AB0(a1, 1u);
		return sub_140147070(a1, v2);
	}
	else
	{
		v4 = (_DWORD*)a1[3];
		if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || v4[2] != 5)
		{
			v11 = 0i64;
			v11.m128_f32[0] = sub_140056C40(a1, 1u);
			v12 = 0i64;
			v12.m128_f32[0] = sub_140056C40(a1, 2u);
			v13 = 0i64;
			v13.m128_f32[0] = sub_140056C40(a1, 3u);
			*(__m128*)sub_140059170(a1, 0x10ui64) = _mm_unpacklo_ps(
				_mm_unpacklo_ps(v11, v13),
				_mm_unpacklo_ps(v12, (__m128)0i64));
			v14 = a1[4];
			v15 = sub_140062650((__int64)a1, (unsigned __int64*)"Vector3", 7ui64);
			v16 = a1[2];
			v17 = v15;
			v18 = 4;
			sub_14005E8E0((__int64)a1, v14 + 160, (int*)&v17, v16);
			a1[2] += 16i64;
			sub_140058BF0((__int64)a1, -2);
		}
		else
		{
			v5 = sub_140144EF0(a1, "Vector3", 1u, (unsigned __int64*)"z", 3);
			v6 = sub_140144EF0(a1, "Vector3", 1u, (unsigned __int64*)"y", 2);
			v7 = _mm_unpacklo_ps(
				_mm_unpacklo_ps(sub_140144EF0(a1, "Vector3", 1u, (unsigned __int64*)"x", 1), v5),
				_mm_unpacklo_ps(v6, (__m128)0i64));
			*(__m128*)sub_140059170(a1, 0x10ui64) = v7;
			v8 = a1[4];
			v9 = sub_140062650((__int64)a1, (unsigned __int64*)"Vector3", 7ui64);
			v10 = a1[2];
			v17 = v9;
			v18 = 4;
			sub_14005E8E0((__int64)a1, v8 + 160, (int*)&v17, v10);
			a1[2] += 16i64;
			sub_140058BF0((__int64)a1, -2);
		}
		return 1i64;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

