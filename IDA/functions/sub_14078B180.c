//----- (000000014078B180) ----------------------------------------------------
_BOOL8 __fastcall sub_14078B180(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v5; // rcx
	_BOOL8 result; // rax

	v3 = *(_QWORD*)(a1 + 80);
	result = 0;
	if (v3)
	{
		if ((*(unsigned int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v3 + 24i64))(v3, a2, 0i64))
		{
			v5 = *(_QWORD*)(a1 + 88);
			if (v5)
			{
				if ((*(unsigned int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v5 + 24i64))(v5, a2, 0i64))
					return 1;
			}
		}
	}
	return result;
}

