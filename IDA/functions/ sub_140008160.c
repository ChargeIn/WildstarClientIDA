#include "../winhttp.h"

//----- (0000000140008160) ----------------------------------------------------
__int64 __fastcall sub_140008160(__int64 a1, _QWORD* a2)
{
	__int64 v2; // r8
	__int64 v3; // rax
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 24);
	*(_QWORD*)(a1 + 24) = *(_QWORD*)(v2 + 16);
	v3 = *(_QWORD*)(v2 + 16);
	if (v3)
		*(_QWORD*)(v3 + 8) = a1;
	result = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(v2 + 8) = result;
	if (a1 == *a2)
	{
		*a2 = v2;
		*(_QWORD*)(v2 + 16) = a1;
		*(_QWORD*)(a1 + 8) = v2;
	}
	else
	{
		result = *(_QWORD*)(a1 + 8);
		if (a1 == *(_QWORD*)(result + 16))
			*(_QWORD*)(result + 16) = v2;
		else
			*(_QWORD*)(result + 24) = v2;
		*(_QWORD*)(v2 + 16) = a1;
		*(_QWORD*)(a1 + 8) = v2;
	}
	return result;
}

