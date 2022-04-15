#include "../winhttp.h"

//----- (0000000140611DD0) ----------------------------------------------------
void __fastcall sub_140611DD0(__int64 a1, int* a2)
{
	unsigned __int64 v2; // r9
	unsigned int v3; // r8d
	int v5; // ebx
	__int64 v6; // rax
	__int64 v7; // rdx

	v2 = *(_QWORD*)(a1 + 16);
	v3 = 0;
	if (v2)
	{
		v5 = *a2;
		v6 = 0i64;
		while (1)
		{
			v7 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v6);
			if (*(_DWORD*)(v7 + 4) == v5 && *(_DWORD*)(v7 + 8) == a2[1])
				break;
			v6 = ++v3;
			if (v3 >= v2)
				return;
		}
		*(_BYTE*)(a1 + 24) = 1;
		*(_QWORD*)a1 = v3;
	}
}

