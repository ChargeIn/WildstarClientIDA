//----- (000000014057AE00) ----------------------------------------------------
__int64 __fastcall sub_14057AE00(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rcx

	result = a1[18];
	if (result)
	{
		a1[18] = --result;
		if (!result)
		{
			v3 = a1[8];
			if (v3)
				sub_14057DBD0(v3, a1 + 4, 0i64);
			sub_14057AC70(a1);
			return (*(__int64(__fastcall**)(_QWORD*))(*a1 + 8i64))(a1);
		}
	}
	return result;
}
// 14057DBD0: using guessed type __int64 __fastcall sub_14057DBD0(_QWORD, _QWORD, _QWORD);

