//----- (0000000140834DA0) ----------------------------------------------------
void __fastcall sub_140834DA0(__int64 a1, _DWORD* a2, unsigned int* a3, int a4, __int64 a5)
{
	__int64 v5; // r10
	int v10; // r8d
	int v11; // r9d
	_DWORD* v12; // rbx
	unsigned int v13; // r10d
	int v14; // eax
	unsigned int v15; // ecx
	__int64 v16; // rdx

	v5 = *(_QWORD*)(a1 + 8);
	if (!v5)
		return;
	do
	{
		v10 = 0;
		v11 = *((unsigned __int16*)a2 + 3) - 1;
		v12 = (_DWORD*)(v5 + 12i64 * *((unsigned __int16*)a2 + 2));
		v13 = *a3;
		while (1)
		{
			v14 = v10 + (v11 - v10) / 2;
			v15 = v12[3 * v14];
			if (v15 <= v13)
				break;
			v11 = v14 - 1;
		LABEL_7:
			if (v10 > v11)
				goto LABEL_13;
		}
		if (v15 < v13)
		{
			v10 = v14 + 1;
			goto LABEL_7;
		}
		v16 = (__int64)&v12[3 * v14];
		if (v16)
		{
			if (a4 == 1)
				sub_140834800(a1, v16, a5);
			else
				sub_140834DA0(a1, v16, (_DWORD)a3 + 4, a4 - 1, a5);
		}
	LABEL_13:
		if (*v12 || !*a3)
			break;
		if (a4 == 1)
		{
			sub_140834800(a1, (__int64)v12, a5);
			return;
		}
		v5 = *(_QWORD*)(a1 + 8);
		--a4;
		++a3;
		a2 = v12;
	} while (v5);
}

