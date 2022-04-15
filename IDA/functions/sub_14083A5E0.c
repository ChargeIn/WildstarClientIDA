#include "../winhttp.h"

//----- (000000014083A5E0) ----------------------------------------------------
__int64 __fastcall sub_14083A5E0(__int64** a1, int a2)
{
	__int64* i; // rbx
	__int64 result; // rax

	for (i = *a1; i != a1[1]; ++i)
	{
		if (*(_DWORD*)*i == 1)
			result = sub_140867EC0(*i, a2);
	}
	return result;
}

