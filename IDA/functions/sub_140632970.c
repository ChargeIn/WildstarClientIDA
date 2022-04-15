#include "../winhttp.h"

//----- (0000000140632970) ----------------------------------------------------
__int64 __fastcall sub_140632970(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rbp
	__int64 v5; // rsi
	__int64 v6; // r8
	__int64 v9; // rbx
	char v10; // al
	int v11; // edi
	int v12; // eax
	_WORD* v13; // r10
	unsigned __int16* v14; // r11
	__int64 v15; // r9
	int v16; // edx
	int v17; // ecx
	int v18; // eax
	__int64 v19; // rcx
	__int64 i; // rax
	__int64 v21; // rax
	int v22; // eax
	_WORD* v23; // r10
	unsigned __int16* v24; // r11
	int v25; // r9d
	int v26; // edx
	int v27; // eax
	int* v29; // [rsp+60h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 8);
	v5 = 0i64;
	v6 = *(_QWORD*)(v3 + 8);
	v9 = v3;
	v10 = 1;
	if (v6)
	{
		v11 = *(_DWORD*)a3;
		while (1)
		{
			v12 = *(_DWORD*)(v6 + 32);
			v9 = v6;
			if (v11 < v12)
				break;
			if (v12 >= v11)
			{
				v13 = *(_WORD**)(a3 + 8);
				v14 = *(unsigned __int16**)(v6 + 40);
				v15 = 0i64;
				LOWORD(v16) = *v13;
				v17 = (unsigned __int16)*v13 - *v14;
				if (v17)
				{
				LABEL_8:
					if (v17 < 0)
						break;
				}
				else
				{
					while ((_WORD)v16)
					{
						v16 = (unsigned __int16)v13[v15 + 1];
						v18 = v14[++v15];
						v17 = v16 - v18;
						if (v16 != v18)
							goto LABEL_8;
					}
				}
			}
			v6 = *(_QWORD*)(v6 + 24);
			v10 = 0;
		LABEL_11:
			if (!v6)
				goto LABEL_12;
		}
		v6 = *(_QWORD*)(v6 + 16);
		v10 = 1;
		goto LABEL_11;
	}
LABEL_12:
	v19 = v9;
	if (v10)
	{
		if (v9 == *(_QWORD*)(v3 + 16))
			goto LABEL_30;
		if (*(_BYTE*)v9 || *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) != v9)
		{
			v19 = *(_QWORD*)(v9 + 16);
			if (v19)
			{
				for (i = *(_QWORD*)(v19 + 24); i; i = *(_QWORD*)(i + 24))
					v19 = i;
			}
			else
			{
				v19 = *(_QWORD*)(v9 + 8);
				if (v9 == *(_QWORD*)(v19 + 16))
				{
					do
					{
						v21 = v19;
						v19 = *(_QWORD*)(v19 + 8);
					} while (v21 == *(_QWORD*)(v19 + 16));
				}
			}
		}
		else
		{
			v19 = *(_QWORD*)(v9 + 24);
		}
	}
	v22 = *(_DWORD*)(v19 + 32);
	if (v22 < *(_DWORD*)a3)
		goto LABEL_30;
	if (*(_DWORD*)a3 >= v22)
	{
		v23 = *(_WORD**)(v19 + 40);
		v24 = *(unsigned __int16**)(a3 + 8);
		LOWORD(v25) = *v23;
		v26 = (unsigned __int16)*v23 - *v24;
		if (!v26)
		{
			while ((_WORD)v25)
			{
				v25 = (unsigned __int16)v23[v5 + 1];
				v27 = v24[++v5];
				v26 = v25 - v27;
				if (v25 != v27)
					goto LABEL_28;
			}
			goto LABEL_29;
		}
	LABEL_28:
		if (v26 < 0)
		{
		LABEL_30:
			*(_QWORD*)a2 = *sub_140632870(a1, &v29, v6, v9, a3);
			*(_BYTE*)(a2 + 8) = 1;
			return a2;
		}
	}
LABEL_29:
	*(_QWORD*)a2 = v19;
	*(_BYTE*)(a2 + 8) = 0;
	return a2;
}

