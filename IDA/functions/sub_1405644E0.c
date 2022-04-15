//----- (00000001405644E0) ----------------------------------------------------
__int64 __fastcall sub_1405644E0(__int64 a1, int a2)
{
	__int64 result; // rax
	int** v3; // rsi
	int* v4; // r14
	__int64 v5; // rbx
	int* v6; // rax
	int* v7; // rdi
	unsigned __int64 v8; // rbx

	result = sub_1407A0FD0(qword_140C65B70, a2);
	if (result)
	{
		v3 = *(int***)(result + 8);
		result = (__int64)v3[1];
		v4 = *v3;
		if (result)
		{
			v5 = *(_QWORD*)(result - 8);
			v6 = sub_14018B280(2 * v5 + 18, 0);
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
			v8 = 2 * v5;
			result = (__int64)sub_1407DB590(v6 + 4, v3[1], v8);
			*(_WORD*)((char*)v7 + v8) = 0;
			*v3 = v7;
		}
		else
		{
			*v3 = 0i64;
		}
		if (v4)
			return (*(__int64(__fastcall**)(int*))(*((_QWORD*)v4 - 2) + 8i64))(v4 - 4);
	}
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65B70: using guessed type __int64 qword_140C65B70;

