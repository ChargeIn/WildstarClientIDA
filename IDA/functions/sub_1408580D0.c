#include "../winhttp.h"

//----- (00000001408580D0) ----------------------------------------------------
__int64 __fastcall sub_1408580D0(_QWORD* a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v4; // rax

	v2 = a2;
	if (!*(_QWORD*)(a2 + 16))
	{
		LOBYTE(a2) = *(_DWORD*)a2 == 1;
		(*(void(__fastcall**)(_QWORD*, __int64))(*a1 + 344i64))(a1, a2);
	}
	v4 = a1[7];
	if (!v4 || !*(_WORD*)(v4 + 72))
		return 1i64;
	if (!*(_DWORD*)v2)
		return sub_140844AA0((__int64)a1, *(_QWORD*)(v2 + 16), v2 + 28, *(unsigned int*)(v2 + 24));
	if (*(_DWORD*)v2 == 1)
		return sub_140844120((__int64)a1, *(_QWORD*)(v2 + 16), (__int64*)(v2 + 28), *(_DWORD*)(v2 + 24));
	if (*(_DWORD*)v2 != 2)
	{
		if (*(_DWORD*)v2 == 4)
			sub_1408582F0((__int64)a1, *(_QWORD*)(v2 + 16), v2);
		return 1i64;
	}
	return sub_140844A10(
		(__int64)a1,
		*(_QWORD*)(v2 + 16),
		(__int64*)(v2 + 28),
		*(_BYTE*)(v2 + 37),
		*(_DWORD*)(v2 + 24));
}

