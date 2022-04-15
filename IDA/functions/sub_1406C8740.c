#include "../winhttp.h"

//----- (00000001406C8740) ----------------------------------------------------
_BOOL8 __fastcall sub_1406C8740(_BYTE* a1, int* a2)
{
	int v5; // eax

	if ((a1[28] & 8) == 0)
		return sub_140130FC0((__int64)a1, a2);
	if ((a1[1436] & 0x20) != 0
		&& (!byte_140C1D18F || a1[3104])
		&& (v5 = *((_DWORD*)a1 + 227) - a2[1], (*((_DWORD*)a1 + 226) - *a2) * (*((_DWORD*)a1 + 226) - *a2) + v5 * v5 >= 49)
		&& (unsigned int)(dword_140C636A8 - *((_DWORD*)a1 + 233)) > 0x7D
		&& (sub_14002C740((__int64)(a1 + 1464), L"ABar") || sub_14002C740((__int64)(a1 + 1464), L"GCBar"))
		&& !byte_140C65C3C)
	{
		sub_1406C8FB0((__int64)a1, 0);
		return 0i64;
	}
	else
	{
		if ((char)a1[28] >= 0)
		{
			(*(void(__fastcall**)(_BYTE*, _QWORD))(*(_QWORD*)a1 + 504i64))(a1, 0i64);
			if ((a1[1436] & 0x20) != 0)
				(*(void(__fastcall**)(_BYTE*, _QWORD, __int64*))(*(_QWORD*)a1 + 328i64))(
					a1,
					*((unsigned int*)a1 + 360),
					&qword_140C77760);
		}
		return sub_140130FC0((__int64)a1, a2);
	}
}
// 140B39730: using guessed type wchar_t aGcbar[6];
// 140B39778: using guessed type wchar_t aAbar[5];
// 140C1D18F: using guessed type char byte_140C1D18F;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65C3C: using guessed type char byte_140C65C3C;
// 140C77760: using guessed type __int64 qword_140C77760;

