//----- (0000000140306CB0) ----------------------------------------------------
void __fastcall sub_140306CB0(unsigned __int16** a1, float* a2, __int64 a3)
{
	__int64 v6; // rdi
	__int64 v7; // rbp
	float* v8; // rsi
	unsigned int v9; // edx
	float v10; // [rsp+60h] [rbp+8h] BYREF

	if (*(_DWORD*)a1 <= 1u)
	{
		if (*(_DWORD*)a1)
			*a2 = sub_1401C9770(a1[2]);
		else
			*a2 = 0.0;
	}
	else
	{
		v6 = (unsigned int)(*(_DWORD*)(a3 + 104) - 1);
		v7 = 4 * v6;
		sub_1403091C0(a1, *(_DWORD*)(a3 + 24 * v6 + 8), a2);
		if ((_DWORD)v6)
		{
			v8 = (float*)(a3 + 24 * v6 + 12);
			do
			{
				v9 = *((_DWORD*)v8 - 7);
				v8 -= 6;
				v7 -= 4i64;
				sub_1403091C0(a1, v9, &v10);
				*a2 = (float)((float)(*a2 - v10) * (float)(1.0 - *v8)) + v10;
				LODWORD(v6) = v6 - 1;
			} while ((_DWORD)v6);
		}
	}
}

