//----- (000000014049FFB0) ----------------------------------------------------
_BOOL8 __fastcall sub_14049FFB0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	__int64 v4; // rcx
	unsigned int v7; // eax

	v4 = qword_140C65970;
	if (qword_140C65970)
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65970 + 16i64))(qword_140C65970);
	else
		v7 = 0;
	return sub_1404A2090(v4, a3, v7, a4);
}
// 14049FFE8: variable 'v4' is possibly undefined
// 140C65970: using guessed type __int64 qword_140C65970;

