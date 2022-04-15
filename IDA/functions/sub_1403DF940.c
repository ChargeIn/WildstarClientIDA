//----- (00000001403DF940) ----------------------------------------------------
__int64 __fastcall sub_1403DF940(__int64 a1, unsigned int* a2)
{
	__int64 v2; // rdi
	__int64 v4; // r8
	__int64 v5; // r11
	__int64 v6; // r9
	unsigned int v7; // r10d
	unsigned int v8; // eax
	unsigned int v9; // ecx
	unsigned int v10; // eax
	__int64 v11; // rbx
	__int64 i; // rax
	__int64 v13; // rcx
	__int64 j; // rcx
	__int64 k; // rcx
	__int64 v17; // [rsp+30h] [rbp+8h] BYREF
	__int64 v18; // [rsp+40h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *(_QWORD*)(v2 + 8);
	v5 = v2;
	v6 = v4;
	if (v4)
	{
		v7 = *a2;
		do
		{
			v8 = *(_DWORD*)(v6 + 32);
			if (v7 < v8 || v7 <= v8 && *((_QWORD*)a2 + 1) < *(_QWORD*)(v6 + 40))
			{
				v5 = v6;
				v6 = *(_QWORD*)(v6 + 16);
			}
			else
			{
				v6 = *(_QWORD*)(v6 + 24);
			}
		} while (v6);
		v9 = *a2;
		do
		{
			v10 = *(_DWORD*)(v4 + 32);
			if (v10 < v9 || v10 <= v9 && *(_QWORD*)(v4 + 40) < *((_QWORD*)a2 + 1))
			{
				v4 = *(_QWORD*)(v4 + 24);
			}
			else
			{
				v2 = v4;
				v4 = *(_QWORD*)(v4 + 16);
			}
		} while (v4);
	}
	v11 = 0i64;
	for (i = v2; i != v5; ++v11)
	{
		v13 = *(_QWORD*)(i + 24);
		if (v13)
		{
			i = *(_QWORD*)(i + 24);
			for (j = *(_QWORD*)(v13 + 16); j; j = *(_QWORD*)(j + 16))
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
	v17 = v5;
	v18 = v2;
	sub_1403DFDC0(a1, (__int64)&v18, &v17);
	return v11;
}
// 1403DF99F: conditional instruction was optimized away because r8.8!=0

