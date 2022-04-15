//----- (00000001405D3380) ----------------------------------------------------
void __fastcall sub_1405D3380(__int64 a1, __int64 a2, double a3, double a4)
{
	int v5; // eax
	int v6; // xmm0_4
	__int64 v7; // rcx
	int v8; // edx
	int v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]
	void(__fastcall * v11)(_DWORD*); // [rsp+30h] [rbp-18h]
	__int64 v12; // [rsp+38h] [rbp-10h]

	*(_DWORD*)(a1 + 692) = 0;
	*(_DWORD*)(a1 + 752) = *(_DWORD*)(a1 + 944);
	*(_OWORD*)(a1 + 768) = *(_OWORD*)(a1 + 960);
	*(_OWORD*)(a1 + 784) = *(_OWORD*)(a1 + 976);
	*(_DWORD*)(a1 + 768) = *(_DWORD*)(a1 + 960);
	*(_DWORD*)(a1 + 772) = *(_DWORD*)(a1 + 964);
	*(_DWORD*)(a1 + 776) = *(_DWORD*)(a1 + 968);
	*(_DWORD*)(a1 + 780) = *(_DWORD*)(a1 + 972);
	*(_DWORD*)(a1 + 768) = *(_DWORD*)(a1 + 960);
	*(_DWORD*)(a1 + 772) = *(_DWORD*)(a1 + 964);
	*(_DWORD*)(a1 + 776) = *(_DWORD*)(a1 + 968);
	*(_DWORD*)(a1 + 780) = *(_DWORD*)(a1 + 972);
	*(_DWORD*)(a1 + 784) = *(_DWORD*)(a1 + 976);
	*(_DWORD*)(a1 + 800) = *(_DWORD*)(a1 + 992);
	*(_OWORD*)(a1 + 816) = *(_OWORD*)(a1 + 1008);
	*(_OWORD*)(a1 + 832) = *(_OWORD*)(a1 + 1024);
	*(_DWORD*)(a1 + 816) = *(_DWORD*)(a1 + 1008);
	*(_DWORD*)(a1 + 820) = *(_DWORD*)(a1 + 1012);
	*(_DWORD*)(a1 + 824) = *(_DWORD*)(a1 + 1016);
	*(_DWORD*)(a1 + 828) = *(_DWORD*)(a1 + 1020);
	*(_DWORD*)(a1 + 816) = *(_DWORD*)(a1 + 1008);
	*(_DWORD*)(a1 + 820) = *(_DWORD*)(a1 + 1012);
	*(_DWORD*)(a1 + 824) = *(_DWORD*)(a1 + 1016);
	*(_DWORD*)(a1 + 828) = *(_DWORD*)(a1 + 1020);
	*(_DWORD*)(a1 + 832) = *(_DWORD*)(a1 + 1024);
	v5 = dword_140C636A8;
	*(_DWORD*)(a1 + 80) = 1065353216;
	v6 = *(_DWORD*)(a1 + 1140);
	*(_DWORD*)(a1 + 20) = v6;
	*(_DWORD*)(a1 + 16) = v6;
	*(_DWORD*)(a1 + 720) = v5;
	if (*(_DWORD*)(a1 + 688))
	{
		*(_DWORD*)(a1 + 696) = 0;
		v7 = qword_140C65898;
		if (*(_DWORD*)(qword_140C65898 + 29776))
		{
			sub_14053B5C0(qword_140C65898, 0, *(_DWORD*)(a1 + 1064));
			v7 = qword_140C65898;
		}
		sub_1405CC9A0(*(_QWORD*)(v7 + 29080), a2, a3, a4);
	}
	else
	{
		*(_DWORD*)(a1 + 696) = 1;
	}
	sub_14053B9C0(a1, *(_DWORD*)(a1 + 1064));
	v8 = *(_DWORD*)(a1 + 1064);
	v11 = sub_1405D3360;
	v9 = 0;
	v10 = a1;
	v12 = 0i64;
	sub_140195960(a1 + 608, v8, (__int64)&v9, 4);
	*(_DWORD*)(a1 + 1040) = 0;
}
// 1405D351B: variable 'a2' is possibly undefined
// 1405D3532: variable 'a1' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

