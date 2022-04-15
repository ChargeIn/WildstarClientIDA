//----- (0000000140719EF0) ----------------------------------------------------
__int64 __fastcall sub_140719EF0(__int64* a1, int* a2)
{
	int v4; // eax
	__int64 v5; // rbx
	int v6; // eax
	__int64 v7; // rax
	int v8; // edx
	int v10; // [rsp+30h] [rbp-28h] BYREF
	__int64* v11; // [rsp+38h] [rbp-20h]
	__int64(__fastcall * v12)(__int64); // [rsp+40h] [rbp-18h]
	__int64 v13; // [rsp+48h] [rbp-10h]

	*((_DWORD*)a1 + 54) = a2[8];
	if (a2[3])
	{
		a2[1] = -1;
	}
	else
	{
		v4 = a2[1];
		if (v4 == -1)
		{
			a2[3] = 1;
		}
		else if (!v4)
		{
			a2[3] = 0;
		}
	}
	v5 = (*(__int64(__fastcall**)(__int64*))(*a1 + 64))(a1);
	v6 = (*(__int64(__fastcall**)(__int64*))(*a1 + 56))(a1);
	v7 = sub_1403D90D0(qword_140C65898, v6);
	sub_140719510(a1 + 26, (__int64)a1, a2, v7, v5);
	v8 = *a2;
	v12 = sub_14071A070;
	v10 = 0;
	v11 = a1;
	v13 = 0i64;
	sub_140195960((__int64)(a1 + 7), v8, (__int64)&v10, 4);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

