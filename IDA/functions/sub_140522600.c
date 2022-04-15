//----- (0000000140522600) ----------------------------------------------------
char __fastcall sub_140522600(__int64 a1)
{
	unsigned __int64 v1; // rdi
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx

	v1 = *(_QWORD*)(a1 + 16);
	if (v1)
	{
		v3 = sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
		if (!v3)
			return v3;
		v3 = sub_1404C9E20(v4, *(_DWORD*)(v3 + 188), v1);
	}
	else
	{
		v3 = sub_1404C9B90(a1, *(_DWORD*)(a1 + 24));
	}
	if (v3)
	{
		sub_1404B8110(v5, 0, *(_DWORD*)(a1 + 28));
		LOBYTE(v3) = sub_1400D4040(*(_QWORD*)(a1 + 8), "HousingColorShifted", *(char**)(a1 + 8), &byte_140B7B700);
	}
	return v3;
}
// 140522637: variable 'v4' is possibly undefined
// 140522651: variable 'v5' is possibly undefined
// 140B7B700: using guessed type char byte_140B7B700;
// 140C659F0: using guessed type __int64 qword_140C659F0;

