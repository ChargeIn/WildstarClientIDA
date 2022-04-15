#include "../winhttp.h"

//----- (0000000140848AF0) ----------------------------------------------------
void __fastcall sub_140848AF0(__int64 a1)
{
	int v2; // ecx
	float v3; // xmm0_4

	v2 = *(_DWORD*)(a1 + 76) - 1;
	if (v2)
	{
		if (v2 == 2)
		{
			v3 = sub_140872580(a1 + 496);
			sub_140861370(*(_QWORD*)(a1 + 16), v3);
			*(_DWORD*)(a1 + 76) = 1;
		}
		else
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
		}
	}
}

