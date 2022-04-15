//----- (00000001403AE860) ----------------------------------------------------
__int64 __fastcall sub_1403AE860(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v5; // rdi

	v2 = 0i64;
	if (!*(_DWORD*)(a1 + 4))
		return 0i64;
	while (1)
	{
		v5 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v2);
		if (v5)
		{
			if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 48i64))(v5) == a2)
				break;
		}
		v2 = (unsigned int)(v2 + 1);
		if ((unsigned int)v2 >= *(_DWORD*)(a1 + 4))
			return 0i64;
	}
	return v5;
}

