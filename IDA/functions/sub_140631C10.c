//----- (0000000140631C10) ----------------------------------------------------
__int64 __fastcall sub_140631C10(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	__int64 v3; // rdi
	__int64 v4; // r8
	int v7; // ebx
	int v8; // eax
	_WORD* v9; // r10
	unsigned __int16* v10; // r11
	__int64 v11; // r9
	int v12; // edx
	int v13; // ecx
	int v14; // eax
	__int64 v15; // rdx
	__int64 i; // rax
	__int64 v17; // rcx
	__int64 j; // rcx
	__int64 k; // rcx
	__int64 v21; // [rsp+40h] [rbp+8h] BYREF
	__int64 v22; // [rsp+50h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v3 = 0i64;
	v4 = *(_QWORD*)(v2 + 8);
	if (v4)
	{
		v7 = *(_DWORD*)a2;
		while (1)
		{
			v8 = *(_DWORD*)(v4 + 32);
			if (v7 < v8)
				break;
			if (v8 >= v7)
			{
				v9 = *(_WORD**)(a2 + 8);
				v10 = *(unsigned __int16**)(v4 + 40);
				v11 = 0i64;
				LOWORD(v12) = *v9;
				v13 = (unsigned __int16)*v9 - *v10;
				if (v13)
				{
				LABEL_8:
					if (v13 < 0)
						break;
				}
				else
				{
					while ((_WORD)v12)
					{
						v12 = (unsigned __int16)v9[v11 + 1];
						v14 = v10[++v11];
						v13 = v12 - v14;
						if (v12 != v14)
							goto LABEL_8;
					}
				}
			}
			v4 = *(_QWORD*)(v4 + 24);
		LABEL_11:
			if (!v4)
				goto LABEL_12;
		}
		v2 = v4;
		v4 = *(_QWORD*)(v4 + 16);
		goto LABEL_11;
	}
LABEL_12:
	v15 = *sub_140631F70(a1, &v21, (int*)a2);
	for (i = v15; i != v2; ++v3)
	{
		v17 = *(_QWORD*)(i + 24);
		if (v17)
		{
			i = *(_QWORD*)(i + 24);
			for (j = *(_QWORD*)(v17 + 16); j; j = *(_QWORD*)(j + 16))
				i = j;
		}
		else
		{
			for (k = *(_QWORD*)(i + 8); i == *(_QWORD*)(k + 24); k = *(_QWORD*)(k + 8))
				i = k;
			if (*(_QWORD*)(i + 24) != k)
				i = k;
		}
	}
	v22 = v15;
	v21 = v2;
	sub_140632B10(a1, &v22, &v21);
	return v3;
}

