#include "../winhttp.h"

//----- (000000014089D110) ----------------------------------------------------
__int64 __fastcall sub_14089D110(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	if (a4)
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, a3, a4);
	*(_QWORD*)(a1 + 12) = 1138491392i64;
	*(_QWORD*)(a1 + 52) = 1065353216i64;
	*(_DWORD*)(a1 + 8) = 0;
	*(_QWORD*)(a1 + 20) = 0i64;
	*(_BYTE*)(a1 + 28) = 0;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_DWORD*)(a1 + 48) = 0;
	*(_QWORD*)(a1 + 60) = 0i64;
	*(_QWORD*)(a1 + 68) = 0i64;
	*(_DWORD*)(a1 + 76) = 4;
	return 1i64;
}

