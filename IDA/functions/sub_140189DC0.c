//----- (0000000140189DC0) ----------------------------------------------------
void __fastcall sub_140189DC0(__int64* a1, __int64 a2)
{
	unsigned __int64 v2; // r9
	unsigned __int64 v3; // r11
	unsigned __int64 v5; // r11
	unsigned __int64 v6; // rdx
	unsigned __int64 v7; // rcx
	unsigned __int64 v8; // r10
	unsigned __int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // rdx
	unsigned __int64 v12; // rbx

	v2 = *(_QWORD*)(a2 + 8);
	v3 = --a1[3];
	if (v2 < v3)
	{
		v5 = *(_QWORD*)(*a1 + 8 * v3);
		if (v2)
		{
			do
			{
				v6 = (v2 - 1) >> 1;
				v7 = *(_QWORD*)(*a1 + 8 * v6);
				if (v7 < v5)
					break;
				*(_QWORD*)(*a1 + 8 * v2) = v7;
				*(_QWORD*)(*(_QWORD*)(*a1 + 8 * v2) + 8i64) = v2;
				v2 = (v2 - 1) >> 1;
			} while (v6);
		}
		while (1)
		{
			v8 = a1[3];
			v9 = 2 * v2 + 2;
			v10 = 2 * v2 + 1;
			if (v9 >= v8 || (v11 = *a1, v12 = *(_QWORD*)(*a1 + 8 * v9), v12 >= v5))
			{
				if (v10 >= v8 || (v11 = *a1, *(_QWORD*)(*a1 + 8 * v10) >= v5))
				{
					*(_QWORD*)(*a1 + 8 * v2) = v5;
					*(_QWORD*)(*(_QWORD*)(*a1 + 8 * v2) + 8i64) = v2;
					return;
				}
			}
			else if (v12 < *(_QWORD*)(v11 + 8 * v10))
			{
				v10 = 2 * v2 + 2;
			}
			*(_QWORD*)(v11 + 8 * v2) = *(_QWORD*)(v11 + 8 * v10);
			*(_QWORD*)(*(_QWORD*)(*a1 + 8 * v2) + 8i64) = v2;
			v2 = v10;
		}
	}
}

