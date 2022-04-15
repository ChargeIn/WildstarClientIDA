#include "../winhttp.h"

//----- (000000014086A480) ----------------------------------------------------
__int64 __fastcall sub_14086A480(int a1)
{
	__int64 v2; // rax
	__int64 result; // rax
	__int64 v4; // rbx

	v2 = sub_1408819F0(dword_140C10F20, 408i64);
	if (v2)
	{
		result = sub_14086A070(v2, a1);
		v4 = result;
		if (!result)
			return result;
		if ((unsigned int)sub_14086A660(result) == 1)
			return v4;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
	}
	return 0i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

