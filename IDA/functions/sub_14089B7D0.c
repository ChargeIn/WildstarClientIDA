//----- (000000014089B7D0) ----------------------------------------------------
__int64 __fastcall sub_14089B7D0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	if (a4)
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, a3, a4);
	*(_QWORD*)(a1 + 8) = 1065353216i64;
	*(_DWORD*)(a1 + 16) = 0;
	return 1i64;
}

