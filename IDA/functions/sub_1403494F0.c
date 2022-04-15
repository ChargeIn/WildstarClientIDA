#include "../winhttp.h"

//----- (00000001403494F0) ----------------------------------------------------
__int64 __fastcall sub_1403494F0(__int64 a1, char a2)
{
	bool v2; // zf
	__int64 v5; // rcx
	__int64 v6; // rcx

	v2 = *(_DWORD*)(a1 + 24) == 0;
	*(_QWORD*)a1 = off_140B65260;
	if (!v2)
		sub_1403496E0(a1);
	v5 = *(_QWORD*)(a1 + 16);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	v6 = *(_QWORD*)(a1 + 8);
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	if ((a2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}
// 140B65260: using guessed type __int64 (__fastcall *off_140B65260[38])();

