//----- (0000000140054D00) ----------------------------------------------------
__int64 __fastcall sub_140054D00(__int64 a1)
{
	__int64 v1; // rcx

	v1 = *(_QWORD*)(a1 + 72);
	if (v1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 96i64))(v1);
	else
		return 1i64;
}

