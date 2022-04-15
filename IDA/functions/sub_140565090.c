//----- (0000000140565090) ----------------------------------------------------
__int64 __fastcall sub_140565090(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rax

	if (a2 && a3 && (v3 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(*(_QWORD*)(a2 + 112) + 152i64), a3)) != 0)
		return sub_1403BAD30(
			qword_140C65898,
			*(_DWORD*)(*(_QWORD*)(v3 + 112) + 4i64),
			*(_BYTE*)(qword_140C65898 + 28140));
	else
		return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

