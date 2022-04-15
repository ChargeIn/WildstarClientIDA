//----- (0000000140632770) ----------------------------------------------------
__int64 __fastcall sub_140632770(__int64 a1, __int64 a2)
{
	__int64 v4; // rdi
	unsigned __int64 v5; // rdi
	int* v6; // rax
	int* v7; // rbx
	__int64 v8; // rax
	__int64 v9; // rbx
	int* v10; // rax
	int* v11; // rdi
	unsigned __int64 v12; // rbx

	*(_DWORD*)a1 = *(_DWORD*)a2;
	*(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 8);
	v4 = *(_QWORD*)(a2 + 16);
	if (v4)
	{
		v5 = *(_QWORD*)(v4 - 8);
		v6 = sub_14018B280(v5 + 17, 0);
		if (v6)
		{
			*((_QWORD*)v6 + 1) = v5;
			*(_QWORD*)v6 = off_140B55060;
		}
		else
		{
			v6 = 0i64;
		}
		v7 = v6 + 4;
		sub_1407DB590(v6 + 4, *(int**)(a2 + 16), v5);
		*((_BYTE*)v7 + v5) = 0;
		*(_QWORD*)(a1 + 16) = v7;
	}
	else
	{
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	v8 = *(_QWORD*)(a2 + 24);
	if (v8)
	{
		v9 = *(_QWORD*)(v8 - 8);
		v10 = sub_14018B280(2 * v9 + 18, 0);
		if (v10)
		{
			*((_QWORD*)v10 + 1) = v9;
			*(_QWORD*)v10 = off_140B55060;
		}
		else
		{
			v10 = 0i64;
		}
		v11 = v10 + 4;
		v12 = 2 * v9;
		sub_1407DB590(v10 + 4, *(int**)(a2 + 24), v12);
		*(_WORD*)((char*)v11 + v12) = 0;
		*(_QWORD*)(a1 + 24) = v11;
	}
	else
	{
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

