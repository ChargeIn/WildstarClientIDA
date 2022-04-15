#include "../winhttp.h"

//----- (000000014088AD10) ----------------------------------------------------
void __fastcall sub_14088AD10(__int64 a1, __int64 a2)
{
	__int64 v2; // rbp
	__int64 i; // rdi
	int v5; // eax
	__int64 v6; // rbx
	int v7; // esi
	int v8; // r12d
	__int64 v9; // r13
	__int64 j; // r14
	char v11; // al
	__int64 v12; // rax
	__int64 v13; // [rsp+80h] [rbp+18h] BYREF
	__int64 v14; // [rsp+88h] [rbp+20h] BYREF

	v2 = 0i64;
	for (i = qword_140C62A30; i; i = *(_QWORD*)i)
	{
		if (i + 8 == a2)
			break;
	}
	v5 = *(_DWORD*)(i + 16);
	if ((v5 & 1) != 0)
	{
		*(_DWORD*)(i + 16) = v5 & 0xFFFFFFFD;
		sub_14088A380();
		return;
	}
	v6 = qword_140C629D8;
	v7 = *(_DWORD*)(i + 8);
	v8 = v13;
	v9 = v13;
	for (j = 0i64; v6; v6 = *(_QWORD*)(v6 + 120))
	{
		v11 = *(_BYTE*)(v6 + 98);
		if ((v11 & 1) != 0 && (v11 & 0x10) == 0)
		{
			v12 = sub_14088DC90(*(_QWORD*)(v6 + 104), v7, &v13, &v14);
			if (!j || v12 < v2)
			{
				v9 = v14;
				v8 = v13;
				v2 = v12;
				j = v6;
			}
		}
	}
	if (v2 - 1024 <= 0)
	{
		sub_140828A50(v7, *(_DWORD*)(i + 12), 0, 1);
		*(_DWORD*)(i + 16) = *(_DWORD*)(i + 16) & 0xFFFFFFFC | 1;
		do
		{
			if (*(_DWORD*)(i + 8) == v7)
				*(_DWORD*)(i + 16) |= 1u;
			i = *(_QWORD*)i;
		} while (i);
	LABEL_17:
		sub_14088A380();
		return;
	}
	if ((unsigned int)sub_14088D8D0(*(_QWORD*)(j + 104), a2, v8, v9) != 1)
	{
		sub_140828A50(v7, *(_DWORD*)(i + 12), 0, 1);
		*(_DWORD*)(i + 16) = *(_DWORD*)(i + 16) & 0xFFFFFFFC | 1;
		do
		{
			if (*(_DWORD*)(i + 8) == v7)
				*(_DWORD*)(i + 16) |= 1u;
			i = *(_QWORD*)i;
		} while (i);
		goto LABEL_17;
	}
}
// 140C629D8: using guessed type __int64 qword_140C629D8;
// 140C62A30: using guessed type __int64 qword_140C62A30;

