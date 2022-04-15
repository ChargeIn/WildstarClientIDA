//----- (000000014075ACA0) ----------------------------------------------------
unsigned __int64 __fastcall sub_14075ACA0(int* a1, __int64 a2, unsigned __int64 a3)
{
	int* v6; // rbx
	int v8[10]; // [rsp+20h] [rbp-28h] BYREF

	sub_14075AFD0((__int64)a1, a2);
	v6 = (int*)a2;
	if (a2 < a3)
	{
		do
		{
			if (v6[1] < (unsigned int)a1[1])
			{
				v8[0] = *v6;
				v8[1] = v6[1];
				v8[2] = v6[2];
				v8[3] = v6[3];
				v8[4] = v6[4];
				*v6 = *a1;
				v6[1] = a1[1];
				v6[2] = a1[2];
				v6[3] = a1[3];
				v6[4] = a1[4];
				sub_14075B1D0((__int64)a1, 0i64, (a2 - (__int64)a1) / 20, v8);
			}
			v6 += 5;
		} while ((unsigned __int64)v6 < a3);
	}
	return sub_14075AED0(a1, a2);
}

