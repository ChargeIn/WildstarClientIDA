//----- (00000001405752F0) ----------------------------------------------------
void __fastcall sub_1405752F0(int* a1, int* a2, __int64 a3, unsigned __int8(__fastcall* a4)(int*, int*))
{
	int* v6; // rsi
	int* v7; // rbx
	int* v8; // rdi
	int v9; // [rsp+20h] [rbp-38h] BYREF
	int v10; // [rsp+24h] [rbp-34h]
	int v11; // [rsp+28h] [rbp-30h]
	int v12; // [rsp+2Ch] [rbp-2Ch]

	if (a1 != a2)
	{
		v6 = a1;
		do
		{
			v7 = v6 - 4;
			v9 = *v6;
			v10 = v6[1];
			v8 = v6;
			v11 = v6[2];
			v12 = v6[3];
			if (a4(&v9, v6 - 4))
			{
				do
				{
					*v8 = *v7;
					v8[1] = v7[1];
					v8[2] = v7[2];
					v8[3] = v7[3];
					v8 = v7;
					v7 -= 4;
				} while (a4(&v9, v7));
			}
			v6 += 4;
			*v8 = v9;
			v8[1] = v10;
			v8[2] = v11;
			v8[3] = v12;
		} while (v6 != a2);
	}
}

