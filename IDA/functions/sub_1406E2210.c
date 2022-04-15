#include "../winhttp.h"

//----- (00000001406E2210) ----------------------------------------------------
_DWORD* __fastcall sub_1406E2210(__int64 a1)
{
	_DWORD* result; // rax
	char v3; // [rsp+30h] [rbp+8h] BYREF

	result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 3808) + 48i64))(*(_QWORD*)(a1 + 3808));
	if (!(_DWORD)result)
	{
		result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, char*, __int64))(**(_QWORD**)(a1 + 3808) + 72i64))(
			*(_QWORD*)(a1 + 3808),
			0i64,
			&v3,
			2i64);
		if (result)
		{
			*result = 0;
			return (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 3808) + 80i64))(
				*(_QWORD*)(a1 + 3808),
				0i64);
		}
	}
	return result;
}

