//----- (00000001408A1CC0) ----------------------------------------------------
__int64 __fastcall sub_1408A1CC0(__int64 a1, __int64 a2)
{
	unsigned int v4; // ebx
	__int64 result; // rax
	_QWORD* v6; // rsi

	v4 = 0;
	if (*(_DWORD*)(a1 + 56))
	{
		do
		{
			result = v4;
			v6 = (_QWORD*)(a1 + 8i64 * v4);
			if (*v6)
			{
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
				*v6 = 0i64;
			}
			++v4;
		} while (v4 < *(_DWORD*)(a1 + 56));
		*(_DWORD*)(a1 + 48) = 0;
	}
	else
	{
		*(_DWORD*)(a1 + 48) = 0;
	}
	return result;
}

