#include "../winhttp.h"

//----- (00000001404DAAC0) ----------------------------------------------------
_BOOL8 __fastcall sub_1404DAAC0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx

	if (*(_DWORD*)(a1 + 31000) || (v2 = *(_QWORD*)(a1 + 29080)) != 0 && *(_DWORD*)(v2 + 80))
	{
		if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
			*(_QWORD*)(a1 + 30088),
			27i64))
		{
			return 1i64;
		}
		v3 = *(_QWORD*)(a1 + 30088);
		v4 = 29i64;
	}
	else
	{
		v3 = *(_QWORD*)(a1 + 30088);
		v4 = 24i64;
	}
	return (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v3 + 200i64))(v3, v4)
		|| (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
			*(_QWORD*)(a1 + 30088),
			32i64)
		&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
			*(_QWORD*)(a1 + 30088),
			47i64)
		&& !(unsigned int)sub_14055A260((_DWORD*)(a1 + 29488));
}

