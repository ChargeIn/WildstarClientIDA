//----- (000000014049E780) ----------------------------------------------------
__int64 __fastcall sub_14049E780(__int64 a1, int a2, int a3)
{
	int v5; // eax
	unsigned int v6; // ecx
	int v7; // edi

	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72);
	v6 = 0;
	v7 = a2 - 1;
	if (!v7)
		return v5 == a3;
	if (v7 == 1)
		LOBYTE(v6) = v5 != a3;
	return v6;
}
// 140C65898: using guessed type __int64 qword_140C65898;

