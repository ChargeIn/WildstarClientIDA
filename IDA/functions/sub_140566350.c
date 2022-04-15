#include "../winhttp.h"

//----- (0000000140566350) ----------------------------------------------------
int** __fastcall sub_140566350(__int64 a1, int** a2, _DWORD* a3)
{
	__int64 v3; // r10
	__int64 v6; // r8
	unsigned int v8; // eax
	unsigned int v9; // ecx
	int v10; // eax
	int v11; // ecx
	int v12; // eax
	int v13; // ecx

	v3 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD*)(v3 + 8);
	while (v6)
	{
		v3 = v6;
		if (*a3)
		{
			if (!*(_DWORD*)(v6 + 32))
				goto LABEL_14;
		}
		else if (*(_DWORD*)(v6 + 32))
		{
			v6 = *(_QWORD*)(v6 + 16);
			continue;
		}
		v8 = a3[1];
		v9 = *(_DWORD*)(v6 + 36);
		if (v8 >= v9)
		{
			if (v8 > v9
				|| (v10 = a3[2], v11 = *(_DWORD*)(v6 + 40), v10 >= v11)
				&& (v10 > v11
					|| (v12 = a3[3], v13 = *(_DWORD*)(v6 + 44), v12 >= v13) && (v12 > v13 || a3[4] >= *(_DWORD*)(v6 + 48))))
			{
			LABEL_14:
				v6 = *(_QWORD*)(v6 + 24);
				continue;
			}
		}
		v6 = *(_QWORD*)(v6 + 16);
	}
	sub_140566EB0(a1, a2, v6, v3, (__int64)a3);
	return a2;
}

