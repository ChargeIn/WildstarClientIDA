#include "../winhttp.h"

//----- (0000000140848C80) ----------------------------------------------------
void __fastcall sub_140848C80(__int64 a1)
{
	int v1; // eax

	v1 = *(_DWORD*)(a1 + 76);
	if (v1)
	{
		if (v1 != 2)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
	}
	else
	{
		sub_1408613D0(*(_QWORD*)(a1 + 16));
		*(_DWORD*)(a1 + 76) = 1;
	}
}

