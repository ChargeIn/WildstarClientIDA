#include "../winhttp.h"

//----- (0000000140191110) ----------------------------------------------------
BOOL __fastcall sub_140191110(void* a1, DWORD64 a2, struct _IMAGEHLP_MODULE64* a3)
{
	BOOL result; // eax
	__int64 v7; // rbx
	BOOL v8; // edi
	HANDLE EventW; // rcx
	__int64 v10; // [rsp+48h] [rbp+20h] BYREF

	sub_14003D8F0(&v10, &qword_140C67460);
	result = SymGetModuleInfo64(a1, a2, a3);
	v7 = v10;
	v8 = result;
	if (*(_QWORD*)(v10 + 8) <= 1ui64)
	{
		*(_DWORD*)v10 = 0;
		_InterlockedExchange64((volatile __int64*)(v7 + 8), 0i64);
		if (*(_QWORD*)(v7 + 16))
		{
			if (!*(_QWORD*)(v7 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v7 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v7 + 24));
		}
		return v8;
	}
	else
	{
		--* (_QWORD*)(v10 + 8);
	}
	return result;
}
// 14003D8F0: using guessed type __int64 __fastcall sub_14003D8F0(_QWORD, _QWORD);
// 140C67460: using guessed type __int64 qword_140C67460;

