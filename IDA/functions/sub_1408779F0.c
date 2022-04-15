#include "../winhttp.h"

//----- (00000001408779F0) ----------------------------------------------------
__int64 sub_1408779F0()
{
	int v1; // [rsp+38h] [rbp+10h] BYREF

	v1 = 0;
	if ((*(int(__fastcall**)(LPVOID, int*))(*(_QWORD*)qword_140C628B8 + 64i64))(qword_140C628B8, &v1) >= 0)
	{
		if (!(_BYTE)v1)
			return 1599i64;
		if ((_BYTE)v1 == 3 || (unsigned __int8)(v1 - 5) <= 4u)
			return 63i64;
	}
	return 3i64;
}

