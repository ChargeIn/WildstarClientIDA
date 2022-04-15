#include "../winhttp.h"

//----- (0000000140190F70) ----------------------------------------------------
BOOL __fastcall sub_140190F70(__int64 a1, void* a2, void* a3, struct _tagSTACKFRAME64* a4, void* a5, __int64 a6)
{
	BOOL result; // eax
	__int64 v10; // rbx
	BOOL v11; // edi
	HANDLE EventW; // rcx

	sub_14003D8F0(&a6, &qword_140C67460);
	result = StackWalk64(
		0x8664u,
		a2,
		a3,
		a4,
		a5,
		0i64,
		(PFUNCTION_TABLE_ACCESS_ROUTINE64)sub_1401911D0,
		(PGET_MODULE_BASE_ROUTINE64)sub_140191060,
		0i64);
	v10 = a6;
	v11 = result;
	if (*(_QWORD*)(a6 + 8) <= 1ui64)
	{
		*(_DWORD*)a6 = 0;
		_InterlockedExchange64((volatile __int64*)(v10 + 8), 0i64);
		if (*(_QWORD*)(v10 + 16))
		{
			if (!*(_QWORD*)(v10 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v10 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v10 + 24));
		}
		return v11;
	}
	else
	{
		--* (_QWORD*)(a6 + 8);
	}
	return result;
}
// 14003D8F0: using guessed type __int64 __fastcall sub_14003D8F0(_QWORD, _QWORD);
// 140C67460: using guessed type __int64 qword_140C67460;

