#include "../winhttp.h"

//----- (00000001401C90C0) ----------------------------------------------------
__int64 __fastcall sub_1401C90C0(__int64 a1)
{
	bool v1; // zf
	__int64 result; // rax
	HKEY v4; // rcx

	v1 = (*(_DWORD*)(a1 + 8))-- == 1;
	result = *(unsigned int*)(a1 + 8);
	if (v1)
	{
		*(_QWORD*)a1 = off_140B5F8E0;
		v4 = *(HKEY*)(a1 + 16);
		if (v4)
		{
			RegCloseKey(v4);
			*(_QWORD*)(a1 + 16) = 0i64;
		}
		sub_14018B900(a1, 0);
		return 0i64;
	}
	return result;
}
// 140B5F8E0: using guessed type __int64 (__fastcall *off_140B5F8E0[2])();

