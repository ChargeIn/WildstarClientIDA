#include "../winhttp.h"

//----- (000000014053B5C0) ----------------------------------------------------
__int64 __fastcall sub_14053B5C0(__int64 a1, int a2, int a3)
{
	__int64 result; // rax

	if (a3 < 0)
		a3 = *(_DWORD*)(a1 + 29820);
	if (a2)
	{
		if (a3 > 0)
		{
			result = sub_1400C3230(a1 + 29736, 0.0, 1.0, 1000.0 / (float)a3);
			goto LABEL_15;
		}
		if (*(float*)(a1 + 29760) != 1.0 || (float)0.0 != *(float*)(a1 + 29764))
		{
			*(_QWORD*)(a1 + 29760) = 1065353216i64;
			*(_DWORD*)(a1 + 29752) = 1065353216;
		LABEL_14:
			result = (unsigned int)dword_140C636A8;
			*(_DWORD*)(a1 + 29744) = dword_140C636A8;
		}
	}
	else
	{
		if (a3 > 0)
		{
			result = sub_1400C3230(a1 + 29736, 1.0, 0.0, 1000.0 / (float)a3);
			goto LABEL_15;
		}
		if (*(float*)(a1 + 29760) != 0.0 || (float)0.0 != *(float*)(a1 + 29764))
		{
			*(_QWORD*)(a1 + 29760) = 0i64;
			*(_DWORD*)(a1 + 29752) = 0;
			goto LABEL_14;
		}
	}
LABEL_15:
	*(_DWORD*)(a1 + 29768) = 1;
	*(_DWORD*)(a1 + 29772) = 1065353216;
	*(_DWORD*)(a1 + 29776) = a2;
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;

