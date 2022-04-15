#include "../winhttp.h"

//----- (00000001403CC000) ----------------------------------------------------
__int64 __fastcall sub_1403CC000(__int64 a1, int* a2)
{
	__int64 v2; // rsi
	int v5; // ebp
	unsigned int v6; // ebx
	int* v7; // rax
	int v8; // ecx
	unsigned int v9; // ecx
	unsigned __int64 v10; // rdx
	__int64* v11; // r10
	unsigned __int64 v12; // rcx
	unsigned __int64 v13; // rax
	unsigned int v14; // r8d
	__int64 v15; // rdi
	int* v16; // rax
	char* v17; // r8
	char* v18; // rdx
	int* v19; // rax
	int v20; // ecx
	unsigned int v21; // ecx
	unsigned __int64 v22; // rax
	_QWORD* v23; // r10
	unsigned __int64 v24; // r8
	__int64 v25; // rdx
	unsigned int v26; // ecx
	__int64 v28; // [rsp+20h] [rbp-38h]
	unsigned int v29; // [rsp+68h] [rbp+10h] BYREF

	v2 = 0i64;
	if (a2[1])
	{
		while (1)
		{
			v5 = *a2;
			v6 = *(_DWORD*)(*((_QWORD*)a2 + 1) + 4 * v2);
			v29 = v6;
			switch (v5)
			{
			case 0:
				v7 = sub_1400B5DF0(qword_140C658F0, v6, 0i64);
				if (!v7)
					goto LABEL_35;
				v8 = v7[95];
				if ((unsigned int)(v8 - 1) > 5)
				{
					if (v8 == 20)
					{
						v9 = 6;
					LABEL_9:
						v10 = 0i64;
						v11 = (__int64*)(*(_QWORD*)(a1 + 1384) + 16i64 * v9);
						v12 = v11[1];
						if (v12)
						{
							do
							{
								v13 = v10 + ((v12 - v10) >> 1);
								v14 = *(_DWORD*)(*v11 + 4 * v13);
								if (v6 < v14)
								{
									v12 = v10 + ((v12 - v10) >> 1);
								}
								else
								{
									if (v14 >= v6)
										goto LABEL_16;
									v10 = v13 + 1;
								}
							} while (v10 < v12);
						}
						sub_1401C2E70(v11, v10, (int*)&v29);
						goto LABEL_16;
					}
				}
				else
				{
					v9 = v8 - 1;
					if (v9 < 7)
						goto LABEL_9;
				}
				goto LABEL_35;
			case 1:
			case 2:
			case 3:
			case 6:
			case 7:
			LABEL_16:
				v15 = *(_QWORD*)(qword_140C65898 + 29504);
				v16 = sub_1400B5DF0(qword_140C658F0, v6, 0i64);
				if (!v16)
					goto LABEL_35;
				v17 = "oi";
				v18 = "CostumeUnlockResult";
				goto LABEL_34;
			case 4:
				v19 = sub_1400B5DF0(qword_140C658F0, v6, 0i64);
				if (!v19)
					goto LABEL_35;
				v20 = v19[95];
				if ((unsigned int)(v20 - 1) > 5)
				{
					if (v20 != 20)
						goto LABEL_35;
					v21 = 6;
				}
				else
				{
					v21 = v20 - 1;
					if (v21 >= 7)
						goto LABEL_35;
				}
				v22 = 0i64;
				v23 = (_QWORD*)(*(_QWORD*)(a1 + 1384) + 16i64 * v21);
				v24 = v23[1];
				if (!v24)
					goto LABEL_32;
				while (2)
				{
					v25 = v22 + ((v24 - v22) >> 1);
					v26 = *(_DWORD*)(*v23 + 4 * v25);
					if (v6 < v26)
					{
						v24 = v22 + ((v24 - v22) >> 1);
					LABEL_29:
						if (v22 >= v24)
							goto LABEL_32;
						continue;
					}
					break;
				}
				if (v26 < v6)
				{
					v22 = v25 + 1;
					goto LABEL_29;
				}
				sub_1401C2F20((__int64)v23, v25);
			LABEL_32:
				v15 = *(_QWORD*)(qword_140C65898 + 29504);
				v16 = sub_1400B5DF0(qword_140C658F0, v6, 0i64);
				if (v16)
				{
					v17 = "oi";
					v18 = "CostumeForgetResult";
				LABEL_34:
					LODWORD(v28) = v5;
					sub_1400EA3E0(v15, v18, v17, v16, v28);
				}
			LABEL_35:
				v2 = (unsigned int)(v2 + 1);
				if ((unsigned int)v2 >= a2[1])
					return 0i64;
				break;
			case 5:
			case 8:
			case 9:
				goto LABEL_32;
			default:
				goto LABEL_35;
			}
		}
	}
	return 0i64;
}
// 1403CC20C: variable 'v28' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

