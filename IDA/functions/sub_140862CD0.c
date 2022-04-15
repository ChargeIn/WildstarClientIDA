#include "../winhttp.h"

//----- (0000000140862CD0) ----------------------------------------------------
__int64 __fastcall sub_140862CD0(__int64 a1, __int64 a2, char a3, __int64 a4)
{
	bool v8; // zf
	__int64 result; // rax

	if (*(_WORD*)(a2 + 18))
	{
		if (!*(_BYTE*)(a1 + 1072))
			sub_1408634C0(a1);
		v8 = *(_DWORD*)(a1 + 1064) == 4;
		*(_DWORD*)(a1 + 860) = 45;
		if (v8)
			*(_DWORD*)(a1 + 1064) = 1;
		sub_140863BC0(a2);
		*(_WORD*)(a2 + 18) = *(_WORD*)(a2 + 16);
		return sub_140863260((unsigned __int16*)(a1 + 840), a2, a1 + 848, a3, a4);
	}
	return result;
}

