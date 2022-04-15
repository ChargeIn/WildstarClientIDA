//----- (0000000140886410) ----------------------------------------------------
__int64 __fastcall sub_140886410(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v3; // r8

	result = *(_QWORD*)(a1 + 200);
	if (result)
	{
		v3 = *(unsigned int*)(result + 16);
		result = *(_QWORD*)(result + 8);
		if (*(_QWORD*)result + v3 != a2)
			return sub_1408863A0(a1);
	}
	return result;
}

