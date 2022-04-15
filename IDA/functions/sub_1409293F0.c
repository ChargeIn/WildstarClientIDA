//----- (00000001409293F0) ----------------------------------------------------
_BOOL8 __fastcall sub_1409293F0(__int64 a1, unsigned __int64* a2, unsigned __int16* a3)
{
	unsigned __int64 v3; // r14
	unsigned __int64 v4; // r15
	unsigned __int64 v5; // r13
	BOOL v6; // esi
	unsigned __int64 v7; // rbx
	unsigned __int16* v9; // rdi
	unsigned __int16* v10; // rbp
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rax
	unsigned __int64 v14; // rbx
	__int64 v15; // r15
	__int64 v16; // rbp
	__int64 v17; // rax

	v3 = *a2;
	v4 = a2[1];
	v5 = a2[2];
	v6 = 0;
	v7 = 0i64;
	v9 = a3;
	if (*a2)
	{
		while (*v9 != a1)
		{
			++v7;
			v9 += v4;
			if (v7 >= v3)
				return v6;
		}
		if (v7 < v3)
		{
			v10 = v9;
			if (v9 > a3)
			{
				v11 = 2 * v4;
				v12 = (__int64)(v9 + 1);
				do
				{
					v10 = (unsigned __int16*)((char*)v10 - v11);
					if ((unsigned int)sub_1409198E0(v12, v10 + 1))
						break;
					v13 = *v10;
					v6 = v13 == v5;
					if (v13 == v5)
						return v6;
					v11 = 2 * v4;
					v12 = (__int64)(v9 + 1);
				} while (v10 > a3);
			}
			v14 = v7 + 1;
			if (v14 < v3)
			{
				v15 = 2 * v4;
				v16 = (__int64)(v9 + 1);
				do
				{
					v9 = (unsigned __int16*)((char*)v9 + v15);
					if ((unsigned int)sub_1409198E0(v16, v9 + 1))
						break;
					v17 = *v9;
					v6 = v17 == v5;
					if (v17 == v5)
						break;
					++v14;
				} while (v14 < v3);
			}
		}
	}
	return v6;
}

