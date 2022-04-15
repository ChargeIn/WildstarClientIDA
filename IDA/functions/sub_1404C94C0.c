#include "../winhttp.h"

//----- (00000001404C94C0) ----------------------------------------------------
__int64 __fastcall sub_1404C94C0(__int64 a1, int a2, unsigned int a3)
{
	__int64 v3; // rcx

	if (HIBYTE(a3) > *(_DWORD*)(qword_140C659F8 + 216))
		return 2147500037i64;
	v3 = *(_QWORD*)(qword_140C659F8 + 112);
	if (!v3)
		return 2147500037i64;
	while (*(_DWORD*)(v3 + 152) != HIBYTE(a3))
	{
		v3 = *(_QWORD*)(v3 + 8);
		if (!v3)
			return 2147500037i64;
	}
	if (*(_DWORD*)(v3 + 20) != a2)
		return 2147500037i64;
	sub_1404C7770(v3, a3);
	return 0i64;
}
// 1404C9500: conditional instruction was optimized away because rcx.8!=0
// 140C659F8: using guessed type __int64 qword_140C659F8;

