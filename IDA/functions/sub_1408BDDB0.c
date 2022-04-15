//----- (00000001408BDDB0) ----------------------------------------------------
__int64 __fastcall sub_1408BDDB0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	double v5; // xmm0_8
	double v6; // xmm0_8
	__int64 result; // rax

	if (a4)
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, a3, a4);
	*(_DWORD*)(a1 + 8) = 1082130432;
	*(_DWORD*)(a1 + 12) = 0x40000000;
	v5 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), -0.15000001);
	*(_DWORD*)(a1 + 16) = LODWORD(v5);
	v6 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), -0.5);
	*(_QWORD*)(a1 + 24) = 8i64;
	*(_QWORD*)(a1 + 32) = 1i64;
	*(_BYTE*)(a1 + 104) = 1;
	result = 1i64;
	*(_DWORD*)(a1 + 20) = LODWORD(v6);
	return result;
}

