#include "../winhttp.h"

//----- (000000014086C740) ----------------------------------------------------
char __fastcall sub_14086C740(__int64 a1, char a2)
{
	char v3; // cl
	char result; // al

	v3 = *(_BYTE*)(a1 + 479);
	result = (v3 & 0x40) != 0;
	if (result != a2)
	{
		*(_BYTE*)(a1 + 479) = v3 ^ (v3 ^ (a2 << 6)) & 0x40;
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

