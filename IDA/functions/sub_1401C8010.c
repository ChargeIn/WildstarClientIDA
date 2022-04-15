#include "../winhttp.h"

//----- (00000001401C8010) ----------------------------------------------------
BOOL __fastcall sub_1401C8010(__int64 a1)
{
	__int64 v2; // rcx

	if (*(_QWORD*)(a1 + 200))
	{
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 176) + 16i64))(
			*(_QWORD*)(a1 + 176),
			*(unsigned int*)(a1 + 184));
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 200) + 48i64))(*(_QWORD*)(a1 + 200), 0xFFFFFFFFi64);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 200) + 8i64))(*(_QWORD*)(a1 + 200));
	}
	sub_14018B900(*(_QWORD*)(a1 + 192), 0);
	v2 = *(_QWORD*)(a1 + 176);
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
	if (*(_QWORD*)(a1 + 32))
		CloseHandle(*(HANDLE*)(a1 + 32));
	return TlsFree(*(_DWORD*)(a1 + 4));
}

