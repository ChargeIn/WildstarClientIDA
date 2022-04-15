//----- (00000001400DFF50) ----------------------------------------------------
_QWORD* __fastcall sub_1400DFF50(__int64 a1, _QWORD* a2, char** a3)
{
	_QWORD* v3; // rsi
	_QWORD* v6; // r9
	_QWORD* v7; // r11
	_BYTE* v8; // rbx
	int v9; // edi
	char* v10; // r8
	int v11; // edx
	int v12; // eax
	_BYTE* v13; // r10
	int v14; // ecx
	_BYTE* v15; // r8
	char* v16; // r9
	int v17; // edx
	int v18; // ecx
	int v19; // eax
	_QWORD* v21; // [rsp+18h] [rbp+8h]

	v3 = *(_QWORD**)(a1 + 8);
	v6 = (_QWORD*)v3[1];
	v7 = v3;
	if (v6)
	{
		v8 = *a3;
		v9 = **a3;
		do
		{
			v10 = (char*)v6[4];
			LOBYTE(v11) = *v10;
			v12 = *v10 - v9;
			if (v12)
			{
			LABEL_7:
				if (v12 < 0)
				{
					v6 = (_QWORD*)v6[3];
					continue;
				}
			}
			else
			{
				v13 = v8;
				while ((_BYTE)v11)
				{
					v11 = v10[1];
					v14 = (char)v13[1];
					++v10;
					++v13;
					v12 = v11 - v14;
					if (v11 != v14)
						goto LABEL_7;
				}
			}
			v7 = v6;
			v6 = (_QWORD*)v6[2];
		} while (v6);
	}
	if (v7 == v3)
		goto LABEL_17;
	v15 = *a3;
	v16 = (char*)v7[4];
	LOBYTE(v17) = **a3;
	v18 = (char)v17 - *v16;
	if (!v18)
	{
		while ((_BYTE)v17)
		{
			v17 = (char)v15[1];
			v19 = v16[1];
			++v15;
			++v16;
			v18 = v17 - v19;
			if (v17 != v19)
				goto LABEL_15;
		}
		goto LABEL_16;
	}
LABEL_15:
	if (v18 < 0)
	{
	LABEL_17:
		v21 = v3;
		goto LABEL_18;
	}
LABEL_16:
	v21 = v7;
LABEL_18:
	*a2 = v21;
	return a2;
}

