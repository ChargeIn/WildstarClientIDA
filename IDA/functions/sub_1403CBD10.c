//----- (00000001403CBD10) ----------------------------------------------------
__int64 __fastcall sub_1403CBD10(__int64 a1, __int64 a2)
{
	unsigned int v4; // edi
	unsigned int i; // ebx
	__int64 v6; // r15
	int* v7; // rax
	int v8; // ecx
	__int64 v9; // rcx
	__int64 v10; // rax

	sub_1403D3260((__int64*)(a1 + 1384));
	v4 = 0;
	for (i = 0; i < *(_DWORD*)a2; ++i)
	{
		v6 = 4i64 * i;
		v7 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(*(_QWORD*)(a2 + 8) + v6), 0i64);
		if (v7)
		{
			v8 = v7[95];
			if ((unsigned int)(v8 - 1) > 5)
			{
				if (v8 == 20)
				{
					v9 = 6i64;
				LABEL_8:
					sub_140003460((__int64*)(*(_QWORD*)(a1 + 1384) + 16 * v9), (int*)(v6 + *(_QWORD*)(a2 + 8)));
				}
			}
			else
			{
				v9 = (unsigned int)(v8 - 1);
				if ((unsigned int)v9 < 7)
					goto LABEL_8;
			}
		}
	}
	if (*(_QWORD*)(a1 + 1392))
	{
		v10 = 0i64;
		do
		{
			sub_1403D2B70((__int64*)(*(_QWORD*)(a1 + 1384) + 16 * v10));
			v10 = ++v4;
		} while ((unsigned __int64)v4 < *(_QWORD*)(a1 + 1392));
	}
	return 0i64;
}
// 140C658F0: using guessed type __int64 qword_140C658F0;

