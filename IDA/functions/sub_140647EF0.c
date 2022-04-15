#include "../winhttp.h"

//----- (0000000140647EF0) ----------------------------------------------------
__int64 __fastcall sub_140647EF0(__int64 a1)
{
	__int64 result; // rax

	result = sub_140647C90((_QWORD*)a1);
	if ((int)result >= 0)
	{
		if (**(_QWORD**)(a1 + 40) == *(_QWORD*)(a1 + 40))
			return 0i64;
		result = sub_140646FF0(a1);
		if ((int)result >= 0)
		{
			result = sub_140647EF0(a1);
			if ((int)result >= 0)
				return 0i64;
		}
	}
	return result;
}

