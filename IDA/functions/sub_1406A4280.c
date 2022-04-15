//----- (00000001406A4280) ----------------------------------------------------
__int64 __fastcall sub_1406A4280(__int64 a1, __int64 a2, __int64 a3, int* a4, int a5)
{
	int v6; // r8d
	__int64 v7; // r15
	__int64 v9; // rbp
	unsigned __int64 v10; // rdi
	int* v11; // rax
	int* v12; // rbx
	__int64 result; // rax

	v6 = *(_DWORD*)(a3 + 16);
	v7 = *(_QWORD*)(qword_140C65898 + 29504);
	if (v6 != -2)
		sub_1400579E0(a2, a2, v6);
	v9 = *(_QWORD*)(a3 + 8);
	if (a4)
	{
		v10 = 0i64;
		if (*(_BYTE*)a4)
		{
			do
				++v10;
			while (*((_BYTE*)a4 + v10));
		}
		v11 = sub_14018B280(v10 + 17, 0);
		if (v11)
		{
			*((_QWORD*)v11 + 1) = v10;
			*(_QWORD*)v11 = off_140B55060;
		}
		v12 = v11 + 4;
		sub_1407DB590(v11 + 4, a4, v10);
		*((_BYTE*)v12 + v10) = 0;
		*(_QWORD*)(a3 + 8) = v12;
	}
	else
	{
		*(_QWORD*)(a3 + 8) = 0i64;
	}
	if (v9)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
	result = sub_14013A390(v7 + 2496, a5);
	*(_DWORD*)(a3 + 16) = a5;
	*(_QWORD*)a3 = result;
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

