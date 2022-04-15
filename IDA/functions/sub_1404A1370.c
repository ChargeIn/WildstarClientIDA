//----- (00000001404A1370) ----------------------------------------------------
__int64 __fastcall sub_1404A1370(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	__int64 result; // rax
	__int64 v8; // rbp
	int v9; // ecx
	int v10; // esi
	int v11; // eax
	unsigned int v12; // ebx
	__int64 v13; // rax
	int v14; // ecx
	int v15; // edx
	float v16; // xmm0_4
	unsigned int v17; // ecx
	int v18; // edi

	if (!a2 || !a4)
		return 0i64;
	result = sub_1402081A0(*(_DWORD*)(a4 + 5552));
	v8 = result;
	if (result)
	{
		v9 = *(_DWORD*)(a4 + 5548);
		if (v9)
		{
			if (v9 != 1)
				return 0i64;
			v10 = 2;
		}
		else
		{
			v10 = 1;
		}
		v11 = dword_140DC30B8;
		v12 = 0;
		if ((dword_140DC30B8 & 1) != 0)
		{
			v14 = dword_140DC30BC;
		}
		else
		{
			dword_140DC30B8 |= 1u;
			v13 = sub_140200220(0x363u);
			if (v13)
			{
				v14 = *(_DWORD*)(v13 + 8);
				v11 = dword_140DC30B8;
				dword_140DC30BC = v14;
			}
			else
			{
				v11 = dword_140DC30B8;
				v14 = 0;
				dword_140DC30BC = 0;
			}
		}
		if ((v11 & 2) != 0)
		{
			v15 = dword_140DC30C0;
		}
		else
		{
			dword_140DC30B8 = v11 | 2;
			if (v14 == 2)
			{
				v15 = 24;
				dword_140DC30C0 = 24;
			}
			else
			{
				v15 = (v14 == 1) + 22;
				dword_140DC30C0 = v15;
			}
		}
		v16 = COERCE_FLOAT(sub_140466520(a2, v15));
		v17 = 0;
		LOBYTE(v17) = v16 >= (float)*(int*)(v8 + 4i64 * v10 + 12);
		v18 = a3 - 1;
		if (v18)
		{
			if (v18 == 1)
			{
				LOBYTE(v12) = v17 == 0;
				return v12;
			}
		}
		else
		{
			return v17;
		}
		return v12;
	}
	return result;
}
// 140DC30B8: using guessed type int dword_140DC30B8;
// 140DC30BC: using guessed type int dword_140DC30BC;
// 140DC30C0: using guessed type int dword_140DC30C0;

