//----- (00000001408F6F20) ----------------------------------------------------
__int64 __fastcall sub_1408F6F20(__int64 a1, __int64 a2)
{
	__int64 v4; // rdx

	if (*(_QWORD*)(a1 + 40))
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 16i64))(*(_QWORD*)(a1 + 32));
		*(_QWORD*)(a1 + 40) = 0i64;
	}
	if (*(_QWORD*)(a1 + 48))
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 16i64))(*(_QWORD*)(a1 + 32));
		*(_QWORD*)(a1 + 48) = 0i64;
	}
	v4 = *(_QWORD*)(a1 + 8);
	if (v4)
	{
		sub_140881720(dword_140C10F20, v4);
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	*(_QWORD*)(a1 + 16) = 0i64;
	if (*(_QWORD*)(a1 + 56))
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 16i64))(*(_QWORD*)(a1 + 32));
		*(_QWORD*)(a1 + 56) = 0i64;
	}
	(**(void(__fastcall***)(__int64, _QWORD))a1)(a1, 0i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 16i64))(a2, a1);
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

