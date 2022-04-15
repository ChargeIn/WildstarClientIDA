//----- (0000000140832C30) ----------------------------------------------------
bool __fastcall sub_140832C30(__int64 a1, int* a2, int* a3)
{
	int v3; // xmm0_4
	__int64 v5; // rdi
	unsigned __int8* v8; // r8
	unsigned int v9; // r9d
	__int64 v10; // rcx
	__int64 v11; // rdx
	__int64 v12; // rdx
	int* v13; // rax
	unsigned __int8* v14; // r8
	unsigned int v15; // r9d
	__int64 v16; // rcx
	__int64 v17; // rdx
	int* v18; // rax
	char v19; // cl
	bool result; // al
	int v21; // [rsp+40h] [rbp+8h] BYREF

	v5 = 0i64;
	if ((*(_QWORD*)(a1 + 96) & 0x100000000i64) != 0)
	{
		sub_140836340(qword_140C61BB0, a1, 32, 0i64);
		*a2 = v3;
	}
	else
	{
		v8 = *(unsigned __int8**)(a1 + 80);
		v3 = dword_140C11068;
		v21 = dword_140C11068;
		if (v8)
		{
			v9 = *v8;
			v10 = 0i64;
			while (1)
			{
				v11 = (unsigned int)(v10 + 1);
				if (v8[v11] == 26)
					break;
				v10 = (unsigned int)v11;
				if ((unsigned int)v11 >= v9)
					goto LABEL_7;
			}
			v12 = (__int64)&v8[4 * v10 + ((v9 + 4) & 0xFFFFFFFC)];
		}
		else
		{
		LABEL_7:
			v12 = 0i64;
		}
		v13 = &v21;
		if (v12)
			v13 = (int*)v12;
		*a2 = *v13;
	}
	if ((*(_QWORD*)(a1 + 96) & 0x400000000i64) != 0)
	{
		sub_140836340(qword_140C61BB0, a1, 34, 0i64);
		*a3 = v3;
	}
	else
	{
		v14 = *(unsigned __int8**)(a1 + 80);
		v21 = dword_140C1106C;
		if (v14)
		{
			v15 = *v14;
			v16 = 0i64;
			while (1)
			{
				v17 = (unsigned int)(v16 + 1);
				if (v14[v17] == 27)
					break;
				v16 = (unsigned int)v17;
				if ((unsigned int)v17 >= v15)
					goto LABEL_20;
			}
			v5 = (__int64)&v14[4 * v16 + ((v15 + 4) & 0xFFFFFFFC)];
		}
	LABEL_20:
		v18 = &v21;
		if (v5)
			v18 = (int*)v5;
		*a3 = *v18;
	}
	v19 = *(_BYTE*)(a1 + 328);
	result = (v19 & 0x40) != 0;
	*(_BYTE*)(a1 + 328) = v19 & 0xBF;
	return result;
}
// 140832C75: variable 'v3' is possibly undefined
// 140C11068: using guessed type int dword_140C11068;
// 140C1106C: using guessed type int dword_140C1106C;
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

