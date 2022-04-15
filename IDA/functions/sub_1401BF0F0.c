//----- (00000001401BF0F0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1401BF0F0(__int64 a1, char* a2)
{
	unsigned __int64 v2; // r14
	unsigned __int64 v3; // rbx
	unsigned __int64 v5; // rdi
	__int64 v6; // rsi
	char* v7; // r9
	char* i; // r10
	char v9; // dl
	char v10; // cl
	int v11; // r8d

	v2 = *(_QWORD*)(a1 + 16);
	v3 = 0i64;
	v5 = v2;
	if (v2)
	{
		v6 = *(_QWORD*)(a1 + 8);
		while (2)
		{
			v7 = a2;
			for (i = *(char**)(16 * (v3 + ((v5 - v3) >> 1)) + v6); ; ++i)
			{
				v9 = *v7;
				if ((unsigned __int8)(*v7 - 65) <= 0x19u)
					v9 += 32;
				v10 = *i;
				if ((unsigned __int8)(*i - 65) <= 0x19u)
					v10 += 32;
				v11 = v9 - v10;
				if (v9 != v10)
					break;
				if (!*v7)
					return v3 + ((v5 - v3) >> 1);
				++v7;
			}
			if (v11 >= 0)
			{
				if (v11 <= 0)
					return v3 + ((v5 - v3) >> 1);
				v3 += ((v5 - v3) >> 1) + 1;
			}
			else
			{
				v5 = v3 + ((v5 - v3) >> 1);
			}
			if (v3 < v5)
				continue;
			break;
		}
	}
	return v2;
}

