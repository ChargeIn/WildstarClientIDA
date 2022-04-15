//----- (00000001405737B0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1405737B0(_QWORD* a1, int* a2, int* a3)
{
	_DWORD* v3; // r9
	__int64 v7; // rax
	_DWORD* v8; // rcx
	_DWORD* v9; // rdx
	__int64 j; // r8
	int v11; // eax
	unsigned __int64 result; // rax
	__int64 v13; // r9
	__int64 v14; // rcx
	__int64 v15; // r14
	int* v16; // rax
	int* v17; // r8
	int* v18; // rbp
	int* i; // rdx
	int* v20; // r8
	int* v21; // rbx
	int* v22; // rcx
	__int64 v23; // rcx

	v3 = (_DWORD*)a1[2];
	if (v3 == (_DWORD*)a1[3])
	{
		v13 = ((__int64)v3 - a1[1]) >> 4;
		v14 = 2 * v13;
		if (!v13)
			v14 = 1i64;
		v15 = sub_14018A3E0(16 * v14) & 0xFFFFFFFFFFFFFFF0ui64;
		v16 = sub_14018B280(v15, 0);
		v17 = (int*)a1[1];
		v18 = v16;
		for (i = v16; v17 != a2; i += 4)
		{
			if (i)
			{
				*i = *v17;
				i[1] = v17[1];
				i[2] = v17[2];
				i[3] = v17[3];
			}
			v17 += 4;
		}
		if (i)
		{
			*i = *a3;
			i[1] = a3[1];
			i[2] = a3[2];
			i[3] = a3[3];
		}
		v20 = (int*)a1[2];
		v21 = i + 4;
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
				}
				v22 += 4;
				v21 += 4;
			} while (v22 != v20);
		}
		v23 = a1[1];
		if (v23)
			sub_14018B900(v23, 0);
		result = (unsigned __int64)v18 + v15;
		a1[1] = v18;
		a1[2] = v21;
		a1[3] = (char*)v18 + v15;
	}
	else
	{
		if (v3)
		{
			*v3 = *(v3 - 4);
			v3[1] = *(v3 - 3);
			v3[2] = *(v3 - 2);
			v3[3] = *(v3 - 1);
		}
		a1[2] += 16i64;
		v7 = a1[2];
		v8 = (_DWORD*)(v7 - 32);
		v9 = (_DWORD*)(v7 - 16);
		for (j = (v7 - 32 - (__int64)a2) >> 4; j > 0; v9[3] = v8[3])
		{
			v11 = *(v8 - 4);
			v8 -= 4;
			v9 -= 4;
			*v9 = v11;
			--j;
			v9[1] = v8[1];
			v9[2] = v8[2];
		}
		*a2 = *a3;
		a2[1] = a3[1];
		a2[2] = a3[2];
		result = (unsigned int)a3[3];
		a2[3] = result;
	}
	return result;
}

