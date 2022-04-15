#include "../winhttp.h"

//----- (00000001400B7590) ----------------------------------------------------
__int64 __fastcall sub_1400B7590(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rbx

	v2 = *(_QWORD**)(a1 + 48);
	if (v2 == *(_QWORD**)(a1 + 56))
		return 0i64;
	while (!(**(unsigned int(__fastcall***)(_QWORD, __int64)) * v2)(*v2, a2))
	{
		if (++v2 == *(_QWORD**)(a1 + 56))
			return 0i64;
	}
	return *v2;
}

