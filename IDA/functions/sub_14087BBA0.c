#include "../winhttp.h"

//----- (000000014087BBA0) ----------------------------------------------------
__int64 __fastcall sub_14087BBA0(__int64 a1, int a2, int a3)
{
	__int64 result; // rax
	__int64 v5; // r9
	__int64 v6; // r8
	__int64 v7; // rdx
	bool v8; // zf

	result = sub_140829FD0((struct _RTL_CRITICAL_SECTION*)qword_140C61B78, a2, a3);
	v5 = result;
	if (result)
	{
		result = *(_QWORD*)(result + 40);
		v6 = 0i64;
		v7 = result;
		if (result)
		{
			while (v7 != a1)
			{
				v6 = v7;
				v7 = *(_QWORD*)(v7 + 8);
				if (!v7)
					return result;
			}
			if (v7)
			{
				v8 = v7 == result;
				result = *(_QWORD*)(v7 + 8);
				if (v8)
					*(_QWORD*)(v5 + 40) = result;
				else
					*(_QWORD*)(v6 + 8) = result;
				if (v7 == *(_QWORD*)(v5 + 48))
					*(_QWORD*)(v5 + 48) = v6;
			}
		}
	}
	return result;
}
// 140C61B78: using guessed type __int64 qword_140C61B78;

