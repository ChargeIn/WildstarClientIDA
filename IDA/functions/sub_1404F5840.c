#include "../winhttp.h"

//----- (00000001404F5840) ----------------------------------------------------
_DWORD* __fastcall sub_1404F5840(__int64 a1)
{
	__int64 v2; // rcx
	_DWORD* v3; // rax
	_DWORD* v4; // rax
	_DWORD* result; // rax
	char v6; // [rsp+30h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 2328);
	if (v2 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 24i64))(v2) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
	if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2120) + 48i64))(*(_QWORD*)(a1 + 2120)))
	{
		v3 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, char*, __int64))(**(_QWORD**)(a1 + 2120) + 72i64))(
			*(_QWORD*)(a1 + 2120),
			0i64,
			&v6,
			2i64);
		if (v3)
		{
			*v3 = 0;
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 2120) + 80i64))(*(_QWORD*)(a1 + 2120), 0i64);
		}
		*(_DWORD*)(a1 + 2104) = 1;
	}
	if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2136) + 48i64))(*(_QWORD*)(a1 + 2136)))
	{
		v4 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, char*, __int64))(**(_QWORD**)(a1 + 2136) + 72i64))(
			*(_QWORD*)(a1 + 2136),
			0i64,
			&v6,
			2i64);
		if (v4)
		{
			*v4 = -16777216;
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 2136) + 80i64))(*(_QWORD*)(a1 + 2136), 0i64);
		}
		*(_DWORD*)(a1 + 2108) = 1;
	}
	result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2152) + 48i64))(*(_QWORD*)(a1 + 2152));
	if (!(_DWORD)result)
	{
		result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, char*, __int64))(**(_QWORD**)(a1 + 2152) + 72i64))(
			*(_QWORD*)(a1 + 2152),
			0i64,
			&v6,
			2i64);
		if (result)
		{
			*result = 0;
			result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 2152) + 80i64))(
				*(_QWORD*)(a1 + 2152),
				0i64);
		}
		*(_DWORD*)(a1 + 2112) = 1;
	}
	return result;
}

