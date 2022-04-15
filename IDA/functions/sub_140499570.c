//----- (0000000140499570) ----------------------------------------------------
__int64 sub_140499570()
{
	int* v0; // rax
	_QWORD* v1; // rcx
	int* v3; // rbx
	int* v4; // rax

	if (!qword_140C65998 && !qword_140C65990)
	{
		v0 = sub_14018B280(264i64, 0);
		if (v0)
		{
			v1 = sub_140499670(v0);
			qword_140C65998 = (__int64)v1;
		}
		else
		{
			v1 = 0i64;
			qword_140C65998 = 0i64;
		}
		if ((*(int(__fastcall**)(_QWORD*))(*v1 + 8i64))(v1) < 0)
		{
			sub_1404999D0();
			return 2147500037i64;
		}
		v3 = sub_14018B280(40i64, 0);
		if (v3)
		{
			*(_QWORD*)v3 = off_140B67678;
			v4 = sub_14018B280(48i64, 0);
			*((_QWORD*)v3 + 3) = 0i64;
			qword_140C65990 = (__int64)v3;
			*((_QWORD*)v3 + 2) = v4;
			*(_BYTE*)v4 = 0;
			*(_QWORD*)(*((_QWORD*)v3 + 2) + 8i64) = 0i64;
			*(_QWORD*)(*((_QWORD*)v3 + 2) + 16i64) = *((_QWORD*)v3 + 2);
			*(_QWORD*)(*((_QWORD*)v3 + 2) + 24i64) = *((_QWORD*)v3 + 2);
			*(_QWORD*)v3 = off_140B67678;
			return 0i64;
		}
		qword_140C65990 = 0i64;
	}
	return 0i64;
}
// 140B67678: using guessed type __int64 (__fastcall *off_140B67678[3])();
// 140C65990: using guessed type __int64 qword_140C65990;
// 140C65998: using guessed type __int64 qword_140C65998;

