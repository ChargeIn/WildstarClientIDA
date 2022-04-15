#include "../winhttp.h"

//----- (0000000140482640) ----------------------------------------------------
void __fastcall sub_140482640(__m128* a1, __m128** a2, __int64 a3, __m128* a4)
{
	__m128** v5; // rbx
	unsigned __int64 v7; // rax

	v5 = a2;
	if (!a1[5].m128_u64[1])
	{
		if (*a2)
		{
			do
			{
				if ((int)sub_1403E84D0(*v5, a1, a4) >= 0)
					break;
				v5 = (__m128**) & (*v5)[6];
			} while (*v5);
		}
		a1[5].m128_u64[1] = (unsigned __int64)v5;
		a1[6].m128_u64[0] = (unsigned __int64)*v5;
		*v5 = a1;
		v7 = a1[6].m128_u64[0];
		if (v7)
			*(_QWORD*)(v7 + 88) = a1 + 6;
	}
}

