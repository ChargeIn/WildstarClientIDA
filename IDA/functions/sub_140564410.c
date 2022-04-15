//----- (0000000140564410) ----------------------------------------------------
__int64 __fastcall sub_140564410(__int64 a1, int a2, int* a3)
{
	__int64 result; // rax
	int** v5; // r14
	int* v6; // r15
	__int64 v7; // rbx
	int* v8; // rax
	int* v9; // rdi
	unsigned __int64 v10; // rbx

	result = sub_1407A0FD0(qword_140C65B70, a2);
	if (result)
	{
		v5 = *(int***)(result + 8);
		v6 = *v5;
		if (a3)
		{
			v7 = 0i64;
			if (*(_WORD*)a3)
			{
				do
					++v7;
				while (*((_WORD*)a3 + v7));
			}
			v8 = sub_14018B280(2 * v7 + 18, 0);
			if (v8)
			{
				*((_QWORD*)v8 + 1) = v7;
				*(_QWORD*)v8 = off_140B55060;
			}
			else
			{
				v8 = 0i64;
			}
			v9 = v8 + 4;
			v10 = 2 * v7;
			result = (__int64)sub_1407DB590(v8 + 4, a3, v10);
			*(_WORD*)((char*)v9 + v10) = 0;
			*v5 = v9;
		}
		else
		{
			*v5 = 0i64;
		}
		if (v6)
			return (*(__int64(__fastcall**)(int*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 4);
	}
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65B70: using guessed type __int64 qword_140C65B70;

