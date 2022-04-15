//----- (00000001404D5250) ----------------------------------------------------
__int64 __fastcall sub_1404D5250(__int64 a1, __int64 a2)
{
	__int64 v4; // rbx
	int* v5; // rax
	int* v6; // rdi
	unsigned __int64 v7; // rbx

	if (*(_QWORD*)a2)
	{
		v4 = *(_QWORD*)(*(_QWORD*)a2 - 8i64);
		v5 = sub_14018B280(2 * v4 + 18, 0);
		if (v5)
		{
			*((_QWORD*)v5 + 1) = v4;
			*(_QWORD*)v5 = off_140B55060;
		}
		else
		{
			v5 = 0i64;
		}
		v6 = v5 + 4;
		v7 = 2 * v4;
		sub_1407DB590(v5 + 4, *(int**)a2, v7);
		*(_WORD*)((char*)v6 + v7) = 0;
		*(_QWORD*)a1 = v6;
	}
	else
	{
		*(_QWORD*)a1 = 0i64;
	}
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 + 8);
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

