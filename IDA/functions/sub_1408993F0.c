#include "../winhttp.h"

//----- (00000001408993F0) ----------------------------------------------------
char __fastcall sub_1408993F0(__int64 a1)
{
	if (**(_QWORD**)(a1 + 176))
		return 1;
	while (1)
	{
		a1 = *(_QWORD*)(a1 + 16);
		if (!a1)
			break;
		if (**(_QWORD**)(a1 + 176))
			return 1;
	}
	return 0;
}

