#include "../winhttp.h"

//----- (00000001407E9518) ----------------------------------------------------
void __fastcall sub_1407E9518(unsigned __int16 a1, __int64 a2, _DWORD* a3)
{
	if ((*(_BYTE*)(a2 + 24) & 0x40) == 0 || *(_QWORD*)(a2 + 16))
	{
		if ((unsigned __int16)sub_1407F1240(a1, a2) == 0xFFFF)
			*a3 = -1;
		else
			++* a3;
	}
	else
	{
		++* a3;
	}
}

