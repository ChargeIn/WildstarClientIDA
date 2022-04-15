//----- (0000000140609400) ----------------------------------------------------
__int64 __fastcall sub_140609400(_QWORD* a1, __int64 a2)
{
	int v4; // ebx

	v4 = 0;
	while (!*a1 || (*(unsigned int(__fastcall**)(_QWORD, __int64, __int64))(*(_QWORD*)*a1 + 24i64))(*a1, a2, 1i64))
	{
		++v4;
		++a1;
		if (v4 >= 13)
			return 1i64;
	}
	return 0i64;
}

