#include "../winhttp.h"

//----- (00000001401AA420) ----------------------------------------------------
__int64 __fastcall sub_1401AA420(__int64 a1, int* a2, unsigned int a3)
{
	unsigned int v3; // eax
	unsigned int v6; // edi
	int* v8; // rdx
	int v9; // ecx
	int v10; // eax

	v3 = *(_DWORD*)(a1 + 8);
	v6 = v3;
	if (v3 > a3)
		v6 = a3;
	if (!v6)
		return 0i64;
	v8 = *(int**)a1;
	*(_DWORD*)(a1 + 8) = v3 - v6;
	sub_1407DB590(a2, v8, v6);
	v9 = *(_DWORD*)(*(_QWORD*)(a1 + 40) + 44i64);
	if (v9 == 1)
	{
		v10 = sub_1401CD3E0(*(_DWORD*)(a1 + 76), (unsigned __int8*)a2, v6);
	LABEL_11:
		*(_DWORD*)(a1 + 76) = v10;
		goto LABEL_12;
	}
	if (v9 == 2)
	{
		if (a2)
			v10 = sub_1401CD6D0(*(_DWORD*)(a1 + 76), (char*)a2, v6);
		else
			v10 = 0;
		goto LABEL_11;
	}
LABEL_12:
	*(_QWORD*)a1 += v6;
	*(_DWORD*)(a1 + 12) += v6;
	return v6;
}

