//----- (0000000140319C00) ----------------------------------------------------
unsigned __int64 __fastcall sub_140319C00(int* a1, unsigned int a2, _DWORD* a3, __int64 a4, char* a5)
{
	unsigned int v5; // ebx
	unsigned __int64 result; // rax
	char* v10; // r11
	__int64 v11; // rdx
	__int64 v12; // r8
	__int64 v13; // r8
	unsigned int v14; // edx
	unsigned int v15; // r8d
	__int64 v16; // rsi
	__int64 v17; // rcx
	__int64 v18; // r8
	char v19; // [rsp+28h] [rbp+20h] BYREF

	v5 = *a1;
	if (!*a1)
	{
		result = 0i64;
		*a3 = 0;
		return result;
	}
	if (v5 == 1)
	{
		result = *((_QWORD*)a1 + 2);
		*a3 = *(unsigned __int16*)result;
		return result;
	}
	v10 = a5;
	if (a5)
	{
		v11 = *(unsigned int*)a5;
		v12 = *((_QWORD*)a1 + 1);
		if (*(_DWORD*)(v12 + 4 * v11) <= a2 && a2 < *(_DWORD*)(v12 + 4i64 * (unsigned int)(v11 + 1))
			|| (v11 = (unsigned int)(v11 + 1), *(_DWORD*)a5 = v11, v5 = *a1, (unsigned int)v11 < *a1 - 1)
			&& (v13 = *((_QWORD*)a1 + 1), *(_DWORD*)(v13 + 4 * v11) <= a2)
			&& a2 < *(_DWORD*)(v13 + 4i64 * (unsigned int)(v11 + 1)))
		{
			result = *((_QWORD*)a1 + 2);
			*a3 = *(unsigned __int16*)(result + 2 * v11);
			return result;
		}
	}
	else
	{
		v10 = &v19;
	}
	v14 = 0;
	v15 = v5;
	if (v5)
	{
		v16 = *((_QWORD*)a1 + 1);
		do
		{
			v17 = v14 + ((v15 - v14) >> 1);
			if (a2 >= *(_DWORD*)(v16 + 4 * v17))
				v14 = v17 + 1;
			else
				v15 = v14 + ((v15 - v14) >> 1);
		} while (v14 < v15);
	}
	result = *((_QWORD*)a1 + 2);
	v18 = v14 - 1;
	if (v14)
	{
		*a3 = *(unsigned __int16*)(result + 2 * v18);
		if (v5 == v14)
		{
			result = (unsigned int)(*a1 - 2);
			*(_DWORD*)v10 = result;
		}
		else
		{
			*(_DWORD*)v10 = v18;
		}
	}
	else
	{
		*a3 = *(unsigned __int16*)result;
		*(_DWORD*)v10 = 0;
	}
	return result;
}

