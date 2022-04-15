//----- (000000014050CD50) ----------------------------------------------------
__int64 __fastcall sub_14050CD50(_QWORD* a1)
{
	int v2; // ebx
	unsigned int v3; // eax
	bool v4; // zf
	int v6; // [rsp+38h] [rbp+10h] BYREF
	int v7; // [rsp+3Ch] [rbp+14h]

	v2 = sub_140056D60(a1, 1u);
	v3 = sub_140056D60(a1, 2u);
	v4 = *(_QWORD*)(qword_140C65898 + 120) == 0i64;
	v6 = 1;
	v7 = v2;
	if (!v4)
		sub_1403C2630(qword_140C65898, &v6, v3);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

