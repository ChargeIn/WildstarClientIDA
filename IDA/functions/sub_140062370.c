//----- (0000000140062370) ----------------------------------------------------
_QWORD* __fastcall sub_140062370(__int64 a1, char a2, __int64 a3)
{
	_QWORD* result; // rax

	result = (_QWORD*)(*(_QWORD*)(a1 + 32)
		+ 40 * (*(int*)(a3 + 12) & (unsigned __int64)(int)((1i64 << *(_BYTE*)(a1 + 11)) - 1)));
	while (*((_DWORD*)result + 6) != 4 || result[2] != a3)
	{
		result = (_QWORD*)result[4];
		if (!result)
		{
			result = &unk_140A12138;
			break;
		}
	}
	if (!*((_DWORD*)result + 2))
	{
		*(_BYTE*)(a1 + 10) |= 1 << a2;
		return 0i64;
	}
	return result;
}

