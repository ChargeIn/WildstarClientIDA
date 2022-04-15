//----- (00000001403791A0) ----------------------------------------------------
__int64 __fastcall sub_1403791A0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rbx

	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 56i64))(*(_QWORD*)(a1 + 48));
	v3 = result;
	if (result)
	{
		result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)result + 656i64))(result, 0i64);
		if (!result)
		{
			(*(void(__fastcall**)(__int64, __int64(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(*(_QWORD*)v3 + 648i64))(
				v3,
				sub_140379300,
				a1);
			return sub_140379330(a1, 0);
		}
	}
	return result;
}

