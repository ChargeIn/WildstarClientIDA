//----- (000000014037E910) ----------------------------------------------------
__int64 __fastcall sub_14037E910(__int64 a1)
{
	__int64* v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 result; // rax
	__int32* v6; // rsi
	__m128** v7; // rbx
	__int64 v8; // rbp
	__m128* v9; // rdi
	__m128* v10; // [rsp+20h] [rbp-48h] BYREF
	__int64 v11; // [rsp+28h] [rbp-40h] BYREF
	__int64 v12[2]; // [rsp+30h] [rbp-38h] BYREF

	(*(void(__fastcall**)(_QWORD, __int64, __int64*))(**(_QWORD**)(a1 + 16) + 72i64))(
		*(_QWORD*)(a1 + 16),
		1i64,
		&v11);
	v2 = (__int64*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 24i64))(v11);
	v3 = *v2;
	v4 = v2[1];
	v12[0] = v3;
	v12[1] = v4;
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
	v6 = (__int32*)v12;
	v7 = (__m128**)(a1 + 56);
	v8 = 4i64;
	do
	{
		if (*v6 && (result = sub_140354660(*(_QWORD*)a1, *v6, &v10), (int)result >= 0))
		{
			v9 = v10;
		}
		else
		{
			v9 = 0i64;
			v10 = 0i64;
		}
		if (*v7)
		{
			result = (*(__int64(__fastcall**)(__m128*))((*v7)->m128_u64[0] + 8))(*v7);
			*v7 = 0i64;
		}
		*v7++ = v9;
		++v6;
		--v8;
	} while (v8);
	return result;
}

