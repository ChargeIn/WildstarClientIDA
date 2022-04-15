//----- (000000014086F9F0) ----------------------------------------------------
__int64 __fastcall sub_14086F9F0(_BYTE* a1, __int64 a2, int a3, __int64 a4, char a5)
{
	int v5; // edi
	unsigned int v6; // r14d
	int* v7; // rdx
	unsigned int v9; // ebx
	__int16 v10; // bx
	__int16 v11; // si
	int* v12; // rdx
	float v13; // xmm6_4
	__int64 result; // rax
	char v15[8]; // [rsp+20h] [rbp-58h] BYREF
	int v16; // [rsp+28h] [rbp-50h]
	int* v17; // [rsp+88h] [rbp+10h] BYREF
	int v18; // [rsp+90h] [rbp+18h] BYREF

	v18 = a3;
	v5 = 0;
	v17 = (int*)(a2 + 4);
	v6 = *(_DWORD*)(a2 + 4);
	v7 = (int*)(a2 + 8);
	v9 = 1;
	v17 = v7;
	if (!v6)
		return sub_1408546E0(a1, (unsigned int**)&v17, &v18, a5);
	while (v9 == 1)
	{
		v10 = *(_WORD*)v7;
		v17 = (int*)((char*)v7 + 2);
		v11 = *((_WORD*)v7 + 1);
		v17 = v7 + 1;
		v12 = v7 + 2;
		v13 = *((float*)v12 - 1);
		v17 = v12;
		result = sub_14083FD40(&v17, &v18, (__int64)v15);
		if ((_DWORD)result != 1)
			return result;
		v9 = sub_14086F350((__int64)a1, v16, v10, v11);
		sub_14086FB10(a1, v16, v13);
		if (++v5 >= v6)
		{
			if (v9 == 1)
				return sub_1408546E0(a1, (unsigned int**)&v17, &v18, a5);
			return v9;
		}
		v7 = v17;
	}
	return v9;
}
// 14086F9F0: using guessed type char var_58[8];

