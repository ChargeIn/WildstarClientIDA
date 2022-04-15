//----- (00000001400490B0) ----------------------------------------------------
__int64 __fastcall sub_1400490B0(__m128* a1)
{
	unsigned __int64 v1; // rax
	unsigned __int64 v3; // rcx
	unsigned __int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rax
	unsigned __int64 v7; // rcx
	unsigned __int64 v8; // rcx
	__m128* i; // rax
	unsigned __int64 v10; // rax

	v1 = a1->m128_u64[1];
	if (v1)
		*(_QWORD*)(v1 + 16) = 0i64;
	v3 = a1->m128_u64[1];
	if (v3)
	{
		(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1->m128_u64[1] = 0i64;
	}
	v4 = a1[1].m128_u64[1];
	if (v4 && (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)v4 + 328i64))(v4))
	{
		v5 = (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)a1[1].m128_u64[1] + 328i64))(a1[1].m128_u64[1]);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 936i64))(v5);
		v6 = (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)a1[1].m128_u64[1] + 328i64))(a1[1].m128_u64[1]);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v6 + 648i64))(v6, 0i64, 0i64);
	}
	sub_140049770(a1);
	v7 = a1[1].m128_u64[0];
	if (v7)
	{
		(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v7 + 8i64))(v7);
		a1[1].m128_u64[0] = 0i64;
	}
	v8 = a1[1].m128_u64[1];
	if (v8)
	{
		(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v8 + 8i64))(v8);
		a1[1].m128_u64[1] = 0i64;
	}
	for (i = (__m128*)a1[315].m128_u64[1]; i; i = (__m128*)a1[315].m128_u64[1])
		sub_140049770(i);
	v10 = a1[318].m128_u64[0];
	if (*(__m128**)(v10 + 24) == a1)
	{
		*(_QWORD*)(v10 + 24) = 0i64;
		*(_DWORD*)(v10 + 32) = 0;
	}
	return sub_14002EA60((__int64)&a1[2]);
}

