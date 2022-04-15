//----- (0000000140892000) ----------------------------------------------------
__int64 __fastcall sub_140892000(__int64 a1, int a2, int a3, char a4, _DWORD* a5)
{
	_DWORD* v7; // r8
	unsigned int v8; // edx
	unsigned int v9; // ebx
	unsigned int v10; // ecx
	unsigned int* v11; // rax
	unsigned int v12; // edi
	unsigned int v13; // edx
	_DWORD* v14; // rax
	__int64 v15; // rcx
	unsigned int v16; // edx
	__int64 v17; // rdx
	__int64 v18; // r9
	unsigned int v19; // ecx
	__int64 v20; // rdx

	v7 = *(_DWORD**)(a1 + 224);
	v8 = v7[1] + a2;
	v9 = a4 != 0;
	v10 = ((__int64)(*(_QWORD*)(a1 + 232) - (_QWORD)v7) >> 4) - 1;
	if (v9 < v10)
	{
		v11 = &v7[4 * (a4 != 0) + 1];
		do
		{
			if (*v11 >= v8)
				break;
			++v9;
			v11 += 4;
		} while (v9 < v10);
	}
	if (a3)
	{
		v12 = 0;
		v13 = v9;
		if (!v9)
		{
			v13 = 1;
			v12 = 1;
		}
		if (v13 < v10)
		{
			v14 = &v7[4 * v13];
			v15 = v10 - v13;
			do
			{
				if (*v14 == a3)
					++v12;
				v14 += 4;
				--v15;
			} while (v15);
		}
	}
	else
	{
		v12 = v10 - v9;
	}
	if (v12)
	{
		v16 = (unsigned int)sub_1407DDB28() % v12;
		if (a3)
		{
			if (v16)
			{
				v18 = *(_QWORD*)(a1 + 224);
				v19 = v16 - 1;
				do
				{
					if (*(_DWORD*)(v18 + 16i64 * ++v9) == a3)
					{
						if (!v19)
							goto LABEL_18;
						--v19;
					}
				} while (v9 < (unsigned int)((*(_QWORD*)(a1 + 232) - v18) >> 4));
				v17 = 0i64;
			}
			else
			{
			LABEL_18:
				v17 = v9;
			}
		}
		else
		{
			v17 = v9 + v16;
		}
		v20 = 2 * v17;
		*a5 = *(_DWORD*)(*(_QWORD*)(a1 + 224) + 8 * v20);
		return (unsigned int)(*(_DWORD*)(*(_QWORD*)(a1 + 224) + 8 * v20 + 4) - *(_DWORD*)(*(_QWORD*)(a1 + 224) + 4i64));
	}
	else
	{
		*a5 = *v7;
		return 0i64;
	}
}

