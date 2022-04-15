#include "../winhttp.h"

//----- (00000001401BEF20) ----------------------------------------------------
void __fastcall sub_1401BEF20(_QWORD* a1, __int64 a2)
{
	unsigned __int64 v2; // rdi
	_QWORD* v3; // rsi
	__int64 v4; // rdi
	__int64 v5; // rsi
	unsigned __int64 v6; // rbp
	_QWORD* v7; // rbx
	__int64 v8; // rbx
	unsigned __int64 v9; // rbp
	int** v10; // rsi
	int* v11; // rax
	int* v12; // rcx
	_DWORD* v13; // rbx
	__int64 v14; // rsi
	unsigned __int64 v15; // rbp
	_QWORD* v16; // rbx
	int* v17; // rbx
	__int64 v18; // rbx
	__int64 v19; // [rsp+20h] [rbp-38h]
	__int64 v21; // [rsp+68h] [rbp+10h]
	int v22; // [rsp+70h] [rbp+18h]
	unsigned __int64 v23; // [rsp+78h] [rbp+20h]

	v21 = a2;
	v2 = 0i64;
	v3 = a1;
	v23 = 0i64;
	if (a1[4])
	{
		v19 = 0i64;
		while (1)
		{
			v4 = v3[3] + v2 + 32;
			v5 = *(_QWORD*)(a2 + 80);
			if (v5)
			{
				v6 = (*(__int64(__fastcall**)(__int64))(v5 + 24))(v4);
				v7 = *(_QWORD**)(*(_QWORD*)(v5 + 16) + 8 * (v6 % *(_QWORD*)(v5 + 8)));
				if (!v7)
					goto LABEL_8;
				while (v6 != *v7 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v5 + 32))(v4, v7 + 2))
				{
					v7 = (_QWORD*)v7[1];
					if (!v7)
						goto LABEL_8;
				}
				v13 = (_DWORD*)v7 + 9;
				if (v13)
				{
					v14 = *(_QWORD*)(v21 + 80);
					v22 = *v13 + 1;
					v15 = (*(__int64(__fastcall**)(__int64))(v14 + 24))(v4);
					v16 = *(_QWORD**)(*(_QWORD*)(v14 + 16) + 8 * (v15 % *(_QWORD*)(v14 + 8)));
					if (v16)
					{
						while (v15 != *v16 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v14 + 32))(v4, v16 + 2))
						{
							v16 = (_QWORD*)v16[1];
							if (!v16)
								goto LABEL_21;
						}
						a2 = v21;
						v17 = (int*)v16 + 9;
						if (v17)
							*v17 = v22;
						goto LABEL_22;
					}
				}
				else
				{
				LABEL_8:
					v8 = *(_QWORD*)(v21 + 80);
					if (*(_QWORD*)v8 == *(_QWORD*)(v8 + 8))
						sub_1400290D0(*(_QWORD*)(v21 + 80));
					v9 = (*(__int64(__fastcall**)(__int64))(v8 + 24))(v4);
					v10 = (int**)(*(_QWORD*)(v8 + 16) + 8 * (v9 % *(_QWORD*)(v8 + 8)));
					v11 = sub_14018B280(40i64, 0);
					if (v11)
					{
						v12 = *v10;
						*(_QWORD*)v11 = v9;
						*((_QWORD*)v11 + 1) = v12;
						*((_QWORD*)v11 + 2) = *(_QWORD*)v4;
						*((_QWORD*)v11 + 3) = *(_QWORD*)(v4 + 8);
						LODWORD(v12) = *(_DWORD*)(v4 + 16);
						v11[9] = 1;
						v11[8] = (int)v12;
					}
					*v10 = v11;
					++* (_QWORD*)v8;
				}
			LABEL_21:
				a2 = v21;
			}
		LABEL_22:
			v3 = a1;
			v2 = v19 + 56;
			++v23;
			v19 += 56i64;
			if (v23 >= a1[4])
			{
				v2 = 0i64;
				break;
			}
		}
	}
	if (v3[2])
	{
		v18 = 0i64;
		do
		{
			sub_1401BEF20(*(_QWORD*)(v3[1] + v18 + 8));
			++v2;
			v18 += 16i64;
		} while (v2 < v3[2]);
	}
}

