//----- (00000001408ADCB0) ----------------------------------------------------
void __fastcall sub_1408ADCB0(int* a1, __int128* a2, unsigned int a3)
{
	__int128* v3; // rbx
	__int64 v5; // r10
	int v6; // r11d
	__int128* v7; // rax
	unsigned int v8; // r9d
	__int64 v9; // rcx
	__int128 v10; // xmm1
	__int128 v11; // xmm0
	unsigned int v12; // r8d
	unsigned int v13; // r9d
	unsigned int i; // ecx
	__int128 v15; // xmm1
	__int128 v16; // xmm0

	v3 = (__int128*)*((_QWORD*)a1 + 1);
	if (v3)
	{
		v5 = (unsigned int)a1[4];
		v6 = *a1;
		v7 = (__int128*)((char*)v3 + 4 * v5);
		v8 = *a1 - v5;
		if (v8 <= a3)
		{
			v12 = a3 >> 2;
			v13 = v8 >> 2;
			if (v12)
			{
				do
				{
					if (v12 < v13)
						v13 = v12;
					for (i = v13; i; --i)
					{
						v15 = *v7;
						v16 = *a2;
						++v7;
						++a2;
						*(v7 - 1) = v16;
						*(a2 - 1) = v15;
					}
					LODWORD(v5) = v5 + 4 * v13;
					if ((_DWORD)v5 == v6)
					{
						v7 = v3;
						LODWORD(v5) = 0;
					}
					v12 -= v13;
					v13 = (unsigned int)(v6 - v5) >> 2;
				} while (v12);
				a1[4] = v5;
			}
		}
		else
		{
			v9 = a3 >> 2;
			if ((_DWORD)v9)
			{
				do
				{
					v10 = *v7;
					v11 = *a2;
					++v7;
					++a2;
					*(v7 - 1) = v11;
					*(a2 - 1) = v10;
					--v9;
				} while (v9);
			}
			a1[4] = v5 + a3;
		}
	}
}

