//----- (0000000140348ED0) ----------------------------------------------------
__int64 __fastcall sub_140348ED0(_QWORD* a1, __int64 a2, __int64 a3)
{
	int* v6; // rax
	__int64 v7; // rdi
	__int64 v8; // rbx
	int v9; // ebp
	int* v10; // rax
	_QWORD* v11; // rdx
	__int64 v12; // rax

	v6 = sub_14018B280(160i64, 0);
	v7 = 0i64;
	if (v6)
		v8 = sub_140342B10((__int64)v6);
	else
		v8 = 0i64;
	v9 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65858 + 176i64))(
		qword_140C65858,
		*(_QWORD*)(v8 + 40),
		0i64);
	if (v9 >= 0)
	{
		v10 = sub_14018B280(184i64, 0);
		if (v10)
			v7 = sub_140348380((__int64)v10);
		v9 = sub_1403485A0(v7, a2, a3, (void(__fastcall***)(_QWORD))v8);
		if (v9 >= 0)
		{
			a1[2] = v8;
			a1[3] = v7;
			v11 = (_QWORD*)&xmmword_140C7AAE0 + ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 48i64))(a2) & 7);
			if (!a1[4])
			{
				a1[4] = v11;
				a1[5] = *v11;
				*v11 = a1;
				v12 = a1[5];
				if (v12)
					*(_QWORD*)(v12 + 32) = a1 + 5;
			}
		}
		else
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v8 + 240i64))(v8, 1i64);
			if (v7)
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 80i64))(v7, 1i64);
		}
	}
	else
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v8 + 240i64))(v8, 1i64);
	}
	return (unsigned int)v9;
}
// 140C65858: using guessed type __int64 qword_140C65858;
// 140C7AAE0: using guessed type __int128 xmmword_140C7AAE0;

