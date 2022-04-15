//----- (00000001406D7080) ----------------------------------------------------
__int64 __fastcall sub_1406D7080(_QWORD* a1)
{
	__int64 v2; // rbx
	char* v3; // rax
	__int64 v4; // rdx
	unsigned __int64 v5; // r9
	__m128* v6; // r9
	unsigned int* v7; // rax
	__int64 v9; // [rsp+30h] [rbp-28h] BYREF
	__m128i* v10; // [rsp+38h] [rbp-20h]
	unsigned int v11; // [rsp+68h] [rbp+10h] BYREF

	v2 = sub_1406D5FA0(a1);
	if (v2)
	{
		v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
		sub_14018F2D0(&v9, v3);
		v4 = *(_QWORD*)(v2 + 32);
		if (v4)
			sub_140109710((__int64*)(v2 + 2312), v4 + 240, v10, 0);
		v5 = *(unsigned int*)(v2 + 2504);
		if (v5 >= *(_QWORD*)(qword_140C63678 + 48))
			v6 = *(__m128**)(qword_140C63678 + 40);
		else
			v6 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v5);
		v7 = sub_140143880(&v11, a1, 3u, v6);
		sub_14004F630((unsigned int*)(v2 + 2504), v7);
		sub_1401429A0(qword_140C63678, v11);
		if (v10)
			sub_14018B900((__int64)v10, 0);
	}
	return 0i64;
}
// 140C63678: using guessed type __int64 qword_140C63678;

