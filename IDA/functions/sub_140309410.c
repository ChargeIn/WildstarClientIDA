//----- (0000000140309410) ----------------------------------------------------
unsigned __int64 __fastcall sub_140309410(__int64 a1, unsigned int a2, float* a3, __int64 a4, char* a5)
{
	unsigned int v5; // r9d
	unsigned __int64 result; // rax
	char* v10; // rbx
	__int64 v11; // rdx
	__int64 v12; // rcx
	unsigned int v13; // r9d
	unsigned int v14; // r8d
	int v15; // r8d
	__int64 v16; // rdi
	__int64 v17; // r14
	__int64 v18; // r8
	unsigned int v19; // edx
	__int64 v20; // rcx
	__int64 v21; // rdi
	__int64 v22; // rcx
	char v23; // [rsp+28h] [rbp+20h] BYREF

	v5 = *(_DWORD*)a1;
	if (!*(_DWORD*)a1)
	{
		*a3 = 0.0;
		return result;
	}
	if (v5 == 1)
	{
		result = *(_QWORD*)(a1 + 16);
		*a3 = *(float*)result;
		return result;
	}
	v10 = a5;
	if (a5)
	{
		v11 = *(unsigned int*)a5;
		v12 = *(_QWORD*)(a1 + 8);
		v13 = *(_DWORD*)(v12 + 4 * v11);
		if (v13 <= a2)
		{
			v14 = *(_DWORD*)(v12 + 4i64 * (unsigned int)(v11 + 1));
			if (a2 < v14)
			{
				v15 = v14 - v13;
				result = (unsigned int)v15;
				*a3 = (float)((float)((float)(int)(a2 - v13) / (float)v15)
					* (float)(*(float*)(*(_QWORD*)(a1 + 16) + 4i64 * (unsigned int)(v11 + 1))
						- *(float*)(*(_QWORD*)(a1 + 16) + 4 * v11)))
					+ *(float*)(*(_QWORD*)(a1 + 16) + 4 * v11);
				return result;
			}
		}
		v16 = (unsigned int)(v11 + 1);
		*(_DWORD*)a5 = v16;
		v5 = *(_DWORD*)a1;
		if ((unsigned int)v16 < *(_DWORD*)a1 - 1)
		{
			v17 = *(_QWORD*)(a1 + 8);
			if (*(_DWORD*)(v17 + 4 * v16) <= a2 && a2 < *(_DWORD*)(v17 + 4i64 * (unsigned int)(v11 + 2)))
			{
				result = (unsigned int)(v11 + 2);
				*a3 = (float)((float)((float)(int)(a2 - *(_DWORD*)(v17 + 4 * v16))
					/ (float)(*(_DWORD*)(v17 + 4 * result) - *(_DWORD*)(v17 + 4 * v16)))
					* (float)(*(float*)(*(_QWORD*)(a1 + 16) + 4 * result) - *(float*)(*(_QWORD*)(a1 + 16) + 4 * v16)))
					+ *(float*)(*(_QWORD*)(a1 + 16) + 4 * v16);
				return result;
			}
		}
	}
	else
	{
		v10 = &v23;
	}
	v18 = 0i64;
	v19 = v5;
	while ((unsigned int)v18 < v19)
	{
		v20 = (unsigned int)v18 + ((v19 - (unsigned int)v18) >> 1);
		if (a2 >= *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v20))
			v18 = (unsigned int)(v20 + 1);
		else
			v19 = v18 + ((v19 - (unsigned int)v18) >> 1);
	}
	v21 = (unsigned int)(v18 - 1);
	if ((_DWORD)v18)
	{
		if (v5 == (_DWORD)v18)
		{
			*a3 = *(float*)(*(_QWORD*)(a1 + 16) + 4 * v21);
			result = (unsigned int)(*(_DWORD*)a1 - 2);
			*(_DWORD*)v10 = result;
		}
		else
		{
			v22 = *(_QWORD*)(a1 + 8);
			result = (unsigned int)(*(_DWORD*)(v22 + 4 * v18) - *(_DWORD*)(v22 + 4 * v21));
			*a3 = (float)((float)((float)(int)(a2 - *(_DWORD*)(v22 + 4 * v21)) / (float)(int)result)
				* (float)(*(float*)(*(_QWORD*)(a1 + 16) + 4 * v18) - *(float*)(*(_QWORD*)(a1 + 16) + 4 * v21)))
				+ *(float*)(*(_QWORD*)(a1 + 16) + 4 * v21);
			*(_DWORD*)v10 = v21;
		}
	}
	else
	{
		result = *(_QWORD*)(a1 + 16);
		*a3 = *(float*)result;
		*(_DWORD*)v10 = 0;
	}
	return result;
}

