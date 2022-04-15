//----- (0000000140498990) ----------------------------------------------------
void __fastcall sub_140498990(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned int v5; // edx
	__int64 i; // rax
	__int64 j; // rax

	*a1 = off_140B674F0;
	v2 = a1[2];
	v3 = *(_QWORD*)(v2 + 16);
	if (v3 != v2)
	{
		do
		{
			v4 = *(_QWORD*)(v3 + 24);
			v5 = *(_DWORD*)(v3 + 32);
			if (v4)
			{
				v3 = *(_QWORD*)(v3 + 24);
				for (i = *(_QWORD*)(v4 + 16); i; i = *(_QWORD*)(i + 16))
					v3 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v3 + 8); v3 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = j;
				if (*(_QWORD*)(v3 + 24) != j)
					v3 = j;
			}
			sub_140498700((__int64)a1, v5);
		} while (v3 != a1[2]);
	}
	sub_140008410((__int64)(a1 + 1));
	sub_140008410((__int64)(a1 + 1));
	sub_14018B900(a1[2], 0);
}
// 140B674F0: using guessed type __int64 (__fastcall *off_140B674F0[22])();

