//----- (00000001402FBD80) ----------------------------------------------------
__int64 __fastcall sub_1402FBD80(__int64 a1, int a2, _QWORD* a3)
{
	__int64 i; // rcx
	__int64 result; // rax

	if (a2)
	{
		for (i = *(_QWORD*)(a1 + 1232); i; i = *(_QWORD*)(i + 1248))
		{
			if (*(_DWORD*)(i + 1200) == a2)
				break;
		}
	}
	else
	{
		i = 0i64;
	}
	*a3 = i;
	if (i)
		return (**(__int64(__fastcall***)(__int64))i)(i);
	return result;
}

