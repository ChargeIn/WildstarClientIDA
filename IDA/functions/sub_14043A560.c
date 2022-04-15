//----- (000000014043A560) ----------------------------------------------------
void __fastcall sub_14043A560(int* a1, int* a2, unsigned __int8(__fastcall* a3)(__int64, __int64))
{
	char* v3; // rdi
	__int64 v7; // rsi
	char* v8; // rbx
	char* v9; // r14
	__int64 v10; // rdx

	if (a1 != a2)
	{
		v3 = (char*)(a1 + 2);
		if (a1 + 2 != a2)
		{
			do
			{
				v7 = *(_QWORD*)v3;
				if (a3(*(_QWORD*)v3, *(_QWORD*)a1))
				{
					sub_1407DB590((int*)&v3[-8 * ((v3 - (char*)a1) >> 3) + 8], a1, 8 * ((v3 - (char*)a1) >> 3));
					*(_QWORD*)a1 = v7;
				}
				else
				{
					v8 = v3 - 8;
					v9 = v3;
					if (a3(v7, *((_QWORD*)v3 - 1)))
					{
						do
						{
							*(_QWORD*)v9 = *(_QWORD*)v8;
							v10 = *((_QWORD*)v8 - 1);
							v9 = v8;
							v8 -= 8;
						} while (a3(v7, v10));
					}
					*(_QWORD*)v9 = v7;
				}
				v3 += 8;
			} while (v3 != (char*)a2);
		}
	}
}

