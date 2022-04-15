#include "../winhttp.h"

//----- (000000014017D0C0) ----------------------------------------------------
_DWORD* __fastcall sub_14017D0C0(__int64 a1)
{
	_DWORD* v2; // rax
	_DWORD* v3; // rax
	_DWORD* result; // rax
	char v5; // [rsp+30h] [rbp+8h] BYREF

	if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2088) + 48i64))(*(_QWORD*)(a1 + 2088)))
	{
		v2 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, char*, __int64))(**(_QWORD**)(a1 + 2088) + 72i64))(
			*(_QWORD*)(a1 + 2088),
			0i64,
			&v5,
			2i64);
		if (v2)
		{
			*v2 = 0;
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 2088) + 80i64))(*(_QWORD*)(a1 + 2088), 0i64);
		}
		*(_DWORD*)(a1 + 2072) = 1;
	}
	if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2104) + 48i64))(*(_QWORD*)(a1 + 2104)))
	{
		v3 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, char*, __int64))(**(_QWORD**)(a1 + 2104) + 72i64))(
			*(_QWORD*)(a1 + 2104),
			0i64,
			&v5,
			2i64);
		if (v3)
		{
			*v3 = -16777216;
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 2104) + 80i64))(*(_QWORD*)(a1 + 2104), 0i64);
		}
		*(_DWORD*)(a1 + 2076) = 1;
	}
	result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2120) + 48i64))(*(_QWORD*)(a1 + 2120));
	if (!(_DWORD)result)
	{
		result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, char*, __int64))(**(_QWORD**)(a1 + 2120) + 72i64))(
			*(_QWORD*)(a1 + 2120),
			0i64,
			&v5,
			2i64);
		if (result)
		{
			*result = 0;
			result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 2120) + 80i64))(
				*(_QWORD*)(a1 + 2120),
				0i64);
		}
		*(_DWORD*)(a1 + 2080) = 1;
	}
	return result;
}

