#include "../winhttp.h"

//----- (000000014079FD90) ----------------------------------------------------
__int64 __fastcall sub_14079FD90(_QWORD* a1, __int64 a2)
{
	a1[1] = *(_QWORD*)a2;
	a1[2] = *(_QWORD*)(a2 + 8);
	a1[3] = *(_QWORD*)(a2 + 16);
	a1[4] = *(_QWORD*)(a2 + 24);
	a1[5] = *(_QWORD*)(a2 + 32);
	a1[6] = *(_QWORD*)(a2 + 40);
	a1[7] = *(_QWORD*)(a2 + 48);
	a1[8] = *(_QWORD*)(a2 + 56);
	a1[9] = *(_QWORD*)(a2 + 64);
	a1[10] = *(_QWORD*)(a2 + 72);
	a1[11] = *(_QWORD*)(a2 + 80);
	a1[12] = *(_QWORD*)(a2 + 88);
	a1[13] = *(_QWORD*)(a2 + 96);
	a1[4] = sub_14079FCE0(*(__int16**)(a2 + 24));
	a1[3] = sub_14079FCE0(*(__int16**)(a2 + 16));
	sub_14079FF40(a1 + 15, *(unsigned int*)(a2 + 88));
	sub_1407DB590((int*)a1[15], *(int**)(a2 + 96), 96i64 * *(unsigned int*)(a2 + 88));
	a1[13] = a1[15];
	if (a1 != (_QWORD*)-112i64)
		sub_1401E82F0(a1 + 14, *(float*)(a2 + 64));
	return 0i64;
}

