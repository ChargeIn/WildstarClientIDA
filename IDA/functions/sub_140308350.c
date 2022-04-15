//----- (0000000140308350) ----------------------------------------------------
unsigned __int64 __fastcall sub_140308350(__int64 a1, _DWORD* a2, __int64 a3, __int64 a4)
{
	__int64 v6; // rbp
	char* v7; // rdi
	unsigned int* v8; // r14
	unsigned __int64 result; // rax
	int v10; // r9d
	unsigned int v11; // r10d
	char* v12; // rsi
	int v13; // ecx
	__int64 v14; // rdx
	__int64 v15; // r8
	__int64 v16; // rcx
	__int64 v17; // r8
	unsigned int v18; // edx
	unsigned int v19; // r8d
	__int64 v20; // rcx
	__int64 v21; // r8
	char v22; // [rsp+60h] [rbp+8h] BYREF

	if (*(_DWORD*)a1 <= 1u)
	{
		if (*(_DWORD*)a1)
		{
			result = *(_QWORD*)(a1 + 16);
			*a2 = *(unsigned __int8*)result;
		}
		else
		{
			result = 0i64;
			*a2 = 0;
		}
	}
	else
	{
		v6 = (unsigned int)(*(_DWORD*)(a3 + 104) - 1);
		v7 = (char*)&a2[v6 + 1];
		v8 = (unsigned int*)(a3 + 8 * ((unsigned int)v6 + 2 * v6 + 1));
		for (result = sub_14030A400((int*)a1, *v8, a2, a4, v7); (_DWORD)v6; *a2 = v13)
		{
			v10 = *(_DWORD*)a1;
			v11 = *(v8 - 6);
			v7 -= 4;
			v8 -= 6;
			LODWORD(v6) = v6 - 1;
			v12 = v7;
			if (*(_DWORD*)a1)
			{
				if (v10 == 1)
				{
					result = *(_QWORD*)(a1 + 16);
					v13 = *(unsigned __int8*)result;
				}
				else
				{
					if (!v7)
					{
						v12 = &v22;
					LABEL_16:
						v18 = 0;
						v19 = v10;
						while (v18 < v19)
						{
							v20 = v18 + ((v19 - v18) >> 1);
							if (v11 >= *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v20))
								v18 = v20 + 1;
							else
								v19 = v18 + ((v19 - v18) >> 1);
						}
						result = *(_QWORD*)(a1 + 16);
						v21 = v18 - 1;
						if (v18)
						{
							v13 = *(unsigned __int8*)(result + v21);
							if (v10 == v18)
							{
								result = (unsigned int)(v10 - 2);
								*(_DWORD*)v12 = result;
							}
							else
							{
								*(_DWORD*)v12 = v21;
							}
						}
						else
						{
							v13 = *(unsigned __int8*)result;
							*(_DWORD*)v12 = 0;
						}
						continue;
					}
					v14 = *(unsigned int*)v7;
					v15 = *(_QWORD*)(a1 + 8);
					if (*(_DWORD*)(v15 + 4 * v14) > v11 || v11 >= *(_DWORD*)(v15 + 4i64 * (unsigned int)(v14 + 1)))
					{
						v16 = (unsigned int)(v14 + 1);
						*(_DWORD*)v7 = v16;
						v10 = *(_DWORD*)a1;
						if ((unsigned int)v16 >= *(_DWORD*)a1 - 1)
							goto LABEL_16;
						v17 = *(_QWORD*)(a1 + 8);
						if (*(_DWORD*)(v17 + 4 * v16) > v11 || v11 >= *(_DWORD*)(v17 + 4i64 * (unsigned int)(v14 + 2)))
							goto LABEL_16;
						result = *(_QWORD*)(a1 + 16);
						v13 = *(unsigned __int8*)(result + v16);
					}
					else
					{
						result = *(_QWORD*)(a1 + 16);
						v13 = *(unsigned __int8*)(result + v14);
					}
				}
			}
			else
			{
				v13 = 0;
			}
		}
	}
	return result;
}

