//----- (000000014015C990) ----------------------------------------------------
unsigned __int64 __fastcall sub_14015C990(_QWORD* a1, int* a2, int* a3)
{
	_DWORD* v3; // r9
	int v7; // r9d
	int v8; // r10d
	int v9; // r11d
	int v10; // ebx
	unsigned __int64 result; // rax
	char* v12; // rcx
	char* v13; // rdx
	__int64 j; // r8
	int v15; // eax
	__int64 v16; // r9
	__int64 v17; // rcx
	__int64 v18; // r14
	int* v19; // rax
	int* v20; // r8
	int* v21; // rbp
	int* i; // rdx
	int* v23; // r8
	_DWORD* v24; // rbx
	_DWORD* v25; // rcx
	signed __int64 v26; // rdx
	__int64 v27; // rcx

	v3 = (_DWORD*)a1[2];
	if (v3 == (_DWORD*)a1[3])
	{
		v16 = ((__int64)v3 - a1[1]) >> 4;
		v17 = 2 * v16;
		if (!v16)
			v17 = 1i64;
		v18 = sub_14018A3E0(16 * v17) & 0xFFFFFFFFFFFFFFF0ui64;
		v19 = sub_14018B280(v18, 0);
		v20 = (int*)a1[1];
		v21 = v19;
		for (i = v19; v20 != a2; i += 4)
		{
			if (i)
			{
				*i = *v20;
				i[1] = v20[1];
				i[2] = v20[2];
				i[3] = v20[3];
			}
			v20 += 4;
		}
		if (i)
		{
			*i = *a3;
			i[1] = a3[1];
			i[2] = a3[2];
			i[3] = a3[3];
		}
		v23 = (int*)a1[2];
		v24 = i + 4;
		if (a2 != v23)
		{
			v25 = a2 + 1;
			v26 = (char*)i - (char*)a2;
			do
			{
				if (v24)
				{
					*v24 = *(v25 - 1);
					*(_DWORD*)((char*)v25 + v26 + 16) = *v25;
					*(_DWORD*)((char*)v25 + v26 + 20) = v25[1];
					*(_DWORD*)((char*)v25 + v26 + 24) = v25[2];
				}
				v25 += 4;
				v24 += 4;
			} while (v25 - 1 != v23);
		}
		v27 = a1[1];
		if (v27)
			sub_14018B900(v27, 0);
		result = (unsigned __int64)v21 + v18;
		a1[1] = v21;
		a1[2] = v24;
		a1[3] = (char*)v21 + v18;
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
		v7 = *a3;
		v8 = a3[1];
		v9 = a3[2];
		v10 = a3[3];
		result = a1[2];
		v12 = (char*)(result - 32);
		v13 = (char*)(result - 16);
		for (j = (__int64)(result - 32 - (_QWORD)a2) >> 4; j > 0; *((_DWORD*)v13 + 3) = result)
		{
			v15 = *((_DWORD*)v12 - 4);
			v12 -= 16;
			v13 -= 16;
			*(_DWORD*)v13 = v15;
			--j;
			*((_DWORD*)v13 + 1) = *((_DWORD*)v12 + 1);
			*((_DWORD*)v13 + 2) = *((_DWORD*)v12 + 2);
			result = *((unsigned int*)v12 + 3);
		}
		*a2 = v7;
		a2[1] = v8;
		a2[2] = v9;
		a2[3] = v10;
	}
	return result;
}

