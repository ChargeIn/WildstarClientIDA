#include "../winhttp.h"

//----- (00000001401C0090) ----------------------------------------------------
void __fastcall sub_1401C0090(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	unsigned __int64 v5; // rbp
	_QWORD* v6; // rbx
	__int64 v7; // rbx
	unsigned __int64 v8; // rbp
	int** v9; // rsi
	int* v10; // rax
	int* v11; // rcx
	_DWORD* v12; // rbx
	__int64 v13; // rbp
	int v14; // r15d
	unsigned __int64 v15; // rsi
	_QWORD* v16; // rbx
	int* v17; // rbx

	v2 = *(_QWORD*)(a1 + 80);
	if (v2)
	{
		v5 = (*(__int64(__fastcall**)(__int64))(v2 + 24))(a2);
		v6 = *(_QWORD**)(*(_QWORD*)(v2 + 16) + 8 * (v5 % *(_QWORD*)(v2 + 8)));
		if (!v6)
			goto LABEL_6;
		while (v5 != *v6 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v2 + 32))(a2, v6 + 2))
		{
			v6 = (_QWORD*)v6[1];
			if (!v6)
				goto LABEL_6;
		}
		v12 = (_DWORD*)v6 + 9;
		if (v12)
		{
			v13 = *(_QWORD*)(a1 + 80);
			v14 = *v12 + 1;
			v15 = (*(__int64(__fastcall**)(__int64))(v13 + 24))(a2);
			v16 = *(_QWORD**)(*(_QWORD*)(v13 + 16) + 8 * (v15 % *(_QWORD*)(v13 + 8)));
			if (v16)
			{
				while (v15 != *v16 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v13 + 32))(a2, v16 + 2))
				{
					v16 = (_QWORD*)v16[1];
					if (!v16)
						return;
				}
				v17 = (int*)v16 + 9;
				if (v17)
					*v17 = v14;
			}
		}
		else
		{
		LABEL_6:
			v7 = *(_QWORD*)(a1 + 80);
			if (*(_QWORD*)v7 == *(_QWORD*)(v7 + 8))
				sub_1400290D0(*(_QWORD*)(a1 + 80));
			v8 = (*(__int64(__fastcall**)(__int64))(v7 + 24))(a2);
			v9 = (int**)(*(_QWORD*)(v7 + 16) + 8 * (v8 % *(_QWORD*)(v7 + 8)));
			v10 = sub_14018B280(40i64, 0);
			if (v10)
			{
				v11 = *v9;
				*(_QWORD*)v10 = v8;
				*((_QWORD*)v10 + 1) = v11;
				*((_QWORD*)v10 + 2) = *(_QWORD*)a2;
				*((_QWORD*)v10 + 3) = *(_QWORD*)(a2 + 8);
				LODWORD(v11) = *(_DWORD*)(a2 + 16);
				v10[9] = 1;
				v10[8] = (int)v11;
				*v9 = v10;
			}
			else
			{
				*v9 = 0i64;
			}
			++* (_QWORD*)v7;
		}
	}
}

