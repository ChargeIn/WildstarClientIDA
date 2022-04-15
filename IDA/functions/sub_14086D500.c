#include "../winhttp.h"

//----- (000000014086D500) ----------------------------------------------------
char __fastcall sub_14086D500(__int64 a1, char a2)
{
	unsigned __int8 v3; // cl
	char result; // al

	v3 = *(_BYTE*)(a1 + 479);
	result = v3 >> 7;
	if (v3 >> 7 != a2)
	{
		*(_BYTE*)(a1 + 479) = (a2 << 7) | v3 & 0x7F;
		result = sub_14086C9F0(a1);
		if (*(_BYTE*)(a1 + 486))
		{
			if (qword_140C61B68)
			{
				sub_14082E400((__int64)qword_140C61B68, (void**)a1);
				sub_14082E5B0((__int64)qword_140C61B68, a1);
			}
			return sub_1408551C0((__int64*)a1, 0i64, 0, 0, 4);
		}
	}
	return result;
}

