//----- (00000001405AC3F0) ----------------------------------------------------
void __fastcall sub_1405AC3F0(__int64 a1, int a2, int a3, unsigned int a4, int a5)
{
	int v5; // ebx
	int v9; // edi
	__int64 v11; // rax
	int v12; // eax
	__int64 v13; // rcx
	char v14[200]; // [rsp+70h] [rbp-C8h] BYREF

	if (a4)
	{
		v5 = 0;
		v9 = 0;
		if (a2 == 4)
		{
			v11 = sub_140207D60(a4);
			if (!v11)
				return;
			v12 = *(_DWORD*)(v11 + 24);
			if ((v12 & 0x340) != 0)
				v9 = v12;
		}
		sub_1404BCB00((__int64)v14, a1 + 8, 0i64, a4, 0, v9, 0, 0, a2, 0, 0i64, 0i64, 0);
		if (a2 == 4)
			v5 = a5;
		sub_1404C8E20(v13, *(_DWORD*)(a1 + 188), a3, (__int64)v14, v5);
	}
}
// 1405AC498: variable 'v13' is possibly undefined

