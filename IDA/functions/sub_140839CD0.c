//----- (0000000140839CD0) ----------------------------------------------------
__int64 __fastcall sub_140839CD0(__int64 a1)
{
	__int64 result; // rax

	if (*(_DWORD*)(a1 + 96) == 2)
	{
		result = *(_QWORD*)(a1 + 32);
		if (*(_QWORD*)(a1 + 40) != result)
			return sub_140839AD0(a1, 0, 4);
	}
	return result;
}

