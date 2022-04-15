//----- (0000000140852D20) ----------------------------------------------------
__int64 __fastcall sub_140852D20(__int64 a1)
{
	__int64 v2; // rcx

	v2 = *(_QWORD*)(a1 + 72);
	if (v2)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 248i64))(v2);
	v2 = *(_QWORD*)(a1 + 64);
	if (v2)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 248i64))(v2);
	else
		return 0i64;
}

