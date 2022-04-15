#include "../winhttp.h"

//----- (0000000140450000) ----------------------------------------------------
void __fastcall sub_140450000(__int64 a1, __int64 a2, int a3)
{
	unsigned __int64 v4; // rdx
	__int64 v5; // rsi
	int* v7; // rcx
	unsigned __int64 v8; // rdi
	int* v9; // rbx
	unsigned __int64 v10; // rbp
	__int64 v11; // r12
	int* v12; // rax

	v4 = *(_QWORD*)(a2 + 8);
	v5 = 0i64;
	if (v4)
	{
		while (1)
		{
			v7 = (int*)(*(_QWORD*)a2 + 8 * v5);
			if ((a3 & *(_DWORD*)(*(_QWORD*)v7 + 8i64)) == 0)
				break;
		LABEL_17:
			v4 = *(_QWORD*)(a2 + 8);
			if (++v5 >= v4)
				return;
		}
		v8 = v4 - 1;
		sub_1407DB590(v7, v7 + 2, 8 * (v4 - 1 - v5));
		v9 = *(int**)a2;
		if (v8)
		{
			if (!v9)
			{
				v10 = v8;
				v11 = 8 * v8 + 16;
				goto LABEL_9;
			}
			if (v8 > *((_QWORD*)v9 - 1))
			{
				v10 = (unsigned __int64)(sub_14018A3E0(8 * v8 + 16) - 16) >> 3;
				v11 = 8 * v10 + 16;
				if ((**((unsigned int(__fastcall***)(__int64, __int64))v9 - 2))((__int64)(v9 - 4), v11))
				{
					*((_QWORD*)v9 - 1) = v10;
					goto LABEL_12;
				}
			LABEL_9:
				v12 = sub_14018B280(v11, 0);
				if (v12)
				{
					*(_QWORD*)v12 = off_140B55060;
					*((_QWORD*)v12 + 1) = v10;
				}
				v9 = v12 + 4;
			}
		}
	LABEL_12:
		if (*(int**)a2 != v9)
		{
			sub_1407DB590(v9, *(int**)a2, 8 * v8);
			if (*(_QWORD*)a2)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)a2 - 16i64) + 8i64))(*(_QWORD*)a2 - 16i64);
			*(_QWORD*)a2 = v9;
		}
		*(_QWORD*)(a2 + 8) = v8;
		--v5;
		goto LABEL_17;
	}
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

