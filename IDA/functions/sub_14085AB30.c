#include "../winhttp.h"

//----- (000000014085AB30) ----------------------------------------------------
char __fastcall sub_14085AB30(__int64 a1, int a2, _QWORD* a3)
{
	__int64 v5; // rbx

	v5 = a1;
	if (sub_140851B30(a1, a2, a3))
		return 1;
	while (1)
	{
		v5 = *(_QWORD*)(v5 + 72);
		if (!v5)
			break;
		if (sub_140851B30(v5, a2, a3))
			return 1;
	}
	return 0;
}

