#include "../winhttp.h"

//----- (00000001406D0210) ----------------------------------------------------
__int64 __fastcall sub_1406D0210(_QWORD* a1)
{
	__int64 v2; // rbx
	int v3; // eax

	v2 = sub_1406CFB40(a1);
	if (v2)
	{
		v3 = sub_140056D60(a1, 2u);
		*(_QWORD*)(v2 + 2208) = 0i64;
		*(_DWORD*)(v2 + 2236) = 0;
		*(_DWORD*)(v2 + 2248) = 0;
		*(_DWORD*)(v2 + 2260) = 0;
		*(_QWORD*)(v2 + 2240) = 0i64;
		*(_QWORD*)(v2 + 2216) = 15i64;
		*(_DWORD*)(v2 + 2252) = 1;
		*(_DWORD*)(v2 + 2232) = v3;
		sub_1400D42F0(v2, 1, 0, 4.0);
	}
	return 0i64;
}

