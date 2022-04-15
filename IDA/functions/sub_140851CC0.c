//----- (0000000140851CC0) ----------------------------------------------------
__int64 __fastcall sub_140851CC0(__int64 a1, __int64 a2)
{
	__int64* v2; // r8
	__int64 result; // rax
	__int64 v6; // r8
	__int64 v7; // rcx
	bool v8; // zf
	__int64 v9; // rcx

	v2 = *(__int64**)(a1 + 56);
	result = *v2;
	v6 = v2[1];
	if (result != v6)
	{
		do
		{
			if (*(_QWORD*)result == a2)
				break;
			result += 24i64;
		} while (result != v6);
		if (result != v6)
		{
			v7 = result + 8;
			if (result != -8)
			{
				result = 0xFFFFi64;
				v8 = (*(_WORD*)(v7 + 8))-- == 1;
				if (v8 && !*(_WORD*)(v7 + 10))
				{
					sub_140852150((__int64*)v7);
					result = sub_140855300(*(_QWORD*)(a1 + 56), a2);
				}
				v9 = *(_QWORD*)(a1 + 56);
				if (!*(_WORD*)(v9 + 72)
					&& !*(_WORD*)(v9 + 74)
					&& !*(_WORD*)(v9 + 76)
					&& !*(_WORD*)(v9 + 78)
					&& !*(_QWORD*)(v9 + 24))
				{
					result = *(_QWORD*)v9;
					if (*(_QWORD*)(v9 + 8) == *(_QWORD*)v9)
						return sub_1408520B0(a1);
				}
			}
		}
	}
	return result;
}

