#include "../winhttp.h"

//----- (000000014054F1D0) ----------------------------------------------------
void __fastcall sub_14054F1D0(__int64 a1)
{
	char v2; // [rsp+30h] [rbp+8h] BYREF

	if (*(_DWORD*)(a1 + 12))
	{
		if (!*(_DWORD*)(a1 + 16))
		{
			v2 = 0;
			sub_1403F4900(qword_140C65898, 0xC0u, (__int64)&v2);
			*(_DWORD*)(a1 + 16) = 1;
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

