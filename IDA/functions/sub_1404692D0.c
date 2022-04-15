//----- (00000001404692D0) ----------------------------------------------------
void __fastcall sub_1404692D0(__int64 a1, int a2, __int64* a3)
{
	__int64 v3; // rdi
	int v6; // r15d
	int v7; // r13d
	int v8; // eax
	__int64 v9; // rbx
	int* v10; // rax
	int* v11; // r14

	v3 = *(_QWORD*)(a1 + 5616);
	if (v3)
	{
		v6 = a2 & 0x7C;
		v7 = a2 & 3;
		do
		{
			v8 = a2 & *(_DWORD*)(v3 + 20);
			if ((!v7 || (v8 & 3) != 0) && (!v6 || (v8 & 0x7C) != 0))
			{
				v9 = a3[1];
				v10 = sub_14018DB00(*a3, v9 + 1, 8i64);
				v11 = v10;
				*(_QWORD*)&v10[2 * v9] = v3;
				if ((int*)*a3 != v10)
				{
					sub_1407DB590(v10, (int*)*a3, 8 * a3[1]);
					if (*a3)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a3 - 16) + 8i64))(*a3 - 16);
					*a3 = (__int64)v11;
				}
				a3[1] = v9 + 1;
			}
			v3 = *(_QWORD*)(v3 + 48);
		} while (v3);
	}
}

