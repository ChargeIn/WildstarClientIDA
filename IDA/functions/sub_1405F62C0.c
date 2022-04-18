#include "../winhttp.h"

//----- (00000001405F62C0) ----------------------------------------------------
void __fastcall sub_1405F62C0(__int64 a1, int a2)
{
	__int64 v2; // rbp
	_QWORD** v4; // rax
	_QWORD* v5; // rbx
	int v6; // ecx
	__int64 v7; // rdi
	_QWORD* v8; // rax
	_QWORD* v9; // rsi

	v2 = qword_140C65980;
	v4 = *(_QWORD***)(qword_140C65980 + 48);
	if (*v4 != v4)
	{
		v5 = *v4;
		v6 = 0;
		if (*v4 != v4)
		{
			do
			{
				v7 = v5[2];
				if (a2 == *(_DWORD*)(v7 + 8))
				{
					v8 = (_QWORD*)v5[1];
					v9 = (_QWORD*)*v5;
					*v8 = *v5;
					v9[1] = v8;
					sub_14018B900((__int64)v5, 0);
					v5 = v9;
					sub_140008410(v7 + 24);
					sub_14018B900(*(_QWORD*)(v7 + 32), 0);
					sub_14018B900(v7, 0);
					v6 = 1;
				}
				else
				{
					v5 = (_QWORD*)*v5;
				}
			} while (v5 != *(_QWORD**)(v2 + 48));
			if (v6)
				Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "PublicEventVoteEnded", byte_1409ED494, 0xFFFFFFFFi64);
		}
	}
}
// 1409ED494: using guessed type _BYTE byte_1409ED494[144];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

