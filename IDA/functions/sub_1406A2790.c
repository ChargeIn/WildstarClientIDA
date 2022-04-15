//----- (00000001406A2790) ----------------------------------------------------
__int64 __fastcall sub_1406A2790(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	unsigned int* v5; // rax
	__int64* v7; // rax
	__int64 v8; // r11
	__int64 v9; // r9
	int v10; // r8d
	__int64 v11; // rdx
	__m128 v12; // [rsp+20h] [rbp-38h] BYREF
	char v13[8]; // [rsp+30h] [rbp-28h] BYREF
	int v14; // [rsp+38h] [rbp-20h]
	__int64 v15; // [rsp+40h] [rbp-18h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		v5 = (unsigned int*)sub_14024B980(*(_DWORD*)(v4 + 8));
		if (v5)
		{
			v12 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v5[3], (__m128)v5[5]), _mm_unpacklo_ps((__m128)v5[4], (__m128)0i64));
			sub_1400FA3C0((__int64)v13, (__int64)a1, v12.m128_f32);
			v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v15 + 32) + 160i64), v14);
			v9 = *(_QWORD*)(v8 + 16);
			v10 = v14;
			v11 = *v7;
			*(_QWORD*)v9 = *v7;
			*(_DWORD*)(v9 + 8) = *((_DWORD*)v7 + 2);
			*(_QWORD*)(v8 + 16) += 16i64;
			sub_1400579E0(v8, v11, v10);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1406A283C: variable 'v8' is possibly undefined
// 1406A2790: using guessed type char var_28[8];

