#include "../winhttp.h"

//----- (0000000140332870) ----------------------------------------------------
__int64 __fastcall sub_140332870(_QWORD* a1, unsigned __int16 a2, int* a3)
{
	__int64 v4; // rbx
	__int64 v6; // rax

	if ((unsigned __int64)a2 >= a1[22])
		return 2i64;
	v4 = *(_QWORD*)(a1[21] + 8i64 * a2);
	if (!v4)
		return 2i64;
	if ((unsigned int)sub_1403365E0(v4 + 96, a3, (int*)((char*)a3 + (unsigned int)*a3)))
		return 4i64;
	if (!*(_QWORD*)(v4 + 776))
	{
		*(_QWORD*)(v4 + 776) = a1 + 30;
		*(_QWORD*)(v4 + 784) = a1[30];
		a1[30] = v4;
		v6 = *(_QWORD*)(v4 + 784);
		if (v6)
			*(_QWORD*)(v6 + 776) = v4 + 784;
	}
	return 0i64;
}

