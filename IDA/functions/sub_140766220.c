//----- (0000000140766220) ----------------------------------------------------
void __fastcall sub_140766220(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v5; // rdi
	int v6; // eax
	__int64 v7; // rcx
	__int64 v8; // rdx
	__int64 v9; // rcx

	if (a1 != a2)
	{
		v2 = a1 + 8;
		if (a1 + 8 != a2)
		{
			v5 = 8i64;
			do
			{
				v6 = sub_1407DDB28();
				v2 += 8i64;
				v7 = v5 >> 3;
				v5 += 8i64;
				v8 = v6 % (v7 + 1);
				v9 = *(_QWORD*)(v2 - 8);
				*(_QWORD*)(v2 - 8) = *(_QWORD*)(a1 + 8 * v8);
				*(_QWORD*)(a1 + 8 * v8) = v9;
			} while (v2 != a2);
		}
	}
}

