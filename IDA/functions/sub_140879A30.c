//----- (0000000140879A30) ----------------------------------------------------
__int64 __fastcall sub_140879A30(__int64 a1)
{
	__int64 v1; // rcx

	v1 = *(_QWORD*)(a1 + 56);
	if (v1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 72i64))(v1);
	else
		return 2i64;
}

