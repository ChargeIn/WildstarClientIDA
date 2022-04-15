//----- (0000000140522C10) ----------------------------------------------------
char __fastcall sub_140522C10(__int64 a1)
{
	__int64 v2; // rax
	unsigned __int64 v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rcx

	if (*(_DWORD*)(a1 + 16))
	{
		sub_1404B8F30(a1, *(_DWORD*)(a1 + 36), *(_DWORD*)(a1 + 40));
		LOBYTE(v2) = sub_1400D4040(*(_QWORD*)(a1 + 8), "HousingColorShifted", *(char**)(a1 + 8), &byte_140B7B700);
	}
	else
	{
		v3 = *(_QWORD*)(a1 + 24);
		if (v3)
		{
			v2 = sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
			if (!v2)
				return v2;
			v2 = sub_1404C9E20(v4, *(_DWORD*)(v2 + 188), v3);
		}
		else
		{
			v2 = sub_1404C9B90(a1, *(_DWORD*)(a1 + 32));
		}
		if (v2)
		{
			sub_1404B8B40(v5, *(_DWORD*)(a1 + 32), *(_DWORD*)(a1 + 44));
			LOBYTE(v2) = sub_1400D4040(*(_QWORD*)(a1 + 8), "HousingColorShifted", *(char**)(a1 + 8), &byte_140B7B700);
		}
	}
	return v2;
}
// 140522C79: variable 'v4' is possibly undefined
// 140522C94: variable 'v5' is possibly undefined
// 140B7B700: using guessed type char byte_140B7B700;
// 140C659F0: using guessed type __int64 qword_140C659F0;

