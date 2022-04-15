//----- (00000001400E1F40) ----------------------------------------------------
__int64 __fastcall sub_1400E1F40(__int64 a1, unsigned int a2)
{
	__int64 v3; // rcx
	__int64 v5; // rcx

	v3 = *(_QWORD*)(a1 + 1832);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_QWORD*)(a1 + 1832) = 0i64;
	}
	v5 = *(_QWORD*)(a1 + 1840);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 1840) = 0i64;
	}
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65848 + 40i64))(
		qword_140C65848,
		a1 + 1832,
		0i64);
	return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65848 + 24i64))(
		qword_140C65848,
		a1 + 1840,
		a2);
}
// 140C65848: using guessed type __int64 qword_140C65848;

