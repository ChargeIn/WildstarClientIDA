//----- (00000001405AA950) ----------------------------------------------------
__int64 __fastcall sub_1405AA950(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
	int v12; // r14d
	__int64 v13; // rax
	unsigned int v14; // edx
	unsigned int v15; // ebx
	unsigned int* v16; // rdi
	__int64 result; // rax
	__int64 v18; // rcx
	__int64 v19; // rcx
	int v20[4]; // [rsp+70h] [rbp-118h] BYREF
	__int128 v21[11]; // [rsp+80h] [rbp-108h] BYREF
	int v22; // [rsp+130h] [rbp-58h]
	int v23[7]; // [rsp+134h] [rbp-54h] BYREF

	v12 = 0;
	v13 = sub_140205FA0(*(_DWORD*)(a1 + 184));
	if (v13)
		v12 = *(_DWORD*)(v13 + 4);
	v23[2] = a3;
	v23[3] = a4;
	v23[0] = a5;
	v22 = 0;
	v23[1] = a6;
	v15 = 1;
	v23[4] = a7;
	v16 = (unsigned int*)v23;
	v23[5] = a8;
	do
	{
		if (*v16)
		{
			sub_1404BCB00((__int64)v21, a1 + 8, 0i64, *v16, 0, a2, v15, 0, 4, 0, 0i64, 0i64, 0);
			result = (__int64)sub_1404C91B0(v19, v20, *(_DWORD*)(a1 + 188), v12, v21);
		}
		else
		{
			result = sub_1405AC6C0(a1, v14, v15, a2);
			if (result)
			{
				if (*(_DWORD*)(result + 304))
				{
					v14 = *(_DWORD*)(result + 496);
					result = HIBYTE(v14);
					if ((unsigned int)result <= *(_DWORD*)(qword_140C659F8 + 216))
					{
						v18 = *(_QWORD*)(qword_140C659F8 + 112);
						if (v18)
						{
							while (*(_DWORD*)(v18 + 152) != (_DWORD)result)
							{
								v18 = *(_QWORD*)(v18 + 8);
								if (!v18)
									goto LABEL_15;
							}
							if (*(_DWORD*)(v18 + 20) == *(_DWORD*)(a1 + 188))
								result = sub_1404C7770(v18, v14);
						}
					}
				}
			}
		}
	LABEL_15:
		++v15;
		++v16;
	} while (v15 < 7);
	return result;
}
// 1405AAA69: conditional instruction was optimized away because rcx.8!=0
// 1405AAA06: variable 'v14' is possibly undefined
// 1405AAAD6: variable 'v19' is possibly undefined
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 1405AA950: using guessed type __int128 var_108[11];
// 1405AA950: using guessed type int var_118[4];

