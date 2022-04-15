//----- (000000014077D240) ----------------------------------------------------
__int64 __fastcall sub_14077D240(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v3; // r14
	__int64 v5; // rax
	__int64** v6; // rbx
	_QWORD* v8; // rax
	__int64 v9; // rdi
	unsigned int v10; // ebp
	unsigned int* v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rbx
	int v14; // esi
	__int64 v15; // rdi
	int v16[4]; // [rsp+30h] [rbp-38h] BYREF
	__m128 v17; // [rsp+40h] [rbp-28h] BYREF

	v3 = qword_140C65970;
	v5 = sub_1403D7BC0(qword_140C65970, a2);
	v6 = (__int64**)v5;
	if (!v5)
		return 2147500037i64;
	if (!*(_QWORD*)(qword_140C65898 + 25744))
		return 2147500037i64;
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 208i64))(v5) != 3)
		return 2147500037i64;
	v8 = (_QWORD*)sub_140721F50(*v6[6], *(_DWORD*)(*v6[6] + 20));
	if (!v8)
		return 2147500037i64;
	v9 = sub_1407209F0(v8, a3);
	if (!v9 || ((unsigned int(__fastcall*)(__int64**, _QWORD))(*v6)[10])(v6, a3))
		return 2147500037i64;
	v10 = *(_DWORD*)(*(_QWORD*)(v9 + 16) + 24i64);
	v11 = (unsigned int*)sub_14024B980(v10);
	if (!v11)
		return 2147500037i64;
	v17 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v11[3], (__m128)v11[5]), _mm_unpacklo_ps((__m128)v11[4], (__m128)0i64));
	sub_140485FA0(v10, 0);
	v12 = *v6[6];
	v13 = *(_QWORD*)(qword_140C65920 + 8);
	v14 = *(_DWORD*)(v12 + 20);
	v16[0] = 0;
	v16[1] = v14;
	v16[2] = 0;
	if (v13)
	{
		do
		{
			v15 = *(_QWORD*)(v13 + 32);
			if (*(_DWORD*)(v13 + 60) == v14 && !*(_DWORD*)(v13 + 56) && !*(_DWORD*)(v13 + 64))
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
				(**(void(__fastcall***)(__int64, __int64))v13)(v13, 1i64);
			}
			v13 = v15;
		} while (v15);
	}
	if (sub_140485FA0(v10, 0))
	{
		v17 = 0ui64;
		if (*(_DWORD*)qword_140C65920)
			sub_140486F10(
				qword_140C65920,
				(__int64)L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3",
				(__int128*)(*(_QWORD*)(qword_140C65898 + 25744) + 4528i64),
				v16,
				(__int64*)&v17);
	}
	else
	{
		v17.m128_u64[0] = v3;
		v17.m128_u64[1] = (unsigned __int64)sub_14077D440;
		if (*(_DWORD*)qword_140C65920)
			sub_140486DC0(
				qword_140C65920,
				(__int64)L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3",
				v16,
				&v17,
				v10,
				0);
	}
	return 0i64;
}
// 140B4F4B0: using guessed type wchar_t aArtFxModelProp_29[66];
// 140B4F540: using guessed type wchar_t aArtFxModelProp_28[72];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;
// 140C65970: using guessed type __int64 qword_140C65970;
// 14077D240: using guessed type __m128 var_28;

