//----- (00000001405B16C0) ----------------------------------------------------
__int64 __fastcall sub_1405B16C0(__int64 a1, unsigned int a2, int a3)
{
	unsigned __int64 v5; // rsi
	_QWORD* v6; // rbx
	__int64 v7; // rcx
	unsigned __int64 v8; // rsi
	_QWORD* v9; // rbx
	_QWORD* v10; // rax
	__m128 v12; // [rsp+20h] [rbp-C8h] BYREF
	char v13[76]; // [rsp+30h] [rbp-B8h] BYREF
	unsigned int v14; // [rsp+7Ch] [rbp-6Ch]

	v12.m128_u64[0] = a2;
	v5 = (*(__int64(__fastcall**)(__m128*))(a1 + 80))(&v12);
	v6 = *(_QWORD**)(*(_QWORD*)(a1 + 72) + 8 * (v5 % *(_QWORD*)(a1 + 64)));
	if (v6)
	{
		while (v5 != *v6 || !(*(unsigned int(__fastcall**)(__m128*, _QWORD*))(a1 + 88))(&v12, v6 + 2))
		{
			v6 = (_QWORD*)v6[1];
			if (!v6)
				goto LABEL_5;
		}
		v10 = v6 + 3;
		if (v6 != (_QWORD*)-24i64)
			return *v10;
	}
LABEL_5:
	if (a3)
	{
		v7 = *(_QWORD*)(qword_140C65898 + 29248);
		v12 = _mm_shuffle_ps(
			*(__m128*)(*(_QWORD*)(qword_140C65898 + 120) + 4576i64),
			*(__m128*)(*(_QWORD*)(qword_140C65898 + 120) + 4576i64),
			136);
		if ((*(unsigned int(__fastcall**)(__int64, __m128*, char*, __int64))(*(_QWORD*)v7 + 224i64))(
			v7,
			&v12,
			v13,
			128i64))
		{
			v12.m128_u64[0] = v14;
			v8 = (*(__int64(__fastcall**)(__m128*))(a1 + 80))(&v12);
			v9 = *(_QWORD**)(*(_QWORD*)(a1 + 72) + 8 * (v8 % *(_QWORD*)(a1 + 64)));
			if (v9)
			{
				while (v8 != *v9 || !(*(unsigned int(__fastcall**)(__m128*, _QWORD*))(a1 + 88))(&v12, v9 + 2))
				{
					v9 = (_QWORD*)v9[1];
					if (!v9)
						return 0i64;
				}
				v10 = v9 + 3;
				if (v9 != (_QWORD*)-24i64)
					return *v10;
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 1405B16C0: using guessed type char var_B8[76];

