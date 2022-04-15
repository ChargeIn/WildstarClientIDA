//----- (000000014047EE80) ----------------------------------------------------
__int64 __fastcall sub_14047EE80(__int64 a1)
{
	__m128* v1; // rdi
	__int32 v2; // edx
	unsigned __int64 v4; // rbx
	unsigned int v5; // esi
	__int64 v6; // rbx
	__m128* v7; // rax
	float v8[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *(__m128**)(a1 + 3840);
	if (!v1 || (v2 = v1[8].m128_i32[0], ((v2 - 3) & 0xFFFFFFF9) != 0) || v2 == 5)
		v1 = (__m128*)a1;
	if (!v1)
		return 0i64;
	v4 = v1[367].m128_u64[0];
	if (!v4)
	{
		v4 = v1[367].m128_u64[1];
		if (!v4)
			return 0i64;
	}
	v5 = 1;
	if (!(*(unsigned int(__fastcall**)(unsigned __int64, _QWORD, __int64, __int64))(*(_QWORD*)v4 + 264i64))(
		v4,
		0i64,
		1i64,
		1i64)
		&& (*(unsigned int(__fastcall**)(unsigned __int64))(*(_QWORD*)v4 + 256i64))(v4))
	{
		v6 = *(_QWORD*)(qword_140C65898 + 29096);
		if (!v6)
			v6 = *(_QWORD*)(qword_140C65898 + 29088);
		v7 = (__m128*)sub_1403D8B90();
		if (sub_140251620(v8, v1 + 286, v7, v6 + 480)[2] >= 0.0)
			return 0;
	}
	return v5;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 14047EE80: using guessed type float var_18[6];

