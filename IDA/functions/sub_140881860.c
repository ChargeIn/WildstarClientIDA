//----- (0000000140881860) ----------------------------------------------------
__int64 __fastcall sub_140881860(__int64 a1)
{
	__int64 result; // rax

	result = 0i64;
	*(_DWORD*)(a1 + 40) = 1;
	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_DWORD*)(a1 + 104) = 0;
	return result;
}

