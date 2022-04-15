//----- (00000001401D9960) ----------------------------------------------------
__int64 __fastcall sub_1401D9960(__int64 a1, int a2)
{
	__int64 v4; // rax
	__int64 v5; // rdx
	int v6; // eax
	__int64 result; // rax
	__int64 v8; // rbx
	__int64 v9; // rsi
	unsigned int v10; // edi
	__int64 v11; // rax

	if (*(_DWORD*)(a1 + 168))
		return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 96i64))(a1, 2686648322i64);
	v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 184) + 16i64))(*(_QWORD*)(a1 + 184));
	LODWORD(v5) = 0x80000000;
	if ((unsigned __int64)(v4 - *(_QWORD*)(a1 + 192)) < 0x80000000)
	{
		v6 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 184) + 16i64))(*(_QWORD*)(a1 + 184));
		v5 = (unsigned int)(v6 - *(_DWORD*)(a1 + 192));
		if (v6 == *(_DWORD*)(a1 + 192))
			return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 88i64))(a1, v5);
	}
	v8 = *(_QWORD*)(a1 + 192);
	v9 = **(_QWORD**)(a1 + 16);
	v10 = 0;
	if (a2)
		v10 = v5;
	v11 = (*(__int64 (**)(void))(**(_QWORD**)(a1 + 184) + 24i64))();
	result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, _QWORD, __int64))(v9 + 176))(
		*(_QWORD*)(a1 + 16),
		v8 + *(_QWORD*)(a1 + 176),
		v8 + v11,
		v10,
		a1);
	if ((int)result < 0)
		return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 96i64))(a1, (unsigned int)result);
	return result;
}

