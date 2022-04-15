#include "../winhttp.h"

//----- (0000000140122150) ----------------------------------------------------
__int64 __fastcall sub_140122150(__int64 a1, __int64 a2, int** a3)
{
	__int64 v3; // r14
	_QWORD* v6; // r10
	bool v8; // al
	__int64 v9; // rbx
	int* v10; // r11
	char v11; // si
	char* v12; // r8
	int v13; // eax
	int v14; // ecx
	int v15; // edx
	int* v16; // r9
	int v17; // eax
	_QWORD* v18; // rcx
	int* v19; // rcx
	__int64 result; // rax
	_QWORD* i; // rax
	_QWORD* v22; // rax
	char* v23; // r9
	int* v24; // r11
	int v25; // r8d
	int v26; // edx
	int v27; // eax
	int* v28; // [rsp+60h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD**)(v3 + 8);
	v8 = 1;
	v9 = v3;
	if (v6)
	{
		v10 = *a3;
		v11 = *(_BYTE*)*a3;
		do
		{
			v12 = (char*)v6[4];
			v9 = (__int64)v6;
			v13 = *v12;
			v14 = v11 - v13;
			if (v11 == v13)
			{
				LOBYTE(v15) = v11;
				v16 = v10;
				while ((_BYTE)v15)
				{
					v15 = *((char*)v16 + 1);
					v17 = v12[1];
					v16 = (int*)((char*)v16 + 1);
					++v12;
					v14 = v15 - v17;
					if (v15 != v17)
						goto LABEL_9;
				}
				v14 = 0;
			}
		LABEL_9:
			v8 = v14 < 0;
			if (v14 >= 0)
				v6 = (_QWORD*)v6[3];
			else
				v6 = (_QWORD*)v6[2];
		} while (v6);
	}
	v18 = (_QWORD*)v9;
	if (v8)
	{
		if (v9 == *(_QWORD*)(v3 + 16))
		{
		LABEL_15:
			v19 = *sub_140122020(a1, &v28, (__int64)v6, v9, a3);
			result = a2;
			*(_QWORD*)a2 = v19;
			*(_BYTE*)(a2 + 8) = 1;
			return result;
		}
		if (*(_BYTE*)v9 || *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) != v9)
		{
			v18 = *(_QWORD**)(v9 + 16);
			if (v18)
			{
				for (i = (_QWORD*)v18[3]; i; i = (_QWORD*)i[3])
					v18 = i;
			}
			else
			{
				v18 = *(_QWORD**)(v9 + 8);
				if (v9 == v18[2])
				{
					do
					{
						v22 = v18;
						v18 = (_QWORD*)v18[1];
					} while (v22 == (_QWORD*)v18[2]);
				}
			}
		}
		else
		{
			v18 = *(_QWORD**)(v9 + 24);
		}
	}
	v23 = (char*)v18[4];
	v24 = *a3;
	LOBYTE(v25) = *v23;
	v26 = *v23 - *(char*)*a3;
	if (v26)
	{
	LABEL_28:
		if (v26 < 0)
			goto LABEL_15;
	}
	else
	{
		while ((_BYTE)v25)
		{
			v25 = v23[1];
			v27 = *((char*)v24 + 1);
			++v23;
			v24 = (int*)((char*)v24 + 1);
			v26 = v25 - v27;
			if (v25 != v27)
				goto LABEL_28;
		}
	}
	*(_QWORD*)a2 = v18;
	result = a2;
	*(_BYTE*)(a2 + 8) = 0;
	return result;
}

