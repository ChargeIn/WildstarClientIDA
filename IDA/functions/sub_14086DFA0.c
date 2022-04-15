#include "../winhttp.h"

//----- (000000014086DFA0) ----------------------------------------------------
__int64 __fastcall sub_14086DFA0(__int64 a1, int a2)
{
	char v3; // cl
	__int64 result; // rax

	v3 = *(_BYTE*)(a1 + 478);
	result = v3 & 0xF;
	if ((_DWORD)result != a2)
	{
		*(_BYTE*)(a1 + 478) = v3 ^ (a2 ^ v3) & 0xF;
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

