//----- (0000000140113250) ----------------------------------------------------
__int64 __fastcall sub_140113250(_QWORD* a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 result; // rax
	_QWORD* v5; // r8
	__int64 v6; // rcx

	if (a2)
	{
		v5 = a1 + 159;
		v6 = a1[159];
		if (v6)
		{
			return (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v6 + 56i64))(v6, a2, -1i64);
		}
		else
		{
			if (!a1[158])
				a1[158] = a1[87];
			return (*(__int64(__fastcall**)(__int64, _QWORD, __int64, __int64, _QWORD*))(*(_QWORD*)qword_140C65680 + 40i64))(
				qword_140C65680,
				*(_QWORD*)(a1[158] + 96i64),
				a2,
				-1i64,
				v5);
		}
	}
	else
	{
		v3 = a1[159];
		if (v3)
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			a1[159] = 0i64;
		}
	}
	return result;
}
// 140C65680: using guessed type __int64 qword_140C65680;

