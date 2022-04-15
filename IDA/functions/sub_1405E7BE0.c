//----- (00000001405E7BE0) ----------------------------------------------------
__int64 __fastcall sub_1405E7BE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	__int64 i; // rax

	if (a3)
	{
		for (i = *(_QWORD*)(a3 + 5568); i; i = *(_QWORD*)(i + 16))
		{
			if (*(_DWORD*)(i + 92) == (_DWORD)a5)
				break;
		}
	}
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 160i64))(a1);
}

