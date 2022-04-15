//----- (0000000140498C70) ----------------------------------------------------
__int64 __fastcall sub_140498C70(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rbx

	v1 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 40i64))(a1);
	v2 = v1;
	if (v1 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v1 + 104i64))(v1))
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 160i64))(v2);
	else
		return 0i64;
}

