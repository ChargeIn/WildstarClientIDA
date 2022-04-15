//----- (0000000140469B00) ----------------------------------------------------
__int64 __fastcall sub_140469B00(__int64 a1, int a2, int a3)
{
	__int64 v3; // rbx
	__int64 result; // rax

	v3 = *(_QWORD*)(a1 + 5576);
	if (!v3)
		return 0i64;
	while (1)
	{
		if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 56) + 8i64))(*(_QWORD*)(v3 + 56)) == a2)
		{
			result = *(_QWORD*)(v3 + 56);
			if (*(_DWORD*)(result + 132) == a3)
				break;
		}
		v3 = *(_QWORD*)(v3 + 24);
		if (!v3)
			return 0i64;
	}
	return result;
}

