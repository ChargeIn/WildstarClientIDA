#include "../winhttp.h"

//----- (0000000140554970) ----------------------------------------------------
void __fastcall sub_140554970(__int64 a1, int a2)
{
	switch (a2)
	{
	case 0:
	case 4:
	case 5:
	case 6:
	case 7:
		sub_140554DD0(a1, **(_DWORD**)(a1 + 8));
		break;
	case 1:
		sub_1405549F0(a1, **(_DWORD**)(a1 + 8));
		break;
	case 2:
		sub_140554B30(a1, **(_DWORD**)(a1 + 8));
		break;
	case 3:
		sub_140554C30(a1, **(_DWORD**)(a1 + 8));
		break;
	default:
		return;
	}
}

