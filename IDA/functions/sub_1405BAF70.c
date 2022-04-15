//----- (00000001405BAF70) ----------------------------------------------------
__int64 __fastcall sub_1405BAF70(_QWORD* a1)
{
	__int64 v2; // rbx
	int* v3; // rax

	v2 = sub_1405BAEC0(a1);
	if (v2)
	{
		v3 = (int*)sub_1406622C0((__int64)a1, 2);
		if (v3)
			v3 = (int*)sub_1403D90D0(qword_140C65898, *v3);
		sub_1405BAC80(v2, (__int64)v3);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

