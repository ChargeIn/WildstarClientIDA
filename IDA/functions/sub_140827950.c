#include "../winhttp.h"

//----- (0000000140827950) ----------------------------------------------------
__int64 sub_140827950()
{
	__int64 result; // rax
	__int64 v1; // rax
	struct _RTL_CRITICAL_SECTION* v2; // rax

	result = sub_140843EC0();
	if (!qword_140C61B68 && (_DWORD)result == 1)
	{
		v1 = sub_1408819F0(dword_140C10F20, 248i64);
		if (v1)
		{
			v2 = (struct _RTL_CRITICAL_SECTION*)sub_14082B310(v1);
			qword_140C61B68 = v2;
			if (v2)
			{
				result = sub_14082BD00((__int64)v2);
				if ((_DWORD)result == 1)
					return sub_14082EEB0((__int64)qword_140C61B68);
				return result;
			}
		}
		else
		{
			qword_140C61B68 = 0i64;
		}
		return 52i64;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

