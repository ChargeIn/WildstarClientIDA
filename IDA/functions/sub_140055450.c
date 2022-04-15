#include "../winhttp.h"

//----- (0000000140055450) ----------------------------------------------------
__int64 __fastcall sub_140055450(__int64 a1, unsigned int a2)
{
	__int64 v2; // r8
	__int64 v3; // rcx
	__int64 result; // rax
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // [rsp+30h] [rbp+8h]

	v2 = *(_QWORD*)(qword_140C63630 + 88);
	v3 = v2;
	result = *(_QWORD*)(v2 + 8);
	while (result)
	{
		if (*(_DWORD*)(result + 32) < a2)
		{
			result = *(_QWORD*)(result + 24);
		}
		else
		{
			v3 = result;
			result = *(_QWORD*)(result + 16);
		}
	}
	if (v3 == v2 || (v7 = v3, a2 < *(_DWORD*)(v3 + 32)))
		v7 = *(_QWORD*)(qword_140C63630 + 88);
	if (v7 != v2)
	{
		result = *(_QWORD*)(v7 + 40);
		if (result)
		{
			if (!*(_DWORD*)(result + 8))
			{
				v5 = SteamUserStats();
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 56i64))(v5, **(_QWORD**)(v7 + 40));
				v6 = SteamUserStats();
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 80i64))(v6);
				result = *(_QWORD*)(v7 + 40);
				*(_DWORD*)(result + 8) = 1;
			}
		}
	}
	return result;
}
// 140959C88: using guessed type __int64 SteamUserStats(void);
// 140C63630: using guessed type __int64 qword_140C63630;

