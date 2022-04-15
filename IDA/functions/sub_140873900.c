#include "../winhttp.h"

//----- (0000000140873900) ----------------------------------------------------
__int64 __fastcall sub_140873900(_QWORD** a1, int a2)
{
	if (a2 != 2)
	{
		(*(void(__fastcall**)(_QWORD*))(*a1[7] + 16i64))(a1[7]);
		((void(__fastcall*)(_QWORD**))(*a1)[11])(a1);
	}
	return sub_140872DE0((__int64)a1, a2);
}

