//----- (000000014037A1D0) ----------------------------------------------------
__int64 __fastcall sub_14037A1D0(__int64 a1, unsigned int a2)
{
	unsigned __int64 v4; // rbx
	__int64 result; // rax
	unsigned __int64 v6; // rsi

	v4 = 0i64;
	if (((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 288i64))(a1) == 0) != (a2 == 0))
	{
		if (a2)
			*(_DWORD*)(a1 + 360) &= ~0x40u;
		else
			*(_DWORD*)(a1 + 360) |= 0x40u;
		if (!*(_QWORD*)(a1 + 1296))
			sub_140367870(*(_QWORD*)(a1 + 16), (float*)(a1 + 752));
	}
	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 72i64))(*(_QWORD*)(a1 + 48));
	v6 = result;
	if (result)
	{
		do
		{
			result = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 48) + 80i64))(
				*(_QWORD*)(a1 + 48),
				v4);
			if (result)
				result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)result + 296i64))(result, a2);
			++v4;
		} while (v4 < v6);
	}
	return result;
}

