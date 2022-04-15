//----- (0000000140853570) ----------------------------------------------------
__int64 __fastcall sub_140853570(__int64 a1, __int64 a2)
{
	__int64* v2; // rcx
	__int64 result; // rax
	__int64 v4; // rcx

	v2 = *(__int64**)(a1 + 56);
	result = *v2;
	v4 = v2[1];
	if (result != v4)
	{
		do
		{
			if (*(_QWORD*)result == a2)
				break;
			result += 24i64;
		} while (result != v4);
		if (result != v4)
		{
			result += 8i64;
			if (result)
				++* (_WORD*)(result + 10);
		}
	}
	return result;
}

