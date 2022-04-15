#include "../winhttp.h"

//----- (0000000140574160) ----------------------------------------------------
_BOOL8 __fastcall sub_140574160(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
	__int64 v7; // rax

	return a1
		&& a2
		&& a3
		&& a4
		&& !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a4 + 56i64))(a4)
		&& *(_DWORD*)(a1 + 14164)
		&& (v7 = *(_QWORD*)(a1 + 24)) != 0
		&& (*(_QWORD*)(v7 + 392) || *(_QWORD*)(v7 + 456))
		&& (*(_DWORD*)(a1 + 14160) & 8) == 0
		&& (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a4 + 80i64))(a4, a5) == 0;
}

