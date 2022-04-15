#include "../winhttp.h"

//----- (00000001408F1A90) ----------------------------------------------------
__int64 __fastcall sub_1408F1A90(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	double v5; // xmm0_8
	__int64 result; // rax

	*(_QWORD*)(a1 + 8) = a2;
	if (a4)
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, a3, a4);
	v5 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), 0.0);
	*(_DWORD*)(a1 + 44) = 1120403456;
	*(_DWORD*)(a1 + 40) = 0;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_DWORD*)(a1 + 16) = LODWORD(v5);
	*(_DWORD*)(a1 + 20) = LODWORD(v5);
	result = 1i64;
	*(_WORD*)(a1 + 48) = 257;
	*(_BYTE*)(a1 + 50) = 1;
	return result;
}

