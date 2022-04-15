//----- (0000000140863E80) ----------------------------------------------------
__int64 __fastcall sub_140863E80(__int64 a1, int a2)
{
	int v4; // ecx
	int v5; // edx
	__int64 v6; // rdx
	int* v7; // rax
	int* v8; // rdi

	sub_140863130(a1, 0i64, a2);
	sub_14087ACD0(a1 + 840, 0x400u);
	*(_BYTE*)(a1 + 920) &= 0xFCu;
	*(_DWORD*)(a1 + 888) = -1;
	*(_DWORD*)(a1 + 928) = -1;
	v4 = a2;
	*(_QWORD*)(a1 + 896) = 0i64;
	*(_QWORD*)(a1 + 904) = 0i64;
	*(_QWORD*)(a1 + 912) = 0i64;
	*(_QWORD*)(a1 + 936) = 0i64;
	*(_QWORD*)(a1 + 944) = 0i64;
	*(_QWORD*)(a1 + 952) = 0i64;
	*(_BYTE*)(a1 + 960) &= 0xFCu;
	*(_DWORD*)(a1 + 968) = -1;
	*(_QWORD*)(a1 + 976) = 0i64;
	*(_QWORD*)(a1 + 984) = 0i64;
	*(_QWORD*)(a1 + 992) = 0i64;
	*(_BYTE*)(a1 + 1000) &= 0xFCu;
	*(_DWORD*)(a1 + 1008) = -1;
	*(_QWORD*)(a1 + 1016) = 0i64;
	*(_QWORD*)(a1 + 1024) = 0i64;
	*(_QWORD*)(a1 + 1032) = 0i64;
	*(_BYTE*)(a1 + 1040) &= 0xFCu;
	*(_BYTE*)(a1 + 1048) &= 0xFCu;
	*(_DWORD*)(a1 + 784) = 1065353216;
	*(_DWORD*)(a1 + 780) = 1065353216;
	*(_QWORD*)(a1 + 788) = 0i64;
	*(_DWORD*)(a1 + 1056) = 2;
	*(_QWORD*)(a1 + 848) = 0i64;
	*(_QWORD*)(a1 + 860) = 43i64;
	*(_DWORD*)(a1 + 860) = 17;
	v5 = 0;
	if (a2)
	{
		do
		{
			++v5;
			v4 &= v4 - 1;
		} while (v4);
	}
	v6 = (unsigned int)(v5 << 12);
	*(_DWORD*)(a1 + 880) = v6;
	v7 = (int*)sub_140881960(dword_140C10F28, v6, 0x10u);
	v8 = v7;
	if (!v7)
		return 52i64;
	sub_1407E4830(v7, 0i64, *(unsigned int*)(a1 + 880));
	*(_QWORD*)(a1 + 848) = v8;
	*(_DWORD*)(a1 + 864) = 1024;
	*(_DWORD*)(a1 + 856) = a2;
	return 1i64;
}
// 140C10F28: using guessed type int dword_140C10F28;

