//----- (00000001408542C0) ----------------------------------------------------
float* __fastcall sub_1408542C0(__int64* a1, int a2, int a3)
{
	unsigned __int8* v4; // r10
	__int64 v5; // r11
	unsigned int v7; // r8d
	int v8; // r9d
	__int64 v9; // rcx
	float* result; // rax
	float v11; // [rsp+38h] [rbp+10h] BYREF

	v4 = (unsigned __int8*)a1[10];
	v5 = 0i64;
	v11 = dword_140C11000[a2];
	if (v4)
	{
		v7 = *v4;
		v8 = 0;
		while (1)
		{
			v9 = (unsigned int)(v8 + 1);
			if (v4[v9] == (_BYTE)a2)
				break;
			++v8;
			if ((unsigned int)v9 >= v7)
				goto LABEL_7;
		}
		v5 = (__int64)&v4[4 * v8 + ((v7 + 4) & 0xFFFFFFFC)];
	}
LABEL_7:
	result = &v11;
	if (v5)
		result = (float*)v5;
	if (*(_DWORD*)result != a3)
	{
		sub_14084FB50(a1 + 10, a2, a3);
		return (float*)(*(__int64(__fastcall**)(__int64*))(*a1 + 408))(a1);
	}
	return result;
}
// 140C11000: using guessed type float dword_140C11000[5];

