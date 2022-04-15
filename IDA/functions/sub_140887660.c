#include "../winhttp.h"

//----- (0000000140887660) ----------------------------------------------------
void __fastcall sub_140887660(__int64 a1, __int64* a2, char a3)
{
	__int64 v4; // rdx
	__int64* v7; // rax
	__int64 v8; // rbx
	int v9; // eax
	__int64* v10; // r8
	__int64 v11; // r9
	__int64 v12; // r10
	unsigned __int64 v13; // rcx
	int v14; // ecx
	__int64 v15; // rax
	_QWORD* v16; // rbx
	bool i; // r8
	__int64 v18; // rcx
	__int64 v19; // [rsp+20h] [rbp-28h]
	__int64* v20; // [rsp+28h] [rbp-20h]

	v4 = *a2;
	v7 = 0i64;
	if (v4)
	{
		while (1)
		{
			v8 = *(_QWORD*)v4;
			v20 = v7;
			v19 = *(_QWORD*)v4;
			if (v4 == *a2)
				*a2 = v8;
			else
				*v7 = v8;
			if (v4 == a2[1])
				a2[1] = (__int64)v7;
			v9 = *(_DWORD*)(v4 + 20);
			if ((v9 & 7) != 0)
			{
				sub_140883AE0(a1, v4, 0);
			}
			else
			{
				v10 = *(__int64**)(v4 + 8);
				v11 = *(unsigned int*)(v4 + 16);
				*(_DWORD*)(v4 + 20) = v9 & 0xFFFFFFF8 | 2;
				v12 = *v10;
				v13 = *(unsigned int*)(a1 + 148);
				if (*v10 + v11 >= v13 || v12 + (unsigned __int64)*((unsigned int*)v10 + 6) <= v13)
					v14 = *((_DWORD*)v10 + 6);
				else
					v14 = v13 - v12;
				*(_DWORD*)(a1 + 156) -= v14 - v11;
				*(_DWORD*)(v4 + 16) = *(_DWORD*)(*(_QWORD*)(v4 + 8) + 24i64);
				v15 = *(_QWORD*)(a1 + 216);
				if (v15)
				{
					*(_QWORD*)v4 = v15;
					*(_QWORD*)(a1 + 216) = v4;
				}
				else
				{
					*(_QWORD*)(a1 + 216) = v4;
					*(_QWORD*)v4 = 0i64;
				}
			}
			if (!v8)
				break;
			v7 = v20;
			v4 = v19;
		}
	}
	v16 = *(_QWORD**)(a1 + 216);
	for (i = 1; v16; i = a3 == 0)
	{
		v18 = (__int64)v16;
		v16 = (_QWORD*)*v16;
		sub_140889F90(v18, *(_QWORD*)(*(_QWORD*)(a1 + 96) + 256i64), i, a3);
	}
}

