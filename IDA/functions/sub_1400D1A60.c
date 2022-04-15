#include "../winhttp.h"

//----- (00000001400D1A60) ----------------------------------------------------
char __fastcall sub_1400D1A60(__int64 a1)
{
	if (*(float*)(a1 + 648) <= 0.0)
		return 0;
	while (1)
	{
		a1 = *(_QWORD*)(a1 + 16);
		if (!a1)
			break;
		if (*(float*)(a1 + 648) <= 0.0)
			return 0;
	}
	return 1;
}

