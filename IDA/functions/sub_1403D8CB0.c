//----- (00000001403D8CB0) ----------------------------------------------------
_BOOL8 __fastcall sub_1403D8CB0(__int64 a1)
{
	int v1; // eax
	int v2; // eax
	_BOOL8 result; // rax

	result = 1;
	if (!*(_QWORD*)a1
		|| (v1 = *(_DWORD*)(a1 + 8), v1 >= 15)
		&& (v1 != 15 || !*(_DWORD*)(a1 + 16) && *(_DWORD*)(a1 + 12) != 1 && !*(_DWORD*)(a1 + 20)))
	{
		if (!*(_QWORD*)(a1 + 24))
			return 0;
		v2 = *(_DWORD*)(a1 + 32);
		if (v2 >= 15 && (v2 != 15 || !*(_DWORD*)(a1 + 40) && *(_DWORD*)(a1 + 36) != 1 && !*(_DWORD*)(a1 + 44)))
			return 0;
	}
	return result;
}

