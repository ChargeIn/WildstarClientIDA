#include "../winhttp.h"

//----- (00000001401D1B50) ----------------------------------------------------
int __fastcall sub_1401D1B50(__int64 a1)
{
	void* v2; // rcx
	__int64 v3; // rax

	*(_QWORD*)a1 = off_140B5F940;
	v2 = *(void**)(a1 + 696);
	if (v2 != (void*)-1i64)
	{
		CloseHandle(v2);
		*(_QWORD*)(a1 + 696) = -1i64;
	}
	*(_QWORD*)a1 = off_140B5FDB0;
	v3 = *(_QWORD*)(a1 + 688);
	if (v3)
		LODWORD(v3) = CloseHandle(*(HANDLE*)(a1 + 688));
	return v3;
}
// 140B5F940: using guessed type __int64 (__fastcall *off_140B5F940[10])();
// 140B5FDB0: using guessed type __int64 (__fastcall *off_140B5FDB0[10])();

