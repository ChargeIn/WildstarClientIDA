//----- (0000000140390C00) ----------------------------------------------------
__int64 __fastcall sub_140390C00(__int64 a1, __int64 a2)
{
	__int64 v5; // rdx
	_QWORD* v6; // rcx
	__int64 v7; // rax
	unsigned __int64 v8; // rbx
	unsigned __int64 v9; // rsi
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rax
	unsigned int v14; // [rsp+40h] [rbp+8h]
	__int64 v15; // [rsp+50h] [rbp+18h]

	if (*(_QWORD*)(a1 + 304))
		return 0i64;
	v5 = a1 + 312;
	v6 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64) + 5456i64);
	*(_QWORD*)(a1 + 304) = v6;
	*(_QWORD*)(a1 + 312) = *v6;
	*v6 = a1;
	v7 = *(_QWORD*)(a1 + 312);
	if (v7)
		*(_QWORD*)(v7 + 304) = v5;
	v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1);
	v8 = 0i64;
	v9 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 128i64))(*(_QWORD*)(a1 + 16));
	v15 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 48i64) + 32i64);
	if (v9)
	{
		do
		{
			v10 = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 16) + 136i64))(
				*(_QWORD*)(a1 + 16),
				v8);
			if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v10 + 96i64))(v10, a2))
			{
				v11 = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 16) + 136i64))(
					*(_QWORD*)(a1 + 16),
					v8);
				v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
				v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 32i64))(v12);
				v14 |= sub_140390C00(v15 + 336 * v13, a2);
			}
			++v8;
		} while (v8 < v9);
	}
	return v14;
}

