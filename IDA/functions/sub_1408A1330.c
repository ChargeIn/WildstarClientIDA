//----- (00000001408A1330) ----------------------------------------------------
__int64 __fastcall sub_1408A1330(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	double v5; // xmm0_8
	__int64 result; // rax

	if (a4)
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, a3, a4);
	*(_DWORD*)(a1 + 24) = 1056964608;
	*(_DWORD*)(a1 + 8) = 0;
	*(_DWORD*)(a1 + 12) = 1056964608;
	v5 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), 0.0);
	*(_WORD*)(a1 + 20) = 256;
	*(_WORD*)(a1 + 28) = 257;
	result = 1i64;
	*(_DWORD*)(a1 + 16) = LODWORD(v5);
	return result;
}

