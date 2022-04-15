#include "../winhttp.h"

//----- (0000000140882D00) ----------------------------------------------------
__int64 __fastcall sub_140882D00(__int64 a1, __int64 a2, __int64 a3)
{
	_QWORD* v3; // r9
	_QWORD* v4; // rax
	__int64 v5; // rbx
	__int64 v8; // rcx
	unsigned int v9; // esi
	unsigned __int64 v10; // rbp
	__int64 v11; // rbx
	__int64 v12; // rdx
	__int64 v13; // rax
	unsigned __int64 v14; // rdi
	unsigned __int64 v15; // rcx
	__int64 v16; // rax
	__int64 v17; // rbx
	int v18; // eax
	_QWORD* v19; // rax
	_QWORD* v20; // rax
	_QWORD* v21; // rax
	_QWORD* v22; // rdi

	v3 = (_QWORD*)qword_140C62948;
	v4 = (_QWORD*)qword_140C62940;
	v5 = 0i64;
	v8 = (qword_140C62948 - qword_140C62940) >> 3;
	if (!(_DWORD)v8)
		goto LABEL_6;
	while (*v4)
	{
		v5 = (unsigned int)(v5 + 1);
		++v4;
		if ((unsigned int)v5 >= (unsigned int)v8)
			goto LABEL_6;
	}
	if ((_DWORD)v5 == -1)
	{
	LABEL_6:
		v9 = dword_140C62950;
		v10 = (unsigned int)v8;
		if ((unsigned int)v8 >= (unsigned __int64)(unsigned int)dword_140C62950)
		{
			v9 = dword_140C62950 + 1;
			v11 = sub_1408819F0(dword_140C111C0, 8i64 * (unsigned int)(dword_140C62950 + 1));
			if (!v11)
				return 0xFFFFFFFFi64;
			v12 = qword_140C62940;
			v13 = (qword_140C62948 - qword_140C62940) >> 3;
			v14 = (unsigned int)v13;
			if (qword_140C62940)
			{
				v15 = 0i64;
				if ((_DWORD)v13)
				{
					do
					{
						v16 = *(_QWORD*)(v12 + 8 * v15++);
						*(_QWORD*)(v11 + 8 * v15 - 8) = v16;
						v12 = qword_140C62940;
					} while (v15 < v14);
				}
				sub_140881720(dword_140C111C0, v12);
			}
			v3 = (_QWORD*)(v11 + 8 * v14);
			qword_140C62940 = v11;
			dword_140C62950 = v9;
			qword_140C62948 = (__int64)v3;
		}
		if (v10 >= v9)
			return 0xFFFFFFFFi64;
		qword_140C62948 = (__int64)(v3 + 1);
		if (!v3)
			return 0xFFFFFFFFi64;
		*v3 = 0i64;
		v17 = qword_140C62948 - qword_140C62940;
		*(_QWORD*)(qword_140C62948 - 8) = 0i64;
		v5 = (unsigned int)(v17 >> 3) - 1;
	}
	v18 = *(_DWORD*)(a2 + 24);
	if ((v18 & 1) != 0)
	{
		v19 = (_QWORD*)sub_1408819F0(dword_140C111C0, 320i64);
		if (!v19)
			return 0xFFFFFFFFi64;
		v20 = sub_140886150(v19, a3);
	}
	else
	{
		if ((v18 & 2) == 0)
			return 0xFFFFFFFFi64;
		v21 = (_QWORD*)sub_1408819F0(dword_140C111C0, 312i64);
		if (!v21)
			return 0xFFFFFFFFi64;
		v20 = sub_140887290(v21, a3);
	}
	v22 = v20;
	if (v20)
	{
		if ((*(unsigned int(__fastcall**)(_QWORD*, __int64, _QWORD))(*v20 + 32i64))(v20, a2, (unsigned int)v5) == 1)
		{
			*(_QWORD*)(qword_140C62940 + 8 * v5) = v22;
			return (unsigned int)v5;
		}
		(*(void(__fastcall**)(_QWORD*))(*v22 + 40i64))(v22);
	}
	return 0xFFFFFFFFi64;
}
// 140C111C0: using guessed type int dword_140C111C0;
// 140C62940: using guessed type __int64 qword_140C62940;
// 140C62948: using guessed type __int64 qword_140C62948;
// 140C62950: using guessed type int dword_140C62950;

