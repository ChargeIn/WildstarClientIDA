#include "../winhttp.h"

//----- (0000000140021F40) ----------------------------------------------------
void __fastcall sub_140021F40(__int64 a1, __int64 a2, __int64 a3)
{
	int* v5; // rax
	__int64 v6; // r8
	__int64 v7; // rdx

	if (a1)
	{
		if (a3)
		{
			v5 = (int*)sub_1401EFEE0(*(_DWORD*)(a3 + 224));
			v6 = *(_QWORD*)(a3 + 200);
			v7 = *(_QWORD*)(a3 + 552);
			*(_QWORD*)(a3 + 560) = a1;
			sub_140023400(a3, v7, v6, v5[1], v5[2], v5[3]);
		}
	}
}

