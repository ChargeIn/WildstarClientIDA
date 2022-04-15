//----- (00000001400576C0) ----------------------------------------------------
void __fastcall sub_1400576C0(__int64 a1, char* a2, __int64 a3)
{
	__int64 v3; // r15
	unsigned __int64 v6; // r13
	unsigned __int64 v7; // rbp
	__int64 v8; // r14
	__int64 v9; // rdi
	__int64 v10; // rax
	char v11; // al

	if (a3)
	{
		v3 = a3;
		v6 = a1 + 536;
		do
		{
			--v3;
			if (*(_QWORD*)a1 >= v6)
			{
				v7 = *(_QWORD*)a1 - a1 - 24;
				if (*(_QWORD*)a1 - a1 != 24)
				{
					v8 = *(_QWORD*)(a1 + 16);
					if (*(_QWORD*)(*(_QWORD*)(v8 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v8 + 32) + 112i64))
						sub_14005E2C0(*(_QWORD*)(a1 + 16));
					v9 = *(_QWORD*)(v8 + 16);
					v10 = sub_140062650(v8, (unsigned __int64*)(a1 + 24), v7);
					*(_DWORD*)(v9 + 8) = 4;
					*(_QWORD*)v9 = v10;
					*(_QWORD*)(v8 + 16) += 16i64;
					++* (_DWORD*)(a1 + 8);
					*(_QWORD*)a1 = a1 + 24;
					sub_1400575B0(a1);
				}
			}
			v11 = *a2++;
			*(_BYTE*)(*(_QWORD*)a1)++ = v11;
		} while (v3);
	}
}

