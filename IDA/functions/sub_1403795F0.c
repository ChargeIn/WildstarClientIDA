//----- (00000001403795F0) ----------------------------------------------------
__int64 __fastcall sub_1403795F0(__int64 a1, __int64 a2)
{
	_QWORD* v5; // rbx

	if (*(_DWORD*)(a1 + 80))
		return 1i64;
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 32i64))(a1)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 48i64))(*(_QWORD*)(a1 + 48), a2))
	{
		return 0i64;
	}
	v5 = *(_QWORD**)(a1 + 64);
	if (v5)
	{
		while ((*(unsigned int(__fastcall**)(_QWORD*, __int64))(*v5 + 32i64))(v5, a2))
		{
			v5 = (_QWORD*)v5[151];
			if (!v5)
				goto LABEL_9;
		}
		return 0i64;
	}
	else
	{
	LABEL_9:
		*(_DWORD*)(a1 + 80) = 1;
		return 1i64;
	}
}

