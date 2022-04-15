#include "../winhttp.h"

//----- (0000000140907504) ----------------------------------------------------
__int64 __fastcall sub_140907504(__int8** a1, int a2)
{
	int v2; // r14d
	unsigned int v4; // edi
	CHAR* v5; // rbp
	__int8* v6; // rax
	int v7; // ebx
	_QWORD* v8; // rsi
	BOOL v9; // r13d
	char** v10; // r14
	int v11; // eax
	_QWORD* v12; // rbx
	char* v13; // rax
	signed __int64 v14; // r14
	_QWORD* v16; // rax
	_QWORD* v17; // rax
	_QWORD* v18; // r14
	CHAR* v19; // rcx
	int v20; // eax
	__int64 v21; // rbx
	unsigned __int64 v22; // r12
	__int64 v23; // rsi
	__int64* v24; // rcx
	__int64 v25; // rax
	char* v26; // rax
	int v27; // eax
	__int64 v28; // rax
	CHAR* v29; // rbx
	__int64 v30; // rax
	__int8* v31; // rdx
	const CHAR* v32; // rdx
	__int8* v33; // [rsp+70h] [rbp+8h]

	v2 = a2;
	v4 = 0;
	if (!a1)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0xFFFFFFFFi64;
	}
	v5 = *a1;
	if (!*a1 || (v6 = sub_140907A0C(*a1, 61), v7 = (int)v6, (v33 = v6) == 0i64) || v5 == v6)
	{
	LABEL_22:
		*(_DWORD*)sub_1407DE1B0() = 22;
		return 0xFFFFFFFFi64;
	}
	v8 = (_QWORD*)qword_140C5F500;
	v9 = v6[1] == 0;
	if (qword_140C5F500 == qword_140C5F538)
	{
		v10 = (char**)qword_140C5F500;
		v11 = 0;
		if (qword_140C5F500)
		{
			while (*v8)
			{
				++v8;
				++v11;
			}
			v12 = sub_1407E2BB0(v11 + 1, 8ui64);
			v8 = v12;
			if (!v12)
				sub_1407DBBD0(9);
			v13 = *v10;
			if (*v10)
			{
				v14 = (char*)v10 - (char*)v12;
				do
				{
					*v12++ = sub_14090799C(v13);
					v13 = *(char**)((char*)v12 + v14);
				} while (v13);
			}
			*v12 = 0i64;
			v7 = (int)v33;
		}
		else
		{
			v8 = 0i64;
		}
		v2 = a2;
		qword_140C5F500 = (__int64)v8;
	}
	if (!v8)
	{
		if (v2 && qword_140C5F508)
		{
			if ((unsigned int)sub_140906FFC())
				goto LABEL_22;
		}
		else
		{
			if (v9)
				return 0i64;
			v16 = sub_1407E2C30(8ui64);
			qword_140C5F500 = (__int64)v16;
			if (!v16)
				return 0xFFFFFFFFi64;
			*v16 = 0i64;
			if (!qword_140C5F508)
			{
				v17 = sub_1407E2C30(8ui64);
				qword_140C5F508 = v17;
				if (!v17)
					return 0xFFFFFFFFi64;
				*v17 = 0i64;
			}
		}
		v8 = (_QWORD*)qword_140C5F500;
	}
	v18 = v8;
	if (!v8)
		return 0xFFFFFFFFi64;
	v19 = (CHAR*)*v8;
	v20 = v7;
	v21 = (__int64)v8;
	v22 = v20 - (int)v5;
	if (*v8)
	{
		while ((unsigned int)sub_1409070F0(v5, v19, v22)
			|| *(_BYTE*)(v22 + *(_QWORD*)v21) != 61 && *(_BYTE*)(v22 + *(_QWORD*)v21))
		{
			v21 += 8i64;
			v19 = *(CHAR**)v21;
			if (!*(_QWORD*)v21)
			{
				v8 = (_QWORD*)qword_140C5F500;
				goto LABEL_38;
			}
		}
		v8 = (_QWORD*)qword_140C5F500;
		v21 = (v21 - qword_140C5F500) >> 3;
	}
	else
	{
	LABEL_38:
		LODWORD(v21) = -(int)((v21 - (__int64)v8) >> 3);
	}
	if ((int)v21 < 0 || !*v18)
	{
		if (!v9)
		{
			if ((int)v21 < 0)
				LODWORD(v21) = -(int)v21;
			v27 = v21 + 2;
			if ((int)v21 + 2 <= (int)v21)
				return 0xFFFFFFFFi64;
			if ((unsigned __int64)v27 >= 0x1FFFFFFFFFFFFFFFi64)
				return 0xFFFFFFFFi64;
			v26 = sub_1407E2D30(v8, 8ui64, v27);
			if (!v26)
				return 0xFFFFFFFFi64;
			*(_QWORD*)&v26[8 * (int)v21] = v5;
			*(_QWORD*)&v26[8 * (int)v21 + 8] = 0i64;
			*a1 = 0i64;
			goto LABEL_57;
		}
		sub_1407E14C0(v5);
		*a1 = 0i64;
		return 0i64;
	}
	v23 = (int)v21;
	sub_1407E14C0((LPVOID)v18[(int)v21]);
	if (!v9)
	{
		v18[(int)v21] = v5;
		*a1 = 0i64;
		goto LABEL_58;
	}
	if (v18[(int)v21])
	{
		v24 = &v18[(int)v21 + 1];
		do
		{
			v25 = *v24;
			LODWORD(v21) = v21 + 1;
			++v24;
			v18[v23++] = v25;
		} while (v18[v23]);
	}
	if ((unsigned __int64)(int)v21 >= 0x1FFFFFFFFFFFFFFFi64)
		goto LABEL_58;
	v26 = sub_1407E2D30((LPVOID)qword_140C5F500, (int)v21, 8ui64);
	if (!v26)
		goto LABEL_58;
LABEL_57:
	qword_140C5F500 = (__int64)v26;
LABEL_58:
	if (a2)
	{
		v28 = sub_1407E1990((__int64)v5);
		v29 = (CHAR*)sub_1407E2BB0(v28 + 2, 1ui64);
		if (v29)
		{
			v30 = sub_1407E1990((__int64)v5);
			if ((unsigned int)sub_1407EA194(v29, v30 + 2, v5))
			{
				sub_1407DC390();
				__debugbreak();
			}
			v31 = &v33[v29 - v5];
			*v31 = 0;
			v32 = v31 + 1;
			if (v9)
				v32 = 0i64;
			if (!SetEnvironmentVariableA(v29, v32))
			{
				v4 = -1;
				*(_DWORD*)sub_1407DE1B0() = 42;
			}
			sub_1407E14C0(v29);
		}
	}
	if (v9)
	{
		sub_1407E14C0(v5);
		*a1 = 0i64;
	}
	return v4;
}
// 140906FFC: using guessed type __int64 sub_140906FFC(void);
// 140C5F500: using guessed type __int64 qword_140C5F500;
// 140C5F538: using guessed type __int64 qword_140C5F538;

