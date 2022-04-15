//----- (0000000140656630) ----------------------------------------------------
__int64 __fastcall sub_140656630(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rax
	unsigned int v4; // ebx
	unsigned int v5; // edi
	__m128 v7; // [rsp+20h] [rbp-18h] BYREF
	unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
		sub_140056570(a1, 1u, "invalid unit");
	sub_14045BAC0(v3, &v7);
	v4 = sub_140141F10(qword_140C63678, &v7);
	v8 = v4;
	v5 = sub_1401430E0(a1, &v8);
	sub_1401429A0(qword_140C63678, v4);
	return v5;
}
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140656630: using guessed type __m128 var_18;

