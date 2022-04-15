#include "../winhttp.h"

//----- (0000000140151470) ----------------------------------------------------
__int64 __fastcall sub_140151470(__int64 a1, unsigned __int64 a2, __int64 a3, char* a4)
{
	char* v4; // rbx
	int* v5; // rsi
	unsigned __int64 v7; // rdi
	int* v8; // rax
	char* v9; // rdi
	char* v10; // r11
	char* v11; // r8
	char* v12; // r10
	int v13; // ecx
	__int64 v14; // r10
	int v15; // eax
	int v16; // ecx
	int v17; // eax
	char* v19; // [rsp+30h] [rbp+8h]

	v4 = 0i64;
	v5 = (int*)a2;
	if (a2)
	{
		v7 = 0i64;
		if (*(_BYTE*)a2)
		{
			do
				++v7;
			while (*(_BYTE*)(v7 + a2));
		}
		v8 = sub_14018B280(v7 + 17, 0);
		if (v8)
		{
			*((_QWORD*)v8 + 1) = v7;
			*(_QWORD*)v8 = off_140B55060;
		}
		else
		{
			v8 = 0i64;
		}
		v4 = (char*)(v8 + 4);
		sub_1407DB590(v8 + 4, v5, v7);
		v4[v7] = 0;
	}
	v9 = *(char**)(a1 + 80);
	v10 = v9;
	v11 = (char*)*((_QWORD*)v9 + 1);
	while (v11)
	{
		v12 = (char*)*((_QWORD*)v11 + 4);
		a2 = (unsigned int)*v12;
		v13 = *v12 - *v4;
		if (v13)
		{
		LABEL_13:
			if (v13 < 0)
			{
				v11 = (char*)*((_QWORD*)v11 + 3);
				continue;
			}
		}
		else
		{
			a4 = v4;
			v14 = v12 - v4;
			while ((_BYTE)a2)
			{
				a2 = (unsigned int)a4[v14 + 1];
				v15 = *++a4;
				v13 = a2 - v15;
				if ((_DWORD)a2 != v15)
					goto LABEL_13;
			}
		}
		v10 = v11;
		v11 = (char*)*((_QWORD*)v11 + 2);
	}
	if (v10 != v9)
	{
		v11 = (char*)*((_QWORD*)v10 + 4);
		a2 = (unsigned int)*v4;
		v16 = *v4 - *v11;
		if (!v16)
		{
			a4 = v4;
			while ((_BYTE)a2)
			{
				a2 = (unsigned int)a4[1];
				v17 = v11[1];
				++a4;
				++v11;
				v16 = a2 - v17;
				if ((_DWORD)a2 != v17)
					goto LABEL_22;
			}
			goto LABEL_23;
		}
	LABEL_22:
		if (v16 >= 0)
		{
		LABEL_23:
			v19 = v10;
			goto LABEL_25;
		}
	}
	v19 = *(char**)(a1 + 80);
LABEL_25:
	if (v4)
		(*(void(__fastcall**)(char*, unsigned __int64, char*, char*))(*((_QWORD*)v4 - 2) + 8i64))(
			v4 - 16,
			a2,
			v11,
			a4);
	if (v19 == *(char**)(a1 + 80))
		return 0i64;
	else
		return *((_QWORD*)v19 + 5);
}
// 14015158F: variable 'a2' is possibly undefined
// 14015158F: variable 'a4' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

