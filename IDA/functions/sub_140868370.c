//----- (0000000140868370) ----------------------------------------------------
__int64 __fastcall sub_140868370(__int64 a1)
{
	__int64 result; // rax

	*(_QWORD*)(a1 + 48) = *(_QWORD*)(a1 + 40);
	*(_BYTE*)(a1 + 72) &= 0xFCu;
	result = 0i64;
	*(_DWORD*)(a1 + 68) = 0;
	*(_DWORD*)(a1 + 28) = 0;
	*(_BYTE*)(a1 + 73) = 0;
	*(_QWORD*)a1 = 0x20000000i64;
	return result;
}

