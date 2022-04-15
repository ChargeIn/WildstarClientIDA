//----- (00000001408CAC30) ----------------------------------------------------
__int64 __fastcall sub_1408CAC30(int* a1, char* a2, _DWORD* a3, unsigned int a4)
{
	__int64 v4; // rbx
	int v5; // edi
	char* v6; // rsi
	char* v8; // r10
	unsigned int v9; // r11d
	unsigned int v10; // ecx
	signed __int64 v11; // rdx
	int v12; // xmm0_4
	int v13; // eax
	__int64 result; // rax
	__int64 v15; // rcx
	int v16; // xmm0_4

	v4 = (unsigned int)a1[4];
	v5 = *a1;
	v6 = (char*)*((_QWORD*)a1 + 1);
	v8 = &v6[4 * v4];
	v9 = *a1 - v4;
	if (v9 <= a4)
	{
		if (a4)
		{
			do
			{
				if (a4 < v9)
					v9 = a4;
				if (v9)
				{
					v15 = v9;
					do
					{
						v16 = *(_DWORD*)v8;
						result = *(unsigned int*)a2;
						v8 += 4;
						*((_DWORD*)v8 - 1) = result;
						*a3 = v16;
						a2 += 4;
						++a3;
						--v15;
					} while (v15);
				}
				LODWORD(v4) = v9 + v4;
				if ((_DWORD)v4 == v5)
				{
					v8 = v6;
					LODWORD(v4) = 0;
				}
				a4 -= v9;
				v9 = v5 - v4;
			} while (a4);
			a1[4] = v4;
		}
	}
	else
	{
		v10 = a4;
		if (a4)
		{
			v11 = a2 - v8;
			do
			{
				v12 = *(_DWORD*)v8;
				v13 = *(_DWORD*)&v8[v11];
				v8 += 4;
				*((_DWORD*)v8 - 1) = v13;
				*a3++ = v12;
				--v10;
			} while (v10);
		}
		result = (unsigned int)v4 + a4;
		a1[4] = result;
	}
	return result;
}

