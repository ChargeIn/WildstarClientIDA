#include "../winhttp.h"

//----- (00000001403E1170) ----------------------------------------------------
__int64 __fastcall sub_1403E1170(_WORD* lpv, unsigned int a2)
{
	_WORD* v2; // r10
	int* v3; // rax
	unsigned __int64 v4; // rdx
	unsigned __int64 v5; // r9
	int v6; // edi
	unsigned int v7; // r14d
	int v8; // r12d
	unsigned __int64 v9; // r15
	int v10; // eax
	int v11; // r13d
	int v12; // ecx
	unsigned __int16 v13; // bx
	BOOL v14; // esi
	int v15; // ebp
	BOOL v16; // eax
	BOOL v17; // ecx
	unsigned __int16 v18; // ax
	int iResult; // [rsp+78h] [rbp+10h] BYREF
	unsigned __int64 v22; // [rsp+80h] [rbp+18h]
	unsigned __int64 v23; // [rsp+88h] [rbp+20h]

	v2 = lpv;
	if (a2 >= 0x1D)
		return 0i64;
	v3 = &dword_140C89730[6 * a2];
	if (!v3)
		return 0i64;
	v4 = *((_QWORD*)v3 + 1);
	v5 = *((_QWORD*)v3 + 2);
	v6 = *v3;
	v7 = 0;
	v8 = 1;
	v22 = v4;
	v23 = v5;
	v9 = 0i64;
	v10 = 0;
	v11 = 0;
	v12 = 1;
	if (!v2)
		goto LABEL_53;
	if (!v5)
		goto LABEL_50;
	while (1)
	{
		v13 = v2[v9];
		if (!v13)
			break;
		if (v13 == 32)
		{
			if ((v6 & 0x10) != 0 || v10 && (v6 & 1) != 0 || v8 && (v6 & 2) != 0 || v11 && (v6 & 0x400) != 0)
				return 0i64;
			v10 = 1;
			v11 = 1;
			goto LABEL_42;
		}
		if (v13 == 10 || v13 == 13)
		{
			if ((v6 & 0x40) == 0)
				return 0i64;
			goto LABEL_42;
		}
		if (v13 == 95 && (v6 & 0x200) != 0)
			goto LABEL_42;
		v14 = sub_1403E09D0(v13);
		if (v14)
		{
			v15 = 0;
		}
		else
		{
			if ((unsigned __int16)(v13 - 48) > 9u)
			{
				v15 = 0;
				v16 = sub_1403E0AE0(v13);
			LABEL_23:
				v17 = 1;
				if (!v16)
					return 0i64;
				goto LABEL_24;
			}
			v15 = 1;
		}
		v16 = 1;
		if (!v14)
			goto LABEL_23;
		v18 = sub_140056430(v13);
		v5 = v23;
		v2 = lpv;
		v17 = v13 == v18;
	LABEL_24:
		if (v8 && (v6 & 4) != 0)
		{
			if (!v14)
				return 0i64;
		}
		else if (!v14 && (!v15 && (v6 & 0x20) != 0 || (v6 & 0x100) != 0))
		{
			return 0i64;
		}
		if ((v6 & 8) != 0)
		{
			if (v8)
			{
				if (v17)
					return 0i64;
				v10 = 0;
				v8 = 0;
				v12 = 0;
				goto LABEL_42;
			}
			if (!v17)
				return 0i64;
		}
		v10 = 0;
		v8 = 0;
		v12 = 0;
	LABEL_42:
		if (++v9 >= v5)
			goto LABEL_45;
	}
	if (v9 < v5)
	{
		v4 = v22;
		goto LABEL_50;
	}
LABEL_45:
	v4 = v22;
	if (v5 && v2[v5 - 1])
		return 0i64;
LABEL_50:
	if (v10 && (v6 & 2) != 0)
		return 0i64;
	if (v12)
	{
	LABEL_53:
		if ((v6 & 0x80u) == 0)
			return 0i64;
	}
	if (v9 < v4 || !v11 && (v6 & 0x400) != 0)
		return 0i64;
	if (!v9)
		return 1i64;
	iResult = 256;
	LOBYTE(v7) = !IsTextUnicode(v2, 2 * v9, &iResult);
	return v7;
}
// 1403E1210: variable 'v2' is possibly undefined
// 1403E1349: variable 'v5' is possibly undefined
// 140C89730: using guessed type int dword_140C89730[];

