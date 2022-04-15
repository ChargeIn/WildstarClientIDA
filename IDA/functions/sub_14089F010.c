//----- (000000014089F010) ----------------------------------------------------
__int64 __fastcall sub_14089F010(unsigned int a1, int a2, __int16** a3, __int64 a4)
{
	__int16* v4; // r10
	unsigned int v6; // r8d
	float v7; // xmm1_4
	unsigned int v8; // edi
	__int64 v9; // rbx
	unsigned int v10; // edx
	unsigned int v11; // eax
	__int64 v12; // rcx
	int v13; // eax
	__int64 result; // rax
	__int64 v15; // rcx
	int v16; // eax

	v4 = *a3;
	if (a1)
	{
		v6 = *(_DWORD*)(a4 + 16);
		v7 = *(float*)(a4 + 12);
		v8 = *(_DWORD*)(a4 + 20);
		v9 = a1;
		do
		{
			if (v6 < v8)
			{
				v7 = v7 + *(float*)(a4 + 4);
				++v6;
			}
			else
			{
				v7 = *(float*)(a4 + 8);
			}
			v10 = 0;
			if (a2 >= 4)
			{
				v11 = ((unsigned int)(a2 - 4) >> 2) + 1;
				v12 = v11;
				v10 = 4 * v11;
				do
				{
					v13 = *v4;
					v4 += 4;
					*(v4 - 4) = (int)(float)((float)v13 * v7);
					*(v4 - 3) = (int)(float)((float)*(v4 - 3) * v7);
					*(v4 - 2) = (int)(float)((float)*(v4 - 2) * v7);
					result = (unsigned int)(int)(float)((float)*(v4 - 1) * v7);
					*(v4 - 1) = result;
					--v12;
				} while (v12);
			}
			if (v10 < a2)
			{
				v15 = a2 - v10;
				do
				{
					v16 = *v4++;
					result = (unsigned int)(int)(float)((float)v16 * v7);
					*(v4 - 1) = result;
					--v15;
				} while (v15);
			}
			--v9;
		} while (v9);
		*(float*)(a4 + 12) = v7;
		*(_DWORD*)(a4 + 16) = v6;
	}
	return result;
}

