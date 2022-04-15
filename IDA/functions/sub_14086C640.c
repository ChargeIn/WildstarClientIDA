#include "../winhttp.h"

//----- (000000014086C640) ----------------------------------------------------
__int64 __fastcall sub_14086C640(__int64 a1, __int16 a2)
{
	__int64 result; // rax

	if (*(_WORD*)(a1 + 476) != a2)
	{
		*(_WORD*)(a1 + 476) = a2;
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

