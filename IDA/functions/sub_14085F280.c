//----- (000000014085F280) ----------------------------------------------------
char __fastcall sub_14085F280(_QWORD* a1, __int64 a2)
{
	__int64 v5; // rcx

	if (a1[5] == a2 && !sub_14085E210(a1))
		return 1;
	v5 = a1[23];
	if (v5)
		return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 64i64))(v5, a2);
	else
		return 0;
}

