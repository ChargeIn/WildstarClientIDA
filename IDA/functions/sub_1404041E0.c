#include "../winhttp.h"

//----- (00000001404041E0) ----------------------------------------------------
void __fastcall sub_1404041E0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
	__int64 v3; // rsi
	unsigned __int64 v4; // rcx
	unsigned __int64 v6; // r9
	__int64 v7; // rdi
	unsigned __int64 v8; // rbx
	__int64 v9; // r11
	unsigned int v10; // r8d
	unsigned __int64 v11; // rax
	__int64 v12; // rdi
	__int64 v13; // rcx
	int v14; // [rsp+20h] [rbp-18h]
	int v15; // [rsp+28h] [rbp-10h]

	v3 = qword_140C658A0;
	v4 = 0i64;
	v6 = *(_QWORD*)(qword_140C658A0 + 8);
	v7 = *(_QWORD*)qword_140C658A0;
	if (v6)
	{
		while (1)
		{
			v8 = v4 + ((v6 - v4) >> 1);
			v9 = *(_QWORD*)(v7 + 8 * v8);
			v10 = **(_DWORD**)(v9 + 8);
			if (v10 < (unsigned int)a2)
				break;
			if (v10 <= (unsigned int)a2)
			{
				v11 = *(_QWORD*)(v9 + 16);
				if (v11 < a3)
					break;
				if (v11 <= a3)
					goto LABEL_10;
			}
			v6 = v4 + ((v6 - v4) >> 1);
		LABEL_8:
			if (v4 >= v6)
				goto LABEL_9;
		}
		v4 = v8 + 1;
		goto LABEL_8;
	}
LABEL_9:
	v8 = v4;
LABEL_10:
	if (v8 < *(_QWORD*)(qword_140C658A0 + 8))
	{
		v12 = *(_QWORD*)(v7 + 8 * v8);
		if (**(_DWORD**)(v12 + 8) == (_DWORD)a2 && *(_QWORD*)(v12 + 16) == a3 && (unsigned int)a2 <= 0x2F)
		{
			v13 = 0x800060038000i64;
			if (_bittest64(&v13, a2))
			{
				if (qword_140C65898)
				{
					v15 = 0;
					v14 = 0;
					Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ChatLeave", "Hbb", v12, v14, v15);
				}
				sub_140408580(v3, v12);
				sub_140007270(v3, v8);
				if (v12)
				{
					sub_1404019F0((__int64*)v12);
					sub_14018B900(v12, 0);
				}
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

