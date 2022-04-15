#include "../winhttp.h"

//----- (0000000140880860) ----------------------------------------------------
__int64 __fastcall sub_140880860(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	char v4[24]; // [rsp+20h] [rbp-18h] BYREF
	__int64 v5; // [rsp+40h] [rbp+8h] BYREF

	*(_QWORD*)(a1 + 96) = 0i64;
	(*(void(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 88) + 32i64))(*(_QWORD*)(a1 + 88), v4);
	v2 = *(_QWORD*)(a1 + 88);
	v4[13] = (int)*(float*)(*(_QWORD*)(a1 + 24) + 388i64);
	(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)v2 + 40i64))(v2, v4);
	result = (*(__int64(__fastcall**)(_QWORD, __int64*, __int64, _QWORD))(**(_QWORD**)(a1 + 88) + 120i64))(
		*(_QWORD*)(a1 + 88),
		&v5,
		a1 + 104,
		0i64);
	if ((_DWORD)result == 45 || (_DWORD)result == 17)
	{
		if (*(_DWORD*)(a1 + 104))
		{
			result = sub_140880B20(a1, v5, 0);
			if ((_DWORD)result == 1)
				return 45i64;
		}
		else
		{
			return 2i64;
		}
	}
	return result;
}

