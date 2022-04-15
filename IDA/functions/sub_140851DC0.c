//----- (0000000140851DC0) ----------------------------------------------------
__int64 __fastcall sub_140851DC0(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // rdx

	result = *(_QWORD*)(a1 + 56);
	if (result)
	{
		--* (_WORD*)(result + 72);
		v2 = *(_QWORD*)(a1 + 56);
		if (!*(_DWORD*)(v2 + 72) && !*(_WORD*)(v2 + 76) && !*(_WORD*)(v2 + 78) && !*(_QWORD*)(v2 + 24))
		{
			result = *(_QWORD*)v2;
			if (*(_QWORD*)(v2 + 8) == *(_QWORD*)v2)
				return sub_1408520B0(a1);
		}
	}
	return result;
}

