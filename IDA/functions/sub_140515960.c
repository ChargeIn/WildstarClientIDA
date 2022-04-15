#include "../winhttp.h"

//----- (0000000140515960) ----------------------------------------------------
__int64 __fastcall sub_140515960(__int64 a1)
{
	__int64 v1; // rbp
	unsigned int v2; // ebx
	unsigned int v4; // edi
	__int64 v5; // rax
	int* v6; // rcx
	int v8; // eax
	int v9; // ecx
	int v10; // eax

	v1 = qword_140C65898;
	v2 = 0;
	v4 = 0;
	while (1)
	{
		v5 = sub_1403AC780(v1 + 160, (int*)(a1 + 8 * (v4 + 2i64)));
		if (!v5)
			goto LABEL_22;
		v6 = *(int**)(v5 + 72);
		if (!(v6 ? *(_QWORD*)(v5 + 72) : *(_QWORD*)(v5 + 64) + 8i64))
			goto LABEL_22;
		if (!v6)
			v6 = (int*)(*(_QWORD*)(v5 + 64) + 8i64);
		v8 = *v6;
		v9 = 1;
		if (v8 > 1)
			v9 = v8;
		v10 = 7;
		if (v9 < 7)
			v10 = v9;
		if (v10 == 1)
		{
			if (v2 < 0x64)
				v2 = 100;
			goto LABEL_22;
		}
		if (v10 > 3)
			return 1000;
		if (v2 < 0xFA)
			v2 = 250;
	LABEL_22:
		if (++v4 >= 4)
			return v2;
	}
}
// 1405159F2: conditional instruction was optimized away because eax.4 is in (2..7)
// 1405159FC: conditional instruction was optimized away because eax.4 is in (4..7)
// 140515A05: conditional instruction was optimized away because ebx.4 is in (==0|==64|==FA)
// 140C65898: using guessed type __int64 qword_140C65898;

