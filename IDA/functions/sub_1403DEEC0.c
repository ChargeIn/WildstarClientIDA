#include "../winhttp.h"

//----- (00000001403DEEC0) ----------------------------------------------------
__int64 __fastcall sub_1403DEEC0(__int64 a1, int a2, int a3, int a4, _QWORD* a5)
{
	__int64 v6; // rbx
	_DWORD* v7; // r11
	__int64 v8; // rcx
	__int64 v9; // rax
	int v10; // edx
	int v11; // eax
	_DWORD* v12; // rax
	_DWORD* v13; // rdx
	int v14; // eax
	int v15; // eax
	bool v16; // sf
	int v17; // r10d
	_DWORD* v19; // [rsp+8h] [rbp+8h]
	_DWORD* v20; // [rsp+8h] [rbp+8h]

	v6 = *(_QWORD*)(qword_140C65898 + 28544);
	v7 = (_DWORD*)v6;
	v8 = *(_QWORD*)(v6 + 8);
	v9 = v8;
	while (v9)
	{
		v10 = *(_DWORD*)(v9 + 32) - a2;
		if (!v10)
		{
			v10 = *(_DWORD*)(v9 + 36) - a3;
			if (!v10)
				v10 = *(_DWORD*)(v9 + 40) - a4;
		}
		if (v10 < 0)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v7 = (_DWORD*)v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v7 == (_DWORD*)v6)
		goto LABEL_14;
	v11 = a2 - v7[8];
	if (a2 == v7[8])
	{
		v11 = a3 - v7[9];
		if (a3 == v7[9])
			v11 = a4 - v7[10];
	}
	v19 = v7;
	if (v11 < 0)
		LABEL_14:
	v19 = *(_DWORD**)(qword_140C65898 + 28544);
	v12 = v19;
	if (v19 == (_DWORD*)v6)
	{
		v13 = *(_DWORD**)(qword_140C65898 + 28544);
		if (v8)
		{
			while (1)
			{
				v14 = *(_DWORD*)(v8 + 32) - a2;
				if (v14)
					goto LABEL_20;
				v15 = *(_DWORD*)(v8 + 36);
				v16 = v15 < 0;
				if (!v15)
					break;
			LABEL_21:
				if (v16)
				{
					v8 = *(_QWORD*)(v8 + 24);
				}
				else
				{
					v13 = (_DWORD*)v8;
					v8 = *(_QWORD*)(v8 + 16);
				}
				if (!v8)
					goto LABEL_25;
			}
			v14 = *(_DWORD*)(v8 + 40) - a4;
		LABEL_20:
			v16 = v14 < 0;
			goto LABEL_21;
		}
	LABEL_25:
		if (v13 == (_DWORD*)v6)
			goto LABEL_30;
		v17 = a2 - v13[8];
		if (!v17)
		{
			v17 = -v13[9];
			if (!v13[9])
				v17 = a4 - v13[10];
		}
		v20 = v13;
		if (v17 < 0)
			LABEL_30:
		v20 = *(_DWORD**)(qword_140C65898 + 28544);
		v12 = v20;
		if (v20 == (_DWORD*)v6)
			return 0i64;
	}
	if (a5)
		*a5 = *((_QWORD*)v12 + 6);
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

