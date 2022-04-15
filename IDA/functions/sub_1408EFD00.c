//----- (00000001408EFD00) ----------------------------------------------------
__int64 __fastcall sub_1408EFD00(unsigned int a1, unsigned int a2, int a3, unsigned int* a4, __int64 a5, int a6)
{
	unsigned int v7; // r9d
	unsigned int v8; // edi
	int v10; // r10d
	unsigned int v11; // r9d
	unsigned int v12; // r9d
	int v14; // ecx
	__int64 v15; // r8
	int v16; // edx
	int v17; // ecx
	__int64 v18; // r8
	__int64 v19; // rdx
	signed int i; // ebp
	char v21; // bl

	v7 = a4[8];
	v8 = 0;
	v10 = a1;
	if (!v7)
		return a1;
	v11 = v7 - 1;
	if (!v11)
	{
		if (a6 == 1)
		{
			if ((int)*a4 > 0)
			{
				v17 = 0;
				v18 = *a4;
				do
				{
					v19 = (unsigned int)(v10 >> 31);
					LODWORD(v19) = v10 % a3;
					v10 /= a3;
					LODWORD(v19) = *(unsigned __int16*)(*((_QWORD*)a4 + 8) + 2 * v19) << v17;
					v17 += a4[13];
					v8 |= v19;
					--v18;
				} while (v18);
				return v8;
			}
		}
		else
		{
			for (i = 0; i < (int)*a4; v8 |= (unsigned int)sub_1408EC1C0(a5, a4[13]) << v21)
				v21 = i++ * a4[13];
		}
		return v8;
	}
	v12 = v11 - 1;
	if (v12)
	{
		if (v12 == 1)
			return a2;
		else
			return 0i64;
	}
	else
	{
		if ((int)*a4 > 0)
		{
			v14 = 0;
			v15 = *a4;
			do
			{
				v16 = (v10 % a3) << v14;
				v14 += a4[14];
				v10 /= a3;
				v8 |= v16;
				--v15;
			} while (v15);
		}
		return v8;
	}
}

