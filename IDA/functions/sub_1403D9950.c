//----- (00000001403D9950) ----------------------------------------------------
__int64 __fastcall sub_1403D9950(__int64 a1, __int64 a2)
{
	unsigned int i; // esi
	__int64 v5; // rdi
	int* v6; // rbx
	unsigned int v7; // edx
	BOOL v8; // ecx
	__int64 v9; // r8
	int v10; // r9d

	if (*(_QWORD*)(a1 + 120))
	{
		for (i = 0; i < *(_DWORD*)a2; ++i)
		{
			v5 = *(_QWORD*)(a1 + 120);
			v6 = (int*)(*(_QWORD*)(a2 + 8) + 16i64 * i);
			if (!v6)
				break;
			v7 = v6[1];
			if (!v7)
				break;
			if (!v5)
				goto LABEL_22;
			v8 = *(_QWORD*)(qword_140C65898 + 120) == v5 || *(_QWORD*)(qword_140C65898 + 25744) == v5;
			v9 = 0i64;
			if (v8)
				v9 = qword_140C65898;
			if (!v9 || !sub_1405A5B90(v9, v7))
			{
			LABEL_22:
				if (!sub_1407A0FD0(qword_140C65B70, v7))
					break;
			}
			if ((float)v6[3] <= 0.0)
				break;
			v10 = *v6 == 2 ? v6[2] : v6[1];
			sub_14046A3D0(v5, *v6, v6[1], v10, v6[3]);
		}
	}
	return 0i64;
}
// 1403D99F6: variable 'v7' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

