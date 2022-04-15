#include "../winhttp.h"

//----- (00000001404698A0) ----------------------------------------------------
void __fastcall sub_1404698A0(__int64 a1)
{
	__int64 v2; // rbx
	unsigned int v3; // eax

	if (*(_DWORD*)(a1 + 5632))
	{
		*(_DWORD*)(a1 + 5632) = 0;
		if (!*(_DWORD*)(a1 + 5668))
		{
			*(_DWORD*)(a1 + 5664) = 0;
			sub_140195D70(a1 + 5672);
		}
		v2 = *(_QWORD*)(a1 + 5512);
		if (v2)
		{
			v3 = sub_1400518A0(qword_140C63628, 38, 2, 0);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v2 + 80i64))(v2, v3);
		}
	}
}
// 140C63628: using guessed type __int64 qword_140C63628;

