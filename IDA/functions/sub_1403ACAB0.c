//----- (00000001403ACAB0) ----------------------------------------------------
int* __fastcall sub_1403ACAB0(__int64 a1, int* a2)
{
	int v3; // ecx
	__int64 v4; // rcx
	__int64 v5; // rax
	unsigned int v6; // r8d
	__int64 v7; // rax
	__int64 v9; // rax

	v3 = *a2;
	if (*a2)
	{
		if (v3 == 1)
		{
			v4 = (unsigned int)a2[1];
			if ((unsigned int)v4 >= *(_DWORD*)(a1 + 28))
				return 0i64;
			v5 = *(_QWORD*)(a1 + 40);
		}
		else if (v3 == 2)
		{
			v4 = (unsigned int)a2[1];
			if ((unsigned int)v4 >= *(_DWORD*)(a1 + 52))
				return 0i64;
			v5 = *(_QWORD*)(a1 + 64);
		}
		else if (v3 == 10)
		{
			v4 = (unsigned int)a2[1];
			if ((unsigned int)v4 >= *(_DWORD*)(a1 + 76))
				return 0i64;
			v5 = *(_QWORD*)(a1 + 88);
		}
		else if (v3 == 5)
		{
			v4 = (unsigned int)a2[1];
			if ((unsigned int)v4 >= *(_DWORD*)(a1 + 100))
				return 0i64;
			v5 = *(_QWORD*)(a1 + 112);
		}
		else
		{
			if (v3 == 6)
			{
				v6 = a2[1];
				if (v6 < 0x200)
				{
					v7 = sub_140244F40(v6);
					if (v7)
						return sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v7 + 4), 0i64);
					return 0i64;
				}
			}
			if (v3 == 8)
			{
				v4 = (unsigned int)a2[1];
				if ((unsigned int)v4 >= *(_DWORD*)(a1 + 124))
					return 0i64;
				v5 = *(_QWORD*)(a1 + 136);
			}
			else
			{
				if (v3 != 9)
					return 0i64;
				v4 = (unsigned int)a2[1];
				if ((unsigned int)v4 >= *(_DWORD*)(a1 + 148))
					return 0i64;
				v5 = *(_QWORD*)(a1 + 160);
			}
		}
	}
	else
	{
		v4 = (unsigned int)a2[1];
		if ((unsigned int)v4 >= *(_DWORD*)(a1 + 4))
			return 0i64;
		v5 = *(_QWORD*)(a1 + 16);
	}
	v9 = *(_QWORD*)(v5 + 8 * v4);
	if (v9)
		return *(int**)(v9 + 64);
	return 0i64;
}
// 140C658F0: using guessed type __int64 qword_140C658F0;

