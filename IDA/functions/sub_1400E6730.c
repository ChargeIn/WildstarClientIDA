#include "../winhttp.h"

//----- (00000001400E6730) ----------------------------------------------------
void __fastcall sub_1400E6730(__int64 a1, _QWORD* a2)
{
	__int64 v3; // rdx
	bool v5; // al

	if (a2)
	{
		v3 = a2[82];
		v5 = (v3 & 0x100000) != 0 && (v3 & 0x1000000) == 0;
		if (!*(_QWORD*)(a1 + 2912) && (v5 || sub_1400C3420(a2)))
		{
			*(_QWORD*)(a1 + 2912) = a2;
			(*(void(__fastcall**)(_QWORD*)) * a2)(a2);
		}
	}
}

