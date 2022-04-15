//----- (00000001405ABDC0) ----------------------------------------------------
void __fastcall sub_1405ABDC0(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	unsigned __int64 v5; // rbp
	_QWORD* v6; // rbx
	__int64 v7; // rbx
	__int64 v8; // r8
	unsigned int v9; // ebx
	int v10; // esi
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rcx

	if (a2)
	{
		sub_1404C9E20(a1, *(_DWORD*)(a1 + 188), *(_QWORD*)(a2 + 16));
		v5 = (*(__int64(__fastcall**)(__int64))(a1 + 392))(a2 + 16);
		v6 = *(_QWORD**)(*(_QWORD*)(a1 + 384) + 8 * (v5 % *(_QWORD*)(a1 + 376)));
		if (v6)
		{
			while (v5 != *v6 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 400))(a2 + 16, v6 + 2))
			{
				v6 = (_QWORD*)v6[1];
				if (!v6)
					goto LABEL_15;
			}
			if (v6 != (_QWORD*)-24i64)
			{
				sub_1400B6120(a1 + 368, a2 + 16);
				v7 = *(_QWORD*)(a1 + 416);
				v4 = *(_QWORD*)(a1 + 424);
				if (v7 != v4)
				{
					while (**(_QWORD**)v7 != *(_QWORD*)(a2 + 16))
					{
						v7 += 8i64;
						if (v7 == v4)
							goto LABEL_15;
					}
					sub_14018B900(*(_QWORD*)v7, 0);
					v8 = *(_QWORD*)(a1 + 424);
					if (v7 + 8 != v8)
						sub_1407DB590((int*)v7, (int*)(v7 + 8), (v8 - (v7 + 8)) & 0xFFFFFFFFFFFFFFF8ui64);
					*(_QWORD*)(a1 + 424) -= 8i64;
				}
			}
		}
	LABEL_15:
		v9 = *(_DWORD*)(a1 + 184);
		v10 = 0;
		if (qword_140C63840)
		{
			v11 = qword_140C63840(off_140A6A8D8, v9, qword_140C63858);
		}
		else
		{
			if (dword_140C65340 || (int)sub_140205D40() < 0)
				goto LABEL_22;
			v11 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C30 + 24i64))(qword_140C63C30, v9);
		}
		if (v11)
			v10 = *(_DWORD*)(v11 + 4);
	LABEL_22:
		v12 = sub_1404C9E20(v4, *(_DWORD*)(a1 + 188), *(_QWORD*)(a2 + 16));
		sub_1404C9C70(v13, v10, *(_DWORD*)(a1 + 188), v12);
		sub_14077DB00(a1 + 440, *(_QWORD*)(a2 + 16), *(_DWORD*)(a2 + 76), *(_DWORD*)(a2 + 96));
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingMyResidenceDecorChanged", byte_1409EBF4C, 0i64);
	}
}
// 1405ABF15: variable 'v4' is possibly undefined
// 1405ABF26: variable 'v13' is possibly undefined
// 1409EBF4C: using guessed type _BYTE byte_1409EBF4C[24];
// 140A6A8D8: using guessed type wchar_t *off_140A6A8D8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C30: using guessed type __int64 qword_140C63C30;
// 140C65340: using guessed type int dword_140C65340;
// 140C65898: using guessed type __int64 qword_140C65898;

