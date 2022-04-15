//----- (0000000140881040) ----------------------------------------------------
__int64 __fastcall sub_140881040(__int64 a1, __int64 a2, char a3)
{
	__int64 result; // rax
	__int64 v5; // rax

	if ((_DWORD)a2 == 1)
	{
		if (a3)
		{
			result = sub_140880DA0(a1);
		}
		else
		{
			if ((unsigned int)sub_140880D10(a1, *(unsigned int*)(a1 + 44), a1 + 44) == 1)
				return (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 88i64))(*(_QWORD*)(a1 + 88));
			result = sub_140880D10(a1, 0i64, a1 + 44);
		}
		if ((_DWORD)result != 1)
			return result;
		return (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 88i64))(*(_QWORD*)(a1 + 88));
	}
	if ((_DWORD)a2)
	{
		if ((_DWORD)a2 == 2)
			*(_BYTE*)(a1 + 32) ^= (*(_BYTE*)(a1 + 32) ^ (*(_BYTE*)(*(_QWORD*)(a1 + 24) + 382i64) >> 4)) & 2;
		return (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 88i64))(*(_QWORD*)(a1 + 88));
	}
	v5 = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 44) = 0;
	*(_WORD*)(a1 + 84) = *(_WORD*)(v5 + 376);
	result = sub_140880D10(a1, a2, a1 + 44);
	if ((_DWORD)result == 1)
		return (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 88i64))(*(_QWORD*)(a1 + 88));
	return result;
}

