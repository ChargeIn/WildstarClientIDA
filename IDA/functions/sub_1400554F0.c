//----- (00000001400554F0) ----------------------------------------------------
__int64 __fastcall sub_1400554F0(__int64 a1, __int64* a2)
{
	__int64 result; // rax
	unsigned __int64 i; // rsi
	__int64 v5; // rbx
	__int64 v6; // rax
	unsigned __int8 v7; // [rsp+30h] [rbp+8h] BYREF

	result = *a2;
	if (*(_QWORD*)(a1 + 40) == *a2 && *((_DWORD*)a2 + 2) == 1)
	{
		for (i = 0i64; i < *(_QWORD*)(a1 + 72); *(_DWORD*)(v5 + 8) = v7)
		{
			v5 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * i);
			v6 = SteamUserStats();
			(*(void(__fastcall**)(__int64, _QWORD, unsigned __int8*))(*(_QWORD*)v6 + 48i64))(v6, *(_QWORD*)v5, &v7);
			result = v7;
			++i;
		}
		*(_DWORD*)(a1 + 56) = 1;
	}
	return result;
}
// 140959C88: using guessed type __int64 SteamUserStats(void);

