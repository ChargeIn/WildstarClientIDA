#include "../winhttp.h"

//----- (00000001407E1230) ----------------------------------------------------
__int64 __fastcall sub_1407E1230(int a1)
{
	unsigned int v2; // esi
	unsigned int v3; // edi
	int i; // ebx
	__int64 v5; // rdx
	__int64 v6; // rdx
	__int64 v7; // rcx

	v2 = 0;
	v3 = 0;
	sub_1407E2340(1);
	for (i = 0; i < dword_140DC5330; ++i)
	{
		v5 = *((_QWORD*)lpMem + i);
		if (v5 && (*(_BYTE*)(v5 + 24) & 0x83) != 0)
		{
			sub_1407DE010(i, v5);
			v7 = *((_QWORD*)lpMem + i);
			if ((*(_BYTE*)(v7 + 24) & 0x83) != 0)
			{
				if (a1 == 1)
				{
					if ((unsigned int)sub_1407E1118(v7, v6) != -1)
						++v2;
				}
				else if (!a1 && (*(_BYTE*)(v7 + 24) & 2) != 0 && (unsigned int)sub_1407E1118(v7, v6) == -1)
				{
					v3 = -1;
				}
			}
			sub_1407DE094(i, *((_QWORD*)lpMem + i));
		}
	}
	sub_1407E2528(1);
	if (a1 == 1)
		return v2;
	return v3;
}
// 1407E12A3: variable 'v6' is possibly undefined
// 1407E1118: using guessed type __int64 __fastcall sub_1407E1118(_QWORD, _QWORD);
// 140DC5330: using guessed type int dword_140DC5330;

