#include "../winhttp.h"

//----- (00000001407A1820) ----------------------------------------------------
__int64 __fastcall sub_1407A1820(__int64 a1, _DWORD* a2)
{
	_DWORD* v2; // r9
	__int64 result; // rax

	v2 = *(_DWORD**)(a1 + 112);
	switch (v2[6])
	{
	case 0:
	case 0xA:
		return v2[7] && v2[11];
	case 1:
		if (a2[1] == *a2 || *(_QWORD*)(a1 + 80) && v2[11])
			goto LABEL_10;
		return 0i64;
	case 2:
		goto LABEL_10;
	case 3:
	case 9:
		return 0i64;
	case 7:
		if (v2[97])
			goto LABEL_10;
		goto LABEL_14;
	case 8:
		if (v2[7] || v2[11])
			LABEL_10 :
			result = 1i64;
		else
			result = 0i64;
		break;
	default:
	LABEL_14:
		result = (unsigned int)v2[7];
		break;
	}
	return result;
}

