#include "../winhttp.h"

//----- (00000001407944C0) ----------------------------------------------------
__int64 __fastcall sub_1407944C0(_QWORD* a1)
{
	_DWORD* v1; // rax
	_DWORD* v3; // rsi
	_DWORD* v4; // rcx
	unsigned __int64 v5; // r8
	unsigned __int64 v6; // rbx
	int v7; // edx
	int v8; // edx
	int v9; // edx
	__int64 v10; // rax
	const char* v11; // rbx
	const void* v12; // rax
	_DWORD* v13; // rdx
	char* v14; // rdx
	int v15; // eax
	BOOL v16; // eax
	__int64 v17; // rbx
	__int64 v18; // rax

	v1 = (_DWORD*)a1[3];
	v3 = dword_140A12138;
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2] == -1)
		sub_140056570(a1, 1u, aValueExpected);
	if (!(unsigned int)sub_140056F70((__int64)a1))
	{
		v4 = (_DWORD*)a1[3];
		v5 = a1[2];
		v6 = -1i64;
		if ((unsigned __int64)v4 >= v5 || v4 == dword_140A12138)
			v7 = -1;
		else
			v7 = v4[2];
		if (!v7)
		{
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v17 = a1[2];
			v18 = sub_140062650((__int64)a1, (unsigned __int64*)aNil, 3ui64);
			*(_DWORD*)(v17 + 8) = 4;
			*(_QWORD*)v17 = v18;
			goto LABEL_51;
		}
		v8 = v7 - 1;
		if (v8)
		{
			v9 = v8 - 2;
			if (v9)
			{
				if (v9 != 1)
				{
					if ((unsigned __int64)v4 >= v5 || v4 == dword_140A12138 || (v10 = (int)v4[2], (_DWORD)v10 == -1))
						v11 = aNoValue;
					else
						v11 = off_140A123B0[v10];
					v12 = (const void*)sub_1400586A0((__int64)a1, 1);
					sub_140058780((__int64)a1, (unsigned __int64*)"%s: %p", v11, v12);
					return 1i64;
				}
				if ((unsigned __int64)v4 < v5)
					v3 = (_DWORD*)a1[3];
				*(_QWORD*)v5 = *(_QWORD*)v3;
				*(_DWORD*)(v5 + 8) = v3[2];
			LABEL_51:
				a1[2] += 16i64;
				return 1i64;
			}
			v13 = dword_140A12138;
			if ((unsigned __int64)v4 < v5)
				v13 = (_DWORD*)a1[3];
			if (v13[2] != 4)
			{
				if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v13))
				{
				LABEL_32:
					*(_DWORD*)(a1[2] + 8i64) = 0;
					goto LABEL_51;
				}
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v13 = dword_140A12138;
				if (a1[3] < a1[2])
					v13 = (_DWORD*)a1[3];
			}
			v14 = (char*)(*(_QWORD*)v13 + 32i64);
			if (!v14)
				goto LABEL_32;
			do
				++v6;
			while (v14[v6]);
		}
		else
		{
			if ((unsigned __int64)v4 < v5)
				v3 = (_DWORD*)a1[3];
			v15 = v3[2];
			v16 = v15 && (v15 != 1 || *v3);
			v14 = aFalse_4;
			if (v16)
				v14 = aTrue_4;
			if (!v14)
			{
				*(_DWORD*)(v5 + 8) = 0;
				goto LABEL_51;
			}
			do
				++v6;
			while (v14[v6]);
		}
		sub_140058710((__int64)a1, (unsigned __int64*)v14, v6);
	}
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

