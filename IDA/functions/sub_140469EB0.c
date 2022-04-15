#include "../winhttp.h"

//----- (0000000140469EB0) ----------------------------------------------------
void __fastcall sub_140469EB0(__int64 a1)
{
	__int64 i; // rbp
	__int64 v2; // rax
	__int64 v3; // r14
	__int64 v4; // rcx
	_QWORD* v5; // rsi
	__int64 v6; // rax
	unsigned __int64 v7; // rdi
	_QWORD* v8; // rbx
	int* v9; // rax
	int* v10; // rbx
	unsigned __int64 v11; // r15
	int** v12; // rdi
	int* v13; // rax
	int* v14; // rcx
	__int64 j; // rbx
	_QWORD* v16; // rcx
	__int64 v17; // rdi
	__int64 v18; // rax
	int* v19; // rax
	int v20; // [rsp+60h] [rbp+8h] BYREF
	int* v21; // [rsp+68h] [rbp+10h] BYREF
	__int64 v22; // [rsp+70h] [rbp+18h] BYREF

	for (i = *(_QWORD*)(a1 + 5560); i; i = *(_QWORD*)(i + 1032))
	{
		v2 = *(_QWORD*)(i + 2192);
		if (v2)
			v3 = *(_QWORD*)(v2 + 16);
		else
			v3 = 0i64;
		if (v3)
		{
			v4 = *(_QWORD*)(i + 2328);
			if (v4 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) > 0)
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(i + 2328) + 112i64))(*(_QWORD*)(i + 2328));
			v5 = (_QWORD*)(i + 2232);
			sub_1405005B0(i + 2232);
			sub_140019490((_QWORD*)(i + 2232));
			v6 = *(_QWORD*)(v3 + 24);
			if (v6)
			{
				v20 = *(_DWORD*)(v6 + 360);
				if (v20)
				{
					v7 = (*(__int64(__fastcall**)(int*))(i + 2256))(&v20);
					v8 = *(_QWORD**)(*(_QWORD*)(i + 2248) + 8 * (v7 % *(_QWORD*)(i + 2240)));
					if (!v8)
						goto LABEL_17;
					while (v7 != *v8 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(i + 2264))(&v20, v8 + 2))
					{
						v8 = (_QWORD*)v8[1];
						if (!v8)
							goto LABEL_17;
					}
					if (v8 == (_QWORD*)-24i64)
					{
					LABEL_17:
						v9 = sub_14018B280(8i64, 0);
						v10 = v9;
						if (v9)
							*(_QWORD*)v9 = 0i64;
						else
							v10 = 0i64;
						if (*v5 == *(_QWORD*)(i + 2240))
							sub_1400290D0(i + 2232);
						v11 = (*(__int64(__fastcall**)(int*))(i + 2256))(&v20);
						v12 = (int**)(*(_QWORD*)(i + 2248) + 8 * (v11 % *(_QWORD*)(i + 2240)));
						v13 = sub_14018B280(32i64, 0);
						if (v13)
						{
							v14 = *v12;
							*(_QWORD*)v13 = v11;
							*((_QWORD*)v13 + 1) = v14;
							LODWORD(v14) = v20;
							*((_QWORD*)v13 + 3) = v10;
							v13[4] = (int)v14;
							*v12 = v13;
						}
						else
						{
							*v12 = 0i64;
						}
						++* v5;
					}
				}
			}
			else
			{
				v20 = 0;
			}
			for (j = *(_QWORD*)(v3 + 5576); j; j = *(_QWORD*)(j + 24))
			{
				v16 = *(_QWORD**)(j + 56);
				if (v16)
				{
					v17 = v16[39];
					if (v17)
					{
						v18 = *(_QWORD*)(v17 + 8);
						if (v18)
						{
							if (*(_DWORD*)(v18 + 28)
								&& (unsigned int)sub_140540360(v16, *(_DWORD*)(v3 + 8))
								&& !(unsigned int)sub_1402DD480(i + 2232, *(_QWORD*)(v17 + 8) + 28i64, &v22))
							{
								v19 = sub_14018B280(8i64, 0);
								if (v19)
								{
									*(_QWORD*)v19 = 0i64;
									v21 = v19;
								}
								else
								{
									v21 = 0i64;
								}
								sub_1400B6080(i + 2232, (int*)(*(_QWORD*)(v17 + 8) + 28i64), &v21);
							}
						}
					}
				}
			}
			*(_DWORD*)(i + 2224) = 0;
		}
	}
}

