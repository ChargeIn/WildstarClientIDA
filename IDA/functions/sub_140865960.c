//----- (0000000140865960) ----------------------------------------------------
__int64 __fastcall sub_140865960(__int64 a1, unsigned int** a2, _DWORD* a3)
{
	__int64 result; // rax
	unsigned int v7; // edx
	unsigned int v8; // r14d
	unsigned int i; // esi
	int v10; // edx
	unsigned int* v11; // rax
	__int64 v12; // rdi
	unsigned int v13; // r9d

	++* a2;
	result = sub_140865870(a1, a2, a3);
	if ((_DWORD)result == 1)
	{
		v7 = *(*a2)++;
		result = sub_1408657C0(a1, v7);
		if ((_DWORD)result == 1)
		{
			v8 = *(*a2)++;
			if (v8)
			{
				result = sub_140865630(a1 + 32, v8);
				if ((_DWORD)result == 1)
				{
					for (i = 0; i < v8; ++i)
					{
						v10 = **a2;
						v11 = *a2 + 1;
						*a2 = v11;
						v12 = *v11;
						v13 = *v11;
						*a2 = v11 + 1;
						result = sub_140865690(a1, v10, (int*)v11 + 1, v13);
						if ((_DWORD)result != 1)
							break;
						*a2 += 3 * v12;
						*a3 += -12 * v12;
					}
				}
			}
		}
	}
	return result;
}
// 1408659D3: conditional instruction was optimized away because r14d.4!=0

