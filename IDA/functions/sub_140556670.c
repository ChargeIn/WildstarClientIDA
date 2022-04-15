#include "../winhttp.h"

//----- (0000000140556670) ----------------------------------------------------
bool __fastcall sub_140556670(__int64 a1, __int64 a2, int a3)
{
	__int64 v5; // rsi
	_QWORD* v6; // rax
	_QWORD* v7; // rbx
	__int64 v8; // rax
	__int64 v9; // rdi
	int* v10; // rax
	_QWORD** v11; // rdx
	_QWORD* v12; // rcx
	__int64 i; // r8

	v5 = qword_140C7DCD0 + 16i64 * (int)qword_140C7DC60;
	v6 = *(_QWORD**)(v5 + 8);
	v7 = (_QWORD*)*v6;
	if ((_QWORD*)*v6 != v6)
	{
		do
		{
			if ((_DWORD)qword_140C7DC60 == 1
				|| *(_DWORD*)(v7[2] + 60i64) == a3
				&& ((v8 = sub_1405A8A40(a1, a3), a1 = v7[2], *(_DWORD*)(a1 + 56) != 13)
					|| !v8
					|| (*(_DWORD*)(*(_QWORD*)(v8 + 8) + 12i64) & 0x20000) != 0
					|| *(_DWORD*)(a1 + 68) == HIDWORD(qword_140C7DC74)))
			{
				v9 = *(_QWORD*)(a2 + 8);
				v10 = sub_14018B280(24i64, 0);
				if (v10 != (int*)-16i64)
					*((_QWORD*)v10 + 2) = v7[2];
				*(_QWORD*)v10 = v9;
				*((_QWORD*)v10 + 1) = *(_QWORD*)(v9 + 8);
				a1 = *(_QWORD*)(v9 + 8);
				*(_QWORD*)a1 = v10;
				*(_QWORD*)(v9 + 8) = v10;
			}
			v7 = (_QWORD*)*v7;
		} while (v7 != *(_QWORD**)(v5 + 8));
	}
	v11 = *(_QWORD***)(a2 + 8);
	v12 = *v11;
	for (i = 0i64; v12 != v11; ++i)
		v12 = (_QWORD*)*v12;
	return i != 0;
}
// 140C7DC60: using guessed type __int64 qword_140C7DC60;
// 140C7DC74: using guessed type __int64 qword_140C7DC74;
// 140C7DCD0: using guessed type __int64 qword_140C7DCD0;

