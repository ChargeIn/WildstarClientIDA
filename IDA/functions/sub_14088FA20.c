#include "../winhttp.h"

//----- (000000014088FA20) ----------------------------------------------------
char __fastcall sub_14088FA20(__int64 a1)
{
	char v1; // al
	__int64* v2; // rax

	v1 = *(_BYTE*)(a1 + 98);
	if ((v1 & 1) != 0 || (v1 & 0xF) == 0)
	{
		v2 = *(__int64**)(a1 + 128);
		if (!v2)
			return 1;
		while ((*((_BYTE*)v2 + 60) & 4) == 0)
		{
			v2 = (__int64*)*v2;
			if (!v2)
				return 1;
		}
	}
	return 0;
}

