//----- (000000014003DE20) ----------------------------------------------------
__int64 __fastcall sub_14003DE20(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // rcx

	result = *(unsigned int*)(a1 + 148);
	if (!(_DWORD)result)
	{
		if ((unsigned int)sub_14004DAD0(*(_QWORD*)(a1 + 96), a2)
			&& ((v5 = *(_QWORD*)(a1 + 80)) == 0
				|| (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 32i64))(v5, a2))
			&& ((v6 = *(_QWORD*)(a1 + 88)) == 0
				|| (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 32i64))(v6, a2)))
		{
			result = 1i64;
			*(_DWORD*)(a1 + 148) = 1;
		}
		else
		{
			result = 0i64;
			*(_DWORD*)(a1 + 148) = 0;
		}
	}
	return result;
}

