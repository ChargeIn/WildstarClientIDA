//----- (0000000140875620) ----------------------------------------------------
__int64 __fastcall sub_140875620(_QWORD* a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v3; // r9

	result = a1[8];
	v3 = a1[9];
	if (result == v3)
		return (*(__int64(__fastcall**)(_QWORD*))(*a1 + 136i64))(a1);
	while (*(_DWORD*)(a2 + 24) != *(_DWORD*)result || ((*(_BYTE*)(a2 + 91) & 2) != 0) != *(_BYTE*)(result + 4))
	{
		result += 8i64;
		if (result == v3)
			return (*(__int64(__fastcall**)(_QWORD*))(*a1 + 136i64))(a1);
	}
	return result;
}

