//----- (0000000140886440) ----------------------------------------------------
__int64 __fastcall sub_140886440(__int64 a1)
{
	__int64** v1; // rax
	int v2; // edx
	unsigned int v3; // r8d
	unsigned __int64 v5; // r11
	__int64* v6; // rdx
	__int64 v7; // r9
	__int64 v8; // r10
	int v9; // ecx
	__int64 v10; // rdx
	__int64 v11; // r9
	__int64* v12; // rdx
	unsigned __int64 v13; // rcx
	__int64 v14; // r10

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
				v9 = *((_DWORD*)v6 + 6);
			else
				v9 = v5 - v8;
			v1 = (__int64**)*v1;
			v3 += v9 - v7;
		} while (v1);
	}
LABEL_11:
	v10 = *(_QWORD*)(a1 + 200);
	if (!v10)
		return v3;
	v11 = *(unsigned int*)(v10 + 16);
	v12 = *(__int64**)(v10 + 8);
	v13 = *(unsigned int*)(a1 + 148);
	v14 = *v12;
	if (*v12 + v11 >= v13 || v14 + (unsigned __int64)*((unsigned int*)v12 + 6) <= v13)
		return *((_DWORD*)v12 + 6) - (_DWORD)v11 + v3;
	else
		return (_DWORD)v13 - (_DWORD)v14 - (_DWORD)v11 + v3;
}
// 140886473: conditional instruction was optimized away because rax.8!=0

