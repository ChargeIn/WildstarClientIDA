#include "../winhttp.h"

//----- (00000001405B8BD0) ----------------------------------------------------
__int64 __fastcall sub_1405B8BD0(__m128* a1, unsigned int a2, __m128* a3, unsigned int a4, float a5)
{
	__int64 result; // rax
	unsigned int* v9; // rbx
	__int64 v10; // rdi

	result = sub_140249780(a4);
	if (result && a2 >= a1[87].m128_i32[2] + *(_DWORD*)(result + 4))
	{
		if ((float)((float)((float)((float)(a1[300].m128_f32[1] * a1[87].m128_f32[0]) * 2.0) + a1[286].m128_f32[1]) + 0.5) >= a1[381].m128_f32[0])
		{
			v9 = (unsigned int*)(result + 8);
			v10 = 2i64;
			do
			{
				result = sub_14024D740(*v9);
				if (result)
					result = sub_1405B8CB0(a1, a3, result, a5);
				++v9;
				--v10;
			} while (v10);
		}
		a1[87].m128_i32[2] = a2;
	}
	return result;
}

