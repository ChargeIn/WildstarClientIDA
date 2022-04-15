//----- (000000014055AFC0) ----------------------------------------------------
void __fastcall sub_14055AFC0(__int64 a1, __int64 a2, double a3, double a4)
{
	__int64* v4; // rsi
	__int64 v6; // rdi
	__int64 v7; // rdi
	int v8; // ebx
	__int64 v9; // rax
	int* v10; // r9
	int v11; // eax
	unsigned int v12; // eax
	__int64 v13; // rax
	__int64 v14; // rax
	int v15; // edx

	if (a2)
	{
		v4 = (__int64*)qword_140C65898;
		v6 = *(_QWORD*)(qword_140C65898 + 120);
		if (v6)
		{
			if (*(_DWORD*)(a2 + 8) == *(_DWORD*)(v6 + 264))
			{
				if (*(_DWORD*)(a2 + 128) != 20
					|| (v7 = *(_QWORD*)(v6 + 272),
						v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 272) + 24i64))(*(_QWORD*)(a2 + 272)),
						(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v7 + 24i64))(v7) != v8))
				{
					v9 = sub_1404695E0(v4[3218]);
					v10 = (int*)v9;
					if (v9 && *(_DWORD*)(v9 + 344) == *(_DWORD*)(a2 + 8))
					{
						v11 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v9 + 312) + 112i64) + 24i64);
						if (v11 == 7 || v11 == 2)
						{
							v12 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v10 + 8i64))(v10);
							sub_1403BEF30(v4, v12, 1);
						}
						else
						{
							sub_14039CCE0((__int64)v4, v10[23], 6u);
						}
					}
					v13 = sub_1403DEC00((__int64)v4, a2);
					if (v13 && (v14 = sub_140625D30(v13)) != 0)
						v15 = *(_DWORD*)(v14 + 8);
					else
						v15 = 0;
					sub_14055B0E0((__int64)v4, v15, a3, a4);
				}
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

