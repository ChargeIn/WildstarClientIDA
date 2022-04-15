//----- (0000000140646F80) ----------------------------------------------------
__int64 __fastcall sub_140646F80(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	__int64 v4; // rcx

	v2 = sub_1400D66A0(a1, 1u);
	v3 = sub_1400D66A0(a1, 2u);
	v4 = qword_140C65C30;
	if (qword_140C65C30 && *(_QWORD*)(qword_140C65C30 + 40) == v3 && v2 == v3)
	{
		*(_BYTE*)(qword_140C65C30 + 700) = 0;
		sub_1400D42F0(*(_QWORD*)(v4 + 16), 0, 0, 4.0);
	}
	return 0i64;
}
// 140C65C30: using guessed type __int64 qword_140C65C30;

