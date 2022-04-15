#include "../winhttp.h"

//----- (00000001408F5C90) ----------------------------------------------------
__int64 __fastcall sub_1408F5C90(__int64 a1, float a2)
{
	float v3; // xmm9_4
	__int64 result; // rax
	__int64 v5; // rbx
	__int64 v6; // rsi
	__int64 v7; // rdi
	__int64 v8; // rbp
	double v9; // xmm0_8
	float v10; // xmm0_4

	v3 = *(float*)(*(_QWORD*)(a1 + 8) + 52i64);
	result = *(unsigned int*)(a1 + 196);
	if ((_DWORD)result)
	{
		v5 = 0i64;
		v6 = (unsigned int)result;
		v7 = 0i64;
		do
		{
			v8 = *(_QWORD*)(a1 + 24);
			v9 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), (float)(v3 + *(float*)(v5 + v8 + 24)) + a2);
			result = *(_QWORD*)(a1 + 16);
			v10 = *(float*)&v9 * *(float*)(v7 + result + 12);
			if (v10 < 50.0)
			{
				if (v10 <= 0.1)
					v10 = 0.1;
			}
			else
			{
				v10 = 50.0;
			}
			*(float*)(v5 + v8 + 12) = v10;
			v5 += 32i64;
			v7 += 20i64;
			--v6;
		} while (v6);
	}
	return result;
}

