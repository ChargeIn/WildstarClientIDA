//----- (00000001404F9FF0) ----------------------------------------------------
__int64 __fastcall sub_1404F9FF0(_QWORD* a1)
{
	__int64 v2; // rdi
	int* v3; // rax
	int v4; // edx
	__int64 v5; // rax
	__int64 v6; // rbx
	int* v7; // rax
	int* v9; // [rsp+38h] [rbp+10h] BYREF

	v2 = sub_1404F87C0(a1, 1u);
	v3 = sub_140417BF0(a1, 2u);
	if (v2)
	{
		if (*(_QWORD*)(v2 + 2168))
		{
			if (v3)
			{
				v4 = v3[71];
				if (v4)
				{
					v5 = sub_1407A0FD0(qword_140C65B70, v4);
					v6 = v5;
					if (v5)
					{
						if (*(_QWORD*)(v5 + 8))
						{
							sub_140453D40(v2);
							sub_1404FE940(v2);
							v7 = sub_14018B280(8i64, 0);
							if (v7)
							{
								*(_QWORD*)v7 = 0i64;
								v9 = v7;
							}
							else
							{
								v9 = 0i64;
							}
							sub_1400B6080(v2 + 2232, (int*)(*(_QWORD*)(v6 + 8) + 28i64), &v9);
						}
					}
				}
			}
		}
	}
	return 0i64;
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

