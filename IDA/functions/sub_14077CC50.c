//----- (000000014077CC50) ----------------------------------------------------
__int64 __fastcall sub_14077CC50(__int64 a1, unsigned int a2)
{
	int* v2; // rcx

	if (!qword_140C65898)
		return *(unsigned int*)(sub_14022D940(a2) + 4);
	v2 = *(int**)(qword_140C65898 + 120);
	if (v2)
		return sub_140612E30((__int64)v2, a2, v2[13], v2[55], v2[54]);
	else
		return sub_140612E30(0i64, a2, 3, 23, 17);
}
// 140C65898: using guessed type __int64 qword_140C65898;

