//----- (00000001400167A0) ----------------------------------------------------
void __fastcall sub_1400167A0(__int64 a1, unsigned int a2, int* a3)
{
	int* v4; // rax
	int* v5; // r15
	__int64 v6; // r14
	__int64 v7; // rbx
	int* v8; // rax
	int* v9; // rdi
	unsigned __int64 v10; // rbx
	unsigned int v11; // [rsp+48h] [rbp+10h] BYREF

	if (a2)
	{
		v11 = a2;
		v4 = sub_1400193E0(qword_140C635F0 + 5592, &v11);
		v5 = v4;
		v6 = *(_QWORD*)v4;
		if (!*(_QWORD*)v4 || !*(_QWORD*)(v6 - 8))
		{
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
				sub_1407DB590(v8 + 4, a3, v10);
				*(_WORD*)((char*)v9 + v10) = 0;
				*(_QWORD*)v5 = v9;
			}
			else
			{
				*(_QWORD*)v4 = 0i64;
			}
			if (v6)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
		}
	}
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C635F0: using guessed type __int64 qword_140C635F0;

