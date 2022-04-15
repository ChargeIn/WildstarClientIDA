#include "../winhttp.h"

//----- (00000001400E1830) ----------------------------------------------------
__int64 __fastcall sub_1400E1830(__int64 a1, void(__fastcall*** a2)(_QWORD), int a3, _DWORD* a4)
{
	__int64 v8; // rcx
	__int64 result; // rax

	if (a2 != *(void(__fastcall****)(_QWORD))(a1 + 24))
	{
		if (a2)
			(**a2)(a2);
		v8 = *(_QWORD*)(a1 + 24);
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		*(_QWORD*)(a1 + 24) = a2;
	}
	*(_DWORD*)(a1 + 128) = *a4;
	result = (unsigned int)a4[1];
	*(_DWORD*)(a1 + 132) = result;
	*(_DWORD*)(a1 + 12) = a3;
	return result;
}

