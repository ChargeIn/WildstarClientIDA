//----- (00000001408C01B0) ----------------------------------------------------
__int64 __fastcall sub_1408C01B0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	__int64 result; // rax

	if (a4)
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, a3, a4);
	*(_QWORD*)(a1 + 8) = 4i64;
	*(_DWORD*)(a1 + 16) = 1123024896;
	*(_DWORD*)(a1 + 68) = 0;
	*(_DWORD*)(a1 + 20) = 1084227584;
	*(_BYTE*)(a1 + 24) = 1;
	result = 1i64;
	*(_QWORD*)(a1 + 28) = 6i64;
	*(_DWORD*)(a1 + 36) = 1157234688;
	*(_DWORD*)(a1 + 40) = 1084227584;
	*(_BYTE*)(a1 + 44) = 1;
	*(_QWORD*)(a1 + 48) = 5i64;
	*(_DWORD*)(a1 + 56) = 1167867904;
	*(_DWORD*)(a1 + 60) = 1084227584;
	*(_BYTE*)(a1 + 64) = 1;
	*(_BYTE*)(a1 + 72) = 1;
	*(_WORD*)(a1 + 76) = 257;
	*(_BYTE*)(a1 + 78) = 1;
	return result;
}

