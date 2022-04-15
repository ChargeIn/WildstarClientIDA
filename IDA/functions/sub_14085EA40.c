//----- (000000014085EA40) ----------------------------------------------------
__int64 __fastcall sub_14085EA40(__int64 a1)
{
	bool v1; // zf
	__int64 v2; // rcx

	v1 = *(_BYTE*)(a1 + 382) >= 0;
	v2 = *(_QWORD*)(a1 + 160);
	if (v1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 248i64))(v2);
	else
		return sub_140852C90(v2);
}

