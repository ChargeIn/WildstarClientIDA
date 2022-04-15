#include "../winhttp.h"

//----- (00000001408966B0) ----------------------------------------------------
__int64 __fastcall sub_1408966B0(__int64 a1)
{
	unsigned int i; // edi
	unsigned int* v3; // rax

	for (i = 0; i < (unsigned int)((*(_QWORD*)(a1 + 232) - *(_QWORD*)(a1 + 224)) / 104i64); ++i)
	{
		v3 = *(unsigned int**)(104i64 * i + *(_QWORD*)(a1 + 224) + 96);
		if (v3)
			sub_1408552B0(*v3);
	}
	return sub_140891570(a1);
}

