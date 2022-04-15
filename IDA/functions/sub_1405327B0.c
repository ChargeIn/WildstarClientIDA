//----- (00000001405327B0) ----------------------------------------------------
__int64 __fastcall sub_1405327B0(_QWORD* a1)
{
	__int64 v2; // rdi
	int* v3; // rax
	__int64 v4; // rsi
	__int64 v5; // rcx
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 i; // rax
	__int64 j; // rax

	v2 = sub_14052E9B0(a1);
	if (v2)
	{
		v3 = (int*)sub_1406622C0((__int64)a1, 2);
		if (v3)
		{
			v4 = sub_1403D90D0(qword_140C65898, *v3);
			if (v4)
			{
				v5 = *(_QWORD*)(v2 + 1384);
				v6 = *(_QWORD*)(v5 + 16);
				if (v6 != v5)
				{
					do
					{
						sub_1407744D0(v6 + 48, *(_DWORD*)(v4 + 8));
						v7 = *(_QWORD*)(v6 + 24);
						if (v7)
						{
							v6 = *(_QWORD*)(v6 + 24);
							for (i = *(_QWORD*)(v7 + 16); i; i = *(_QWORD*)(i + 16))
								v6 = i;
						}
						else
						{
							for (j = *(_QWORD*)(v6 + 8); v6 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
								v6 = j;
							if (*(_QWORD*)(v6 + 24) != j)
								v6 = j;
						}
					} while (v6 != *(_QWORD*)(v2 + 1384));
				}
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

