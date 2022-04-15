//----- (00000001404C89B0) ----------------------------------------------------
__int64 __fastcall sub_1404C89B0(__int64 a1)
{
	_QWORD* v2; // rcx
	int* v3; // rax
	int* v4; // rax
	unsigned int i; // ebp
	unsigned int v6; // eax
	__int64 v7; // rax
	__int64 v8; // rdx
	unsigned __int64 v9; // rcx
	int* v10; // rsi
	int* v11; // rax
	int* v12; // r14
	__int64 v13; // r15
	__int64 v14; // rbx
	int* v15; // rax
	int* v16; // rdi
	unsigned __int64 v17; // rbx

	v2 = (_QWORD*)(a1 + 32);
	*(v2 - 3) = 0i64;
	*(v2 - 2) = 0i64;
	*(v2 - 1) = 0i64;
	sub_1400522F0(v2);
	sub_1400522F0((_QWORD*)(a1 + 72));
	*(_QWORD*)(a1 + 112) = 0i64;
	sub_1404CB550((_QWORD*)(a1 + 120));
	sub_1404CB550((_QWORD*)(a1 + 160));
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_DWORD*)(a1 + 208) = 254;
	*(_QWORD*)(a1 + 212) = 1i64;
	v3 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 240) = 0i64;
	*(_QWORD*)(a1 + 232) = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 232) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 232) + 16i64) = *(_QWORD*)(a1 + 232);
	*(_QWORD*)(*(_QWORD*)(a1 + 232) + 24i64) = *(_QWORD*)(a1 + 232);
	v4 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 272) = 0i64;
	*(_QWORD*)(a1 + 264) = v4;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 264) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 264) + 16i64) = *(_QWORD*)(a1 + 264);
	*(_QWORD*)(*(_QWORD*)(a1 + 264) + 24i64) = *(_QWORD*)(a1 + 264);
	sub_140019490((_QWORD*)(a1 + 32));
	sub_140019490((_QWORD*)(a1 + 72));
	for (i = 0; ; ++i)
	{
		if (qword_140C63838)
		{
			v6 = qword_140C63838(off_140A69A68, qword_140C63858);
			goto LABEL_7;
		}
		if (dword_140C6539C || (int)sub_1401F44C0() < 0)
			break;
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65158 + 40i64))(qword_140C65158);
	LABEL_7:
		if (i >= v6)
			return a1;
		if (qword_140C63848)
		{
			v7 = qword_140C63848(off_140A69A68, i, qword_140C63858);
		}
		else
		{
			if (dword_140C6539C)
			{
				v8 = 0i64;
				goto LABEL_16;
			}
			if ((int)sub_1401F44C0() < 0)
			{
				v8 = 0i64;
				goto LABEL_16;
			}
			v7 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65158 + 32i64))(qword_140C65158, i);
		}
		v8 = v7;
	LABEL_16:
		v9 = *(_QWORD*)(v8 + 8);
		if (v9)
		{
			if (v9 <= qword_140C3FE70)
				v10 = (int*)(v9 + qword_140C3FE68);
			else
				v10 = 0i64;
		}
		else
		{
			v10 = 0i64;
		}
		v11 = sub_1400193E0(a1 + 224, (unsigned int*)v8);
		v12 = v11;
		v13 = *(_QWORD*)v11;
		if (v10)
		{
			v14 = 0i64;
			if (*(_WORD*)v10)
			{
				do
					++v14;
				while (*((_WORD*)v10 + v14));
			}
			v15 = sub_14018B280(2 * v14 + 18, 0);
			if (v15)
			{
				*((_QWORD*)v15 + 1) = v14;
				*(_QWORD*)v15 = off_140B55060;
			}
			else
			{
				v15 = 0i64;
			}
			v16 = v15 + 4;
			v17 = 2 * v14;
			sub_1407DB590(v15 + 4, v10, v17);
			*(_WORD*)((char*)v16 + v17) = 0;
			*(_QWORD*)v12 = v16;
		}
		else
		{
			*(_QWORD*)v11 = 0i64;
		}
		if (v13)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
	}
	return a1;
}
// 140A69A68: using guessed type wchar_t *off_140A69A68[2];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65158: using guessed type __int64 qword_140C65158;
// 140C6539C: using guessed type int dword_140C6539C;

