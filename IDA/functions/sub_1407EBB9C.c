#include "../winhttp.h"

//----- (00000001407EBB9C) ----------------------------------------------------
__int64 __fastcall sub_1407EBB9C(__int64 a1, unsigned __int64* a2, int** a3, int* a4, _DWORD* a5)
{
	int* v8; // rax
	char* v10; // rax

	if (a1 == *a2)
	{
		if (*a3 == a4)
		{
			v8 = (int*)sub_1407E2BB0(*a2, 4ui64);
			*a3 = v8;
			if (!v8)
				return 0i64;
			*a5 = 1;
			sub_1407DB590(*a3, a4, 2 * *a2);
			*a2 *= 2i64;
		}
		else
		{
			v10 = sub_1407E2D30(*a3, *a2, 4ui64);
			if (!v10)
				return 0i64;
			*a3 = (int*)v10;
			*a2 *= 2i64;
		}
	}
	return 1i64;
}

