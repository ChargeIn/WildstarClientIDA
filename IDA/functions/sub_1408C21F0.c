#include "../winhttp.h"

//----- (00000001408C21F0) ----------------------------------------------------
__int64 __fastcall sub_1408C21F0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	if (a4)
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, a3, a4);
	*(_DWORD*)(a1 + 8) = -1052770304;
	*(_DWORD*)(a1 + 12) = 1092616192;
	*(_DWORD*)(a1 + 16) = 1045220557;
	*(_DWORD*)(a1 + 20) = 1065353216;
	*(_BYTE*)(a1 + 24) = 1;
	*(_DWORD*)(a1 + 28) = 1008981770;
	*(_WORD*)(a1 + 32) = 257;
	*(_BYTE*)(a1 + 34) = 1;
	return 1i64;
}

