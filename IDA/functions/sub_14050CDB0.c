//----- (000000014050CDB0) ----------------------------------------------------
__int64 __fastcall sub_14050CDB0(_QWORD* a1)
{
	__int16 v2; // bx
	unsigned int v3; // eax
	int v5; // [rsp+38h] [rbp+10h] BYREF
	int v6; // [rsp+3Ch] [rbp+14h]

	v2 = sub_140056D60(a1, 1u);
	v3 = sub_140056D60(a1, 2u);
	v5 = HIBYTE(v2);
	v6 = (unsigned __int8)v2;
	if (*(_QWORD*)(qword_140C65898 + 120))
		sub_1403C2630(qword_140C65898, &v5, v3);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

