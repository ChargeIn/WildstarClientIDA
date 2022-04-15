//----- (00000001403AA4E0) ----------------------------------------------------
void __fastcall sub_1403AA4E0(__m128* a1, __int64* a2, int a3)
{
	float v5; // xmm1_4
	__int64 v6; // rdx
	__int64 v7; // r8
	__int64 v8; // rbx
	__m128 v9; // [rsp+30h] [rbp-18h] BYREF

	if (a3 || *((_DWORD*)a2 + 24))
	{
		a1[2033].m128_u64[1] = 0i64;
	}
	else if (a1[1609].m128_u64[0] && a1[2033].m128_i32[1])
	{
		v5 = a1[2033].m128_f32[0];
		v9 = a1[2032];
		if (sub_1404860D0(&v9, v5, 10.0))
		{
			v7 = *(_QWORD*)(qword_140C65898 + 25744);
			v8 = 0i64;
			v9 = 0ui64;
			if (*(_DWORD*)qword_140C65920)
				v8 = sub_140486F10(
					qword_140C65920,
					(__int64)L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3",
					(__int128*)(v7 + 4528),
					(_DWORD*)(v6 + 56),
					(__int64*)&v9);
			(*(void(__fastcall**)(__int64*, __int64, __int64))(*a2 + 8))(a2, *a2, v7);
			a1[2033].m128_u64[1] = v8;
		}
		else if (!*(_QWORD*)(qword_140C65898 + 25744) || (int)sub_140486340(a2, &v9) < 0)
		{
			(*(void(__fastcall**)(__int64*))(*a2 + 8))(a2);
			a1[2033].m128_u64[1] = 0i64;
		}
	}
	else
	{
		(*(void(__fastcall**)(__int64*))(*a2 + 8))(a2);
		a1[2033].m128_u64[1] = 0i64;
	}
}
// 1403AA572: variable 'v6' is possibly undefined
// 1403AA59C: variable 'v7' is possibly undefined
// 140AF5810: using guessed type wchar_t aArtFxModelProp_4[72];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;
// 1403AA4E0: using guessed type __m128 var_18;

