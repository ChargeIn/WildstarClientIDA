#include "../winhttp.h"

//----- (00000001402CC320) ----------------------------------------------------
__int64 __fastcall sub_1402CC320(__int64 a1, __int64 a2)
{
	unsigned __int64 v5; // rbx
	__int64 v6; // rsi

	if (*(_DWORD*)(a1 + 72))
		return 1i64;
	if (!(*(unsigned int(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 64i64))(a1, a2, 5i64)
		|| !(unsigned int)sub_1402C9C90(*(_QWORD*)(a1 + 24), a2))
	{
		return 0i64;
	}
	v5 = 0i64;
	if (*(_QWORD*)(a1 + 256))
	{
		v6 = 0i64;
		while ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)(v6 + *(_QWORD*)(a1 + 248)) + 104i64))(
			v6 + *(_QWORD*)(a1 + 248),
			a2))
		{
			++v5;
			v6 += 416i64;
			if (v5 >= *(_QWORD*)(a1 + 256))
				goto LABEL_10;
		}
		return 0i64;
	}
	else
	{
	LABEL_10:
		*(_DWORD*)(a1 + 72) = 1;
		return 1i64;
	}
}

