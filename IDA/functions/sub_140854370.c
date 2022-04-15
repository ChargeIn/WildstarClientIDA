//----- (0000000140854370) ----------------------------------------------------
__int64 __fastcall sub_140854370(__int64* a1, int a2, float a3)
{
	unsigned __int8* v4; // r9
	__int64 v5; // r11
	unsigned int v6; // r10d
	int v7; // r8d
	__int64 v8; // rcx
	int* v9; // rax
	__int64 result; // rax
	int v11; // [rsp+38h] [rbp+10h] BYREF

	v4 = (unsigned __int8*)a1[10];
	v5 = 0i64;
	v11 = dword_140C11000[a2];
	if (v4)
	{
		v6 = *v4;
		v7 = 0;
		while (1)
		{
			v8 = (unsigned int)(v7 + 1);
			if (v4[v8] == (_BYTE)a2)
				break;
			++v7;
			if ((unsigned int)v8 >= v6)
				goto LABEL_7;
		}
		v5 = (__int64)&v4[4 * v7 + ((v6 + 4) & 0xFFFFFFFC)];
	}
LABEL_7:
	v9 = &v11;
	if (v5)
		v9 = (int*)v5;
	result = (unsigned int)*v9;
	v11 = result;
	if (*(float*)&result != a3)
	{
		v11 = LODWORD(a3);
		sub_14084FB50(a1 + 10, a2, SLODWORD(a3));
		return (*(__int64(__fastcall**)(__int64*))(*a1 + 408))(a1);
	}
	return result;
}
// 140C11000: using guessed type int dword_140C11000[5];

