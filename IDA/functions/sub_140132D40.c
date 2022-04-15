//----- (0000000140132D40) ----------------------------------------------------
__int64 __fastcall sub_140132D40(__int64 a1, __int64 a2, int a3, int a4)
{
	int v7; // eax
	int* v8; // rax
	__int64 v9; // rcx
	unsigned int v10; // edx
	int* v11; // rax
	__int64 v12; // rcx
	_QWORD v14[2]; // [rsp+20h] [rbp-48h] BYREF
	_QWORD v15[7]; // [rsp+30h] [rbp-38h] BYREF
	int* v16; // [rsp+70h] [rbp+8h] BYREF
	int* v17; // [rsp+78h] [rbp+10h] BYREF

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)a1 = off_140B57EA0;
	v7 = dword_140C8A07C + 1;
	*(_DWORD*)(a1 + 16) = dword_140C8A07C + 1;
	*(_QWORD*)(a1 + 24) = a2;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	dword_140C8A07C = v7;
	v8 = sub_14018B280(8i64, 0);
	*(_QWORD*)(a1 + 40) = v8;
	*(_QWORD*)(a1 + 48) = v8;
	*(_QWORD*)(a1 + 56) = v8 + 2;
	if (v8)
		*(_BYTE*)v8 = 0;
	*(_DWORD*)(a1 + 64) = a3;
	*(_DWORD*)(a1 + 72) = 0;
	*(_DWORD*)(a1 + 76) = a4;
	*(_QWORD*)(a1 + 80) = 1i64;
	*(_DWORD*)(a1 + 88) = 0;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_DWORD*)(a1 + 96) = 1414420037;
	*(_DWORD*)(a1 + 164) = 0;
	v9 = *(_QWORD*)(qword_140C67260 + 8);
	v10 = *(_DWORD*)(a1 + 16);
	v11 = (int*)qword_140C67260;
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < v10)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v11 = (int*)v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v11 == (int*)qword_140C67260 || v10 < v11[8])
	{
		LODWORD(v14[0]) = *(_DWORD*)(a1 + 16);
		v14[1] = 0i64;
		v16 = v11;
		sub_140055C60((__int64)&unk_140C67258, &v17, (__int64*)&v16, v14);
		v11 = v17;
	}
	*((_QWORD*)v11 + 5) = a1;
	sub_14018EE90(v15, (__int64)"TE_%d", *(unsigned int*)(a1 + 16));
	v12 = *(_QWORD*)(a1 + 40);
	*(_QWORD*)(a1 + 40) = v15[1];
	*(_QWORD*)(a1 + 48) = v15[2];
	*(_QWORD*)(a1 + 56) = v15[3];
	if (v12)
		sub_14018B900(v12, 0);
	sub_140133080(a1);
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B57EA0: using guessed type __int64 (__fastcall *off_140B57EA0[3])();
// 140C67260: using guessed type __int64 qword_140C67260;
// 140C8A07C: using guessed type int dword_140C8A07C;

