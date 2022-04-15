//----- (0000000140348750) ----------------------------------------------------
void __fastcall sub_140348750(__int64 a1)
{
	__int64 v2; // rcx

	if (!*(_DWORD*)(a1 + 64)
		&& *(_DWORD*)(a1 + 68)
		&& (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 24i64))(*(_QWORD*)(a1 + 80)))
	{
		v2 = *(_QWORD*)(a1 + 56);
		*(_DWORD*)(a1 + 64) = 1;
		*(_DWORD*)(a1 + 72) = 0;
		*(_DWORD*)(a1 + 76) = 1;
		if (v2)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
			*(_QWORD*)(a1 + 56) = 0i64;
		}
		(*(void(__fastcall**)(_QWORD, _QWORD, __int64, __int64, __int64(__fastcall*)(), __int64, _QWORD))(**(_QWORD**)(a1 + 48) + 24i64))(
			*(_QWORD*)(a1 + 48),
			*(_QWORD*)(a1 + 80),
			a1 + 56,
			1i64,
			sub_140348730,
			a1,
			0i64);
	}
}
// 140348730: using guessed type __int64 __fastcall sub_140348730();

