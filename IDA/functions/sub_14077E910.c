//----- (000000014077E910) ----------------------------------------------------
__int64 __fastcall sub_14077E910(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	unsigned int v4; // edx
	__int64 v5; // r9

	v2 = qword_140C65898;
	v4 = *(_DWORD*)(a1 + 276);
	if (!v4)
		return (*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)a2 + 504i64))(a2, 0i64, v2);
	if (!*(_QWORD*)(qword_140C65898 + 25744) || !qword_140C65898 || (v5 = sub_1405A5B90(qword_140C65898, v4)) == 0)
		v5 = sub_1407A0FD0(qword_140C65B70, v4);
	if (v5)
		return (*(__int64(__fastcall**)(__int64, const char*, __int64))(*(_QWORD*)a2 + 120i64))(a2, "iM", 4i64);
	else
		return (*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)a2 + 504i64))(a2, 0i64, v2);
}
// 14077E950: variable 'v4' is possibly undefined
// 14077E986: variable 'v2' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

