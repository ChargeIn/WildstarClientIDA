#include "../winhttp.h"

//----- (00000001405A9980) ----------------------------------------------------
__int64 __fastcall sub_1405A9980(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 result; // rax

	if (*(_DWORD*)(a1 + 184) == 4)
	{
		*(_DWORD*)(a1 + 184) = 5;
		v2 = *(_QWORD*)(a1 + 96);
		if (v2)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
			*(_QWORD*)(a1 + 96) = 0i64;
		}
		v3 = *(_QWORD*)(a1 + 104);
		if (v3)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			*(_QWORD*)(a1 + 104) = 0i64;
		}
		return Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "HousingBuildComplete", byte_1409F3234, 1i64);
	}
	return result;
}
// 1409F3234: using guessed type _BYTE byte_1409F3234[40];
// 140C65898: using guessed type __int64 qword_140C65898;

