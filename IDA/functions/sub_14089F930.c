//----- (000000014089F930) ----------------------------------------------------
__int64 __fastcall sub_14089F930(__int64 a1)
{
	unsigned int i; // r8d
	__int64 v2; // rdx

	for (i = 0; i < *(_DWORD*)(a1 + 36); *(_DWORD*)(*(_QWORD*)(a1 + 48) + 8 * v2 + 4) = 0)
	{
		v2 = i++;
		*(_DWORD*)(*(_QWORD*)(a1 + 48) + 8 * v2) = 0;
	}
	return 1i64;
}

