//----- (0000000140607310) ----------------------------------------------------
void __fastcall sub_140607310(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	__int64 v5; // rax
	__int64 v6; // r14
	unsigned int v7; // ebp
	unsigned int v8; // r15d
	__int64 v9; // rax
	__int64 v10; // rdi
	_QWORD* v11; // rbx
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rbx
	__int64 v15; // [rsp+20h] [rbp-38h]

	v2 = 0i64;
	if (*(_DWORD*)a2)
	{
		while (1)
		{
			v5 = *(_QWORD*)(a2 + 8);
			v6 = *(_QWORD*)(a1 + 64);
			v7 = *(_DWORD*)(v5 + 8 * v2 + 4);
			v8 = *(_DWORD*)(v5 + 8 * v2);
			if (qword_140C63840)
				break;
			if (!dword_140C642C0 && (int)sub_140240D20() >= 0)
			{
				v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64B30 + 24i64))(qword_140C64B30, v8);
			LABEL_7:
				if (v9)
				{
					v10 = sub_1406017B0(v6, v8);
					if (v10)
					{
						v11 = *(_QWORD**)(v6 + 128);
						if (v11)
						{
							while ((*(unsigned int(__fastcall**)(_QWORD*))(*v11 + 56i64))(v11) != *(_DWORD*)(v10 + 4))
							{
								v11 = (_QWORD*)v11[2];
								if (!v11)
									goto LABEL_14;
							}
							(*(void(__fastcall**)(_QWORD*))(*v11 + 32i64))(v11);
						}
					}
				LABEL_14:
					v12 = qword_140C65898;
					*(_DWORD*)(v10 + 4) = v7;
					v13 = sub_1403D90D0(v12, v7);
					v14 = v13;
					if (v13 && *(_QWORD*)(v13 + 5864))
						sub_140601880(v6, v8, v7);
					if ((!v7 || v14 && *(_QWORD*)(v14 + 5864)) && v6 == *(_QWORD*)(qword_140C65898 + 27728))
					{
						LODWORD(v15) = v7;
						sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "Group_SetMark", byte_1409EA434, v8, v15);
					}
				}
			}
			v2 = (unsigned int)(v2 + 1);
			if ((unsigned int)v2 >= *(_DWORD*)a2)
				return;
		}
		v9 = qword_140C63840(off_140A6D968, v8, qword_140C63858);
		goto LABEL_7;
	}
}
// 140607459: variable 'v15' is possibly undefined
// 1409EA434: using guessed type _BYTE byte_1409EA434[32];
// 140A6D968: using guessed type wchar_t *off_140A6D968[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C642C0: using guessed type int dword_140C642C0;
// 140C64B30: using guessed type __int64 qword_140C64B30;
// 140C65898: using guessed type __int64 qword_140C65898;

