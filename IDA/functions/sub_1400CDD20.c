//----- (00000001400CDD20) ----------------------------------------------------
__int64 __fastcall sub_1400CDD20(__int64 a1, _WORD* a2)
{
	__int64 v3; // r8
	__int64 v4; // rcx
	__int64 result; // rax
	__int64 v6; // rcx

	if (a2 && *a2)
	{
		v3 = a1 + 688;
		v4 = *(_QWORD*)(a1 + 688);
		if (v4)
			return (*(__int64(__fastcall**)(__int64, _WORD*, __int64))(*(_QWORD*)v4 + 56i64))(v4, a2, -1i64);
		else
			return (*(__int64(__fastcall**)(__int64, _QWORD, _WORD*, __int64, __int64))(*(_QWORD*)qword_140C65680 + 40i64))(
				qword_140C65680,
				*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64),
				a2,
				-1i64,
				v3);
	}
	else
	{
		v6 = *(_QWORD*)(a1 + 688);
		if (v6)
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			*(_QWORD*)(a1 + 688) = 0i64;
		}
	}
	return result;
}
// 140C65680: using guessed type __int64 qword_140C65680;

