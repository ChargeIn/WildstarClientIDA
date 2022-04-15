#include "../winhttp.h"

//----- (000000014018CC40) ----------------------------------------------------
int sub_14018CC40()
{
	__int64 v0; // rbx
	unsigned __int64 v1; // rax
	HANDLE EventW; // rcx
	__int64 v4; // [rsp+30h] [rbp+8h] BYREF

	sub_14003D8F0(&v4, &unk_140C67420);
	if (!dword_140C7F94C)
	{
		QueryPerformanceCounter(&PerformanceCount);
		sub_14018CCF0();
		dword_140C7F94C = 1;
	}
	v0 = v4;
	v1 = *(_QWORD*)(v4 + 8);
	if (v1 <= 1)
	{
		*(_DWORD*)v4 = 0;
		_InterlockedExchange64((volatile __int64*)(v0 + 8), 0i64);
		v1 = *(_QWORD*)(v0 + 16);
		if (v1)
		{
			if (!*(_QWORD*)(v0 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v0 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v1) = SetEvent(*(HANDLE*)(v0 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v4 + 8);
	}
	return v1;
}
// 14003D8F0: using guessed type __int64 __fastcall sub_14003D8F0(_QWORD, _QWORD);
// 140C7F94C: using guessed type int dword_140C7F94C;

