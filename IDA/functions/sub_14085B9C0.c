#include "../winhttp.h"

//----- (000000014085B9C0) ----------------------------------------------------
__int64 __fastcall sub_14085B9C0(__int64* a1, __int64 a2)
{
	__int64 result; // rax

	if (*(__int64**)(a2 + 64) == a1)
	{
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 48i64))(a2, 0i64);
		sub_140859270(a1 + 14, *(_DWORD*)(a2 + 24));
		return (*(__int64(__fastcall**)(__int64*))(*a1 + 16))(a1);
	}
	return result;
}

