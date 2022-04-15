#include "../winhttp.h"

//----- (000000014086A660) ----------------------------------------------------
__int64 __fastcall sub_14086A660(__int64 a1)
{
	__int64 result; // rax

	result = sub_1408745C0((_BYTE*)a1);
	if ((_DWORD)result == 1)
	{
		*(_DWORD*)(a1 + 292) = -1;
		*(_DWORD*)(a1 + 296) = 0;
		*(_QWORD*)(a1 + 280) = 0i64;
		*(_QWORD*)(a1 + 304) = 0i64;
		*(_QWORD*)(a1 + 264) = 0i64;
		*(_QWORD*)(a1 + 272) = 0i64;
		*(_DWORD*)(a1 + 344) = 0;
		*(_QWORD*)(a1 + 328) = 0i64;
		*(_QWORD*)(a1 + 352) = 0i64;
		*(_QWORD*)(a1 + 312) = 0i64;
		*(_QWORD*)(a1 + 320) = 0i64;
		*(_DWORD*)(a1 + 340) = -1;
		*(_DWORD*)(a1 + 392) = 0;
		*(_QWORD*)(a1 + 376) = 0i64;
		*(_QWORD*)(a1 + 400) = 0i64;
		*(_QWORD*)(a1 + 360) = 0i64;
		*(_QWORD*)(a1 + 368) = 0i64;
		*(_DWORD*)(a1 + 388) = -1;
		return 1i64;
	}
	return result;
}

