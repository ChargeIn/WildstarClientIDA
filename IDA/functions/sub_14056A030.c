#include "../winhttp.h"

//----- (000000014056A030) ----------------------------------------------------
__int64 __fastcall sub_14056A030(__int64 a1)
{
	__int64 v1; // rax
	unsigned int v2; // edx

	v1 = *(_QWORD*)(a1 + 80);
	if (!v1)
		v1 = *(_QWORD*)(a1 + 64) + 156i64;
	v2 = *(_DWORD*)(v1 + 128);
	if (v2)
		return sub_1403ACD90(qword_140C65B70, v2, *(_QWORD*)(qword_140C65898 + 120));
	else
		return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

