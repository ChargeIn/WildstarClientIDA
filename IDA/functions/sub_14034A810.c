//----- (000000014034A810) ----------------------------------------------------
__int64 __fastcall sub_14034A810(__int64 a1)
{
	__int64 v1; // rbx
	__int64 result; // rax

	v1 = a1 + 16;
	if (*(_DWORD*)(a1 + 32) != -1)
	{
		if (sub_140883410() == v1)
			sub_140883510(0i64);
		sub_1408832E0(*(_DWORD*)(v1 + 16));
	}
	result = 0i64;
	*(_DWORD*)(v1 + 16) = -1;
	return result;
}

