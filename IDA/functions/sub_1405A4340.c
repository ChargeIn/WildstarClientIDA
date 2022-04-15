//----- (00000001405A4340) ----------------------------------------------------
void __fastcall sub_1405A4340(
	__int64* a1,
	__int64* a2,
	__int64 a3,
	unsigned __int8(__fastcall* a4)(__int64*, __int64*))
{
	__int64* v6; // rsi
	__int64* v7; // rbx
	__int64* v8; // rdi
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	__int64 v10; // [rsp+28h] [rbp-10h]

	if (a1 != a2)
	{
		v6 = a1;
		do
		{
			v7 = v6 - 2;
			v9 = *v6;
			v10 = v6[1];
			v8 = v6;
			if (a4(&v9, v6 - 2))
			{
				do
				{
					*v8 = *v7;
					v8[1] = v7[1];
					v8 = v7;
					v7 -= 2;
				} while (a4(&v9, v7));
			}
			v6 += 2;
			*v8 = v9;
			v8[1] = v10;
		} while (v6 != a2);
	}
}

