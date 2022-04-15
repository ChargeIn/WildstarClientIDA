#include "../winhttp.h"

//----- (00000001405F5670) ----------------------------------------------------
_QWORD* __fastcall sub_1405F5670(_QWORD* a1)
{
	_QWORD* v2; // r8
	_QWORD* v3; // rax
	_QWORD* i; // rdx
	_QWORD* result; // rax
	__int64 v6; // r12
	_QWORD* v7; // rdi
	__int64 v8; // rcx
	__int64 v9; // r15
	__int64 v10; // rcx
	__int64 v11; // rbx
	unsigned int v12; // eax
	__int64 v13; // rbp
	__int64 v14; // r14
	int v15; // esi
	__int64 v16; // rax
	__int64 j; // rax
	__int64 k; // rax
	__int64 v19; // rax
	_QWORD* v20; // [rsp+50h] [rbp+8h]

	a1[7] = 0i64;
	a1[8] = 0i64;
	v2 = (_QWORD*)a1[2];
	v3 = (_QWORD*)v2[1];
	for (i = v2; v3; v3 = (_QWORD*)v3[2])
		i = v3;
	if (i == v2 || (v20 = i, *((_DWORD*)i + 8)))
		v20 = (_QWORD*)a1[2];
	result = v20;
	if (v20 != v2)
	{
		v6 = v20[5];
		if (v6)
		{
			result = *(_QWORD**)(v6 + 8);
			v7 = (_QWORD*)result[2];
			if (v7 != result)
			{
				do
				{
					v8 = v7[5];
					if (v8)
					{
						v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 80i64))(v8);
						v10 = *(_QWORD*)(v9 + 8);
						v11 = *(_QWORD*)(v10 + 16);
						if (v11 != v10)
						{
							do
							{
								v12 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 40) + 64i64))(*(_QWORD*)(v11 + 40));
								v13 = (int)v12;
								if (v12 <= 2)
								{
									v14 = v7[5];
									v15 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 40) + 368i64))(*(_QWORD*)(v11 + 40));
									if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v14 + 368i64))(v14) == v15)
										*((_DWORD*)a1 + v13 + 14) = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 40) + 344i64))(*(_QWORD*)(v11 + 40));
								}
								v16 = *(_QWORD*)(v11 + 24);
								if (v16)
								{
									v11 = *(_QWORD*)(v11 + 24);
									for (j = *(_QWORD*)(v16 + 16); j; j = *(_QWORD*)(j + 16))
										v11 = j;
								}
								else
								{
									for (k = *(_QWORD*)(v11 + 8); v11 == *(_QWORD*)(k + 24); k = *(_QWORD*)(k + 8))
										v11 = k;
									if (*(_QWORD*)(v11 + 24) != k)
										v11 = k;
								}
							} while (v11 != *(_QWORD*)(v9 + 8));
						}
					}
					v19 = v7[3];
					if (v19)
					{
						v7 = (_QWORD*)v7[3];
						for (result = *(_QWORD**)(v19 + 16); result; result = (_QWORD*)result[2])
							v7 = result;
					}
					else
					{
						for (result = (_QWORD*)v7[1]; v7 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
							v7 = result;
						if ((_QWORD*)v7[3] != result)
							v7 = result;
					}
				} while (v7 != *(_QWORD**)(v6 + 8));
			}
		}
	}
	return result;
}

