//----- (00000001403D6710) ----------------------------------------------------
void __fastcall sub_1403D6710(__int64 a1, __int64* a2)
{
	__int64 i; // rbx
	__int64 v5; // rbp
	__int64 v6; // rdi
	int* v7; // rax
	int* v8; // r14

	for (i = 0i64; (unsigned int)i < *(_DWORD*)(a1 + 4); i = (unsigned int)(i + 1))
	{
		v5 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * i);
		if (v5)
		{
			v6 = a2[1];
			v7 = sub_14018DB00(*a2, v6 + 1, 8i64);
			v8 = v7;
			*(_QWORD*)&v7[2 * v6] = v5;
			if ((int*)*a2 != v7)
			{
				sub_1407DB590(v7, (int*)*a2, 8 * a2[1]);
				if (*a2)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a2 - 16) + 8i64))(*a2 - 16);
				*a2 = (__int64)v8;
			}
			a2[1] = v6 + 1;
		}
	}
}

