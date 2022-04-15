//----- (00000001401C0670) ----------------------------------------------------
int** __fastcall sub_1401C0670(int** a1, __int64 a2)
{
	unsigned __int64 v4; // rbp
	int* v5; // rax
	int* v6; // rbx

	if (*(_QWORD*)a2)
	{
		v4 = *(_QWORD*)(*(_QWORD*)a2 - 8i64);
		v5 = sub_14018B280(v4 + 17, 0);
		if (v5)
		{
			*((_QWORD*)v5 + 1) = v4;
			*(_QWORD*)v5 = off_140B55060;
		}
		v6 = v5 + 4;
		sub_1407DB590(v5 + 4, *(int**)a2, v4);
		*((_BYTE*)v6 + v4) = 0;
		*a1 = v6;
	}
	else
	{
		*a1 = 0i64;
	}
	a1[1] = *(int**)(a2 + 8);
	a1[2] = *(int**)(a2 + 16);
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

