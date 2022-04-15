//----- (0000000140860520) ----------------------------------------------------
__int64 __fastcall sub_140860520(__int64 a1, unsigned int a2)
{
	__int64 v3; // rcx
	__int64 result; // rax

	v3 = *(_QWORD*)(a1 + 184);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 72i64))(v3);
		return (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 184) + 88i64))(*(_QWORD*)(a1 + 184), a2);
	}
	return result;
}

