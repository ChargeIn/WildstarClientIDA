//----- (00000001405564F0) ----------------------------------------------------
int* __fastcall sub_1405564F0(__int64 a1, int a2, int* a3, int a4, int a5, int a6, int a7)
{
	__int64 v7; // rbp
	int* v11; // rax
	int* v12; // rdi
	int* v13; // rax
	__int64 v14; // r8
	__int64 v15; // rbx
	int* result; // rax

	v7 = a2;
	v11 = sub_14018B280(72i64, 0);
	v12 = v11;
	if (v11)
	{
		*(_QWORD*)v11 = off_140B55048;
		v11[2] = 1;
		*(_QWORD*)v11 = off_140B6C6D8;
		*((_QWORD*)v11 + 4) = 0i64;
		*((_QWORD*)v11 + 5) = 0i64;
		*((_QWORD*)v11 + 6) = 0i64;
		v13 = sub_14018B280(8i64, 0);
		*((_QWORD*)v12 + 4) = v13;
		*((_QWORD*)v12 + 5) = v13;
		*((_QWORD*)v12 + 6) = v13 + 2;
		if (v13)
			*(_BYTE*)v13 = 0;
	}
	else
	{
		v12 = 0i64;
	}
	v14 = -1i64;
	v12[4] = ++dword_140C8AF10;
	do
		++v14;
	while (*((_BYTE*)a3 + v14));
	sub_14001B1A0((__int64)(v12 + 6), a3, (int*)((char*)a3 + v14));
	v12[14] = a4;
	v12[15] = a5;
	v12[16] = a6;
	v12[17] = a7;
	v15 = *(_QWORD*)(*(_QWORD*)(a1 + 112) + 16 * v7 + 8);
	result = sub_14018B280(24i64, 0);
	if (result != (int*)-16i64)
		*((_QWORD*)result + 2) = v12;
	*(_QWORD*)result = v15;
	*((_QWORD*)result + 1) = *(_QWORD*)(v15 + 8);
	**(_QWORD**)(v15 + 8) = result;
	*(_QWORD*)(v15 + 8) = result;
	return result;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B6C6D8: using guessed type __int64 (__fastcall *off_140B6C6D8[8])();
// 140C8AF10: using guessed type int dword_140C8AF10;

