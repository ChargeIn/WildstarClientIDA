//----- (0000000140612E30) ----------------------------------------------------
__int64 __fastcall sub_140612E30(__int64 a1, unsigned int a2, int a3, int a4, int a5)
{
	__int64 result; // rax
	__int64 v8; // r13
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // r15
	int* v12; // r11
	int v13; // ebx
	int v14; // r8d
	int v15; // r9d
	__int64 v16; // r10
	__int64 v17; // r11
	int v18; // edi

	result = sub_14022D940(a2);
	v8 = result;
	if (result)
	{
		v9 = sub_14022DD80(*(_DWORD*)(result + 8));
		v11 = v9;
		if (v9)
		{
			v12 = (int*)(v9 + 4);
			while (1)
			{
				v13 = *v12;
				if (sub_140612CB0(v10, *v12, a3, a4, a5))
				{
					v18 = *(_DWORD*)(v17 + 60);
					if (sub_140612CB0(v10, v18, v14, v15, a5) && (v13 || v18))
						break;
				}
				v12 = (int*)(v17 + 4);
				if ((unsigned int)(v16 + 1) >= 0xF)
					return *(unsigned int*)(v8 + 4);
			}
			return *(unsigned int*)(v11 + 4 * v16 + 124);
		}
		else
		{
			return *(unsigned int*)(v8 + 4);
		}
	}
	return result;
}
// 140612E9F: variable 'v10' is possibly undefined
// 140612EA8: variable 'v17' is possibly undefined
// 140612EB2: variable 'v14' is possibly undefined
// 140612EB2: variable 'v15' is possibly undefined
// 140612EC3: variable 'v16' is possibly undefined

