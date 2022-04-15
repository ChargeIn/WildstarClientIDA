#include "../winhttp.h"

//----- (00000001402D9600) ----------------------------------------------------
__int64 __fastcall sub_1402D9600(__int64 a1)
{
	__int64 result; // rax

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 64));
	if ((_DWORD)result)
	{
		if ((_DWORD)result != -1)
			return result;
		if (a1)
		{
			sub_1402D9390((_QWORD*)a1);
			sub_14018B900(a1, 0);
			return 0i64;
		}
	}
	else
	{
		sub_140198370(a1 + 8, a1, (_QWORD*)(qword_140C657F0 + 1328));
	}
	return 0i64;
}
// 140C657F0: using guessed type __int64 qword_140C657F0;

