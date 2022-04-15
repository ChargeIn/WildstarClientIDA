#include "../winhttp.h"

//----- (0000000140128250) ----------------------------------------------------
__int64 __fastcall sub_140128250(__int64 a1)
{
	__int64 result; // rax

	switch (*(_DWORD*)(a1 + 1044))
	{
	case 0:
		sub_1401265F0(a1);
		result = sub_140127EC0(a1);
		break;
	case 1:
		sub_140126990(a1);
		result = sub_140127EC0(a1);
		break;
	case 2:
		sub_140126D30(a1);
		result = sub_140127EC0(a1);
		break;
	case 3:
		sub_1401270C0(a1);
		result = sub_140127EC0(a1);
		break;
	case 4:
		sub_140127440(a1);
		result = sub_140127EC0(a1);
		break;
	case 5:
		sub_1401277B0(a1);
		goto LABEL_8;
	default:
	LABEL_8:
		result = sub_140127EC0(a1);
		break;
	}
	return result;
}

