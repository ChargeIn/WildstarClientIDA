//----- (0000000140833E90) ----------------------------------------------------
__int64 __fastcall sub_140833E90(__int64 a1)
{
	HWND ForegroundWindow; // rax
	__int64 result; // rax

	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	ForegroundWindow = GetForegroundWindow();
	*(_QWORD*)(a1 + 8) = 1i64;
	*(_QWORD*)a1 = ForegroundWindow;
	result = 4i64;
	*(_QWORD*)(a1 + 16) = 0x2000i64;
	*(_DWORD*)(a1 + 24) = 0;
	*(_DWORD*)(a1 + 28) = 0x2000;
	*(_DWORD*)(a1 + 32) = 0x1000000;
	*(_WORD*)(a1 + 40) = 4;
	*(_DWORD*)(a1 + 36) = 1065353216;
	*(_QWORD*)(a1 + 44) = 0i64;
	*(_BYTE*)(a1 + 56) = 1;
	*(_DWORD*)(a1 + 52) = 0;
	*(_QWORD*)(a1 + 60) = 1i64;
	*(_DWORD*)(a1 + 68) = 0x2000;
	return result;
}

