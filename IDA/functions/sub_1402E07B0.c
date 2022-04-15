#include "../winhttp.h"

//----- (00000001402E07B0) ----------------------------------------------------
__int64 __fastcall sub_1402E07B0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // r8

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if ((_DWORD)result == -1)
		goto LABEL_5;
	if ((_DWORD)result)
		return result;
	v3 = *(_QWORD*)(a1 + 16);
	if (!*(_DWORD*)(v3 + 8))
	{
	LABEL_5:
		if (a1)
		{
			sub_1402DED40(a1);
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	else
	{
		sub_140198370(a1 + 1136, a1, (_QWORD*)(v3 + 2040));
		return 0i64;
	}
}

