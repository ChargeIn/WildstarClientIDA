//----- (00000001406132E0) ----------------------------------------------------
__int64 __fastcall sub_1406132E0(unsigned int a1)
{
	__int64 result; // rax
	__int64 v2; // rdx

	result = sub_140211280(a1);
	v2 = result;
	if (result)
	{
		if ((*(_DWORD*)(qword_140C63628 + 1524) & *(_DWORD*)(result + 24)) == 0)
			return *(unsigned int*)(v2 + 4);
		if (*(_DWORD*)(qword_140C635F0 + 5784) != 1)
			return *(unsigned int*)(v2 + 4);
		result = *(unsigned int*)(result + 8);
		if (!(_DWORD)result)
			return *(unsigned int*)(v2 + 4);
	}
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63628: using guessed type __int64 qword_140C63628;

