//----- (00000001404C7DD0) ----------------------------------------------------
__int64 __fastcall sub_1404C7DD0(__int64 a1, int a2, int a3)
{
	_QWORD* v5; // rax
	_QWORD* v6; // rbx
	unsigned int v7; // esi
	__int64 v8; // rdi
	unsigned int v9; // ebp
	__int64 v10; // rax
	__int64 v12; // rax
	_QWORD* i; // rax
	__int64 j; // rcx
	int v16; // [rsp+48h] [rbp+10h] BYREF

	v16 = a2;
	if (a2 != 2)
		return (unsigned int)*sub_140032640(a1 + 200, &v16);
	v5 = *(_QWORD**)(a1 + 88);
	v6 = (_QWORD*)v5[2];
	v7 = 0;
	if (v6 != v5)
	{
		do
		{
			v8 = v6[5];
			if (((*(_DWORD*)(v8 + 128) - 5) & 0xFFFFFFFA) == 0)
			{
				v9 = *(_DWORD*)(v8 + 96);
				if (qword_140C63840)
				{
					v10 = qword_140C63840(off_140A6A718, v9, qword_140C63858);
					goto LABEL_9;
				}
				if (!dword_140C646A8 && (int)sub_140203B40() >= 0)
				{
					v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65008 + 24i64))(qword_140C65008, v9);
				LABEL_9:
					if (v10 && *(_DWORD*)(v10 + 44) == 2 && !(a3 ? *(_QWORD*)(v8 + 64) == 0i64 : *(_QWORD*)(v8 + 48) == 0i64))
						++v7;
				}
			}
			v12 = v6[3];
			if (v12)
			{
				v6 = (_QWORD*)v6[3];
				for (i = *(_QWORD**)(v12 + 16); i; i = (_QWORD*)i[2])
					v6 = i;
			}
			else
			{
				for (j = v6[1]; v6 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v6 = (_QWORD*)j;
				if (v6[3] != j)
					v6 = (_QWORD*)j;
			}
		} while (v6 != *(_QWORD**)(a1 + 88));
	}
	return v7;
}
// 140A6A718: using guessed type wchar_t *off_140A6A718[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C646A8: using guessed type int dword_140C646A8;
// 140C65008: using guessed type __int64 qword_140C65008;

