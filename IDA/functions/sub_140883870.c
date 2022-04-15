#include "../winhttp.h"

//----- (0000000140883870) ----------------------------------------------------
int __fastcall sub_140883870(__int64 a1)
{
	bool v1; // zf
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rdx

	v1 = (*(_BYTE*)(a1 + 117) & 0x10) == 0;
	*(_QWORD*)a1 = &off_1409A7A38;
	if (!v1)
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 96) + 256i64) + 8i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 96) + 256i64),
			*(_QWORD*)(a1 + 40));
	v3 = *(_QWORD*)(a1 + 32);
	if (v3)
	{
		sub_140883230(v3);
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	v4 = *(_QWORD*)(a1 + 104);
	if (v4)
		sub_140881720(dword_140C111C0, v4);
	v5 = *(_QWORD*)(a1 + 40);
	if (v5)
		sub_140881720(dword_140C111C0, v5);
	DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	return sub_140888F70((_QWORD*)a1);
}
// 1409A7A38: using guessed type __int64 (__fastcall *off_1409A7A38)();
// 140C111C0: using guessed type int dword_140C111C0;

