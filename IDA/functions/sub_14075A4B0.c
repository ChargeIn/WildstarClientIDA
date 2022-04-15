//----- (000000014075A4B0) ----------------------------------------------------
int* __fastcall sub_14075A4B0(_QWORD* a1, int* a2, int* a3)
{
	_DWORD* v3; // r9
	int v7; // ebx
	int v8; // edi
	int v9; // esi
	int v10; // ebp
	int v11; // r14d
	int* result; // rax
	__int64 v13; // rdx
	__int64 v14; // rdx
	__int64 v15; // r12
	int* v16; // rax
	int* v17; // r8
	int* v18; // rsi
	int* i; // rcx
	int* v20; // rdx
	int* v21; // rbx
	int* v22; // rcx
	__int64 v23; // rcx

	v3 = (_DWORD*)a1[2];
	if (v3 == (_DWORD*)a1[3])
	{
		v13 = ((__int64)v3 - a1[1]) / 20;
		if (v13)
			v14 = 2 * v13;
		else
			v14 = 1i64;
		v15 = 5 * (sub_14018A3E0(20 * v14) / 0x14ui64);
		v16 = sub_14018B280(v15 * 4, 0);
		v17 = (int*)a1[1];
		v18 = v16;
		for (i = v16; v17 != a2; i += 5)
		{
			if (i)
			{
				*i = *v17;
				i[1] = v17[1];
				i[2] = v17[2];
				i[3] = v17[3];
				i[4] = v17[4];
			}
			v17 += 5;
		}
		if (i)
		{
			*i = *a3;
			i[1] = a3[1];
			i[2] = a3[2];
			i[3] = a3[3];
			i[4] = a3[4];
		}
		v20 = (int*)a1[2];
		v21 = i + 5;
		if (a2 != v20)
		{
			v22 = a2;
			do
			{
				if (v21)
				{
					*v21 = *v22;
					v21[1] = v22[1];
					v21[2] = v22[2];
					v21[3] = v22[3];
					v21[4] = v22[4];
				}
				v22 += 5;
				v21 += 5;
			} while (v22 != v20);
		}
		v23 = a1[1];
		if (v23)
			sub_14018B900(v23, 0);
		result = &v18[v15];
		a1[1] = v18;
		a1[3] = &v18[v15];
		a1[2] = v21;
	}
	else
	{
		if (v3)
		{
			*v3 = *(v3 - 5);
			v3[1] = *(v3 - 4);
			v3[2] = *(v3 - 3);
			v3[3] = *(v3 - 2);
			v3[4] = *(v3 - 1);
		}
		a1[2] += 20i64;
		v7 = *a3;
		v8 = a3[1];
		v9 = a3[2];
		v10 = a3[3];
		v11 = a3[4];
		result = sub_14075A960((__int64)a2, a1[2] - 40i64, (_DWORD*)(a1[2] - 20i64));
		*a2 = v7;
		a2[1] = v8;
		a2[2] = v9;
		a2[3] = v10;
		a2[4] = v11;
	}
	return result;
}

