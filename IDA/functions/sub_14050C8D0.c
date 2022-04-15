#include "../winhttp.h"

//----- (000000014050C8D0) ----------------------------------------------------
__int64 sub_14050C8D0()
{
	__int64 v0; // rdx
	__int64 v1; // rcx
	bool v2; // cf

	v0 = *(_QWORD*)(qword_140C65898 + 29544);
	if (*(_QWORD*)(v0 + 16))
	{
		v1 = ++ * (_QWORD*)v0;
		v2 = *(_QWORD*)v0 < (unsigned __int64)*(int*)(v0 + 16);
		*(_BYTE*)(v0 + 24) = 1;
		if (!v2)
			v1 = 0i64;
		*(_QWORD*)v0 = v1;
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

