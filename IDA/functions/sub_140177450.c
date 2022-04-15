//----- (0000000140177450) ----------------------------------------------------
__int64 __fastcall sub_140177450(__int64 a1)
{
	__int64 v2; // rcx

	if ((*(_BYTE*)(a1 + 664) & 1) != 0)
		return (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1024) + 112i64))(*(_QWORD*)(a1 + 1024));
	v2 = *(_QWORD*)(a1 + 688);
	if (v2)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 64i64))(v2);
	else
		return 0i64;
}

