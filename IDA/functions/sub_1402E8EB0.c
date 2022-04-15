#include "../winhttp.h"

//----- (00000001402E8EB0) ----------------------------------------------------
__int64 __fastcall sub_1402E8EB0(__int64 a1, __int64 a2)
{
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx

	if (*(_QWORD*)(a1 + 48) != 0x3FFFFFFFFFi64)
	{
		if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 48i64))(*(_QWORD*)(a1 + 24)))
			return 0i64;
		v5 = *(_QWORD*)(a1 + 40);
		if (v5)
		{
			if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 48i64))(v5, a2))
				return 0i64;
		}
		if ((*(_DWORD*)(a1 + 48) & 0x4000000) == 0)
		{
			v6 = *(_QWORD*)(a1 + 264);
			if (v6)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
				*(_QWORD*)(a1 + 264) = 0i64;
			}
			v7 = *(_QWORD*)(a1 + 40);
			if (v7 && !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 64i64))(v7, 26i64))
				(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 40) + 72i64))(
					*(_QWORD*)(a1 + 40),
					26i64,
					a1 + 264);
			*(_QWORD*)(a1 + 48) &= 0xFFFFFFFBF7F8DFFCui64;
		}
		if ((*(_BYTE*)(a1 + 48) & 1) == 0)
			sub_1402E73A0(a1);
		if ((*(_DWORD*)(a1 + 48) & 0x8060002) != 134610946i64)
			sub_1402E76E0(a1);
		if ((*(_DWORD*)(a1 + 48) & 0x2000i64) == 0)
			sub_1402E8680(a1);
		if ((*(_DWORD*)(a1 + 48) & 0x10000) == 0)
			sub_1402E89F0(a1);
		if ((*(_QWORD*)(a1 + 48) & 0x400000000i64) == 0)
			sub_1402E8CC0((_QWORD*)a1);
		*(_QWORD*)(a1 + 48) = 0x3FFFFFFFFFi64;
	}
	return 1i64;
}

