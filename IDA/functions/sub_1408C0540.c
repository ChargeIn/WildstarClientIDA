#include "../winhttp.h"

//----- (00000001408C0540) ----------------------------------------------------
__int64 __fastcall sub_1408C0540(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD* a5)
{
	*(_QWORD*)(a1 + 16) = a4;
	*(_QWORD*)(a1 + 24) = a2;
	*(_QWORD*)(a1 + 36) = *a5;
	*(_DWORD*)(a1 + 32) = *(_DWORD*)(a4 + 20);
	return sub_1408C0760(a1);
}

