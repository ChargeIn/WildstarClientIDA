#include "../winhttp.h"

//----- (00000001406D7AB0) ----------------------------------------------------
__int64 __fastcall sub_1406D7AB0(__int64 a1)
{
	__int64 v1; // rax
	unsigned int v2; // ebx
	__int64 v3; // r8
	unsigned int v4; // edx

	v1 = *(_QWORD*)(a1 + 80);
	v2 = 0;
	v3 = 0i64;
	if (!v1)
		v1 = *(_QWORD*)(a1 + 64) + 156i64;
	v4 = *(_DWORD*)(v1 + 128);
	if (v4)
		v3 = sub_1403ACD90(qword_140C65B70, v4, *(_QWORD*)(qword_140C65898 + 120));
	LOBYTE(v2) = v3 != 0;
	return v2;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

