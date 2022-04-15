#include "../winhttp.h"

//----- (000000014049ECF0) ----------------------------------------------------
__int64 __fastcall sub_14049ECF0(__int64 a1, __int64 a2, int a3, int a4)
{
	__int64 v4; // rax
	unsigned int v5; // ecx
	int v6; // eax
	int v7; // r8d

	v4 = *(_QWORD*)(a2 + 24);
	v5 = 0;
	if (v4)
		v6 = *(_DWORD*)(v4 + 32);
	else
		v6 = 0;
	v7 = a3 - 1;
	if (!v7)
		return v6 == a4;
	if (v7 == 1)
		LOBYTE(v5) = v6 != a4;
	return v5;
}

