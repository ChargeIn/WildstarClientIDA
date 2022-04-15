//----- (00000001408EB730) ----------------------------------------------------
__int64 __fastcall sub_1408EB730(__int64 a1, unsigned int a2, unsigned int* a3, _DWORD* a4)
{
	unsigned __int16* v9; // rdx
	unsigned int v10; // r14d
	unsigned int v11; // r9d
	int v12; // r11d
	unsigned int v13; // r10d
	unsigned int v14; // r8d
	unsigned int v15; // ecx
	int v16; // eax

	if (a2)
	{
		v9 = *(unsigned __int16**)(a1 + 248);
		v10 = *(_DWORD*)(a1 + 212);
		v11 = v10 >> 2;
		if (v9 && v11)
		{
			v12 = 0;
			v13 = 0;
			v14 = 0;
			do
			{
				v15 = v13 + *v9;
				if (v15 > a2)
					break;
				v16 = v9[1];
				++v14;
				v9 += 2;
				v12 += v16;
				v13 = v15;
			} while (v14 < v11);
			if (v14)
			{
				*a4 = v10 + v12;
				*a3 = v13;
			}
			else
			{
				*a4 = *(_DWORD*)(a1 + 216);
				*a3 = 0;
			}
			return 1i64;
		}
		else
		{
			return 2i64;
		}
	}
	else
	{
		*a3 = 0;
		*a4 = *(_DWORD*)(a1 + 216);
		return 1i64;
	}
}
// 1408EB79F: conditional instruction was optimized away because r9d.4!=0

