//----- (0000000140631E70) ----------------------------------------------------
_QWORD* __fastcall sub_140631E70(__int64 a1, _QWORD* a2, int* a3)
{
	__int64 v3; // rbp
	__int64 v4; // rbx
	__int64 v6; // rax
	__int64 v8; // rsi
	int v9; // edi
	int v10; // ecx
	_WORD* v11; // r10
	unsigned __int16* v12; // r11
	__int64 v13; // r9
	int v14; // r8d
	int v15; // edx
	int v16; // ecx
	int v17; // ecx
	_WORD* v18; // r8
	unsigned __int16* v19; // r9
	int v20; // edx
	int v21; // ecx
	int v22; // eax
	__int64 v24; // [rsp+20h] [rbp+8h]

	v3 = *(_QWORD*)(a1 + 8);
	v4 = 0i64;
	v6 = *(_QWORD*)(v3 + 8);
	v8 = v3;
	if (v6)
	{
		v9 = *a3;
		while (1)
		{
			v10 = *(_DWORD*)(v6 + 32);
			if (v10 < v9)
				break;
			if (v9 >= v10)
			{
				v11 = *(_WORD**)(v6 + 40);
				v12 = (unsigned __int16*)*((_QWORD*)a3 + 1);
				v13 = 0i64;
				LOWORD(v14) = *v11;
				v15 = (unsigned __int16)*v11 - *v12;
				if (v15)
				{
				LABEL_8:
					if (v15 < 0)
						break;
				}
				else
				{
					while ((_WORD)v14)
					{
						v14 = (unsigned __int16)v11[v13 + 1];
						v16 = v12[++v13];
						v15 = v14 - v16;
						if (v14 != v16)
							goto LABEL_8;
					}
				}
			}
			v8 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		LABEL_11:
			if (!v6)
				goto LABEL_12;
		}
		v6 = *(_QWORD*)(v6 + 24);
		goto LABEL_11;
	}
LABEL_12:
	if (v8 == v3)
		goto LABEL_20;
	v17 = *(_DWORD*)(v8 + 32);
	if (*a3 < v17)
		goto LABEL_20;
	if (v17 >= *a3)
	{
		v18 = (_WORD*)*((_QWORD*)a3 + 1);
		v19 = *(unsigned __int16**)(v8 + 40);
		LOWORD(v20) = *v18;
		v21 = (unsigned __int16)*v18 - *v19;
		if (!v21)
		{
			while ((_WORD)v20)
			{
				v20 = (unsigned __int16)v18[v4 + 1];
				v22 = v19[++v4];
				v21 = v20 - v22;
				if (v20 != v22)
					goto LABEL_18;
			}
			goto LABEL_19;
		}
	LABEL_18:
		if (v21 < 0)
		{
		LABEL_20:
			v24 = v3;
			goto LABEL_21;
		}
	}
LABEL_19:
	v24 = v8;
LABEL_21:
	*a2 = v24;
	return a2;
}

