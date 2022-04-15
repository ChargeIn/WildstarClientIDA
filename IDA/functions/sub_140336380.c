#include "../winhttp.h"

//----- (0000000140336380) ----------------------------------------------------
__int64 __fastcall sub_140336380(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
	__int64 v3; // r9
	unsigned __int64 v4; // rax
	__int64 result; // rax

	v3 = *(_QWORD*)(a1 + 8);
	if (v3)
		v4 = 8i64 * (*(_QWORD*)(v3 + 24) - *(_QWORD*)(v3 + 32)) - *(_QWORD*)(a1 + 16);
	else
		v4 = 0i64;
	if (v4 < a3)
		return sub_140336470(a1, a2, a3);
	switch ((a3 + 7) >> 3)
	{
	case 1ui64:
		sub_1403367D0(v3 + 32, (_QWORD*)(a1 + 16), a2, a3);
		result = 0i64;
		break;
	case 2ui64:
		sub_140336860(v3 + 32, (_QWORD*)(a1 + 16), a2, a3);
		result = 0i64;
		break;
	case 3ui64:
	case 4ui64:
		sub_1403368F0(v3 + 32, (_QWORD*)(a1 + 16), a2, a3);
		result = 0i64;
		break;
	case 5ui64:
	case 6ui64:
	case 7ui64:
	case 8ui64:
		sub_1400A7540(v3 + 32, (_QWORD*)(a1 + 16), a2, a3);
		goto LABEL_10;
	default:
	LABEL_10:
		result = 0i64;
		break;
	}
	return result;
}

