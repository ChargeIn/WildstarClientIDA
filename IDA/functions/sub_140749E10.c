//----- (0000000140749E10) ----------------------------------------------------
__int64 __fastcall sub_140749E10(_QWORD* a1)
{
	int v2; // eax
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rbx

	v2 = sub_140056D60(a1, 1u);
	v4 = sub_1407242B0(v3, v2);
	v5 = v4;
	if (v4 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 192i64))(v4))
		return sub_14072D5B0(a1, v5);
	else
		return 0i64;
}
// 140749E29: variable 'v3' is possibly undefined

