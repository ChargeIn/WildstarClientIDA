#include "../winhttp.h"

//----- (00000001401556C0) ----------------------------------------------------
HKL __fastcall sub_1401556C0(__int64 a1)
{
	HKL v1; // rbx
	HKL result; // rax

	v1 = *(HKL*)(a1 + 24);
	result = GetKeyboardLayout(0);
	*(_QWORD*)(a1 + 24) = result;
	if (v1 != result)
	{
		switch ((unsigned __int16)result & 0x3FF)
		{
		case 4:
			*(_DWORD*)(a1 + 40) = 1;
			if ((unsigned __int16)result >> 10 == 1)
			{
				result = (HKL)off_140C2CA18;
				*(_QWORD*)(a1 + 32) = off_140C2CA18;
			}
			else
			{
				if ((unsigned __int16)result >> 10 != 2)
					goto LABEL_5;
				result = (HKL)off_140C2CA10;
				*(_DWORD*)(a1 + 40) = 0;
				*(_QWORD*)(a1 + 32) = result;
			}
			break;
		case 17:
			result = (HKL)off_140C2CA28;
			*(_DWORD*)(a1 + 40) = 1;
			*(_QWORD*)(a1 + 32) = result;
			break;
		case 18:
			result = (HKL)off_140C2CA20;
			*(_DWORD*)(a1 + 40) = 0;
			*(_QWORD*)(a1 + 32) = result;
			break;
		default:
		LABEL_5:
			result = (HKL)off_140C2CA08;
			*(_QWORD*)(a1 + 32) = off_140C2CA08;
			return result;
		}
	}
	return result;
}
// 140C2CA08: using guessed type void *off_140C2CA08;
// 140C2CA10: using guessed type void *off_140C2CA10;
// 140C2CA18: using guessed type void *off_140C2CA18;
// 140C2CA20: using guessed type void *off_140C2CA20;
// 140C2CA28: using guessed type void *off_140C2CA28;

