//----- (0000000140440BA0) ----------------------------------------------------
__int64* __fastcall sub_140440BA0(__int64* a1, __int64 a2)
{
	__int64 v3; // r8
	__int64 v5; // rbx
	int* v6; // rax

	v3 = *(_QWORD*)(a2 + 16) - *(_QWORD*)(a2 + 8);
	if (v3 / 80)
	{
		v5 = 20 * (v3 / 80);
		v6 = sub_14018B280(v5 * 4, 0);
		a1[1] = (__int64)v6;
		a1[2] = (__int64)v6;
		a1[3] = (__int64)&v6[v5];
	}
	else
	{
		a1[1] = 0i64;
		a1[2] = 0i64;
		a1[3] = 0i64;
	}
	a1[2] = sub_140441B60(*(_QWORD****)(a2 + 8), *(_QWORD****)(a2 + 16), a1[1]);
	return a1;
}

