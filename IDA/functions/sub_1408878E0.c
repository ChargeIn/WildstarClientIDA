//----- (00000001408878E0) ----------------------------------------------------
__int64 __fastcall sub_1408878E0(__int64 a1)
{
	__int64** v1; // rax
	int v2; // r8d
	unsigned int v3; // edx
	unsigned __int64 v5; // r11
	__int64* v6; // r8
	__int64 v7; // r9
	__int64 v8; // r10
	int v9; // ecx
	__int64** v10; // rax
	unsigned __int64 v11; // r11
	__int64* v12; // r8
	__int64 v13; // r9
	__int64 v14; // r10
	int v15; // ecx

	v1 = *(__int64***)(a1 + 176);
	v2 = *(unsigned __int8*)(a1 + 192);
	v3 = 0;
	if (v1)
	{
		while (v2)
		{
			v1 = (__int64**)*v1;
			--v2;
			if (!v1)
				goto LABEL_11;
		}
		v5 = *(unsigned int*)(a1 + 148);
		do
		{
			v6 = v1[1];
			v7 = *((unsigned int*)v1 + 4);
			v8 = *v6;
			if (*v6 + v7 >= v5 || v8 + (unsigned __int64)*((unsigned int*)v6 + 6) <= v5)
				v9 = *((_DWORD*)v6 + 6) - v7;
			else
				v9 = v5 - v7 - v8;
			v1 = (__int64**)*v1;
			v3 += v9;
		} while (v1);
	}
LABEL_11:
	v10 = *(__int64***)(a1 + 200);
	if (v10)
	{
		v11 = *(unsigned int*)(a1 + 148);
		do
		{
			v12 = v10[1];
			v13 = *((unsigned int*)v10 + 4);
			v14 = *v12;
			if (*v12 + v13 >= v11 || v14 + (unsigned __int64)*((unsigned int*)v12 + 6) <= v11)
				v15 = *((_DWORD*)v12 + 6);
			else
				v15 = v11 - v14;
			v10 = (__int64**)*v10;
			v3 += v15 - v13;
		} while (v10);
	}
	return v3;
}
// 140887915: conditional instruction was optimized away because rax.8!=0

