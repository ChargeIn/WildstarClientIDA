//----- (00000001405B2930) ----------------------------------------------------
void __fastcall sub_1405B2930(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64* v5; // rax
	__int64* v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rdi

	sub_1405B2E60(a1, *(_QWORD*)(a1 + 848));
	sub_1404C80A0(*(_QWORD*)(a1 + 296), *(_QWORD*)(a1 + 848));
	v2 = *(_QWORD*)(a1 + 848);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 848) = 0i64;
	}
	*(_QWORD*)(a1 + 848) = 0i64;
	sub_1405B2E60(v2, *(_QWORD*)(a1 + 856));
	sub_1404C80A0(*(_QWORD*)(a1 + 296), *(_QWORD*)(a1 + 856));
	v3 = *(_QWORD*)(a1 + 856);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_QWORD*)(a1 + 856) = 0i64;
	}
	*(_QWORD*)(a1 + 856) = 0i64;
	v4 = *(_QWORD*)(qword_140C659F0 + 824);
	v5 = *(__int64**)(v4 + 16);
	v6 = *(__int64**)(v4 + 24);
	if (v5 != v6)
	{
		while (1)
		{
			v7 = *v5;
			if (*(_DWORD*)(*v5 + 188) == *(_DWORD*)(*(_QWORD*)(a1 + 296) + 20i64))
				break;
			if (++v5 == v6)
				return;
		}
		v8 = *v5;
		if (v7)
		{
			sub_1405AE580(
				v7,
				*(_QWORD*)(v7 + 16) & 0xFFFFFFFFFFFFFFFi64,
				*(_DWORD*)(a1 + 96),
				(__m128*) & ymmword_140C78390,
				2);
			sub_1405AE580(
				v8,
				*(_QWORD*)(v8 + 16) & 0xFFFFFFFFFFFFFFFi64 | 0x8000000000000000ui64,
				*(_DWORD*)(a1 + 96),
				(__m128*) & ymmword_140C78390,
				2);
		}
	}
}
// 1405B2985: variable 'v2' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C78390: using guessed type __m256 ymmword_140C78390;

