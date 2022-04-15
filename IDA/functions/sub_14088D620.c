//----- (000000014088D620) ----------------------------------------------------
__int64 __fastcall sub_14088D620(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v5; // r9
	__int64 v6; // rcx

	result = *(_QWORD*)(a1 + 16);
	v5 = 0i64;
	while (result)
	{
		if (*(_QWORD*)result > a3 || !*(_DWORD*)(result + 8) && *(_QWORD*)result == a3)
		{
			v6 = *(_QWORD*)(result + 24);
			if (result == *(_QWORD*)(a1 + 16))
				*(_QWORD*)(a1 + 16) = v6;
			else
				*(_QWORD*)(v5 + 24) = v6;
			if (*a2)
			{
				*(_QWORD*)(result + 24) = *a2;
				*a2 = result;
			}
			else
			{
				*a2 = result;
				*(_QWORD*)(result + 24) = 0i64;
			}
			result = v6;
		}
		else
		{
			v5 = result;
			result = *(_QWORD*)(result + 24);
		}
	}
	return result;
}

