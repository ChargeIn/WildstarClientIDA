#include "../winhttp.h"

//----- (00000001405F7690) ----------------------------------------------------
__int64 __fastcall sub_1405F7690(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7)
{
	*(_QWORD*)(a1 + 48) = a3;
	*(_DWORD*)(a1 + 16) = a5;
	*(_DWORD*)(a1 + 68) = a4;
	*(_DWORD*)(a1 + 36) = a7;
	*(_DWORD*)(a1 + 24) = a6;
	*(_DWORD*)(a1 + 28) = 0;
	*(_QWORD*)(a1 + 8) = a2;
	return 0i64;
}

