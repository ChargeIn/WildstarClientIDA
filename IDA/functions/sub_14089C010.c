//----- (000000014089C010) ----------------------------------------------------
__int64 __fastcall sub_14089C010(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	double v5; // xmm0_8
	__int64 result; // rax

	if (a4)
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, a3, a4);
	*(_DWORD*)(a1 + 8) = 1138491392;
	v5 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), -0.60000002);
	*(_DWORD*)(a1 + 16) = 1065353216;
	*(_DWORD*)(a1 + 20) = 4;
	result = 1i64;
	*(_DWORD*)(a1 + 12) = LODWORD(v5);
	*(_BYTE*)(a1 + 24) = -1;
	return result;
}

