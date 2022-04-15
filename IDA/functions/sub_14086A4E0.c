#include "../winhttp.h"

//----- (000000014086A4E0) ----------------------------------------------------
__int64 __fastcall sub_14086A4E0(_QWORD* a1, __int64 a2)
{
	__int64* v5; // rax
	int v6; // ecx
	__int64 j; // rdx
	__int64* v8; // rax
	int v9; // ecx
	__int64 i; // rdx

	switch (*(_DWORD*)a2)
	{
	case 0:
		goto LABEL_5;
	case 1:
		v8 = (__int64*)a1[45];
		v9 = *(_DWORD*)(a2 + 16);
		for (i = *(_QWORD*)(a2 + 8); v8; v8 = (__int64*)*v8)
		{
			if ((!i || i == v8[5]) && (!v9 || *((_DWORD*)v8 + 8) == v9) && *((_DWORD*)v8 + 30) != 1)
				*((_DWORD*)v8 + 30) = 1;
		}
		break;
	case 2:
		v5 = (__int64*)a1[45];
		v6 = *(_DWORD*)(a2 + 16);
		for (j = *(_QWORD*)(a2 + 8); v5; v5 = (__int64*)*v5)
		{
			if ((!j || j == v5[5]) && (!v6 || *((_DWORD*)v5 + 8) == v6))
			{
				if (*((_DWORD*)v5 + 30))
					*((_DWORD*)v5 + 30) = 0;
			}
		}
		break;
	case 3:
	LABEL_5:
		sub_14086BB50((__int64)a1, *(_QWORD*)(a2 + 8), *(_DWORD*)(a2 + 16));
		break;
	}
	return sub_140869430(a1, a2);
}

