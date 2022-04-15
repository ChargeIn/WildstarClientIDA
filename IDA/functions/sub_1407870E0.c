#include "../winhttp.h"

//----- (00000001407870E0) ----------------------------------------------------
__int64 __fastcall sub_1407870E0(__int64 a1, int a2)
{
	unsigned int v3; // ecx
	int v6; // r11d
	__int64 v7; // rdx
	__int64 v8; // r10
	__int64 v9; // rcx
	__int64 v10; // r11

	v3 = *(_DWORD*)(a1 + 4);
	if (v3 == 1)
		return *(unsigned int*)(*(_QWORD*)(a1 + 24) + 4i64 * *(unsigned int*)(a1 + 8));
	v6 = *(_DWORD*)a1 - 1;
	v7 = v6 & (unsigned int)(*(_DWORD*)(a1 + 8) + 1);
	if (v3 > 2)
	{
		v8 = *(_QWORD*)(a1 + 16);
		do
		{
			if (a2 - *(_DWORD*)(v8 + 4 * v7) < 0)
				break;
			--* (_DWORD*)(a1 + 4);
			*(_DWORD*)(a1 + 8) = v7;
			v7 = v6 & (unsigned int)(v7 + 1);
		} while (*(_DWORD*)(a1 + 4) > 2u);
	}
	v9 = *(unsigned int*)(a1 + 8);
	v10 = *(_QWORD*)(a1 + 16);
	if (a2 - *(_DWORD*)(v10 + 4 * v9) < 0 || a2 - *(_DWORD*)(v10 + 4 * v7) < 0)
		return *(unsigned int*)(*(_QWORD*)(a1 + 24) + 4 * v9);
	else
		return *(unsigned int*)(*(_QWORD*)(a1 + 24) + 4 * v7);
}

