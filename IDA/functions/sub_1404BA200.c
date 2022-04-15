#include "../winhttp.h"

//----- (00000001404BA200) ----------------------------------------------------
__int64 __fastcall sub_1404BA200(__int64 a1, unsigned int a2, int a3)
{
	__int64 result; // rax
	__int64 v5; // rdi
	__int64 v6; // rax
	__int64 v7; // r13
	unsigned __int64 v8; // rax
	__int64 v9; // r12
	__int64 v10; // r15
	_DWORD* v11; // rbp
	unsigned int v12; // ecx
	char* v13; // rax
	char* v14; // r14
	unsigned int v15; // esi
	__int64 v16; // rbx
	_DWORD* v17; // rcx
	unsigned int v18; // ecx
	__int64 v19; // rax
	_DWORD* v20; // r8
	__int64 v21; // r10
	__int64 v22; // rax
	__int64 v23; // rax
	int v24; // [rsp+20h] [rbp-68h]
	__int64 v26; // [rsp+28h] [rbp-60h]
	int v27[4]; // [rsp+30h] [rbp-58h] BYREF

	if (!a2)
		return 1i64;
	result = sub_1405B1510(&qword_140C7DFB0);
	v5 = result;
	if (result)
	{
		v6 = sub_140205FA0(a2);
		v7 = v6;
		if (v6 && *(_DWORD*)(v5 + 64) == *(_DWORD*)(v6 + 12))
		{
			v8 = 0i64;
			v9 = 0i64;
			v10 = *(unsigned int*)(v5 + 272);
			v24 = 0;
			v26 = 0i64;
			if (*(_DWORD*)(v5 + 272))
			{
				while (1)
				{
					if (v8 < (__int64)(*(_QWORD*)(v5 + 256) - *(_QWORD*)(v5 + 248)) >> 3)
					{
						v11 = *(_DWORD**)(*(_QWORD*)(v5 + 248) + 8 * v9);
						if (v11)
						{
							v12 = v11[1];
							if (v12)
							{
								if (v12 != *(_DWORD*)(v7 + 16))
								{
									v13 = (char*)sub_140206C60(v12);
									v14 = v13;
									if (v13)
										break;
								}
							}
						}
					}
				LABEL_32:
					++v9;
					v8 = (unsigned int)(v24 + 1);
					v26 = v9;
					++v24;
					if (v9 >= v10)
						return 1i64;
				}
				v27[0] = *((_DWORD*)v13 + 14) == 0;
				v27[1] = *((_DWORD*)v13 + 15) == 0;
				v15 = 0;
				v16 = 0i64;
				v27[2] = *((_DWORD*)v13 + 16) == 0;
				do
				{
					if (v15 < (unsigned __int64)((__int64)(*(_QWORD*)(v5 + 256) - *(_QWORD*)(v5 + 248)) >> 3))
					{
						v17 = *(_DWORD**)(*(_QWORD*)(v5 + 248) + 8 * v16);
						if (v17)
						{
							if (*v17 != *v11)
							{
								v18 = *v17 == *(_DWORD*)(v7 + 16) ? a3 : v17[1];
								v19 = sub_140206C60(v18);
								if (v19)
								{
									v20 = (_DWORD*)(v19 + 36);
									v21 = 5i64;
									do
									{
										v22 = 0i64;
										while (v27[v22] || *v20 != *(int*)((char*)&v27[v22 + 14] + v14 - (char*)v27))
										{
											if (++v22 >= 3)
												goto LABEL_27;
										}
										v27[v22] = 1;
									LABEL_27:
										++v20;
										--v21;
									} while (v21);
								}
							}
						}
					}
					++v16;
					++v15;
				} while (v16 < v10);
				v9 = v26;
				v23 = 0i64;
				while (v27[v23])
				{
					if (++v23 >= 3)
						goto LABEL_32;
				}
				return 0i64;
			}
			else
			{
				return 1i64;
			}
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

