//----- (0000000140880900) ----------------------------------------------------
__int64 __fastcall sub_140880900(__int64 a1, char a2, __int64 a3)
{
	__int64 result; // rax

	if (a2)
	{
		*(_DWORD*)(a3 + 4) = *(_DWORD*)(a1 + 116);
		result = *(unsigned int*)(a1 + 120);
		*(_DWORD*)(a3 + 8) = result;
	}
	else
	{
		result = 0i64;
		*(_QWORD*)(a3 + 4) = 0i64;
	}
	return result;
}

