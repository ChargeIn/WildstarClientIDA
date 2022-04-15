//----- (00000001401A7270) ----------------------------------------------------
__int64 __fastcall sub_1401A7270(__int64 a1, __int64 a2)
{
	_QWORD* i; // rbx

	if ((*(unsigned __int8(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a2 + 8i64))(
		a2,
		a1,
		*(_QWORD*)(a1 + 96)))
	{
		for (i = *(_QWORD**)(a1 + 48); i; i = (_QWORD*)i[9])
		{
			if (!(*(unsigned __int8(__fastcall**)(_QWORD*, __int64))(*i + 112i64))(i, a2))
				break;
		}
	}
	return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 24i64))(a2, a1);
}

