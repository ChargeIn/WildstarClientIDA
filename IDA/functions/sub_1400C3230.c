#include "../winhttp.h"

//----- (00000001400C3230) ----------------------------------------------------
__int64 __fastcall sub_1400C3230(__int64 a1, float a2, float a3, float a4)
{
	__int64 result; // rax
	float v6; // [rsp+58h] [rbp+10h] BYREF

	v6 = a2;
	result = (*(__int64(__fastcall**)(__int64, float*))(*(_QWORD*)a1 + 8i64))(a1, &v6);
	if (a3 != *(float*)(a1 + 24) || fabs(a4) != *(float*)(a1 + 28))
	{
		*(float*)(a1 + 24) = a3;
		if (a4 == 0.0)
		{
			*(float*)(a1 + 16) = a3;
		}
		else if (a3 != *(float*)(a1 + 16))
		{
			*(float*)(a1 + 28) = fabs(a4);
			goto LABEL_6;
		}
		*(_DWORD*)(a1 + 28) = 0;
	LABEL_6:
		result = (unsigned int)dword_140C636A8;
		*(_DWORD*)(a1 + 8) = dword_140C636A8;
	}
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;

