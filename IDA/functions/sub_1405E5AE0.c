//----- (00000001405E5AE0) ----------------------------------------------------
void __fastcall sub_1405E5AE0(__int64* a1, int a2, int a3)
{
	unsigned __int64 v3; // r10
	__int64 v5; // rdx
	unsigned int v7; // r9d
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // r8
	unsigned __int64 v11; // rcx
	_DWORD* i; // rax

	v3 = a1[1];
	v5 = 0i64;
	v7 = 0;
	if (v3)
	{
		v8 = *a1;
		v9 = 0i64;
		while (*(_DWORD*)(*(_QWORD*)(v8 + 8 * v9) + 8i64) != a2)
		{
			v9 = ++v7;
			if (v7 >= v3)
				return;
		}
		v10 = *(_QWORD*)(v8 + 8i64 * v7);
		if (v10)
		{
			v11 = *(_QWORD*)(v10 + 72);
			if (v11)
			{
				for (i = *(_DWORD**)(v10 + 64); *i != a3; ++i)
				{
					if (++v5 >= v11)
						return;
				}
				sub_1401C2F20(v10 + 64, v5);
				if (a2 != 22)
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ProfessionUpdated", &unk_1409D135E);
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

