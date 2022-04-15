//----- (0000000140723940) ----------------------------------------------------
__int64 __fastcall sub_140723940(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rbx
	__int64 v5; // rdi
	__int64 v6; // rbp
	__int64 v7; // r14

	v3 = a3;
	v5 = a1;
	if (a1 != a2)
	{
		v6 = a1 - a3;
		v7 = a3 - a1 + 32;
		do
		{
			if (v3)
			{
				sub_14048B2A0(v3, v5);
				*(_DWORD*)(v7 + v5) = *(_DWORD*)(v7 + v5 + v6);
			}
			v5 += 40i64;
			v3 += 40i64;
		} while (v5 != a2);
	}
	return v3;
}

