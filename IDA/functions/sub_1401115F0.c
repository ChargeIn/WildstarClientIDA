#include "../winhttp.h"

//----- (00000001401115F0) ----------------------------------------------------
_QWORD* __fastcall sub_1401115F0(__int64 a1, unsigned __int64 a2)
{
	unsigned __int64 v3; // r8
	unsigned __int64 v4; // rax
	unsigned __int64 v5; // rax
	_QWORD* result; // rax

	if (!*(_BYTE*)(a1 + 1073))
	{
		if (*(_QWORD*)(a1 + 1040) < *(_QWORD*)(a1 + 1048))
			a2 = *(_QWORD*)(a1 + 1048);
		*(_QWORD*)(a1 + 1040) = a2;
		*(_QWORD*)(a1 + 1048) = a2;
		*(_QWORD*)(a1 + 1024) = a2;
		goto LABEL_13;
	}
	if (*(_QWORD*)(a1 + 1032) == -1i64)
		*(_QWORD*)(a1 + 1032) = *(_QWORD*)(a1 + 1024);
	v3 = *(_QWORD*)(a1 + 1032);
	*(_QWORD*)(a1 + 1024) = a2;
	v4 = v3;
	if (a2 < v3)
		v4 = a2;
	*(_QWORD*)(a1 + 1040) = v4;
	v5 = v3;
	if (v3 < a2)
		v5 = a2;
	*(_QWORD*)(a1 + 1048) = v5;
	if (a2 == v3)
		LABEL_13:
	*(_QWORD*)(a1 + 1032) = -1i64;
	result = sub_14010EE40((_QWORD*)a1);
	*(_BYTE*)(a1 + 1065) = 1;
	return result;
}

