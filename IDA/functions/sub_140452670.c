//----- (0000000140452670) ----------------------------------------------------
__int64 __fastcall sub_140452670(__int64 a1, __int64 a2, int a3, int* a4)
{
	__int64 v4; // rdi
	int v5; // r8d
	int v6; // r8d
	int v7; // r8d
	int v8; // r8d
	__int64 v10; // rax
	int* v11; // rbx
	int* v12; // rax

	v4 = qword_140C65910;
	if ((unsigned int)(a3 - 2433) > 4)
		return 1i64;
	v5 = a3 - 2433;
	if (!v5)
	{
		sub_140452D90(qword_140C65910, (__int64)a4);
		return 0i64;
	}
	v6 = v5 - 1;
	if (v6)
	{
		v7 = v6 - 1;
		if (!v7)
		{
			sub_140453040(qword_140C65910, (__int64)a4);
			return 0i64;
		}
		v8 = v7 - 1;
		if (!v8)
		{
			sub_140452E40(qword_140C65910, (__int64)a4);
			return 0i64;
		}
		if (v8 == 1)
		{
			sub_140452A30(a1, *a4, 0i64);
			return 0i64;
		}
		return 1i64;
	}
	v10 = sub_140201320(*a4);
	if (v10)
	{
		v11 = (int*)(v10 + 28);
		v12 = sub_140453190(v4, (int*)(v10 + 24));
		sub_1404532A0((__int64)v12, v11)[2] = 1;
	}
	return 0i64;
}
// 140C65910: using guessed type __int64 qword_140C65910;

