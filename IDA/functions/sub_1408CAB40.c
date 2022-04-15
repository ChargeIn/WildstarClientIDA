//----- (00000001408CAB40) ----------------------------------------------------
__int64 __fastcall sub_1408CAB40(int* a1, int* a2, unsigned int a3)
{
	__int64 v3; // r11
	int v4; // ebx
	int* v5; // rdi
	int* v7; // r9
	unsigned int v8; // r10d
	unsigned int i; // ecx
	int v10; // xmm0_4
	__int64 result; // rax
	__int64 v12; // rcx
	int v13; // xmm0_4

	v3 = (unsigned int)a1[4];
	v4 = *a1;
	v5 = (int*)*((_QWORD*)a1 + 1);
	v7 = &v5[v3];
	v8 = *a1 - v3;
	if (v8 <= a3)
	{
		if (a3)
		{
			do
			{
				if (a3 < v8)
					v8 = a3;
				if (v8)
				{
					v12 = v8;
					do
					{
						result = (unsigned int)*a2;
						v13 = *v7++;
						*(v7 - 1) = result;
						*a2++ = v13;
						--v12;
					} while (v12);
				}
				LODWORD(v3) = v8 + v3;
				if ((_DWORD)v3 == v4)
				{
					v7 = v5;
					LODWORD(v3) = 0;
				}
				a3 -= v8;
				v8 = v4 - v3;
			} while (a3);
			a1[4] = v3;
		}
	}
	else
	{
		for (i = a3; i; --i)
		{
			v10 = *v7++;
			*(v7 - 1) = *a2;
			*a2++ = v10;
		}
		result = (unsigned int)v3 + a3;
		a1[4] = result;
	}
	return result;
}

