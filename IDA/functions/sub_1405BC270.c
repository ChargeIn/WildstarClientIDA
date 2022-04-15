#include "../winhttp.h"

//----- (00000001405BC270) ----------------------------------------------------
void __fastcall sub_1405BC270(__int64 a1, __int64 a2)
{
	__int64 v2; // r9
	unsigned int v3; // r8d
	__int64 v4; // rax
	__int64 v5; // rdx
	__int64 v6; // rdi
	_QWORD* v7; // rax
	_QWORD* v8; // rbx
	__int64 v9; // rcx
	__int64 v10; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v13; // [rsp+30h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 48);
	v3 = *(_DWORD*)(a2 + 8);
	v4 = *(_QWORD*)(v2 + 8);
	v5 = v2;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < v3)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v5 == v2 || (v13 = v5, v3 < *(_DWORD*)(v5 + 32)))
		v13 = v2;
	if (v13 != v2)
	{
		v6 = *(_QWORD*)(v13 + 40);
		sub_1405BCD50(a1 + 40, &v13);
		v7 = *(_QWORD**)(v6 + 8);
		v8 = (_QWORD*)v7[2];
		if (v8 != v7)
		{
			do
			{
				v9 = v8[5];
				if (v9)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
				v10 = v8[3];
				if (v10)
				{
					v8 = (_QWORD*)v8[3];
					for (i = *(_QWORD**)(v10 + 16); i; i = (_QWORD*)i[2])
						v8 = i;
				}
				else
				{
					for (j = v8[1]; v8 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v8 = (_QWORD*)j;
					if (v8[3] != j)
						v8 = (_QWORD*)j;
				}
			} while (v8 != *(_QWORD**)(v6 + 8));
		}
		sub_140008410(v6);
		sub_14018B900(*(_QWORD*)(v6 + 8), 0);
		sub_14018B900(v6, 0);
	}
}

