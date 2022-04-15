#include "../winhttp.h"

//----- (00000001400CABD0) ----------------------------------------------------
char __fastcall sub_1400CABD0(__int64 a1, int a2)
{
	int v2; // edi
	int v3; // ebx
	int v5; // eax
	__int64 v6; // rcx

	v2 = 0;
	v3 = a2;
	if (a2 < 0)
		v3 = 0;
	LOBYTE(v5) = sub_1400C6E00(a1);
	if ((_BYTE)v5)
	{
		v6 = *(_QWORD*)(a1 + 472);
		v5 = *(_DWORD*)(v6 + 1300);
		*(_DWORD*)(v6 + 1296) = v3;
		if (v5 < v3)
			v3 = v5;
		if (v3 > 0)
			v2 = v3;
		*(_BYTE*)(v6 + 1392) |= 0x10u;
		*(_DWORD*)(v6 + 1300) = v2;
	}
	return v5;
}

