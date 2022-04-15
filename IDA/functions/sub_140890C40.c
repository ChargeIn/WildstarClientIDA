#include "../winhttp.h"

//----- (0000000140890C40) ----------------------------------------------------
__int64 __fastcall sub_140890C40(_QWORD* a1, __int64 a2)
{
	unsigned int v4; // ebx

	(*(void(__fastcall**)(_QWORD*))(*a1 + 8i64))(a1);
	if (*(_DWORD*)a2)
	{
		if (*(_DWORD*)a2 == 1)
		{
			sub_14088A770(qword_140C629C0, (__int64)a1, *(_QWORD*)(a2 + 16), (int*)(a2 + 28), *(_DWORD*)(a2 + 24));
		}
		else if (*(_DWORD*)a2 == 2)
		{
			sub_14088AEB0(
				qword_140C629C0,
				(__int64)a1,
				*(_QWORD*)(a2 + 16),
				(int*)(a2 + 28),
				*(_BYTE*)(a2 + 37),
				*(_DWORD*)(a2 + 24));
		}
	}
	else
	{
		sub_14088B280(qword_140C629C0, (__int64)a1, *(_QWORD*)(a2 + 16), (int*)(a2 + 28), *(_DWORD*)(a2 + 24));
	}
	v4 = sub_140869520(a1, a2);
	(*(void(__fastcall**)(_QWORD*))(*a1 + 16i64))(a1);
	return v4;
}
// 140C629C0: using guessed type __int64 qword_140C629C0;

