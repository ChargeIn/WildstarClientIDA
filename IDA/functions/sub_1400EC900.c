//----- (00000001400EC900) ----------------------------------------------------
bool __fastcall sub_1400EC900(__int64 a1, char* a2)
{
	_QWORD* v2; // rax
	char* v3; // rbx
	_QWORD* v4; // r10
	_QWORD* v5; // rdi
	int v6; // esi
	_BYTE* v7; // r11
	int v8; // r8d
	int v9; // ecx
	char* v10; // r9
	__int64 v11; // r11
	int v12; // edx
	char* v13; // r9
	int v14; // r8d
	int v15; // edx
	int v16; // ecx
	_QWORD* v18; // [rsp+10h] [rbp+8h]

	v2 = *(_QWORD**)(a1 + 3296);
	v3 = a2;
	v4 = (_QWORD*)v2[1];
	v5 = v2;
	if (v4)
	{
		v6 = *a2;
		do
		{
			v7 = (_BYTE*)v4[4];
			LOBYTE(v8) = *v7;
			v9 = (char)*v7 - v6;
			if (v9)
			{
			LABEL_7:
				if (v9 < 0)
				{
					v4 = (_QWORD*)v4[3];
					continue;
				}
			}
			else
			{
				v10 = v3;
				v11 = v7 - v3;
				while ((_BYTE)v8)
				{
					v8 = v10[v11 + 1];
					v12 = *++v10;
					v9 = v8 - v12;
					if (v8 != v12)
						goto LABEL_7;
				}
			}
			v5 = v4;
			v4 = (_QWORD*)v4[2];
		} while (v4);
	}
	if (v5 == v2)
		goto LABEL_17;
	v13 = (char*)v5[4];
	LOBYTE(v14) = *v3;
	v15 = *v3 - *v13;
	if (!v15)
	{
		while ((_BYTE)v14)
		{
			v14 = v3[1];
			v16 = v13[1];
			++v3;
			++v13;
			v15 = v14 - v16;
			if (v14 != v16)
				goto LABEL_15;
		}
		goto LABEL_16;
	}
LABEL_15:
	if (v15 < 0)
	{
	LABEL_17:
		v18 = v2;
		return v18 != v2;
	}
LABEL_16:
	v18 = v5;
	return v18 != v2;
}

