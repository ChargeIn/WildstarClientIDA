//----- (0000000140848B60) ----------------------------------------------------
__int64 __fastcall sub_140848B60(__int64 a1)
{
	__int64 result; // rax

	if (*(_DWORD*)(a1 + 80) || *(_DWORD*)(a1 + 84) != 2)
	{
		result = *(_QWORD*)(a1 + 16);
		if (result)
		{
			if ((*(_BYTE*)(result + 32) & 1) != 0)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(a1 + 704) + 16i64))(a1 + 704);
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(a1 + 704) + 48i64))(a1 + 704);
				if ((_DWORD)result != 1)
					return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
			}
		}
	}
	else
	{
		result = *(_QWORD*)(a1 + 16);
		if (result)
		{
			result = *(_QWORD*)(result + 24);
			if (result)
			{
				*(_DWORD*)(result + 372) = 0;
				*(_BYTE*)(result + 383) &= 0xF1u;
			}
		}
	}
	return result;
}

