//----- (00000001408496C0) ----------------------------------------------------
__int64 __fastcall sub_1408496C0(__int64 a1)
{
	__int64 v1; // rcx

	v1 = *(_QWORD*)(a1 + 8);
	if (v1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 40i64))(v1);
	else
		return 1i64;
}
