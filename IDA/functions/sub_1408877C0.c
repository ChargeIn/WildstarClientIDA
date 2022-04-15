//----- (00000001408877C0) ----------------------------------------------------
void __fastcall sub_1408877C0(__int64 a1, __int64* a2, char a3)
{
	__int64 v4; // rdx
	__int64* v7; // rax
	__int64 v8; // rbx
	int v9; // eax
	__int64 v10; // rax
	_QWORD* v11; // rbx
	bool i; // r8
	__int64 v13; // rcx
	__int64 v14; // [rsp+20h] [rbp-28h]
	__int64* v15; // [rsp+28h] [rbp-20h]

	v4 = *a2;
	v7 = 0i64;
	if (v4)
	{
		while (1)
		{
			v8 = *(_QWORD*)v4;
			v15 = v7;
			v14 = *(_QWORD*)v4;
			if (v4 == *a2)
				*a2 = v8;
			else
				*v7 = v8;
			if (v4 == a2[1])
				a2[1] = (__int64)v7;
			v9 = *(_DWORD*)(v4 + 20);
			if ((v9 & 7) != 0)
			{
				sub_140883BA0(a1, v4, 0);
			}
			else
			{
				*(_DWORD*)(v4 + 20) = v9 & 0xFFFFFFF8 | 2;
				v10 = *(_QWORD*)(a1 + 200);
				if (v10)
				{
					*(_QWORD*)v4 = v10;
					*(_QWORD*)(a1 + 200) = v4;
				}
				else
				{
					*(_QWORD*)(a1 + 200) = v4;
					*(_QWORD*)v4 = 0i64;
				}
			}
			if (!v8)
				break;
			v7 = v15;
			v4 = v14;
		}
	}
	v11 = *(_QWORD**)(a1 + 200);
	for (i = 1; v11; i = a3 == 0)
	{
		v13 = (__int64)v11;
		v11 = (_QWORD*)*v11;
		sub_140889F90(v13, *(_QWORD*)(*(_QWORD*)(a1 + 96) + 256i64), i, a3);
	}
}

