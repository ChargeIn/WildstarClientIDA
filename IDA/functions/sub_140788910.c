#include "../winhttp.h"

//----- (0000000140788910) ----------------------------------------------------
void __fastcall sub_140788910(__int64 a1, int a2, __int64 a3, int a4)
{
	_QWORD* v4; // rax
	_QWORD* v5; // rbx
	__int64 v10; // rdi
	__int64 v11; // rax
	int v12; // eax
	__int64 v13; // rdi
	int* v14; // rdx

	v4 = *(_QWORD**)(a1 + 40);
	v5 = (_QWORD*)*v4;
	if ((_QWORD*)*v4 != v4)
	{
		do
		{
			v10 = v5[3];
			if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v10 + 8)))
			{
				v11 = *(_QWORD*)(v10 + 8);
				if ((*(_DWORD*)(v11 + 12) & 0x80000) == 0)
				{
					if (!a2)
						goto LABEL_8;
					v12 = *(_DWORD*)(v11 + 420);
					if (!v12)
						v12 = 1;
					if (v12 == a2)
					{
					LABEL_8:
						v13 = *(_QWORD*)(a3 + 8);
						v14 = sub_14018B280(40i64, 0);
						if (v14 != (int*)-16i64)
						{
							*((_QWORD*)v14 + 2) = v5[2];
							*((_QWORD*)v14 + 3) = v5[3];
							*((_QWORD*)v14 + 4) = v5[4];
						}
						*(_QWORD*)v14 = v13;
						*((_QWORD*)v14 + 1) = *(_QWORD*)(v13 + 8);
						**(_QWORD**)(v13 + 8) = v14;
						*(_QWORD*)(v13 + 8) = v14;
					}
				}
			}
			v5 = (_QWORD*)*v5;
		} while (v5 != *(_QWORD**)(a1 + 40));
	}
	if (a4)
		sub_140788C30(a3);
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

