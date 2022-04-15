//----- (00000001401E1220) ----------------------------------------------------
__int64 __fastcall sub_1401E1220(__int64 a1)
{
	unsigned int v1; // esi
	__int64* v3; // r14
	unsigned int i; // ebp
	__int64 v5; // rbx
	int* v6; // rax
	__int64 v7; // rdi
	int v8; // r15d
	int v9; // eax

	v1 = 0;
	v3 = (__int64*)(a1 + 328);
	for (i = 0; i < 0x48; ++i)
	{
		v5 = *v3;
		if (*v3)
		{
			(**(void(__fastcall***)(__int64))v5)(*v3);
			if (*v3)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)*v3 + 8i64))(*v3);
				*v3 = 0i64;
			}
			if (*(_DWORD*)(v5 + 44))
			{
				v7 = 0i64;
			}
			else
			{
				v6 = sub_14018B280(120i64, 0);
				v7 = (__int64)v6;
				if (v6)
				{
					*(_QWORD*)v6 = off_140B55048;
					v6[2] = 1;
					*(_QWORD*)v6 = off_140B60300;
					*((_QWORD*)v6 + 6) = 0i64;
					*((_QWORD*)v6 + 7) = 0i64;
					*((_QWORD*)v6 + 9) = 0i64;
					*((_QWORD*)v6 + 10) = 0i64;
					*((_QWORD*)v6 + 11) = 0i64;
					*(_QWORD*)(v6 + 27) = 0i64;
					*((_QWORD*)v6 + 2) = a1;
				}
				else
				{
					v7 = 0i64;
				}
				v8 = sub_1401E6820(v7, i, (_QWORD*)(v5 + 24), 0);
				if (v8 < 0)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
					return (unsigned int)v8;
				}
			}
			*v3 = v7;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		}
		++v3;
	}
	v9 = sub_1401E1350(a1);
	if (v9 < 0)
		return (unsigned int)v9;
	return v1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B60300: using guessed type __int64 (__fastcall *off_140B60300[3])();

