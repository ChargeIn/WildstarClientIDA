#include "../winhttp.h"

//----- (000000014050C910) ----------------------------------------------------
__int64 sub_14050C910()
{
	__int64* v0; // rcx
	__int64 v1; // rdx
	__int64 v2; // rax

	v0 = *(__int64**)(qword_140C65898 + 29544);
	v1 = v0[2];
	if (v1)
	{
		v2 = *v0;
		if (*v0)
		{
			*((_BYTE*)v0 + 24) = 1;
			*v0 = v2 - 1;
			return 0i64;
		}
		*((_BYTE*)v0 + 24) = 1;
		*v0 = v1 - 1;
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

