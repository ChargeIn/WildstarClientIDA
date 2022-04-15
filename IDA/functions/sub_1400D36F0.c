//----- (00000001400D36F0) ----------------------------------------------------
_QWORD* __fastcall sub_1400D36F0(__int64 a1, _BYTE* a2)
{
	_QWORD* v2; // rsi
	_QWORD* v3; // r11
	_QWORD* result; // rax
	_QWORD* v6; // r10
	int v7; // edi
	_BYTE* v8; // rbx
	int v9; // r8d
	int v10; // edx
	_BYTE* v11; // r9
	__int64 v12; // rbx
	int v13; // ecx
	int v14; // edi
	char* v15; // r9
	int v16; // ecx
	int v17; // edx
	int v18; // r8d
	_BYTE* v19; // r10
	int v20; // ecx
	__int64 v21; // rcx
	_QWORD* i; // rcx
	__int64 j; // rcx

	v2 = *(_QWORD**)(a1 + 1000);
	v3 = (_QWORD*)v2[1];
	result = v2;
	v6 = v3;
	if (v3)
	{
		v7 = (char)*a2;
		while (1)
		{
			v8 = (_BYTE*)v6[4];
			LOBYTE(v9) = *v8;
			v10 = (char)*v8 - v7;
			if (v10)
			{
			LABEL_7:
				if (v10 < 0)
				{
					v6 = (_QWORD*)v6[3];
					goto LABEL_10;
				}
			}
			else
			{
				v11 = a2;
				v12 = v8 - a2;
				while ((_BYTE)v9)
				{
					v9 = (char)v11[v12 + 1];
					v13 = (char)*++v11;
					v10 = v9 - v13;
					if (v9 != v13)
						goto LABEL_7;
				}
			}
			result = v6;
			v6 = (_QWORD*)v6[2];
		LABEL_10:
			if (!v6)
			{
				v14 = (char)*a2;
				while (1)
				{
					v15 = (char*)v3[4];
					v16 = *v15;
					v17 = v14 - v16;
					if (v14 == v16)
						break;
				LABEL_16:
					if (v17 >= 0)
						goto LABEL_18;
					v2 = v3;
					v3 = (_QWORD*)v3[2];
				LABEL_19:
					if (!v3)
						goto LABEL_20;
				}
				LOBYTE(v18) = *a2;
				v19 = a2;
				while ((_BYTE)v18)
				{
					v18 = (char)v19[1];
					v20 = v15[1];
					++v19;
					++v15;
					v17 = v18 - v20;
					if (v18 != v20)
						goto LABEL_16;
				}
			LABEL_18:
				v3 = (_QWORD*)v3[3];
				goto LABEL_19;
			}
		}
	}
LABEL_20:
	while (result != v2)
	{
		*(_BYTE*)result[5] = 0;
		v21 = result[3];
		if (v21)
		{
			result = (_QWORD*)result[3];
			for (i = *(_QWORD**)(v21 + 16); i; i = (_QWORD*)i[2])
				result = i;
		}
		else
		{
			for (j = result[1]; result == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				result = (_QWORD*)j;
			if (result[3] != j)
				result = (_QWORD*)j;
		}
	}
	return result;
}
// 1400D3769: conditional instruction was optimized away because r11.8!=0

