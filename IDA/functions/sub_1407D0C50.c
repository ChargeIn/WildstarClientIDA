#include "../winhttp.h"

//----- (00000001407D0C50) ----------------------------------------------------
__int64 __fastcall sub_1407D0C50(__int64 a1)
{
	unsigned __int64 i; // rdi
	__int64 v3; // rax
	__int64* v4; // rcx
	__int64 v5; // rbx

	for (i = 0i64; i < *(_QWORD*)(a1 + 8); ++i)
	{
		v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * i);
		if (v3)
		{
			do
			{
				v4 = *(__int64**)(v3 + 24);
				v5 = *(_QWORD*)(v3 + 8);
				if (v4)
					sub_14034DC20(v4);
				v3 = v5;
			} while (v5);
		}
	}
	return 1i64;
}

