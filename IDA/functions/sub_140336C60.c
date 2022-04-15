#include "../winhttp.h"

//----- (0000000140336C60) ----------------------------------------------------
__int64 __fastcall sub_140336C60(__int64 a1, __int64* a2, unsigned __int64 a3)
{
	__int64 v3; // rax
	unsigned __int64 v4; // r9
	__int64* v7; // rdx
	__int64 v8; // rbp
	__int64 v9; // rax

	v3 = *(_QWORD*)(a1 + 16);
	v4 = 0i64;
	*a2 = 0i64;
	if (v3)
		v4 = *(_QWORD*)(v3 + 32) - *(_QWORD*)(a1 + 24);
	v7 = (__int64*)(a1 + 32);
	if (v4 < (a3 + *(_QWORD*)(a1 + 32) + 7i64) >> 3)
		return sub_140336D60(a1, a2, a3);
	v8 = *(_QWORD*)(a1 + 24);
	switch ((a3 + 7) >> 3)
	{
	case 1ui64:
		v9 = (unsigned __int8)sub_140337320((_QWORD*)(a1 + 24), v7, a3);
		goto LABEL_9;
	case 2ui64:
		v9 = (unsigned __int16)sub_1403373B0((_QWORD*)(a1 + 24), v7, a3);
		goto LABEL_9;
	case 3ui64:
	case 4ui64:
		v9 = (unsigned int)sub_140337440((_QWORD*)(a1 + 24), v7, a3);
		goto LABEL_9;
	case 5ui64:
	case 6ui64:
	case 7ui64:
	case 8ui64:
		v9 = sub_1400A71C0((_QWORD*)(a1 + 24), v7, a3);
	LABEL_9:
		*a2 = v9;
		break;
	default:
		break;
	}
	*(_DWORD*)(a1 + 8) += *(_DWORD*)(a1 + 24) - v8;
	return 0i64;
}

