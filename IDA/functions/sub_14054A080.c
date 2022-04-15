//----- (000000014054A080) ----------------------------------------------------
_QWORD* __fastcall sub_14054A080(__int64 a1)
{
	unsigned __int64 i; // rdi
	_QWORD* result; // rax
	__int64 v4; // rcx
	_QWORD* v5; // rsi
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	__int64 v8; // rcx
	_QWORD* v9; // rcx

	for (i = 0i64; i < *(_QWORD*)(a1 + 64); ++i)
	{
		result = *(_QWORD**)(a1 + 56);
		v4 = result[i];
		v5 = &result[i];
		if (v4)
		{
			result = (_QWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			*v5 = 0i64;
		}
	}
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_QWORD*)(a1 + 272) = 0i64;
	*(_QWORD*)(a1 + 264) = 0i64;
	v6 = *(_QWORD*)(a1 + 56);
	if (v6)
		result = (_QWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	v7 = *(_QWORD**)(a1 + 16);
	if (v7)
	{
		result = *(_QWORD**)(a1 + 24);
		*v7 = result;
	}
	v8 = *(_QWORD*)(a1 + 24);
	if (v8)
	{
		result = *(_QWORD**)(a1 + 16);
		*(_QWORD*)(v8 + 16) = result;
	}
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	if (*(_QWORD*)a1)
	{
		result = *(_QWORD**)(a1 + 8);
		**(_QWORD**)a1 = result;
	}
	v9 = *(_QWORD**)(a1 + 8);
	if (v9)
	{
		result = *(_QWORD**)a1;
		*v9 = *(_QWORD*)a1;
	}
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)a1 = 0i64;
	return result;
}

