//----- (00000001403D2400) ----------------------------------------------------
__int64 __fastcall sub_1403D2400(__int64 a1, __m128* a2)
{
	__int64 v2; // rbp
	__int64 v4; // r8
	__m128* v6; // rcx
	__int32 v7; // edx
	unsigned __int64 v8; // rbx
	unsigned int v9; // esi
	__int64 v10; // rbx
	__m128* v11; // rax
	float v12[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = qword_140C65898;
	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v4 || !a2)
		return 0i64;
	v6 = (__m128*)a2[240].m128_u64[0];
	if (!v6 || (v7 = v6[8].m128_i32[0], ((v7 - 3) & 0xFFFFFFF9) != 0) || v7 == 5)
		v6 = a2;
	if (!v6)
		return 0i64;
	v8 = v6[367].m128_u64[0];
	if (!v8)
	{
		v8 = v6[367].m128_u64[1];
		if (!v8)
			return 0i64;
	}
	v9 = 1;
	if (!*(_QWORD*)(v4 + 968))
	{
		if (!sub_1403B48B0((__int64)a2)
			|| !sub_1403B48B0(*(_QWORD*)(v2 + 120))
			|| (unsigned int)sub_14045A950(*(_QWORD*)(v2 + 120), a2->m128_i32[2]))
		{
			return 0;
		}
		if (!(*(unsigned int(__fastcall**)(unsigned __int64, _QWORD, __int64, __int64))(*(_QWORD*)v8 + 264i64))(
			v8,
			0i64,
			1i64,
			1i64)
			&& (*(unsigned int(__fastcall**)(unsigned __int64))(*(_QWORD*)v8 + 256i64))(v8))
		{
			v10 = *(_QWORD*)(qword_140C65898 + 29096);
			if (!v10)
				v10 = *(_QWORD*)(qword_140C65898 + 29088);
			v11 = (__m128*)sub_1403D8B90();
			if (sub_140251620(v12, a2 + 286, v11, v10 + 480)[2] >= 0.0)
				return 0;
		}
	}
	return v9;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403D2400: using guessed type float var_18[6];

