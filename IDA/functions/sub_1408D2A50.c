#include "../winhttp.h"

//----- (00000001408D2A50) ----------------------------------------------------
__int64 __fastcall sub_1408D2A50(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	double v5; // xmm0_8
	__int64 result; // rax

	if (a4)
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, a3, a4);
	*(_QWORD*)(a1 + 12) = 1183621120i64;
	*(_QWORD*)(a1 + 24) = 1109393408i64;
	*(_DWORD*)(a1 + 56) = 1;
	*(_DWORD*)(a1 + 8) = 0;
	*(_DWORD*)(a1 + 20) = 0;
	*(_QWORD*)(a1 + 36) = 0i64;
	*(_QWORD*)(a1 + 44) = 0i64;
	*(_QWORD*)(a1 + 60) = 1148846080i64;
	*(_DWORD*)(a1 + 68) = -1027604480;
	*(_DWORD*)(a1 + 76) = -1027604480;
	*(_DWORD*)(a1 + 80) = 1183621120;
	*(_QWORD*)(a1 + 84) = 1109393408i64;
	*(_DWORD*)(a1 + 92) = -1046478848;
	*(_DWORD*)(a1 + 96) = 1101004800;
	*(_DWORD*)(a1 + 104) = -1038090240;
	*(_DWORD*)(a1 + 108) = 0;
	*(_DWORD*)(a1 + 112) = 1065353216;
	*(_DWORD*)(a1 + 116) = 1092616192;
	*(_DWORD*)(a1 + 120) = 1120403456;
	*(_DWORD*)(a1 + 128) = 0;
	*(_DWORD*)(a1 + 132) = 1120403456;
	*(_QWORD*)(a1 + 140) = 0i64;
	*(_DWORD*)(a1 + 148) = 0;
	v5 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), 0.0);
	*(_DWORD*)(a1 + 164) = 1120403456;
	result = 1i64;
	*(_DWORD*)(a1 + 156) = LODWORD(v5);
	*(_DWORD*)(a1 + 160) = LODWORD(v5);
	*(_BYTE*)(a1 + 32) = 1;
	*(_BYTE*)(a1 + 52) = 1;
	*(_BYTE*)(a1 + 72) = 1;
	*(_BYTE*)(a1 + 100) = 1;
	*(_BYTE*)(a1 + 124) = 1;
	*(_BYTE*)(a1 + 136) = 1;
	*(_BYTE*)(a1 + 152) = 1;
	*(_BYTE*)(a1 + 168) = 1;
	return result;
}

