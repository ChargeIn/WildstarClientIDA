//----- (0000000140590490) ----------------------------------------------------
__int64 __fastcall sub_140590490(__int64 a1, __int64 a2, int** a3)
{
	__int64 v3; // rbp
	__int64 v4; // rdi
	_QWORD* v6; // r10
	_QWORD* v9; // rbx
	bool v10; // al
	int* v11; // r11
	int v12; // esi
	unsigned __int16* v13; // r9
	int v14; // eax
	__int64 v15; // r8
	int v16; // ecx
	int v17; // edx
	int v18; // eax
	_QWORD* v19; // rcx
	_QWORD* i; // rax
	_QWORD* v21; // rax
	_WORD* v22; // r9
	int v23; // r8d
	int v24; // edx
	int v25; // eax
	int* v27; // [rsp+60h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 8);
	v4 = 0i64;
	v6 = *(_QWORD**)(v3 + 8);
	v9 = (_QWORD*)v3;
	v10 = 1;
	if (v6)
	{
		v11 = *a3;
		v12 = *(unsigned __int16*)*a3;
		do
		{
			v13 = (unsigned __int16*)v6[4];
			v9 = v6;
			v14 = *v13;
			v15 = 0i64;
			v16 = v12 - v14;
			if (v12 == v14)
			{
				LOWORD(v17) = v12;
				while ((_WORD)v17)
				{
					v17 = *((unsigned __int16*)v11 + v15 + 1);
					v18 = v13[++v15];
					v16 = v17 - v18;
					if (v17 != v18)
						goto LABEL_9;
				}
				v16 = 0;
			}
		LABEL_9:
			v10 = v16 < 0;
			if (v16 >= 0)
				v6 = (_QWORD*)v6[3];
			else
				v6 = (_QWORD*)v6[2];
		} while (v6);
	}
	v19 = v9;
	if (!v10)
	{
	LABEL_25:
		v22 = (_WORD*)v19[4];
		LOWORD(v23) = *v22;
		v24 = (unsigned __int16)*v22 - *(unsigned __int16*)*a3;
		if (v24)
		{
		LABEL_28:
			if (v24 < 0)
				goto LABEL_15;
		}
		else
		{
			while ((_WORD)v23)
			{
				v23 = (unsigned __int16)v22[v4 + 1];
				v25 = *((unsigned __int16*)*a3 + ++v4);
				v24 = v23 - v25;
				if (v23 != v25)
					goto LABEL_28;
			}
		}
		*(_QWORD*)a2 = v19;
		*(_BYTE*)(a2 + 8) = 0;
		return a2;
	}
	if (v9 != *(_QWORD**)(v3 + 16))
	{
		if (*(_BYTE*)v9 || *(_QWORD**)(v9[1] + 8i64) != v9)
		{
			v19 = (_QWORD*)v9[2];
			if (v19)
			{
				for (i = (_QWORD*)v19[3]; i; i = (_QWORD*)i[3])
					v19 = i;
			}
			else
			{
				v19 = (_QWORD*)v9[1];
				if (v9 == (_QWORD*)v19[2])
				{
					do
					{
						v21 = v19;
						v19 = (_QWORD*)v19[1];
					} while (v21 == (_QWORD*)v19[2]);
				}
			}
		}
		else
		{
			v19 = (_QWORD*)v9[3];
		}
		goto LABEL_25;
	}
LABEL_15:
	*(_QWORD*)a2 = *sub_140590EB0(a1, &v27, (__int64)v6, v9, a3);
	*(_BYTE*)(a2 + 8) = 1;
	return a2;
}

