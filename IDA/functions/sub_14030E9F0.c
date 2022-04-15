#include "../winhttp.h"

//----- (000000014030E9F0) ----------------------------------------------------
__int64 __fastcall sub_14030E9F0(__int64 a1)
{
	__int64 result; // rax

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if ((_DWORD)result)
	{
		if ((_DWORD)result == -1)
		{
			if (*(_QWORD*)(a1 + 40))
			{
				if (!(unsigned int)sub_14030D8A0(a1))
				{
					_InterlockedIncrement((volatile signed __int32*)(a1 + 8));
					sub_140198370(a1 + 80, a1, (_QWORD*)(*(_QWORD*)(a1 + 16) + 96i64));
				}
			}
			sub_14030D400(a1);
			sub_14018B900(a1, 0);
			return 0i64;
		}
	}
	else
	{
		sub_140198370(a1 + 80, a1, (_QWORD*)(*(_QWORD*)(a1 + 16) + 96i64));
		return 0i64;
	}
	return result;
}

