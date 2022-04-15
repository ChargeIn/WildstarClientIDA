#include "../winhttp.h"

//----- (00000001403748E0) ----------------------------------------------------
__int64 __fastcall sub_1403748E0(__int64 a1, unsigned __int64 a2, _QWORD* a3)
{
	__int64* v4; // r14
	unsigned int i; // edi
	__int64 v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rcx
	unsigned int v10; // r9d
	__int64 v11; // rcx
	_QWORD* v12; // rax
	__int64 v13; // r8
	__int64 v14; // rbx
	__int64 v15; // rbx
	unsigned __int16* v16; // rsi
	__int64 v17; // rbp
	_WORD* v18; // rdi
	__int64 v19; // rdx
	int v20; // edi
	__int64 v21; // rdi
	_WORD* v22; // rbx
	__int64 v23; // rdx
	int v25[4]; // [rsp+40h] [rbp-38h] BYREF
	__int64 v26; // [rsp+80h] [rbp+8h] BYREF
	_QWORD* v27; // [rsp+98h] [rbp+20h] BYREF

	v4 = (__int64*)a2;
	v25[0] = -1;
	if (!*(_DWORD*)(a1 + 28))
	{
		for (i = 0; i < *(_DWORD*)(a1 + 44); ++i)
		{
			v7 = *(_QWORD*)(a1 + 8i64 * i + 48);
			if (v7)
			{
				v8 = *(_QWORD*)(v7 + 16);
				if (v8)
				{
					if (!(*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v8 + 32i64))(v8, v25))
						goto LABEL_10;
					sub_140373540(v7);
					v9 = *(_QWORD*)(v7 + 16);
					if (v9)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
						*(_QWORD*)(v7 + 16) = 0i64;
					}
				}
			}
		}
		*(_DWORD*)(a1 + 28) = 1;
	}
LABEL_10:
	v10 = *(_DWORD*)(a1 + 44);
	v11 = 0i64;
	v12 = 0i64;
	v13 = 0i64;
	v26 = 0i64;
	v27 = 0i64;
	if (!v10)
		goto LABEL_33;
	while (1)
	{
		a2 = (unsigned int)v13;
		v14 = *(_QWORD*)(a1 + 8i64 * (unsigned int)v13 + 48);
		if (v14)
		{
			v15 = *(_QWORD*)(v14 + 80);
			if (v15)
			{
				if (*(_DWORD*)(v15 + 496))
					break;
			}
		}
		v13 = (unsigned int)(v13 + 1);
		if ((unsigned int)v13 >= v10)
			goto LABEL_33;
	}
	v16 = *(unsigned __int16**)(*(_QWORD*)(v15 + 504) + 40i64);
	if ((unsigned int)*v16 < *(_DWORD*)(v15 + 448))
	{
		v17 = qword_140C65800;
		v18 = *(_WORD**)(32i64 * *v16 + *(_QWORD*)(v15 + 456) + 24);
		if (v18 && *v18)
		{
			if ((*(int(__fastcall**)(__int64, _WORD*, __int64))(*(_QWORD*)qword_140C65670 + 136i64))(
				qword_140C65670,
				v18,
				3i64) >= 0)
			{
			LABEL_23:
				v11 = v26;
				v12 = v27;
				goto LABEL_24;
			}
			sub_1400035B0();
			v19 = *(_QWORD*)(v17 + 2120);
		}
		else
		{
			v19 = *(_QWORD*)(qword_140C65800 + 2144);
		}
		v20 = (*(__int64(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)qword_140C65670 + 128i64))(
			qword_140C65670,
			v19,
			&v26);
		if (v20 < 0)
		{
		LABEL_31:
			v11 = v26;
			v12 = v27;
			goto LABEL_38;
		}
		goto LABEL_23;
	}
LABEL_24:
	a2 = v16[1];
	if ((unsigned int)a2 < *(_DWORD*)(v15 + 448))
	{
		v21 = qword_140C65800;
		v22 = *(_WORD**)(32i64 * v16[1] + *(_QWORD*)(v15 + 456) + 24);
		if (v22 && *v22)
		{
			if ((*(int(__fastcall**)(__int64, _WORD*, __int64))(*(_QWORD*)qword_140C65670 + 136i64))(
				qword_140C65670,
				v22,
				3i64) >= 0)
			{
			LABEL_32:
				v11 = v26;
				v12 = v27;
				goto LABEL_33;
			}
			sub_1400035B0();
			v23 = *(_QWORD*)(v21 + 2128);
		}
		else
		{
			v23 = *(_QWORD*)(qword_140C65800 + 2152);
		}
		v20 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD**))(*(_QWORD*)qword_140C65670 + 128i64))(
			qword_140C65670,
			v23,
			&v27);
		if (v20 < 0)
			goto LABEL_31;
		goto LABEL_32;
	}
LABEL_33:
	*v4 = v11;
	if (v11)
	{
		(**(void(__fastcall***)(__int64, unsigned __int64, __int64))v11)(v11, a2, v13);
		v11 = v26;
		v12 = v27;
	}
	*a3 = v12;
	if (v12)
	{
		(*(void(__fastcall**)(_QWORD*, _QWORD, __int64)) * v12)(v12, *v12, v13);
		v11 = v26;
		v12 = v27;
	}
	v20 = 0;
LABEL_38:
	if (v12)
	{
		(*(void(__fastcall**)(_QWORD*))(*v12 + 8i64))(v12);
		v11 = v26;
	}
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
	return (unsigned int)v20;
}
// 140374B64: variable 'a2' is possibly undefined
// 140374B64: variable 'v13' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65800: using guessed type __int64 qword_140C65800;
// 1403748E0: using guessed type int var_38[4];

