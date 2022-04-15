//----- (0000000140660A90) ----------------------------------------------------
__int64 __fastcall sub_140660A90(__int64 a1)
{
	int* v1; // rax
	__int64 v2; // rax
	__m128* v3; // rbx

	v1 = (int*)sub_1406622C0(a1, 1);
	if (v1)
	{
		v2 = sub_1403D90D0(qword_140C65898, *v1);
		v3 = (__m128*)v2;
		if (v2)
		{
			if (*(_QWORD*)(qword_140C65898 + 120)
				&& (!sub_1403B48B0(v2)
					|| !sub_1403B48B0(*(_QWORD*)(qword_140C65898 + 120))
					|| (unsigned int)sub_14045A950(*(_QWORD*)(qword_140C65898 + 120), v3->m128_i32[2])))
			{
				sub_14047EA60(v3);
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

