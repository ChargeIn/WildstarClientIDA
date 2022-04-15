#include "../winhttp.h"

//----- (000000014014E190) ----------------------------------------------------
__int64 __fastcall sub_14014E190(__int64 a1, __int64(__fastcall*** a2)(_QWORD), int a3)
{
	__int64(__fastcall * **v4)(_QWORD); // rcx
	__int64 result; // rax

	v4 = *(__int64(__fastcall****)(_QWORD))(a1 + 40);
	if (v4 == a2)
	{
		*(_DWORD*)(a1 + 48) = a3;
	}
	else
	{
		if (v4)
		{
			result = (*v4)[1](v4);
			*(_QWORD*)(a1 + 40) = 0i64;
		}
		*(_QWORD*)(a1 + 40) = a2;
		if (a2)
			result = (**a2)(a2);
		*(_DWORD*)(a1 + 48) = a3;
	}
	return result;
}

