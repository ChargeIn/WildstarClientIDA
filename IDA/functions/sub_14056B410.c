#include "../winhttp.h"

//----- (000000014056B410) ----------------------------------------------------
__int64 __fastcall sub_14056B410(_QWORD** a1)
{
	__int64 result; // rax

	if (((unsigned int(__fastcall*)(_QWORD**))(*a1)[7])(a1))
		return 4i64;
	switch (*(_DWORD*)(*a1[6] + 12i64))
	{
	case 0:
		result = (unsigned int)(((unsigned int(__fastcall*)(_QWORD**))(*a1)[27])(a1) != 0) + 2;
		break;
	case 2:
	case 0xE:
		result = (2 * (((__int64(__fastcall*)(_QWORD**))(*a1)[11])(a1) & 1)) | 1;
		break;
	case 4:
	case 5:
	case 6:
	case 7:
		result = ((__int64(__fastcall*)(_QWORD**))(*a1)[11])(a1) & 1 | 2;
		break;
	case 0xD:
		result = (((unsigned int(__fastcall*)(_QWORD**))(*a1)[11])(a1) | 0xBFFFFFFF) >> 30;
		break;
	case 0x12:
		result = (unsigned int)(((unsigned int(__fastcall*)(_QWORD**))(*a1)[28])(a1) != 0) + 2;
		break;
	default:
		result = 3i64;
		break;
	}
	return result;
}

