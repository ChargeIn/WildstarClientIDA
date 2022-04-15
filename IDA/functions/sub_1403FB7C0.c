//----- (00000001403FB7C0) ----------------------------------------------------
void __fastcall sub_1403FB7C0(_QWORD* a1, unsigned __int64 a2)
{
	wchar_t** v3; // r9
	__int64 v4; // rdx
	unsigned int v5; // eax
	unsigned int v6; // ebx
	int* v7; // rdx
	unsigned __int64 v8; // [rsp+38h] [rbp+10h] BYREF

	v8 = a2;
	v3 = (wchar_t**)&unk_140AF6CD0;
	v4 = 28i64;
	do
	{
		if (*((_DWORD*)v3 + (v4 >> 1)))
		{
			v4 >>= 1;
		}
		else
		{
			v3 = (wchar_t**)((char*)v3 + 4 * (v4 >> 1) + 4);
			v4 += -1 - (v4 >> 1);
		}
	} while (v4 > 0);
	v5 = -5;
	if (v3 != off_140AF6D40)
		v5 = *(_DWORD*)v3;
	v6 = v5;
	sub_140334160(a1 + 1, v5);
	v7 = (int*)a1[3];
	v8 = 0i64;
	sub_1402D16B0((__int64)(a1 + 1), v7, v6, &v8);
	a1[5] = 0i64;
}
// 140AF6D40: using guessed type wchar_t *off_140AF6D40[3];

