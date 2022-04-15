#include "../winhttp.h"

//----- (00000001403AC780) ----------------------------------------------------
__int64 __fastcall sub_1403AC780(__int64 a1, int* a2)
{
	int v3; // ecx
	__int64 v4; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx

	v3 = *a2;
	if (*a2)
	{
		switch (v3)
		{
		case 1:
			v6 = (unsigned int)a2[1];
			if ((unsigned int)v6 < *(_DWORD*)(a1 + 28))
				return *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v6);
			break;
		case 2:
			v7 = (unsigned int)a2[1];
			if ((unsigned int)v7 < *(_DWORD*)(a1 + 52))
				return *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v7);
			break;
		case 10:
			v8 = (unsigned int)a2[1];
			if ((unsigned int)v8 < *(_DWORD*)(a1 + 76))
				return *(_QWORD*)(*(_QWORD*)(a1 + 88) + 8 * v8);
			break;
		case 5:
			v9 = (unsigned int)a2[1];
			if ((unsigned int)v9 < *(_DWORD*)(a1 + 100))
				return *(_QWORD*)(*(_QWORD*)(a1 + 112) + 8 * v9);
			break;
		case 8:
			v10 = (unsigned int)a2[1];
			if ((unsigned int)v10 < *(_DWORD*)(a1 + 124))
				return *(_QWORD*)(*(_QWORD*)(a1 + 136) + 8 * v10);
			break;
		case 9:
			v11 = (unsigned int)a2[1];
			if ((unsigned int)v11 < *(_DWORD*)(a1 + 148))
				return *(_QWORD*)(*(_QWORD*)(a1 + 160) + 8 * v11);
			break;
		}
	}
	else
	{
		v4 = (unsigned int)a2[1];
		if ((unsigned int)v4 < *(_DWORD*)(a1 + 4))
			return *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v4);
	}
	return 0i64;
}

