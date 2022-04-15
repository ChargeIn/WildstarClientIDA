#include "../winhttp.h"

//----- (0000000140191060) ----------------------------------------------------
DWORD64 __fastcall sub_140191060(void* a1, DWORD64 a2)
{
	DWORD64 result; // rax
	__int64 v5; // rbx
	DWORD64 v6; // rdi
	HANDLE EventW; // rcx
	__int64 v8; // [rsp+40h] [rbp+18h] BYREF

	sub_14003D8F0(&v8, &qword_140C67460);
	result = SymGetModuleBase64(a1, a2);
	v5 = v8;
	v6 = result;
	if (*(_QWORD*)(v8 + 8) <= 1ui64)
	{
		*(_DWORD*)v8 = 0;
		_InterlockedExchange64((volatile __int64*)(v5 + 8), 0i64);
		if (*(_QWORD*)(v5 + 16))
		{
			if (!*(_QWORD*)(v5 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v5 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v5 + 24));
		}
		return v6;
	}
	else
	{
		--* (_QWORD*)(v8 + 8);
	}
	return result;
}
// 14003D8F0: using guessed type __int64 __fastcall sub_14003D8F0(_QWORD, _QWORD);
// 140C67460: using guessed type __int64 qword_140C67460;

