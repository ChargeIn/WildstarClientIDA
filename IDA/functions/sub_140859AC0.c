#include "../winhttp.h"

//----- (0000000140859AC0) ----------------------------------------------------
float* __fastcall sub_140859AC0(__int64 a1)
{
	float* result; // rax

	result = *(float**)(a1 + 224);
	if (result)
	{
		while (result[10] >= -0.0099999998)
		{
			result = *(float**)result;
			if (!result)
				goto LABEL_4;
		}
	}
	else
	{
	LABEL_4:
		for (result = *(float**)(a1 + 272); result; result = *(float**)result)
		{
			if (result[10] < -0.0099999998)
				break;
		}
	}
	return result;
}

