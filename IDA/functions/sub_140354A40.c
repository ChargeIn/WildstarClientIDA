//----- (0000000140354A40) ----------------------------------------------------
__int64 __fastcall sub_140354A40(__int64 a1)
{
	bool v1; // zf
	__int64 v2; // rdx
	__int64 v4; // rcx

	v1 = *(_DWORD*)(a1 + 24) == 0;
	v2 = a1 + 24;
	*(_QWORD*)a1 = off_140B65AB0;
	if (!v1)
		sub_1400B6120(*(_QWORD*)(a1 + 16) + 2080i64, v2);
	v4 = *(_QWORD*)(a1 + 48);
	if (v4)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 8i64))(v4, v2);
		*(_QWORD*)(a1 + 48) = 0i64;
	}
	sub_14018B900(a1, 0);
	return a1;
}
// 140354A79: variable 'v2' is possibly undefined
// 140B65AB0: using guessed type __int64 (__fastcall *off_140B65AB0[4])();

