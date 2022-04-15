#include "../winhttp.h"

//----- (00000001401D2E70) ----------------------------------------------------
int __fastcall sub_1401D2E70(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax

	*(_QWORD*)a1 = off_140B5FBE0;
	v2 = *(_QWORD*)(a1 + 744);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 744) = 0i64;
	}
	*(_QWORD*)a1 = off_140B5FDB0;
	v3 = *(_QWORD*)(a1 + 688);
	if (v3)
		LODWORD(v3) = CloseHandle(*(HANDLE*)(a1 + 688));
	return v3;
}
// 140B5FBE0: using guessed type __int64 (__fastcall *off_140B5FBE0[10])();
// 140B5FDB0: using guessed type __int64 (__fastcall *off_140B5FDB0[10])();

