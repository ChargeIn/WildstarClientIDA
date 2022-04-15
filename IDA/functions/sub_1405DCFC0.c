//----- (00000001405DCFC0) ----------------------------------------------------
void __fastcall sub_1405DCFC0(__int64 a1, int a2, int* a3)
{
	unsigned __int64 i; // r14
	__int64 v7; // rbp
	__int64 v8; // r15
	__int64 v9; // rbx
	int* v10; // rax
	int* v11; // rdi
	unsigned __int64 v12; // rbx

	for (i = 0i64; i < *(_QWORD*)(a1 + 112); ++i)
	{
		v7 = *(_QWORD*)(*(_QWORD*)(a1 + 104) + 8 * i);
		if (*(_DWORD*)(v7 + 8) == a2)
		{
			v8 = *(_QWORD*)(v7 + 56);
			if (a3)
			{
				v9 = 0i64;
				if (*(_WORD*)a3)
				{
					do
						++v9;
					while (*((_WORD*)a3 + v9));
				}
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
				sub_1407DB590(v10 + 4, a3, v12);
				*(_WORD*)((char*)v11 + v12) = 0;
				*(_QWORD*)(v7 + 56) = v11;
			}
			else
			{
				*(_QWORD*)(v7 + 56) = 0i64;
			}
			if (v8)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
		}
	}
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

