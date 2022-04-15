//----- (0000000140712CE0) ----------------------------------------------------
__int64 __fastcall sub_140712CE0(__int64 a1)
{
	__int64 v2; // rcx
	unsigned int v3; // eax
	__int64 v4; // rcx
	unsigned int v5; // eax

	v2 = *(_QWORD*)(a1 + 32);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	v3 = sub_1400518A0(qword_140C63628, 105, 1, 0);
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65848 + 24i64))(qword_140C65848, a1 + 32, v3);
	v4 = *(_QWORD*)(a1 + 40);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 40) = 0i64;
	}
	v5 = sub_1400518A0(qword_140C63628, 106, 1, 0);
	return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65848 + 24i64))(
		qword_140C65848,
		a1 + 40,
		v5);
}
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65848: using guessed type __int64 qword_140C65848;

