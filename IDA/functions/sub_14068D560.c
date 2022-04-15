//----- (000000014068D560) ----------------------------------------------------
_BOOL8 __fastcall sub_14068D560(__int64 a1)
{
	__int64 v2; // rax
	_BOOL8 result; // rax

	result = 0;
	if (a1)
	{
		if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 40i64))(a1))
		{
			if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 104i64))(a1))
			{
				v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 40i64))(a1);
				if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v2 + 104i64))(v2))
					return 1;
			}
		}
	}
	return result;
}

