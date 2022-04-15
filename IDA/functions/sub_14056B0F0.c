//----- (000000014056B0F0) ----------------------------------------------------
__int64 __fastcall sub_14056B0F0(__int64 a1, int** a2, int a3, int a4, int a5)
{
	int v6; // ebx
	int* v10; // rax
	__int64 result; // rax

	v6 = **a2;
	*(_QWORD*)a1 = off_140B6CBD0;
	v10 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 16) = v10;
	*(_QWORD*)v10 = v10;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 40) = v6;
	*(_QWORD*)a1 = off_140B6CAE0;
	*(_DWORD*)(a1 + 32) = a5;
	*(_QWORD*)(a1 + 48) = a2;
	*(_DWORD*)(a1 + 36) = a3;
	*(_DWORD*)(a1 + 28) = a4;
	result = a1;
	*(_DWORD*)(a1 + 24) = 0;
	return result;
}
// 140B6CAE0: using guessed type __int64 (__fastcall *off_140B6CAE0[17])();
// 140B6CBD0: using guessed type __int64 (__fastcall *off_140B6CBD0[6])();

