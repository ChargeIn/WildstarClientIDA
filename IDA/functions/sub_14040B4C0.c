//----- (000000014040B4C0) ----------------------------------------------------
void __fastcall sub_14040B4C0(int** a1, int** a2)
{
	__int64 v4; // rbx
	int* v5; // rax
	int* v6; // rdi
	unsigned __int64 v7; // rbx

	if (a1)
	{
		if (*a2)
		{
			v4 = *((_QWORD*)*a2 - 1);
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
			sub_1407DB590(v5 + 4, *a2, v7);
			*(_WORD*)((char*)v6 + v7) = 0;
			*a1 = v6;
		}
		else
		{
			*a1 = 0i64;
		}
	}
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

