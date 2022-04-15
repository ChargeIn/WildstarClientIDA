#include "../winhttp.h"

//----- (000000014087A420) ----------------------------------------------------
void __fastcall sub_14087A420(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v3; // rax
	int v4; // ecx
	int i; // eax

	v1 = *(_QWORD*)(a1 + 104);
	if (v1)
	{
		v3 = *(_QWORD*)(a1 + 24);
		v4 = 0;
		for (i = *(_DWORD*)(v3 + 196) & 0x3FFFF; i; i &= i - 1)
			++v4;
		sub_140833130(v4 << 11, v1);
		*(_QWORD*)(a1 + 104) = 0i64;
	}
}

