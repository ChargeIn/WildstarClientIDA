//----- (000000014001B800) ----------------------------------------------------
void __fastcall sub_14001B800(__int64 a1, int a2, int a3)
{
	float v4; // xmm0_4
	float v5; // xmm1_4
	unsigned __int64 v6; // rdx
	float* v7; // rdi
	unsigned __int64 i; // rcx
	void (*v9)(void); // rax

	if (a3 < a2)
	{
		v4 = *(float*)(a1 + 4i64 * a2 + 32);
		v5 = *(float*)(a1 + 4i64 * a3 + 32);
		v6 = a3 + 1;
		if (v6 < 5)
		{
			v7 = (float*)(a1 + 32 + 4 * v6);
			for (i = 5 - v6; i; --i)
				*v7++ = v5;
		}
		*(_DWORD*)(a1 + 24) &= (2 << a3) - 1;
		v9 = *(void (**)(void))(a1 + 80);
		if (v9)
		{
			if (v4 != v5)
				v9();
		}
	}
}

