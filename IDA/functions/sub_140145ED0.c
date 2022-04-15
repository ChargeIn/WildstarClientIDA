//----- (0000000140145ED0) ----------------------------------------------------
__int64 __fastcall sub_140145ED0(_QWORD* a1)
{
	_OWORD* v2; // rax
	_DWORD* v4; // rax
	__m128 v5; // xmm6
	__m128 v6; // xmm7
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // r9
	__m128 v10; // xmm6
	__m128 v11; // xmm2
	__int64 v12; // rbx
	__int64 v13; // rax
	__int64 v14; // r9
	__int64 v15; // [rsp+30h] [rbp-38h] BYREF
	int v16; // [rsp+38h] [rbp-30h]

	if ((unsigned int)sub_140145490((__int64)a1, 1))
	{
		v2 = (_OWORD*)sub_140056AB0(a1, 1u);
		return sub_140145410(a1, v2);
	}
	else
	{
		v4 = (_DWORD*)a1[3];
		if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || v4[2] != 5)
		{
			v10 = 0i64;
			v10.m128_f32[0] = sub_140056C40(a1, 1u);
			v11 = 0i64;
			v11.m128_f32[0] = sub_140056C40(a1, 2u);
			*(__m128*)sub_140059170(a1, 0x10ui64) = _mm_unpacklo_ps(
				_mm_unpacklo_ps(v10, (__m128)0i64),
				_mm_unpacklo_ps(v11, (__m128)0i64));
			v12 = a1[4];
			v13 = sub_140062650((__int64)a1, (unsigned __int64*)"Vector2", 7ui64);
			v14 = a1[2];
			v15 = v13;
			v16 = 4;
			sub_14005E8E0((__int64)a1, v12 + 160, (int*)&v15, v14);
			a1[2] += 16i64;
			sub_140058BF0((__int64)a1, -2);
		}
		else
		{
			v5 = sub_140144EF0(a1, "Vector2", 1u, (unsigned __int64*)"y", 2);
			v6 = _mm_unpacklo_ps(
				_mm_unpacklo_ps(sub_140144EF0(a1, "Vector2", 1u, (unsigned __int64*)"x", 1), (__m128)0i64),
				_mm_unpacklo_ps(v5, (__m128)0i64));
			*(__m128*)sub_140059170(a1, 0x10ui64) = v6;
			v7 = a1[4];
			v8 = sub_140062650((__int64)a1, (unsigned __int64*)"Vector2", 7ui64);
			v9 = a1[2];
			v15 = v8;
			v16 = 4;
			sub_14005E8E0((__int64)a1, v7 + 160, (int*)&v15, v9);
			a1[2] += 16i64;
			sub_140058BF0((__int64)a1, -2);
		}
		return 1i64;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

